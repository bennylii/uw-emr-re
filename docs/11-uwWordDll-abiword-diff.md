# 11 — uwWordDll.dll 与 AbiWord 2.8.x 开源代码对比报告

> 对象：`福能portal20221010\Pis_3\uwWordDll.dll`（4.99MB，EMR 病历编辑器内核，VC6 debug 编译，链接时间 2013-11-08）
> 方法：导出表 MSVC 修饰名 → 类名提取（339 类 / 5977 类-函数对）→ 与 AbiWord `release-2.8.6` / `release-2.9.4` 源码全文比对
> 工具：`tools/compare_uwabiword.py`（可复跑）

## 1. 基版本判定：AbiWord 2.8.x

| 候选版本 | 类匹配 | 匹配率 | 决定性证据 |
|---------|--------|--------|-----------|
| **2.8.6**（2011-09 发布） | 323 / 339 | **95.3%** | `s_TemplateHandler`、`IE_Exp_MHTML_Sniffer` 仅 2.8.6 存在（2.9.4 移除）；**仅-2.8.6 匹配 2 个、仅-2.9.4 匹配 0 个** |
| 2.9.4（2013-06 发布） | 321 / 339 | 94.7% | — |

结论：厂商于 2013 年基于 **AbiWord 2.8.x**（含 2.8.6 特性，如 HTML 导出 `s_TemplateHandler`）定制编译。2.9.x 已删掉的特征类（MHTML Sniffer）在 DLL 中保留，印证非 2.9 基座。

## 2. 上游保留体系（323 个类与 2.8.6 一致）

| 前缀 | 上游体系 | 代表类 |
|------|---------|--------|
| `fp_/fl_` | 排版布局引擎 | fp_Run/fp_Line/fp_CellContainer/fp_TableContainer/fl_BlockLayout/fl_TableLayout |
| `PD_/PT_/px_/pf_` | 文档模型/PieceTable | PD_Document/PD_Style/PT_Doc/px_ChangeHistory/pf_Frag |
| `FV_/AV_` | 视图 | FV_View/AV_View/AP_Frame/AP_Win32Frame |
| `XAP_/EV_` | 应用框架/事件 | XAP_App/XAP_Frame/XAP_Prefs/EV_Menu_ActionSet |
| `GR_` | 图形渲染 | GR_Win32Graphics/GR_Transform/GR_Image |
| `UT_` | 基础工具 | UT_String/UT_UTF8String/UT_Vector/UT_ByteBuf/UT_XML/UT_UCS4String |
| `IE_` | 导入导出 | IE_Imp_RTF/IE_Imp_MsWord_97/IE_Exp_HTML/IE_Exp_MHTML |
| 其他 | 拼写/脚本 | xp_/fl_/fg_/fd_（域）/ft_/fb_/po_/pp_ |

即：**版式引擎、文档模型、导入导出、渲染、UI 框架全部原样沿用上游**，未重构。

## 3. 定制层（16 个上游不存在的类）

### 3.1 病历结构化域控件类（核心定制，病历元素）

| 类 | 推断用途 |
|----|---------|
| `fp_FieldCtrlRadiobuttonRun` | **单选按钮域**（病历选项如"性别：男○女○"） |
| `fp_FieldCtrlEditRun` | **文本编辑域**（填写项） |
| `fp_FieldHengXianRun` | **横线域**（下划线填空，如"姓名____"） |
| `fp_DeleteDataRun` | 删除标记域（病历涂改留痕） |

> 上游 `fd_Field` 仅支持书签/日期等简单域；上述 4 类是厂商扩展的**病历结构化元素运行体**，配合导出表的 `uwSetElemValue/uwGetElemValue/uwSetElemVisible/uwGetElemColor/uwSetElemColor` 系列实现元素级读写与显示控制。

### 3.2 定制容器/工具类（非上游 UT_ 体系）

| 类 | 推断 |
|----|------|
| `UT_Map` / `UT_NumberMap` / `UT_IntStrMap` / `UT_UTF8Hash` / `UT_GenericUTF8Hash` | 自实现哈希/映射容器（上游仅有 UT_GenericVector/UT_Vector） |
| `UT_Set` / `UT_RBTree` | 集合/红黑树（模板/XML 遍历用） |
| `UT_UCS4Stringbuf` / `UT_AbiObject` | 字符串缓冲/对象基类扩展 |

### 3.3 其他

`DictionaryListener`（拼写监听）、`IE_Imp_GZipAbiWord`（gzip 压缩病历交换格式导入器——配合 `Record_CompressData/Template_CompressData` 导出函数，疑似病历 XML 压缩存储）。

## 4. 定制业务 API（plain C 导出，全部不在上游）

| 组 | 函数 | 推断用途 |
|----|------|---------|
| `uw*`（215 个） | uwLoadCaseDocXml/uwLoadCaseDocData/uwSplitCaseDocdata/uwSaveWordData、uwGetOutHtmlString/uwJavaRecordDataHTML/uwRecordDataHTMLForBs/uwTemplateDataToHtml | **病历文档装载/序列化与 HTML 展示**（uwJava* → Java 客户端） |
| | uwGetElemValue/uwSetElemValue/uwSetElemVisible/uwDocAddElem/uwDocDelElem/uwDocReplaceElem/uwElement_formXML | **结构化元素（域控件）增删改查** |
| | uwGetChangeParas/uwGetChangeHisCount/uwGetRemoveRevisionEMRData/uwGetIllRecordChangePbrData/uwGetNotCompleteList | **病历质控/变更追踪**（缺项列表、修改记录） |
| | uwSetDocRunmode/uwSetDocReadonly/uwSetOverseeReadonlyProp/uwPrivateLock/uwViewLock | 只读/锁机制（病历锁定） |
| | uwGetSignPhoto/uwGetNewSignPhotoXml/uwGetRemoveSignPhotoData/uwDeleteSignedPhoto | **签名照片**（患者/医生手写签名） |
| | uwLoadTemplateXML/uwLoadParaRefContent/uwDynamicRefParaTemplate/uwGetWordDataFromParaTemplate | 模板/段落引用 |
| `Template_*`（14） | Template_GetElemList/Template_GetChoiceElemList/Template_GetRelationship/Template_ReplaceElemProp/Template_ReplaceHeaderAndFooter/Template_SetElemProp | 模板 XML 处理 |
| `Record_*`/`RecordData_*`（9） | Record_CompressData/RecordData_GetStandardXml/RecordData_GetElemList_ByFilter/RecordData_SetElem_ShowProp | 病历记录 XML |
| 其他 | CompareSimilValue/CompareMaxSimilcontent/DataGetChangeData/GetUwwordCompleTime | **病历相似度比对**（书写质控）/变更数据 |
| JNI | `_Java_jnixml_RecordXml_RecordGetXml@20` | Java 侧取病历 XML（移动端/Web 病历阅读） |


## 6. 定制层实现反推（静态调用图分析）

> 方法：解析 EAT 得导出函数代码区间 → 线性扫描 `call/jmp rel32`（含跳板展开）→ 目标映射回导出名/内部地址；`lea` 引用的 .rdata 字符串。工具 `tools/analyze_uw_custom.py`。

### 6.1 病历域控件类：上游 fd_Field 机制 + Win32 子控件自绘

| 类 | 关键方法 | 反推实现 |
|----|---------|---------|
| `fp_FieldCtrlRadiobuttonRun` | `_RadiobuttonWndProc` | **静态 Win32 窗口过程**（子控件 radio），WM_* → `uwSetCheck` |
| | `_draw` | `fp_Run::_getView` + `GR_Graphics::_tduX/_tduY`（坐标换算）+ `PD_Document::ChildWndInfo_Register`（**子窗口注册表**）+ `uwGetWin32AppInstance`（取 HINSTANCE）→ 自绘并登记 |
| | `uwSetCheck` | `XAP_App::getApp` → 组装 `UT_UTF8String` → **`fd_Field::setValue` + `fd_Field::updateFragobject`**（值写回上游域对象并刷新 XML 片段）→ `uwSetValue` → 重绘 |
| | `uwSetValue` | `UT_UCS4_strcpy/strncpy` + `fp_Run::getVisDirection/getGraphics/_getFont`（按视图字体刷新） |
| `fp_FieldCtrlEditRun` | `_draw` | GDI 自绘（外部 DC API） |
| | `calculateValue` | `UT_UTF8String` 组装 → `fd_Field::setValue` → **`fp_FieldRun::_setValue`**（上游基类写值） |
| `fp_FieldHengXianRun` | `_draw` | `GR_Graphics::tlu`（逻辑单位→像素）**画横线**；`calculateValue`/`needsFrequentUpdates` 与上游 fp_FieldRun 同构 |
| `fp_DeleteDataRun` | `hasLayoutProperties` | 仅覆盖 1 个虚方法——删除标记轻量类（涂改留痕） |

**结论**：域控件 = 上游 `fd_Field`（域对象）/`fp_FieldRun`（域运行体）的**纯扩展**——值仍存于上游 Field 对象（经 `updateFragobject` 同步到文档 XML），展示层用 Win32 子控件/自绘，未改动上游排版引擎。

### 6.2 自研容器：UT_RBTree 封装

`UT_Map::insert/find/erase` → 直接转调 **`UT_RBTree::insert/find_if/erase`**，`begin/end` 返回 `UT_RBTree::Iterator`；比较用函数指针谓词（`find_if(..., P6A_N00)`）。即自研 **红黑树 map**（STL 风格迭代器），`UT_Set/UT_NumberMap/UT_IntStrMap/UT_UTF8Hash/UT_GenericUTF8Hash` 同族（模板/XML 遍历、属性查找用）。

### 6.3 模板/记录 API：跳板 → 内部 XML 处理引擎

- plain 导出（Template_*/Record_*/uw 核心/Compare*）均为**小跳板**：`jmp` 到模块内部未导出函数区（RVA 0x005000~0x02xxxx 连续排布）
- 展开调用链证据：
  - 字符串流处理：`UT_Stringbuf::append/assign/clear`、`UT_UTF8Stringbuf::append` —— 文本流组装
  - 异常：`UT_Exception` 构造
  - 词典：`XAP_Dictionary::isWord` 多次出现（病历书写词条校验）
  - 全局字符串统计：**`UT_XML`(51) + `IE_Imp_XML`(28) + `startElement/endElement` + `IE_MailMerge_XML_Listener`(8)** —— 病历 XML 解析基于**上游 UT_XML SAX 框架** + 自定义 Listener（与上游 ie_imp_xml 同构）
  - HTML 导出：`font-size:`/`font-family:` CSS 常量（uwGetOutHtmlString/uwTemplateDataToHtml → 上游 IE_Exp_HTML 风格）
- 结论：模板/记录引擎 = **上游 UT_XML SAX + 自定义 Listener 的 XML 双向序列化层**，配合 Stringbuf 做缓冲，无独立 XML 库（全部自洽于上游 UT_XML）。

### 6.4 相似度比对（病历书写质控）

`CompareSimilValue`（跳板 → 0x0151F0 实现，约 0x400 字节 + 0x0151D0/0x0156AA 辅助）——小型文本比较算法（字符级），供 `CompareMaxSimilcontent` 组合使用；`DataGetChangeData`（→0x021C30，与 Template_SetElemProp 共享内部代码区）取变更记录供质控展示。

### 6.5 其余定制

- `IE_Imp_GZipAbiWord/Sniffer`：gzip 压缩病历交换格式导入器（配合 `Record_CompressData/Template_CompressData`，病历 XML gzip 存储/传输）
- `UT_UCS4*`/`UT_XML_*` plain 导出：上游 util 函数重新导出（供外部调用），实现与上游一致（编码转换走 `XAP_EncodingManager`）

### 6.6 整体判断

定制层**未脱离上游架构**：复用 fd_Field/UT_XML/UT_Stringbuf/XAP_* 全部上游设施，新增的只是——① 4 个域控件展示类（Win32 子控件）；② 模板/记录 XML 双向序列化 Listener（病历 XML 方言）；③ 自研红黑树容器；④ 相似度/变更质控算法。这些对应"病历结构化书写"业务需求，工程上可基于 2.8.6 源码按上述调用关系重建。
## 5. 结论与复用价值

1. **定制深度**：版式引擎 100% 上游原样；定制集中在**结构化病历元素（4 个域控件类）、病历 XML 业务层（215 uw* + 模板/记录 API）、质控（相似度/变更追踪）、签名照片**——这些是 HIS 病历厂商的核心知识产权层。
2. **病历 XML 可还原**：`uwGetOutHtmlString`/`uwTemplateDataToHtml`/`uwElement_formXML` 等的 XML 结构可由 `Pis_3\Pis\*.PIS` 模板文件（`EMRDoctorTemplate.PIS`/`LTPEMRTemplace_Ora_v3.PIS`）实证还原。
3. **后续切入点**：
   - 反汇编 `fp_FieldCtrlRadiobuttonRun::uw*` 相关 vtbl 可完整恢复病历元素协议
   - 用 2.8.6 源码做**差异重编译**：将上游源码按导出表补桩，可生成同名 DLL 作为病历编辑器替换实验（license 约束：GPL v2 传染性——厂商定制层若未开源则违反 GPL；此为合规风险提示，不构成操作建议）
