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

浏览器直接打开即可，仿真逆向出的定制层核心机制 + 电子病历标准落地：

- **病历模板 ×33**：覆盖 **WS 445《电子病历基本数据集》全部 17 部分**
  （445.1 概要 / 445.2 门诊 / 445.3 处方 / 445.4 检查检验 / 445.5 治疗处置 /
  445.6 助产 / 445.7 护理操作 / 445.8 护理评估 / 445.9 知情告知（6 子集：
  手术/麻醉/输血/特殊检查/病危/其他）/ 445.10 病案首页 / 445.11 中医首页 /
  445.12 入院 / 445.13 病程（含抢救/术前小结/死亡）/ 445.14 医嘱 / 445.15 出院 /
  445.16 转诊 / 445.17 医疗机构信息）+ 病案首页 2012 版（卫医政发〔2011〕84号）
  + 旧版首页 case1/case2（逆向 `d_emr_archive_case1/2` 拼音字段，诊断多转归、手术 10 行）
- **A4 双面打印**：首页/中医首页/旧版首页按原始 DW 布局重排，表格 flex 拉伸填满 A4，
  `@media print` 双面提示（页眉回填姓名/科室/病案号）
- **结构化域控件**（对应 `fp_FieldCtrlRadiobuttonRun/EditRun/HengXianRun`）：
  性别单选 ◉○、编辑域下划线填项、横线域、select 下拉（付费方式/婚姻/职业/省市区三级联动）
- **XML 双向绑定**（对应 `fd_Field::setValue + updateFragobject`）：
  右侧面板实时生成病历 XML（`<record><para><field name=.../></para></record>`），
  XML 导入回填 + 导出（`RecordData_GetStandardXml` 语义）
- **书写质控**（对应 `CompareSimilValue` + `uwGetNotCompleteList`）：
  n-gram 相似度比对（与 `src/uwemr/qc` 同算法）+ 缺项检查
- **首页运行质控**（逆向 `u_emr_archive_caseitem.udo` 规则 4-9 + 首页业务逻辑）：
  身份证↔出生日期（`of_check_card`）、出生↔年龄推算、入院<出院、离院方式↔转诊机构、
  手术/操作完整性、费用总计↔分项合计、抢救成功≤总次数、ICD-10 格式、诊断名↔编码成对、
  过敏标志↔药物、血型↔Rh、旧版转归必勾等 20+ 检查项
- **CA 签名**：仿真 `saf_rsasignwithstamp` 记录签名列表
- **导出**：XML / HTML（`uwGetOutHtmlString` 语义）

## 演示中的业务逆向来源（速览）

| 模板/机制 | 逆向来源 |
|-----------|---------|
| 病案首页 2012（A4 双面） | `d_emr_archive_case2012_print`（707 列）、`jbxx_zy`（295）、`drg_basj`（154）、`ssx`（276） |
| 中医首页 | `d_emr_archive_case2012_jbxx_zy` + WS 445.11 标准（OCR 归档 `docs/standards/`） |
| 旧版首页 case1/case2 | `d_emr_archive_case1`（259 列）/ `case2`（330 列）拼音字段 |
| 医嘱单 | `d_bq_yzcl_yzsr_cq/ls`（ZY_BQYZ 表，剂量单位/每日次数/次数列） |
| 护理/体温/出入量/导管/助产 | `ENR_SRD` / `ENR_TZJL` / `ENR_JZHL` 直证 |
| 首页质控规则 | `u_emr_archive_caseitem.udo`（规则 4-9）+ `dd_emr_archive_caseitem_checkrule` |
| WS 445 数据元 | Word COM 转换 .doc → GBK 提取（`HDSD00.xx.xxx` 行后第 3 行即数据元名） |

> 数据元覆盖说明：模板字段名与逆向 DW 列名对齐（如 `brjbqk_syxm`=病人姓名），
> 可直接溯源生产 DataWindow；质控规则语义复刻自 p-code，非臆造。

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
