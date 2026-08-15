#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""uwWordDll.dll 定制层实现反推：导出函数调用图 + 字符串引用分析

原理：
1. 解析 EAT(导出地址表) 得每个导出函数的 [start,end) 代码区间
2. 线性扫描每个定制函数字节: E8 rel32 = call 内部函数; FF 15/25 = call/jmp [IAT]
3. call 目标落在某导出函数区间 → 内部调用; 否则查 IAT → 外部 API
4. 8D 05/0D/15/1D + addr32 = lea reg,[字符串] → 映射到 .rdata 文本

用法: py -3 tools/analyze_uw_custom.py [--all] [--only <类前缀>]
"""
import sys, os, re, struct
sys.stdout.reconfigure(encoding='utf-8', errors='replace')

DLL = r'C:\cache\HIS\福能portal20221010\Pis_3\uwWordDll.dll'


class PE:
    def __init__(self, path):
        self.data = open(path, 'rb').read()
        self.pe = struct.unpack_from('<I', self.data, 0x3C)[0]
        self.nsects = struct.unpack_from('<H', self.data, self.pe + 6)[0]
        self.optsz = struct.unpack_from('<H', self.data, self.pe + 20)[0]
        sec = self.pe + 24 + self.optsz
        self.secs = []
        for i in range(self.nsects):
            vsz, va, rsz, ro = struct.unpack_from('<IIII', self.data, sec + i * 40 + 8)
            self.secs.append((max(vsz, rsz), ro, va))
        magic = struct.unpack_from('<H', self.data, self.pe + 24)[0]
        dd = self.pe + 24 + (96 if magic == 0x10B else 112)
        self.exp_rva, self.exp_sz = struct.unpack_from('<II', self.data, dd)
        self.imp_rva, self.imp_sz = struct.unpack_from('<II', self.data, dd + 8)

    def r2o(self, rva):
        for span, ro, va in self.secs:
            if va <= rva < va + span:
                return rva - va + ro
        return None

    def exports(self):
        """返回 [(name, rva)]"""
        eo = self.r2o(self.exp_rva)
        if eo is None:
            return []
        nfuncs, nnames, addr_rva, name_rva, ord_rva = struct.unpack_from('<IIIII', self.data, eo + 20)
        np_base = self.r2o(name_rva)
        ap_base = self.r2o(addr_rva)
        names, rvas = {}, []
        for i in range(nnames):
            np = self.r2o(struct.unpack_from('<I', self.data, np_base + i * 4)[0])
            if np:
                e = self.data.find(b'\x00', np)
                if e > np:
                    names[i] = self.data[np:e].decode('gbk', 'replace')
        for i in range(nfuncs):
            rvas.append(struct.unpack_from('<I', self.data, ap_base + i * 4)[0])
        out = []
        for i, rva in enumerate(rvas):
            out.append((names.get(i, 'ord_%d' % (i + 1)), rva))
        return out

    def imports(self):
        """返回 IAT 槽地址 → (dll, func)"""
        if not self.imp_rva:
            return {}
        po = self.r2o(self.imp_rva)
        iat = {}
        def r2o2(rva):
            for span, ro, va in self.secs:
                if va <= rva < va + span:
                    return rva - va + ro
            return None
        while po:
            oft, ts, fc, nrva, ft = struct.unpack_from('<IIIII', self.data, po)
            if nrva == 0:
                break
            np = r2o2(nrva)
            dll = ''
            if np:
                e = self.data.find(b'\x00', np)
                if e > 0:
                    dll = self.data[np:e].decode('ascii', 'replace')
            # 按 FirstThunk 遍历 IAT
            fp = r2o2(ft)
            if fp:
                i = 0
                while True:
                    val = struct.unpack_from('<I', self.data, fp + i * 4)[0]
                    if val == 0:
                        break
                    if not (val >> 31):
                        # 按名字导入: hint(2) + name
                        np2 = r2o2(val + 2)
                        if np2:
                            e = self.data.find(b'\x00', np2)
                            if e > 0:
                                fname = self.data[np2:e].decode('ascii', 'replace')
                                iat[ft + i * 4] = (dll, fname)
                    i += 1
            po += 20
        return iat


def demangle_class(name):
    m = re.match(r'\?(\w+)@(\w+)@@', name)
    return (m.group(2), m.group(1)) if m else (None, None)


def scan_calls(data, start, end, exp_map, iat_map, rng_map=None):
    """线性扫描函数区间，返回 (内部调用列表, 外部调用列表, 字符串引用列表)"""
    intern, extern, strings = [], [], []
    i = start
    while i + 5 <= end:
        b = data[i]
        if b == 0xE8 and i + 5 <= end:  # call rel32
            rel = struct.unpack_from('<i', data, i + 1)[0]
            tgt = i + 5 + rel
            if tgt in exp_map:
                intern.append(exp_map[tgt])
            elif rng_map:
                owner = rng_map(tgt)
                intern.append('%s @%06X' % (owner, tgt) if owner else '0x%08X' % tgt)
            else:
                extern.append('0x%08X' % tgt)
            i += 5
            continue
        if b == 0xE9 and i + 5 <= end:  # jmp rel32 (thunk/尾部调用)
            rel = struct.unpack_from('<i', data, i + 1)[0]
            tgt = i + 5 + rel
            if tgt in exp_map:
                intern.append(exp_map[tgt])
            elif rng_map:
                owner = rng_map(tgt)
                intern.append('%s @%06X' % (owner, tgt) if owner else '0x%08X' % tgt)
            else:
                extern.append('jmp 0x%08X' % tgt)
            i += 5
            continue
        if b == 0xFF and i + 6 <= end and data[i + 1] in (0x15, 0x25):  # call/jmp [addr]
            addr = struct.unpack_from('<I', data, i + 2)[0]
            if addr in iat_map:
                extern.append('%s!%s' % iat_map[addr])
            else:
                extern.append('[0x%08X]' % addr)
            i += 6
            continue
        if b == 0x8D and i + 6 <= end and data[i + 1] in (0x05, 0x0D, 0x15, 0x1D):  # lea reg,[addr]
            addr = struct.unpack_from('<I', data, i + 2)[0]
            s = pe_read_string(addr)
            if s:
                strings.append(s)
            i += 6
            continue
        i += 1
    return intern, extern, strings


_pe_global = None


def pe_read_string(rva):
    global _pe_global
    pe = _pe_global
    off = pe.r2o(rva)
    if off is None:
        return None
    d = pe.data[off:off + 200]
    # UTF-16LE
    if d[:2] == b'\xff\xfe':
        return None
    m = re.match(rb'^[\x20-\x7e\x80-\xff]{%d,}' % 4, d)
    if not m:
        m16 = re.match(rb'^(?:[\x20-\x7e\x80-\xff]\x00){4,}', d[:100])
        if m16:
            try:
                return 'U:' + m16.group().decode('utf-16le')
            except Exception:
                return None
        return None
    raw = m.group()
    try:
        s = raw.decode('gbk')
    except Exception:
        return None
    if any('\u4e00' <= c <= '\u9fff' for c in s) or re.match(r'^[A-Za-z_][\w .\-/]{5,}$', s):
        return s
    return None


def main():
    global _pe_global
    pe = _pe_global = PE(DLL)
    exps = pe.exports()
    exp_map = {rva: name for name, rva in exps}
    iat = pe.imports()
    # 排序得区间
    ordered = sorted((rva, name) for name, rva in exps)
    ranges = {}
    rng_map = {}
    for idx, (rva, name) in enumerate(ordered):
        end = ordered[idx + 1][0] if idx + 1 < len(ordered) else min(len(pe.data), rva + 0x1000)
        ranges[name] = (rva, end)
        rng_map.setdefault(rva, name)
    # rva → 所属导出函数名（区间包含）
    rng_owner = {}
    for idx, (rva, name) in enumerate(ordered):
        end = ordered[idx + 1][0] if idx + 1 < len(ordered) else rva + 0x1000
        rng_owner[(rva, end)] = name
    def find_owner(tgt):
        for (s, e), nm in rng_owner.items():
            if s <= tgt < e:
                return nm
        return None
    rng_map = find_owner
    only = None
    if '--only' in sys.argv:
        only = sys.argv[sys.argv.index('--only') + 1]
    show_all = '--all' in sys.argv

    # 定制函数: 不在 2.8.6 源码中的(类或 plain 名)
    custom = []
    for name, rva in exps:
        cls, fn = demangle_class(name)
        if cls in ('fp_FieldCtrlRadiobuttonRun', 'fp_FieldCtrlEditRun', 'fp_FieldHengXianRun',
                   'fp_DeleteDataRun', 'UT_Map', 'UT_NumberMap', 'UT_IntStrMap', 'UT_UTF8Hash',
                   'UT_GenericUTF8Hash', 'UT_Set', 'UT_RBTree', 'UT_UCS4Stringbuf', 'UT_AbiObject',
                   'DictionaryListener', 'IE_Imp_GZipAbiWord', 'IE_Imp_GZipAbiWord_Sniffer'):
            custom.append((name, rva))
        elif not name.startswith('?') and (name.startswith(('uw', 'Template_', 'Record', 'DataGet', 'Compare', 'GetUwword', 'LoadWord', 'NewDocument', 'RunDocument', 'UT_')) or name in ('LoadWord', 'NewDocument', 'RunDocument')):
            custom.append((name, rva))
    print('定制函数总数:', len(custom))
    print()
    groups = {}
    for name, rva in custom:
        cls, fn = demangle_class(name)
        key = cls or '(plain)'
        groups.setdefault(key, []).append((name, rva))
    for key in sorted(groups):
        if only and only.lower() not in key.lower():
            continue
        print('=' * 70)
        print('## %s (%d 方法)' % (key, len(groups[key])))
        print('=' * 70)
        for name, rva in sorted(groups[key]):
            start = rva
            end = ranges.get(name, (rva, rva + 0x400))[1]
            intern, extern, strings = scan_calls(pe.data, start, end, exp_map, iat)
            short = name if len(name) <= 70 else name[:67] + '...'
            print('  %-72s RVA=%06X' % (short, rva))
            if intern:
                # 去重保序
                seen = set()
                uniq = [x for x in intern if not (x in seen or seen.add(x))]
                print('     -> 内部调用(%d): %s' % (len(uniq), ', '.join(uniq[:14])))
            if extern:
                seen = set()
                uniq = [x for x in extern if not (x in seen or seen.add(x))]
                print('     -> 外部API(%d): %s' % (len(uniq), ', '.join(uniq[:10])))
            if strings:
                seen = set()
                uniq = [x for x in strings if not (x in seen or seen.add(x))]
                print('     -> 字符串(%d): %s' % (len(uniq), ' | '.join(uniq[:8])))


if __name__ == '__main__':
    main()
