#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""生成 uwWordDll.dll 导出接口清单头文件（供第三方互操作参考）

输出: docs/uwWordDll_api.h
说明: 仅含函数/类名清单（互操作事实）；签名经 MSVC 修饰名部分还原，未知处留 TODO。
"""
import sys, re
from collections import defaultdict
sys.stdout.reconfigure(encoding='utf-8', errors='replace')
sys.path.insert(0, 'tools')
import analyze_uw_custom as A

pe = A.PE(A.DLL)
exps = pe.exports()

# MSVC 修饰名解码（简化版，支持常用类型）
TYPE_MAP = {
    'X': 'void', 'V': 'void', 'I': 'unsigned int', 'H': 'unsigned long',
    'J': 'long', 'K': 'unsigned __int64', 'M': 'float', 'N': 'double',
    '_N': 'bool', 'D': 'char', 'E': 'unsigned char', 'F': 'short',
    'G': 'unsigned short', 'PAD': 'char*', 'PBD': 'const char*',
    'PAH': 'unsigned long*', 'PAI': 'unsigned int*', 'PAV': 'void*',
}
CALL = {'QAE': 'public', 'QBE': 'public const', 'UAE': 'virtual public',
        'UBE': 'virtual public const', 'SAE': 'static public', 'IAE': 'protected',
        'CAE': 'private'}


def parse_ret(core):
    """从核心串头解析返回类型（简化）"""
    if core.startswith('XZ'):
        return 'void', core[2:]
    if core.startswith('_N'):
        return 'bool', core[2:]
    return '/* 未知 */', core


def fmt_param(t):
    t = t.replace('P', '')
    return TYPE_MAP.get(t, '/* %s */' % t)


def build():
    plain = []
    classes = defaultdict(list)
    for name, rva in exps:
        if not name.startswith('?'):
            plain.append(name)
            continue
        m = re.match(r'\?(\w+)@(\w+)@@', name)
        if not m:
            continue
        fn, cls = m.group(1), m.group(2)
        core = name[m.end():]
        # 找调用约定/修饰
        cc = None
        for k in sorted(CALL, key=len, reverse=True):
            if core.startswith(k):
                cc = CALL[k]
                core = core[len(k):]
                break
        if cc is None:
            cc = 'public'
        ret, rest = parse_ret(core)
        classes[cls].append((fn, cc, ret, name))

    lines = []
    lines.append('/*')
    lines.append(' * uwWordDll.dll 导出接口清单（EMR 病历编辑器内核，AbiWord 2.8.x 定制版）')
    lines.append(' *')
    lines.append(' * 来源: 福能portal20221010\\Pis_3\\uwWordDll.dll 导出表 (8117 导出)')
    lines.append(' * 性质: 互操作接口事实清单（接口名/类名），供第三方研究参考')
    lines.append(' * 注意: 该 DLL 基于 GPL v2 的 AbiWord 2.8.x；本文件不含任何二进制/源码复制')
    lines.append(' * 签名: MSVC 修饰名部分还原，未知参数用 /* TODO */ 标注')
    lines.append(' */')
    lines.append('')
    lines.append('#ifndef UWWORDDLL_API_H')
    lines.append('#define UWWORDDLL_API_H')
    lines.append('')
    lines.append('#pragma once')
    lines.append('')

    # A. plain C 接口
    lines.append('/* ========== A. C 风格导出（业务入口，调用约定 stdcall） ========== */')
    lines.append('extern "C" {')
    for n in sorted(plain):
        lines.append('    /* %s */' % n)
        lines.append('    void* %s(void* /* TODO 参数 */);' % n)
    lines.append('}')
    lines.append('')

    # B. 类声明
    lines.append('/* ========== B. C++ 类与方法（AbiWord 2.8.x 派生类体系） ========== */')
    lines.append('/* 类名 = 上游 AbiWord 2.8.x 类或厂商定制类（见 docs/11 定制层清单） */')
    for cls in sorted(classes):
        lines.append('')
        lines.append('/* ---- %s (%d 方法%s) ---- */' % (cls, len(classes[cls]),
                     ', 定制类' if cls in ('fp_FieldCtrlRadiobuttonRun', 'fp_FieldCtrlEditRun',
                     'fp_FieldHengXianRun', 'fp_DeleteDataRun', 'UT_Map', 'UT_Set', 'UT_RBTree',
                     'DictionaryListener', 'IE_Imp_GZipAbiWord') else ''))
        lines.append('class %s {' % cls)
        lines.append('public:')
        for fn, cc, ret, name in sorted(classes[cls]):
            lines.append('    %s %s %s(/* TODO 参数 */);  // %s' % (cc, ret, fn, name[:60]))
        lines.append('};')
    lines.append('')
    lines.append('#endif // UWWORDDLL_API_H')
    return '\n'.join(lines)


def main():
    h = build()
    out = r'C:\cache\HIS\docs\uwWordDll_api.h'
    open(out, 'w', encoding='utf-8').write(h)
    print('written:', out, len(h.splitlines()), 'lines')


if __name__ == '__main__':
    main()
