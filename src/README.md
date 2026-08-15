# uwemr — EMR 病历编辑器定制层（clean-room 研究实现）

> 本目录为 `docs/11` 对比报告 §6 定制层的**研究性重建骨架**：
> 仅依据 ①DLL 导出接口签名（互操作事实）②调用图观察 ③上游 GPL 源码重建，
> **不含**任何厂商二进制或反汇编代码复制。
>
> 状态：**已编译验证**（MinGW-w64 g++ 16.2.0，2026-08）
> - `util/` 红黑树容器：完整编译 + 单元测试 **ALL TESTS PASSED**
>   （插入/查找/删除/重复键/中序有序/200 键随机操作/谓词 find_if/UT_Set）
> - `qc/` 相似度算法：独立测试通过（相同 1.0 / 差一字 0.60 / 半同 0.33 / 追加 0.68）
> - `fields/xml/api`：经 `test/stubs` 轻量桩头 `-fsyntax-only` 全部通过
>   （依赖 AbiWord 2.8.6 头，完整构建需接入其构建树）

## 目录结构

```
src/uwemr/
├── util/    UT_RBTree(.h/.cpp 完整) + UT_Map/UT_Set（自研红黑树容器）
├── fields/  fp_FieldCtrlRadiobuttonRun / fp_FieldCtrlEditRun /
│            fp_FieldHengXianRun（病历域控件，fd_Field 机制 + Win32 子控件）
├── xml/     病历 XML 序列化层（UT_XML SAX + Listener，骨架）
├── qc/      书写相似度质控（CompareSimilValue 研究算法）
├── api/     C 业务入口（Template_*/Record_*/Compare*/LoadWord 骨架）
└── ext/     （预留：FV_View/PD_Document 上 uw* 方法的扩展声明）
```

## 与 DLL 的对应关系（依据 docs/11 §6）

| 模块 | DLL 证据 | 本实现 |
|------|---------|--------|
| UT_RBTree/UT_Map/UT_Set | 调用图: insert→UT_RBTree::insert, find_if 谓词 | `util/` 完整 |
| fp_FieldCtrlRadiobuttonRun | `_RadiobuttonWndProc`/`ChildWndInfo_Register`/`fd_Field::setValue`+`updateFragobject`/`GR_Graphics::_tduX` | `fields/` 核心方法 |
| fp_FieldCtrlEditRun | `calculateValue`→`fp_FieldRun::_setValue` | `fields/` 核心方法 |
| fp_FieldHengXianRun | `_draw`→`GR_Graphics::tlu` 画线 | `fields/` 核心方法 |
| XML 引擎 | UT_XML SAX + Stringbuf + XAP_Dictionary::isWord | `xml/` 骨架 |
| CompareSimilValue | 0x0151F0 短函数区 | `qc/` 研究算法（自拟 n-gram） |

## 构建

依赖 AbiWord 2.8.6 头文件与库（`https://github.com/abiword/abiword` tag `release-2.8.6`）。
建议以 AbiWord 构建树为基础添加本目录：

```cmake
# 在 AbiWord 2.8.6 工程中:
add_subdirectory(uwemr)          # 本目录
```

`util/` 子模块无外部依赖，可单独编译：
```
g++ -std=c++11 -static -I uwemr/util test/test_rbtree.cpp uwemr/util/UT_RBTree.cpp -o test_rbtree
```

## 编译验证记录（2026-08，g++ 16.2.0）

| 模块 | 验证方式 | 结果 |
|------|---------|------|
| util/ | 完整编译 + 单测 `test/test_rbtree.cpp` | ✅ ALL TESTS PASSED |
| qc/ | 独立测试 `test/test_similarity.cpp`（std 同构版） | ✅ 通过 |
| fields/ xml/ api/ | `test/stubs/` 桩头 + `-fsyntax-only` | ✅ 5/5 通过 |

验证中修复的源码问题：`_syncFromField` 缺头文件声明（EditRun）；`UT_UCS4String` 临时对象不能转指针（Radiobutton 值比较改静态常量）；`HWND→UT_uint32` 64 位截断（加 `UT_uintptr_t` 中转，DLL 原为 32 位）。

## 未实现（后续增量）

- uw* 全量方法（215+）：uwLoadCaseDocXml/uwSaveWordData/uwGetOutHtmlString 等
  需结合 `.PIS` 模板 XML 方言还原（见 docs/11 §5）
- `fp_DeleteDataRun`、`IE_Imp_GZipAbiWord`（gzip 用 zlib 即可补全）
- FV_View/PD_Document 的 uw* 扩展方法（ext/ 预留）
- 签名照片（uwGetSignPhoto 等，位图嵌入 XML 的 base64 处理）

## License

GPL v2（与上游 AbiWord 2.8.x 一致）。研究用途，商用前请自行评估许可。
