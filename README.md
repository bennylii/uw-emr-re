# uw-emr-re — EMR 病历编辑器逆向研究（AbiWord 2.8.x 定制版）

> **纯技术研究项目**。对医院 HIS 系统中闭源 EMR 病历编辑器内核 `uwWordDll.dll`
> 做静态逆向分析，并与上游开源项目 **AbiWord 2.8.x** 逐类比对，还原其定制层架构。

## 研究结论速览

| 项 | 结论 |
|----|------|
| 基座 | **AbiWord 2.8.x**（339 个导出类中 323 个与 2.8.6 一致，95.3%；2.9.4 仅 94.7%） |
| 上游保留 | 版式引擎（fp_/fl_）、文档模型（PD_/pt_）、视图（FV_）、UI 框架（XAP_）、图形（GR_）、导入导出（IE_）全部原样 |
| 定制类 | `fp_FieldCtrlRadiobuttonRun`（单选域）、`fp_FieldCtrlEditRun`（编辑域）、`fp_FieldHengXianRun`（横线域）、`fp_DeleteDataRun`（删除标记）、`UT_Map/UT_Set/UT_RBTree`（自研红黑树容器）、`IE_Imp_GZipAbiWord`（gzip 病历交换格式） |
| 定制 API | 215+ 个 `uw*` 方法（病历装载/序列化/元素读写/质控/签名照片/锁定）+ `Template_*/Record_*` XML API + `CompareSimilValue`（书写相似度质控）+ JNI（Java 取病历 XML） |
| 实现机制 | 域控件 = 上游 `fd_Field` 持久化 + Win32 子控件自绘（`ChildWndInfo_Register`）；模板/记录 = 上游 `UT_XML` SAX + 自定义 Listener；值变更经 `updateFragobject` 同步回文档 XML |

## 仓库内容

```
├── README.md
├── LICENSE                     # GPL v2 声明（上游 AbiWord 许可）
├── demo/
│   └── emr_editor_demo.html    # 病历编辑器交互演示（双击浏览器打开）
├── docs/
│   ├── uwWordDll-abiword-diff.md   # 定制层对比报告（版本判定/定制类/API 清单/实现反推）
│   └── uwWordDll_api.h             # 8117 导出接口清单（互操作事实）
├── src/uwemr/                  # 定制层 clean-room 源码（已编译验证）
└── tools/
    ├── compare_uwabiword.py        # 导出类名 vs 上游源码匹配率对比
    ├── analyze_uw_custom.py        # 定制函数调用图/跳板展开/字符串引用分析
    ├── scan_exe_pe.py              # PE 框架指纹（通用工具）
    └── gen_uw_header.py            # 导出表 → C 头文件生成
```

## 交互演示（demo/emr_editor_demo.html）

浏览器直接打开即可，仿真逆向出的定制层核心机制：

- **病历模板**：入院记录/病程记录/手术记录三套，AbiWord 风格白纸排版
- **结构化域控件**（对应 `fp_FieldCtrlRadiobuttonRun/EditRun/HengXianRun`）：
  性别单选 ◉○、编辑域下划线填项、横线域
- **XML 双向绑定**（对应 `fd_Field::setValue + updateFragobject`）：
  右侧面板实时生成病历 XML（`<record><para><field name=.../></para></record>`）
- **书写质控**（对应 `CompareSimilValue` + `uwGetNotCompleteList`）：
  n-gram 相似度比对（与 `src/uwemr/qc` 同算法）+ 缺项检查
- **导出**：XML（`RecordData_GetStandardXml` 语义）/ HTML（`uwGetOutHtmlString` 语义）

## 合规声明（重要）

1. **不包含**任何闭源二进制、反汇编代码复制或厂商数据文件
2. `docs/uwWordDll_api.h` 仅为导出符号清单（接口互操作事实，不含实现）
3. **License：GPL v2**（本仓库整体）——原因：`src/uwemr` 为上游
   **AbiWord 2.8.x（GPL v2）的衍生代码**（继承 fp_FieldRun/fd_Field、使用
   UT_XML 等 GPL 类），GPL v2 §2(c) 要求衍生作品以 GPL 发布，**不可改为
   MIT/闭源**。上游：https://github.com/abiword/abiword
4. 原始厂商 DLL 的定制层是否遵守 GPL 属其自身合规问题，与本仓库无关
5. 本仓库内容用于学习与研究；用于任何生产/商业用途前请自行评估许可与合规

## 复现方法

1. 下载 AbiWord 2.8.6 源码：`https://github.com/abiword/abiword/archive/refs/tags/release-2.8.6.zip`
2. 从目标系统取得 `uwWordDll.dll`（此处不提供）
3. `py -3 tools/compare_uwabiword.py`（需修改 DLL 路径常量）→ 版本判定
4. `py -3 tools/analyze_uw_custom.py --only <类名>` → 定制函数调用图
5. `py -3 tools/gen_uw_header.py` → 重新生成接口清单

## 相关分析

- 架构总览（HIS 全景）见 `docs/00-system-architecture.md`（本发布包省略，详见母仓库）
- 病历 XML 方言可从 `.PIS` 模板文件实证还原（见对比报告 §5）

---
本项目为技术研究产物；EMR 病历引擎的版权与许可归其权利人所有。
