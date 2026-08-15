#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""uwWordDll.dll 导出类名 vs AbiWord 2.8.6/2.9.4 源码匹配率对比"""
import sys, os, re, struct
sys.stdout.reconfigure(encoding='utf-8', errors='replace')

DLL = r'C:\cache\HIS\福能portal20221010\Pis_3\uwWordDll.dll'
SRCS = {
    '2.8.6': r'C:\Users\bennyli\AppData\Local\Temp\opencode\abiword_release-2.8.6',
    '2.9.4': r'C:\Users\bennyli\AppData\Local\Temp\opencode\abiword_release-2.9.4',
}

def exports(path):
    data = open(path, 'rb').read()
    pe = struct.unpack_from('<I', data, 0x3C)[0]
    nsects = struct.unpack_from('<H', data, pe + 6)[0]
    optsz = struct.unpack_from('<H', data, pe + 20)[0]
    sec = pe + 24 + optsz
    secs = []
    for i in range(nsects):
        vsz, va, rsz, ro = struct.unpack_from('<IIII', data, sec + i * 40 + 8)
        secs.append((max(vsz, rsz), ro, va))
    magic = struct.unpack_from('<H', data, pe + 24)[0]
    dd = pe + 24 + (96 if magic == 0x10B else 112)
    erva, esz = struct.unpack_from('<II', data, dd)
    def r2o(rva):
        for span, ro, va in secs:
            if va <= rva < va + span:
                return rva - va + ro
        return None
    eo = r2o(erva)
    if eo is None:
        return []
    nfuncs, nnames, addr_rva, name_rva, ord_rva = struct.unpack_from('<IIIII', data, eo + 20)
    names = []
    np_base = r2o(name_rva)
    for i in range(nnames):
        np = r2o(struct.unpack_from('<I', data, np_base + i * 4)[0])
        if np:
            e = data.find(b'\x00', np)
            if e > np:
                names.append(data[np:e].decode('ascii', 'replace'))
    return names

def extract_classes(names):
    """从 MSVC 修饰名提取 (类名, 函数名)"""
    pairs = set()
    for n in names:
        m = re.match(r'\?(\w+)@(\w+)@@', n)
        if m:
            pairs.add((m.group(2), m.group(1)))
    return pairs

def index_sources(base):
    """收集源码里出现的类标识符集合"""
    classes = set()
    count = 0
    for root, dirs, files in os.walk(base):
        for fn in files:
            if not fn.endswith(('.h', '.cpp', '.hpp', '.cxx')):
                continue
            p = os.path.join(root, fn)
            try:
                t = open(p, encoding='utf-8', errors='ignore').read()
            except Exception:
                continue
            count += 1
            for m in re.finditer(r'\b([A-Za-z_]\w{2,60})\b', t):
                classes.add(m.group(1))
    return classes, count

def main():
    names = exports(DLL)
    print('导出函数总数:', len(names))
    pairs = extract_classes(names)
    classes = set(c for c, f in pairs)
    print('导出类数(去重):', len(classes))
    print('类-函数对:', len(pairs))
    print()
    for ver, base in SRCS.items():
        classes_src, fcount = index_sources(base)
        hit = [c for c in classes if c in classes_src]
        miss = [c for c in classes if c not in classes_src]
        # 无类名（plain C 导出）
        plain = [n for n in names if not n.startswith('?')]
        print('=== AbiWord %s ===' % ver)
        print('  索引源码文件数:', fcount)
        print('  类匹配: %d / %d (%.1f%%)' % (len(hit), len(classes), 100.0 * len(hit) / len(classes)))
        print('  未匹配类(%d): %s' % (len(miss), ', '.join(sorted(miss)[:60])))
        print()

if __name__ == '__main__':
    main()
