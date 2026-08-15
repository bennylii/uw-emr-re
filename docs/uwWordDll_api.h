/*
 * uwWordDll.dll 导出接口清单（EMR 病历编辑器内核，AbiWord 2.8.x 定制版）
 *
 * 来源: 福能portal20221010\Pis_3\uwWordDll.dll 导出表 (8117 导出)
 * 性质: 互操作接口事实清单（接口名/类名），供第三方研究参考
 * 注意: 该 DLL 基于 GPL v2 的 AbiWord 2.8.x；本文件不含任何二进制/源码复制
 * 签名: MSVC 修饰名部分还原，未知参数用 /* TODO */ 标注
 */

#ifndef UWWORDDLL_API_H
#define UWWORDDLL_API_H

#pragma once

/* ========== A. C 风格导出（业务入口，调用约定 stdcall） ========== */
extern "C" {
    /* CompareMaxSimilcontent */
    void* CompareMaxSimilcontent(void* /* TODO 参数 */);
    /* CompareSimilValue */
    void* CompareSimilValue(void* /* TODO 参数 */);
    /* DataGetChangeData */
    void* DataGetChangeData(void* /* TODO 参数 */);
    /* GetUwwordCompleTime */
    void* GetUwwordCompleTime(void* /* TODO 参数 */);
    /* LoadWord */
    void* LoadWord(void* /* TODO 参数 */);
    /* NewDocument */
    void* NewDocument(void* /* TODO 参数 */);
    /* RecordData_GetElemList_ByFilter */
    void* RecordData_GetElemList_ByFilter(void* /* TODO 参数 */);
    /* RecordData_GetMedicalSymbol_ByFilter */
    void* RecordData_GetMedicalSymbol_ByFilter(void* /* TODO 参数 */);
    /* RecordData_GetStandardXml */
    void* RecordData_GetStandardXml(void* /* TODO 参数 */);
    /* RecordData_SetElem_ShowProp */
    void* RecordData_SetElem_ShowProp(void* /* TODO 参数 */);
    /* Record_CompressData */
    void* Record_CompressData(void* /* TODO 参数 */);
    /* Record_ReplaceElemFontSize */
    void* Record_ReplaceElemFontSize(void* /* TODO 参数 */);
    /* Record_ReplaceElemProp */
    void* Record_ReplaceElemProp(void* /* TODO 参数 */);
    /* RunDocument */
    void* RunDocument(void* /* TODO 参数 */);
    /* Template_CompressData */
    void* Template_CompressData(void* /* TODO 参数 */);
    /* Template_GetChoiceElemList */
    void* Template_GetChoiceElemList(void* /* TODO 参数 */);
    /* Template_GetElemList */
    void* Template_GetElemList(void* /* TODO 参数 */);
    /* Template_GetElemList_ByFilter */
    void* Template_GetElemList_ByFilter(void* /* TODO 参数 */);
    /* Template_GetParaKey */
    void* Template_GetParaKey(void* /* TODO 参数 */);
    /* Template_GetRelationship */
    void* Template_GetRelationship(void* /* TODO 参数 */);
    /* Template_RemoveRulerData */
    void* Template_RemoveRulerData(void* /* TODO 参数 */);
    /* Template_ReplaceColorData */
    void* Template_ReplaceColorData(void* /* TODO 参数 */);
    /* Template_ReplaceElemFontSize */
    void* Template_ReplaceElemFontSize(void* /* TODO 参数 */);
    /* Template_ReplaceElemProp */
    void* Template_ReplaceElemProp(void* /* TODO 参数 */);
    /* Template_ReplaceFontData */
    void* Template_ReplaceFontData(void* /* TODO 参数 */);
    /* Template_ReplaceHeaderAndFooter */
    void* Template_ReplaceHeaderAndFooter(void* /* TODO 参数 */);
    /* Template_ReplaceOnePara */
    void* Template_ReplaceOnePara(void* /* TODO 参数 */);
    /* Template_SetElemProp */
    void* Template_SetElemProp(void* /* TODO 参数 */);
    /* UT_UCS2_strlen */
    void* UT_UCS2_strlen(void* /* TODO 参数 */);
    /* UT_UCS4_char_to_utf8 */
    void* UT_UCS4_char_to_utf8(void* /* TODO 参数 */);
    /* UT_UCS4_cloneString */
    void* UT_UCS4_cloneString(void* /* TODO 参数 */);
    /* UT_UCS4_cloneString_char */
    void* UT_UCS4_cloneString_char(void* /* TODO 参数 */);
    /* UT_UCS4_isSentenceSeparator */
    void* UT_UCS4_isSentenceSeparator(void* /* TODO 参数 */);
    /* UT_UCS4_isalpha */
    void* UT_UCS4_isalpha(void* /* TODO 参数 */);
    /* UT_UCS4_islower */
    void* UT_UCS4_islower(void* /* TODO 参数 */);
    /* UT_UCS4_isspace */
    void* UT_UCS4_isspace(void* /* TODO 参数 */);
    /* UT_UCS4_isupper */
    void* UT_UCS4_isupper(void* /* TODO 参数 */);
    /* UT_UCS4_strcmp */
    void* UT_UCS4_strcmp(void* /* TODO 参数 */);
    /* UT_UCS4_strcpy */
    void* UT_UCS4_strcpy(void* /* TODO 参数 */);
    /* UT_UCS4_strcpy_char */
    void* UT_UCS4_strcpy_char(void* /* TODO 参数 */);
    /* UT_UCS4_strcpy_to_char */
    void* UT_UCS4_strcpy_to_char(void* /* TODO 参数 */);
    /* UT_UCS4_strcpy_utf8_char */
    void* UT_UCS4_strcpy_utf8_char(void* /* TODO 参数 */);
    /* UT_UCS4_stristr */
    void* UT_UCS4_stristr(void* /* TODO 参数 */);
    /* UT_UCS4_strlen */
    void* UT_UCS4_strlen(void* /* TODO 参数 */);
    /* UT_UCS4_strncpy */
    void* UT_UCS4_strncpy(void* /* TODO 参数 */);
    /* UT_UCS4_strncpy_char */
    void* UT_UCS4_strncpy_char(void* /* TODO 参数 */);
    /* UT_UCS4_strncpy_to_char */
    void* UT_UCS4_strncpy_to_char(void* /* TODO 参数 */);
    /* UT_UCS4_strnrev */
    void* UT_UCS4_strnrev(void* /* TODO 参数 */);
    /* UT_UCS4_strstr */
    void* UT_UCS4_strstr(void* /* TODO 参数 */);
    /* UT_UCS4_tolower */
    void* UT_UCS4_tolower(void* /* TODO 参数 */);
    /* UT_UCS4_toupper */
    void* UT_UCS4_toupper(void* /* TODO 参数 */);
    /* UT_UCS4_utf8_to_char */
    void* UT_UCS4_utf8_to_char(void* /* TODO 参数 */);
    /* UT_UTF8_to_string */
    void* UT_UTF8_to_string(void* /* TODO 参数 */);
    /* UT_XML_cloneList */
    void* UT_XML_cloneList(void* /* TODO 参数 */);
    /* UT_XML_cloneNoAmpersands */
    void* UT_XML_cloneNoAmpersands(void* /* TODO 参数 */);
    /* UT_XML_cloneString */
    void* UT_XML_cloneString(void* /* TODO 参数 */);
    /* UT_XML_replaceList */
    void* UT_XML_replaceList(void* /* TODO 参数 */);
    /* UT_XML_strcmp */
    void* UT_XML_strcmp(void* /* TODO 参数 */);
    /* UT_XML_stricmp */
    void* UT_XML_stricmp(void* /* TODO 参数 */);
    /* UT_XML_strlen */
    void* UT_XML_strlen(void* /* TODO 参数 */);
    /* UT_XML_strncpy */
    void* UT_XML_strncpy(void* /* TODO 参数 */);
    /* UT_XML_strnicmp */
    void* UT_XML_strnicmp(void* /* TODO 参数 */);
    /* UT_XML_transNoAmpersands */
    void* UT_XML_transNoAmpersands(void* /* TODO 参数 */);
    /* UT_bidiGetCharType */
    void* UT_bidiGetCharType(void* /* TODO 参数 */);
    /* UT_bidiGetMirrorChar */
    void* UT_bidiGetMirrorChar(void* /* TODO 参数 */);
    /* UT_bidiMapLog2Vis */
    void* UT_bidiMapLog2Vis(void* /* TODO 参数 */);
    /* UT_bidiReorderString */
    void* UT_bidiReorderString(void* /* TODO 参数 */);
    /* UT_catPathname */
    void* UT_catPathname(void* /* TODO 参数 */);
    /* UT_cloneString */
    void* UT_cloneString(void* /* TODO 参数 */);
    /* UT_convertDimToInches */
    void* UT_convertDimToInches(void* /* TODO 参数 */);
    /* UT_convertDimensionless */
    void* UT_convertDimensionless(void* /* TODO 参数 */);
    /* UT_convertDimensions */
    void* UT_convertDimensions(void* /* TODO 参数 */);
    /* UT_convertInchesToDimension */
    void* UT_convertInchesToDimension(void* /* TODO 参数 */);
    /* UT_convertInchesToDimensionString */
    void* UT_convertInchesToDimensionString(void* /* TODO 参数 */);
    /* UT_convertSizeToLayoutUnits */
    void* UT_convertSizeToLayoutUnits(void* /* TODO 参数 */);
    /* UT_convertToDimension */
    void* UT_convertToDimension(void* /* TODO 参数 */);
    /* UT_convertToDimensionlessString */
    void* UT_convertToDimensionlessString(void* /* TODO 参数 */);
    /* UT_convertToInches */
    void* UT_convertToInches(void* /* TODO 参数 */);
    /* UT_convertToLogicalUnits */
    void* UT_convertToLogicalUnits(void* /* TODO 参数 */);
    /* UT_convertToPoints */
    void* UT_convertToPoints(void* /* TODO 参数 */);
    /* UT_decodeUTF8char */
    void* UT_decodeUTF8char(void* /* TODO 参数 */);
    /* UT_decodeUTF8string */
    void* UT_decodeUTF8string(void* /* TODO 参数 */);
    /* UT_determineDimension */
    void* UT_determineDimension(void* /* TODO 参数 */);
    /* UT_dimensionName */
    void* UT_dimensionName(void* /* TODO 参数 */);
    /* UT_encodeUTF8char */
    void* UT_encodeUTF8char(void* /* TODO 参数 */);
    /* UT_formatDimensionString */
    void* UT_formatDimensionString(void* /* TODO 参数 */);
    /* UT_formatDimensionedValue */
    void* UT_formatDimensionedValue(void* /* TODO 参数 */);
    /* UT_getDimensionPrecisicion */
    void* UT_getDimensionPrecisicion(void* /* TODO 参数 */);
    /* UT_getDimensionResolution */
    void* UT_getDimensionResolution(void* /* TODO 参数 */);
    /* UT_hasDimensionComponent */
    void* UT_hasDimensionComponent(void* /* TODO 参数 */);
    /* UT_inchesFromPaperUnits */
    void* UT_inchesFromPaperUnits(void* /* TODO 参数 */);
    /* UT_incrementDimString */
    void* UT_incrementDimString(void* /* TODO 参数 */);
    /* UT_isSmartQuotableCharacter */
    void* UT_isSmartQuotableCharacter(void* /* TODO 参数 */);
    /* UT_isSmartQuotedCharacter */
    void* UT_isSmartQuotedCharacter(void* /* TODO 参数 */);
    /* UT_isUrl */
    void* UT_isUrl(void* /* TODO 参数 */);
    /* UT_isValidDimensionString */
    void* UT_isValidDimensionString(void* /* TODO 参数 */);
    /* UT_isValidUTF8string */
    void* UT_isValidUTF8string(void* /* TODO 参数 */);
    /* UT_isValidXML */
    void* UT_isValidXML(void* /* TODO 参数 */);
    /* UT_lowerString */
    void* UT_lowerString(void* /* TODO 参数 */);
    /* UT_multiplyDimString */
    void* UT_multiplyDimString(void* /* TODO 参数 */);
    /* UT_paperUnits */
    void* UT_paperUnits(void* /* TODO 参数 */);
    /* UT_paperUnitsFromInches */
    void* UT_paperUnitsFromInches(void* /* TODO 参数 */);
    /* UT_pointerArrayLength */
    void* UT_pointerArrayLength(void* /* TODO 参数 */);
    /* UT_reformatDimensionString */
    void* UT_reformatDimensionString(void* /* TODO 参数 */);
    /* UT_replaceString */
    void* UT_replaceString(void* /* TODO 参数 */);
    /* UT_strdup */
    void* UT_strdup(void* /* TODO 参数 */);
    /* UT_stricmp */
    void* UT_stricmp(void* /* TODO 参数 */);
    /* UT_strnicmp */
    void* UT_strnicmp(void* /* TODO 参数 */);
    /* UT_strnlen */
    void* UT_strnlen(void* /* TODO 参数 */);
    /* UT_tmpnam */
    void* UT_tmpnam(void* /* TODO 参数 */);
    /* UT_unlink */
    void* UT_unlink(void* /* TODO 参数 */);
    /* UT_upperString */
    void* UT_upperString(void* /* TODO 参数 */);
    /* UT_validXML */
    void* UT_validXML(void* /* TODO 参数 */);
    /* _Java_jnixml_RecordXml_RecordGetXml@20 */
    void* _Java_jnixml_RecordXml_RecordGetXml@20(void* /* TODO 参数 */);
    /* std_size_string */
    void* std_size_string(void* /* TODO 参数 */);
    /* unichar_to_utf8 */
    void* unichar_to_utf8(void* /* TODO 参数 */);
}

/* ========== B. C++ 类与方法（AbiWord 2.8.x 派生类体系） ========== */
/* 类名 = 上游 AbiWord 2.8.x 类或厂商定制类（见 docs/11 定制层清单） */

/* ---- AD_Document (76 方法) ---- */
class AD_Document {
public:
    public /* 未知 */ UW_saveToStream(/* TODO 参数 */);  // ?UW_saveToStream@AD_Document@@QAEHHW4_TExp_ImpMode@@PAVUT_By
    protected /* 未知 */ _adjustHistoryOnSave(/* TODO 参数 */);  // ?_adjustHistoryOnSave@AD_Document@@IAEXXZ
    public /* 未知 */ _getDocUUID(/* TODO 参数 */);  // ?_getDocUUID@AD_Document@@IBEPAVUT_UUID@@XZ
    protected /* 未知 */ _purgeRevisionTable(/* TODO 参数 */);  // ?_purgeRevisionTable@AD_Document@@IAEXXZ
    protected bool _restoreVersion(/* TODO 参数 */);  // ?_restoreVersion@AD_Document@@IAE_NPAVXAP_Frame@@I@Z
    protected /* 未知 */ _setFilename(/* TODO 参数 */);  // ?_setFilename@AD_Document@@IAEXPAD@Z
    public /* 未知 */ _setForceDirty(/* TODO 参数 */);  // ?_setForceDirty@AD_Document@@QAEX_N@Z
    protected /* 未知 */ _setMarkRevisions(/* TODO 参数 */);  // ?_setMarkRevisions@AD_Document@@IAEX_N@Z
    protected /* 未知 */ _setPieceTableChanging(/* TODO 参数 */);  // ?_setPieceTableChanging@AD_Document@@IAEX_N@Z
    public /* 未知 */ addRecordToHistory(/* TODO 参数 */);  // ?addRecordToHistory@AD_Document@@QAEXABVAD_VersionData@@@Z
    public bool addRevision(/* TODO 参数 */);  // ?addRevision@AD_Document@@QAE_NIPAIJI@Z
    public bool addRevision(/* TODO 参数 */);  // ?addRevision@AD_Document@@QAE_NIPBIIJI@Z
    public bool addRevisionByID(/* TODO 参数 */);  // ?addRevisionByID@AD_Document@@QAE_NIPBIIJI@Z
    public const bool areDocumentHistoriesEqual(/* TODO 参数 */);  // ?areDocumentHistoriesEqual@AD_Document@@QBE_NABV1@AAI@Z
    public const bool areDocumentsRelated(/* TODO 参数 */);  // ?areDocumentsRelated@AD_Document@@QBE_NABV1@@Z
    public const /* 未知 */ findAutoRevisionId(/* TODO 参数 */);  // ?findAutoRevisionId@AD_Document@@QBEII@Z
    public const /* 未知 */ findHistoryRecord(/* TODO 参数 */);  // ?findHistoryRecord@AD_Document@@QBEPBVAD_VersionData@@I@Z
    public const /* 未知 */ findNearestAutoRevisionId(/* TODO 参数 */);  // ?findNearestAutoRevisionId@AD_Document@@QBEII_N@Z
    virtual public /* 未知 */ forceDirty(/* TODO 参数 */);  // ?forceDirty@AD_Document@@UAEXXZ
    public const /* 未知 */ getDocUUID(/* TODO 参数 */);  // ?getDocUUID@AD_Document@@QBEPBVUT_UUID@@XZ
    public const /* 未知 */ getDocUUIDString(/* TODO 参数 */);  // ?getDocUUIDString@AD_Document@@QBEPBDXZ
    public const /* 未知 */ getDocVersion(/* TODO 参数 */);  // ?getDocVersion@AD_Document@@QBEIXZ
    public const /* 未知 */ getEditTime(/* TODO 参数 */);  // ?getEditTime@AD_Document@@QBEIXZ
    public const /* 未知 */ getEncodingName(/* TODO 参数 */);  // ?getEncodingName@AD_Document@@QBEPBDXZ
    public const /* 未知 */ getFilename(/* TODO 参数 */);  // ?getFilename@AD_Document@@QBEPBDXZ
    public const /* 未知 */ getHighestRevision(/* TODO 参数 */);  // ?getHighestRevision@AD_Document@@QBEPBVAD_Revision@@XZ
    public const /* 未知 */ getHighestRevisionId(/* TODO 参数 */);  // ?getHighestRevisionId@AD_Document@@QBEIXZ
    public const /* 未知 */ getHistoryCount(/* TODO 参数 */);  // ?getHistoryCount@AD_Document@@QBEIXZ
    public const bool getHistoryNthAutoRevisioned(/* TODO 参数 */);  // ?getHistoryNthAutoRevisioned@AD_Document@@QBE_NI@Z
    public const /* 未知 */ getHistoryNthEditTime(/* TODO 参数 */);  // ?getHistoryNthEditTime@AD_Document@@QBEII@Z
    public const /* 未知 */ getHistoryNthId(/* TODO 参数 */);  // ?getHistoryNthId@AD_Document@@QBEII@Z
    public const /* 未知 */ getHistoryNthTime(/* TODO 参数 */);  // ?getHistoryNthTime@AD_Document@@QBEJI@Z
    public const /* 未知 */ getHistoryNthTimeStarted(/* TODO 参数 */);  // ?getHistoryNthTimeStarted@AD_Document@@QBEJI@Z
    public const /* 未知 */ getHistoryNthTopXID(/* TODO 参数 */);  // ?getHistoryNthTopXID@AD_Document@@QBEII@Z
    public const /* 未知 */ getHistoryNthUID(/* TODO 参数 */);  // ?getHistoryNthUID@AD_Document@@QBEABVUT_UUID@@I@Z
    public const /* 未知 */ getLastOpenedTime(/* TODO 参数 */);  // ?getLastOpenedTime@AD_Document@@QBEJXZ
    public const /* 未知 */ getLastSavedTime(/* TODO 参数 */);  // ?getLastSavedTime@AD_Document@@QBEJXZ
    public const /* 未知 */ getNewUUID(/* TODO 参数 */);  // ?getNewUUID@AD_Document@@QBEPAVUT_UUID@@XZ
    public const /* 未知 */ getNewUUID32(/* TODO 参数 */);  // ?getNewUUID32@AD_Document@@QBEIXZ
    public const /* 未知 */ getNewUUID64(/* TODO 参数 */);  // ?getNewUUID64@AD_Document@@QBE_JXZ
    public const /* 未知 */ getRevisionId(/* TODO 参数 */);  // ?getRevisionId@AD_Document@@QBEIXZ
    public const /* 未知 */ getRevisionIndxFromId(/* TODO 参数 */);  // ?getRevisionIndxFromId@AD_Document@@QBEHI@Z
    public /* 未知 */ getRevisions(/* TODO 参数 */);  // ?getRevisions@AD_Document@@QAEABV?$UT_GenericVector@PAVAD_Re
    public const /* 未知 */ getShowRevisionId(/* TODO 参数 */);  // ?getShowRevisionId@AD_Document@@QBEIXZ
    public const /* 未知 */ getTimeSinceOpen(/* TODO 参数 */);  // ?getTimeSinceOpen@AD_Document@@QBEIXZ
    public const /* 未知 */ getTimeSinceSave(/* TODO 参数 */);  // ?getTimeSinceSave@AD_Document@@QBEIXZ
    public const bool isAutoRevisioning(/* TODO 参数 */);  // ?isAutoRevisioning@AD_Document@@QBE_NXZ
    public const bool isForcedDirty(/* TODO 参数 */);  // ?isForcedDirty@AD_Document@@QBE_NXZ
    public const bool isMarkRevisions(/* TODO 参数 */);  // ?isMarkRevisions@AD_Document@@QBE_NXZ
    public bool isPieceTableChanging(/* TODO 参数 */);  // ?isPieceTableChanging@AD_Document@@QAE_NXZ
    public const bool isShowRevisions(/* TODO 参数 */);  // ?isShowRevisions@AD_Document@@QBE_NXZ
    public bool purgeAllRevisions(/* TODO 参数 */);  // ?purgeAllRevisions@AD_Document@@QAE_NPAVAV_View@@@Z
    public /* 未知 */ purgeHistory(/* TODO 参数 */);  // ?purgeHistory@AD_Document@@QAEXXZ
    public /* 未知 */ ref(/* TODO 参数 */);  // ?ref@AD_Document@@QAEXXZ
    public const /* 未知 */ resourceManager(/* TODO 参数 */);  // ?resourceManager@AD_Document@@QBEAAVXAP_ResourceManager@@XZ
    public /* 未知 */ save(/* TODO 参数 */);  // ?save@AD_Document@@QAEHXZ
    public /* 未知 */ saveAs(/* TODO 参数 */);  // ?saveAs@AD_Document@@QAEHPBDH0@Z
    public /* 未知 */ saveAs(/* TODO 参数 */);  // ?saveAs@AD_Document@@QAEHPBDH_N0@Z
    public /* 未知 */ saveToStream(/* TODO 参数 */);  // ?saveToStream@AD_Document@@QAEHW4_TExp_ImpMode@@PAVUT_ByteBu
    virtual public /* 未知 */ setAutoRevisioning(/* TODO 参数 */);  // ?setAutoRevisioning@AD_Document@@UAEX_N@Z
    public /* 未知 */ setDocUUID(/* TODO 参数 */);  // ?setDocUUID@AD_Document@@QAEXPBD@Z
    public /* 未知 */ setDocVersion(/* TODO 参数 */);  // ?setDocVersion@AD_Document@@QAEXI@Z
    public /* 未知 */ setEditTime(/* TODO 参数 */);  // ?setEditTime@AD_Document@@QAEXI@Z
    public /* 未知 */ setEncodingName(/* TODO 参数 */);  // ?setEncodingName@AD_Document@@QAEXPBD@Z
    public /* 未知 */ setLastOpenedTime(/* TODO 参数 */);  // ?setLastOpenedTime@AD_Document@@QAEXJ@Z
    public /* 未知 */ setLastSavedTime(/* TODO 参数 */);  // ?setLastSavedTime@AD_Document@@QAEXJ@Z
    virtual public /* 未知 */ setMarkRevisions(/* TODO 参数 */);  // ?setMarkRevisions@AD_Document@@UAEX_N@Z
    public /* 未知 */ setRevisionId(/* TODO 参数 */);  // ?setRevisionId@AD_Document@@QAEXI@Z
    public /* 未知 */ setShowRevisionId(/* TODO 参数 */);  // ?setShowRevisionId@AD_Document@@QAEXI@Z
    public /* 未知 */ setShowRevisions(/* TODO 参数 */);  // ?setShowRevisions@AD_Document@@QAEX_N@Z
    public bool showHistory(/* TODO 参数 */);  // ?showHistory@AD_Document@@QAE_NPAVAV_View@@@Z
    public /* 未知 */ toggleMarkRevisions(/* TODO 参数 */);  // ?toggleMarkRevisions@AD_Document@@QAEXXZ
    public /* 未知 */ toggleShowRevisions(/* TODO 参数 */);  // ?toggleShowRevisions@AD_Document@@QAEXXZ
    public /* 未知 */ unref(/* TODO 参数 */);  // ?unref@AD_Document@@QAEXXZ
    public /* 未知 */ uwSavetostream(/* TODO 参数 */);  // ?uwSavetostream@AD_Document@@QAEHHPAVUT_ByteBuf@@II_N@Z
    public const /* 未知 */ verifyHistoryState(/* TODO 参数 */);  // ?verifyHistoryState@AD_Document@@QBE?AW4AD_HISTORY_STATE@@AA
};

/* ---- AP_Convert (9 方法) ---- */
class AP_Convert {
public:
    public bool convertTo(/* TODO 参数 */);  // ?convertTo@AP_Convert@@QAE_NPBD0@Z
    public bool convertTo(/* TODO 参数 */);  // ?convertTo@AP_Convert@@QAE_NPBDH0H@Z
    public bool convertToPNG(/* TODO 参数 */);  // ?convertToPNG@AP_Convert@@QAE_NPBD@Z
    public bool print(/* TODO 参数 */);  // ?print@AP_Convert@@QAE_NPBDPAVGR_Graphics@@0@Z
    public bool printFirstPage(/* TODO 参数 */);  // ?printFirstPage@AP_Convert@@QAE_NPAVGR_Graphics@@PAVPD_Docum
    public /* 未知 */ setExpProps(/* TODO 参数 */);  // ?setExpProps@AP_Convert@@QAEXPBD@Z
    public /* 未知 */ setImpProps(/* TODO 参数 */);  // ?setImpProps@AP_Convert@@QAEXPBD@Z
    public /* 未知 */ setMergeSource(/* TODO 参数 */);  // ?setMergeSource@AP_Convert@@QAEXPBD@Z
    public /* 未知 */ setVerbose(/* TODO 参数 */);  // ?setVerbose@AP_Convert@@QAEXH@Z
};

/* ---- AP_Frame (18 方法) ---- */
class AP_Frame {
public:
    public /* 未知 */ _importDocument(/* TODO 参数 */);  // ?_importDocument@AP_Frame@@MAEHPBDH_N@Z
    protected /* 未知 */ _loadDocument(/* TODO 参数 */);  // ?_loadDocument@AP_Frame@@IAEHPBDH_N@Z
    protected /* 未知 */ _loadDocumentStream(/* TODO 参数 */);  // ?_loadDocumentStream@AP_Frame@@IAEHHPAUExp_ImpDataStruct@@PB
    protected /* 未知 */ _replaceDocument(/* TODO 参数 */);  // ?_replaceDocument@AP_Frame@@IAEHPAVAD_Document@@@Z
    public /* 未知 */ _replaceView(/* TODO 参数 */);  // ?_replaceView@AP_Frame@@MAEXPAVGR_Graphics@@PAVFL_DocLayout@
    public /* 未知 */ _showDocument(/* TODO 参数 */);  // ?_showDocument@AP_Frame@@MAEHI@Z
    virtual public /* 未知 */ buildFrame(/* TODO 参数 */);  // ?buildFrame@AP_Frame@@UAEPAVXAP_Frame@@PAV2@@Z
    public /* 未知 */ getNewZoom(/* TODO 参数 */);  // ?getNewZoom@AP_Frame@@QAEIPAW4tZoomType@XAP_Frame@@@Z
    virtual public /* 未知 */ getZoomPercentage(/* TODO 参数 */);  // ?getZoomPercentage@AP_Frame@@UAEIXZ
    virtual public /* 未知 */ importDocument(/* TODO 参数 */);  // ?importDocument@AP_Frame@@UAEHPBDH_N@Z
    virtual public bool initFrameData(/* TODO 参数 */);  // ?initFrameData@AP_Frame@@UAE_NXZ
    virtual public /* 未知 */ killFrameData(/* TODO 参数 */);  // ?killFrameData@AP_Frame@@UAEXXZ
    virtual public /* 未知 */ loadDocument(/* TODO 参数 */);  // ?loadDocument@AP_Frame@@UAEHPBDH@Z
    virtual public /* 未知 */ loadDocument(/* TODO 参数 */);  // ?loadDocument@AP_Frame@@UAEHPBDH_N@Z
    virtual public /* 未知 */ loadDocumentStream(/* TODO 参数 */);  // ?loadDocumentStream@AP_Frame@@UAEHHPAX@Z
    virtual public /* 未知 */ quickZoom(/* TODO 参数 */);  // ?quickZoom@AP_Frame@@UAEXI@Z
    virtual public /* 未知 */ setZoomPercentage(/* TODO 参数 */);  // ?setZoomPercentage@AP_Frame@@UAEXI@Z
    virtual public /* 未知 */ uwRefreshView(/* TODO 参数 */);  // ?uwRefreshView@AP_Frame@@UAEHXZ
};

/* ---- AP_Win32Frame (23 方法) ---- */
class AP_Win32Frame {
public:
    public /* 未知 */ RegisterClassA(/* TODO 参数 */);  // ?RegisterClassA@AP_Win32Frame@@SA_NPAVXAP_Win32App@@@Z
    public /* 未知 */ _bindToolbars(/* TODO 参数 */);  // ?_bindToolbars@AP_Win32Frame@@MAEXPAVAV_View@@@Z
    public /* 未知 */ _createScrollBarListeners(/* TODO 参数 */);  // ?_createScrollBarListeners@AP_Win32Frame@@MAE_NPAVAV_View@@A
    public /* 未知 */ _createViewGraphics(/* TODO 参数 */);  // ?_createViewGraphics@AP_Win32Frame@@MAE_NAAPAVGR_Graphics@@I
    public /* 未知 */ _getDocumentAreaHeight(/* TODO 参数 */);  // ?_getDocumentAreaHeight@AP_Win32Frame@@MAEHXZ
    public /* 未知 */ _getDocumentAreaWidth(/* TODO 参数 */);  // ?_getDocumentAreaWidth@AP_Win32Frame@@MAEHXZ
    public /* 未知 */ _replaceView(/* TODO 参数 */);  // ?_replaceView@AP_Win32Frame@@MAEXPAVGR_Graphics@@PAVFL_DocLa
    public /* 未知 */ _scrollFuncX(/* TODO 参数 */);  // ?_scrollFuncX@AP_Win32Frame@@CAXPAXHH@Z
    public /* 未知 */ _scrollFuncY(/* TODO 参数 */);  // ?_scrollFuncY@AP_Win32Frame@@CAXPAXHH@Z
    public /* 未知 */ _setViewFocus(/* TODO 参数 */);  // ?_setViewFocus@AP_Win32Frame@@MAEXPAVAV_View@@@Z
    virtual public /* 未知 */ cloneFrame(/* TODO 参数 */);  // ?cloneFrame@AP_Win32Frame@@UAEPAVXAP_Frame@@XZ
    public const /* 未知 */ getAPFrameData(/* TODO 参数 */);  // ?getAPFrameData@AP_Win32Frame@@QBEPAVAP_FrameData@@XZ
    public const /* 未知 */ getAPWin32FrameImpl(/* TODO 参数 */);  // ?getAPWin32FrameImpl@AP_Win32Frame@@QBEPAVAP_Win32FrameImpl@
    virtual public const /* 未知 */ getTopLevelWindow(/* TODO 参数 */);  // ?getTopLevelWindow@AP_Win32Frame@@UBEPAUHWND__@@XZ
    virtual public bool initialize(/* TODO 参数 */);  // ?initialize@AP_Win32Frame@@UAE_NW4_FrameModes@@@Z
    virtual public /* 未知 */ setStatusMessage(/* TODO 参数 */);  // ?setStatusMessage@AP_Win32Frame@@UAEXPBDI@Z
    virtual public /* 未知 */ setXScrollRange(/* TODO 参数 */);  // ?setXScrollRange@AP_Win32Frame@@UAEXXZ
    virtual public /* 未知 */ setYScrollRange(/* TODO 参数 */);  // ?setYScrollRange@AP_Win32Frame@@UAEXXZ
    virtual public /* 未知 */ toggleBar(/* TODO 参数 */);  // ?toggleBar@AP_Win32Frame@@UAEXI_N@Z
    virtual public /* 未知 */ toggleLeftRuler(/* TODO 参数 */);  // ?toggleLeftRuler@AP_Win32Frame@@UAEX_N@Z
    virtual public /* 未知 */ toggleRuler(/* TODO 参数 */);  // ?toggleRuler@AP_Win32Frame@@UAEX_N@Z
    virtual public /* 未知 */ toggleStatusBar(/* TODO 参数 */);  // ?toggleStatusBar@AP_Win32Frame@@UAEX_N@Z
    virtual public /* 未知 */ toggleTopRuler(/* TODO 参数 */);  // ?toggleTopRuler@AP_Win32Frame@@UAEX_N@Z
};

/* ---- AP_Win32FrameImpl (54 方法) ---- */
class AP_Win32FrameImpl {
public:
    public bool UW_RegDocHdl(/* TODO 参数 */);  // ?UW_RegDocHdl@AP_Win32FrameImpl@@QAE_NKK@Z
    public bool UW_UnRegDocHdl(/* TODO 参数 */);  // ?UW_UnRegDocHdl@AP_Win32FrameImpl@@QAE_NK@Z
    public /* 未知 */ _ContainerWndProc(/* TODO 参数 */);  // ?_ContainerWndProc@AP_Win32FrameImpl@@CGJPAUHWND__@@IIJ@Z
    virtual public bool _DoGetElemProp(/* TODO 参数 */);  // ?_DoGetElemProp@AP_Win32FrameImpl@@UAE_NPBUGetElemPropStruct
    virtual public bool _DoSetElemProp(/* TODO 参数 */);  // ?_DoSetElemProp@AP_Win32FrameImpl@@UAE_NPBUSetElemPropStruct
    public /* 未知 */ _DocumentWndProc(/* TODO 参数 */);  // ?_DocumentWndProc@AP_Win32FrameImpl@@CGJPAUHWND__@@IIJ@Z
    virtual public bool _MouseAndKeyEvent(/* TODO 参数 */);  // ?_MouseAndKeyEvent@AP_Win32FrameImpl@@UAE_NPAVAV_View@@@Z
    public /* 未知 */ _RegisterClass(/* TODO 参数 */);  // ?_RegisterClass@AP_Win32FrameImpl@@KA_NPAVXAP_Win32App@@@Z
    public /* 未知 */ _bindToolbars(/* TODO 参数 */);  // ?_bindToolbars@AP_Win32FrameImpl@@MAEXPAVAV_View@@@Z
    public /* 未知 */ _createDocumentWindow(/* TODO 参数 */);  // ?_createDocumentWindow@AP_Win32FrameImpl@@MAEPAUHWND__@@PAVX
    public /* 未知 */ _createLeftRuler(/* TODO 参数 */);  // ?_createLeftRuler@AP_Win32FrameImpl@@AAEXPAVXAP_Frame@@@Z
    public /* 未知 */ _createStatusBarWindow(/* TODO 参数 */);  // ?_createStatusBarWindow@AP_Win32FrameImpl@@MAEPAUHWND__@@PAV
    public /* 未知 */ _createTopRuler(/* TODO 参数 */);  // ?_createTopRuler@AP_Win32FrameImpl@@AAEXPAVXAP_Frame@@@Z
    public /* 未知 */ _endTracking(/* TODO 参数 */);  // ?_endTracking@AP_Win32FrameImpl@@AAEXHH@Z
    protected /* 未知 */ _getDocumentArea(/* TODO 参数 */);  // ?_getDocumentArea@AP_Win32FrameImpl@@IAEXAAUtagRECT@@@Z
    public /* 未知 */ _getDocumentAreaHeight(/* TODO 参数 */);  // ?_getDocumentAreaHeight@AP_Win32FrameImpl@@MAEHXZ
    public /* 未知 */ _getDocumentAreaWidth(/* TODO 参数 */);  // ?_getDocumentAreaWidth@AP_Win32FrameImpl@@MAEHXZ
    protected /* 未知 */ _getHwndContainer(/* TODO 参数 */);  // ?_getHwndContainer@AP_Win32FrameImpl@@IAEPAUHWND__@@XZ
    protected /* 未知 */ _getHwndHScroll(/* TODO 参数 */);  // ?_getHwndHScroll@AP_Win32FrameImpl@@IAEPAUHWND__@@XZ
    protected /* 未知 */ _getHwndLeftRuler(/* TODO 参数 */);  // ?_getHwndLeftRuler@AP_Win32FrameImpl@@IAEPAUHWND__@@XZ
    protected /* 未知 */ _getHwndTopRuler(/* TODO 参数 */);  // ?_getHwndTopRuler@AP_Win32FrameImpl@@IAEPAUHWND__@@XZ
    protected /* 未知 */ _getHwndVScroll(/* TODO 参数 */);  // ?_getHwndVScroll@AP_Win32FrameImpl@@IAEPAUHWND__@@XZ
    public /* 未知 */ _getMouseWheelLines(/* TODO 参数 */);  // ?_getMouseWheelLines@AP_Win32FrameImpl@@CAHXZ
    public /* 未知 */ _getRulerSizes(/* TODO 参数 */);  // ?_getRulerSizes@AP_Win32FrameImpl@@AAEXPAVAP_FrameData@@AAH1
    protected /* 未知 */ _getVerticalScrollInfo(/* TODO 参数 */);  // ?_getVerticalScrollInfo@AP_Win32FrameImpl@@IAEXPAUtagSCROLLI
    public /* 未知 */ _initialize(/* TODO 参数 */);  // ?_initialize@AP_Win32FrameImpl@@MAEXXZ
    public /* 未知 */ _isTracking(/* TODO 参数 */);  // ?_isTracking@AP_Win32FrameImpl@@ABE_NXZ
    public /* 未知 */ _onSize(/* TODO 参数 */);  // ?_onSize@AP_Win32FrameImpl@@AAEXPAVAP_FrameData@@HH@Z
    public /* 未知 */ _rebuildToolbar(/* TODO 参数 */);  // ?_rebuildToolbar@AP_Win32FrameImpl@@MAEXI@Z
    public /* 未知 */ _refillToolbarsInFrameData(/* TODO 参数 */);  // ?_refillToolbarsInFrameData@AP_Win32FrameImpl@@MAEXXZ
    public /* 未知 */ _scrollFuncX(/* TODO 参数 */);  // ?_scrollFuncX@AP_Win32FrameImpl@@MAEXHH@Z
    public /* 未知 */ _scrollFuncY(/* TODO 参数 */);  // ?_scrollFuncY@AP_Win32FrameImpl@@MAEXHH@Z
    protected /* 未知 */ _setVerticalScrollInfo(/* TODO 参数 */);  // ?_setVerticalScrollInfo@AP_Win32FrameImpl@@IAEXPBUtagSCROLLI
    public /* 未知 */ _setXScrollRange(/* TODO 参数 */);  // ?_setXScrollRange@AP_Win32FrameImpl@@MAEXPAVAP_FrameData@@PA
    public /* 未知 */ _setYScrollRange(/* TODO 参数 */);  // ?_setYScrollRange@AP_Win32FrameImpl@@MAEXPAVAP_FrameData@@PA
    virtual public bool _showGridForm(/* TODO 参数 */);  // ?_showGridForm@AP_Win32FrameImpl@@UAE_NPAVAV_View@@GAAI@Z
    protected /* 未知 */ _showOrHideStatusbar(/* TODO 参数 */);  // ?_showOrHideStatusbar@AP_Win32FrameImpl@@IAEXXZ
    protected /* 未知 */ _showOrHideToolbars(/* TODO 参数 */);  // ?_showOrHideToolbars@AP_Win32FrameImpl@@IAEXXZ
    public /* 未知 */ _startTracking(/* TODO 参数 */);  // ?_startTracking@AP_Win32FrameImpl@@AAEXHH@Z
    public /* 未知 */ _toggleBar(/* TODO 参数 */);  // ?_toggleBar@AP_Win32FrameImpl@@MAEXI_N@Z
    public /* 未知 */ _toggleLeftRuler(/* TODO 参数 */);  // ?_toggleLeftRuler@AP_Win32FrameImpl@@MAEXPAVAP_Win32Frame@@_
    public /* 未知 */ _toggleTopRuler(/* TODO 参数 */);  // ?_toggleTopRuler@AP_Win32FrameImpl@@MAEXPAVAP_Win32Frame@@_N
    public /* 未知 */ _track(/* TODO 参数 */);  // ?_track@AP_Win32FrameImpl@@AAEXHH@Z
    public /* 未知 */ _translateDocumentToScreen(/* TODO 参数 */);  // ?_translateDocumentToScreen@AP_Win32FrameImpl@@MAEXAAH0@Z
    protected /* 未知 */ _updateContainerWindow(/* TODO 参数 */);  // ?_updateContainerWindow@AP_Win32FrameImpl@@IAEXXZ
    public /* 未知 */ createDocWndGraphics(/* TODO 参数 */);  // ?createDocWndGraphics@AP_Win32FrameImpl@@QAEPAVGR_Win32Graph
    virtual public /* 未知 */ createInstance(/* TODO 参数 */);  // ?createInstance@AP_Win32FrameImpl@@UAEPAVXAP_FrameImpl@@PAVX
    virtual public const /* 未知 */ getColorSelBackground(/* TODO 参数 */);  // ?getColorSelBackground@AP_Win32FrameImpl@@UBE?AVUT_RGBColor@
    public /* 未知 */ getHintString(/* TODO 参数 */);  // ?getHintString@AP_Win32FrameImpl@@CAXPAUHWND__@@IIAAV?$basic
    public /* 未知 */ getHwndDocument(/* TODO 参数 */);  // ?getHwndDocument@AP_Win32FrameImpl@@QAEPAUHWND__@@XZ
    public /* 未知 */ s_ContainerWndClassName(/* TODO 参数 */);  // ?s_ContainerWndClassName@AP_Win32FrameImpl@@0PADA
    public /* 未知 */ s_DocumentWndClassName(/* TODO 参数 */);  // ?s_DocumentWndClassName@AP_Win32FrameImpl@@0PADA
    public /* 未知 */ sendMessageForPBCheck(/* TODO 参数 */);  // ?sendMessageForPBCheck@AP_Win32FrameImpl@@CAXPAVAV_View@@AAV
    public /* 未知 */ sendRoTablePBCheck(/* TODO 参数 */);  // ?sendRoTablePBCheck@AP_Win32FrameImpl@@CA_NPAVAV_View@@@Z
};

/* ---- AV_View (24 方法) ---- */
class AV_View {
public:
    virtual public bool RgnEventFire(/* TODO 参数 */);  // ?RgnEventFire@AV_View@@UAE_NW4TEventType@@I@Z
    public bool addListener(/* TODO 参数 */);  // ?addListener@AV_View@@QAE_NPAVAV_Listener@@PAI@Z
    public /* 未知 */ addScrollListener(/* TODO 参数 */);  // ?addScrollListener@AV_View@@QAEXPAVAV_ScrollObj@@@Z
    virtual public /* 未知 */ cmdUnselectSelection(/* TODO 参数 */);  // ?cmdUnselectSelection@AV_View@@UAEXXZ
    public const /* 未知 */ getApp(/* TODO 参数 */);  // ?getApp@AV_View@@QBEPAVXAP_App@@XZ
    public /* 未知 */ getFocus(/* TODO 参数 */);  // ?getFocus@AV_View@@QAE?AW4AV_Focus@@XZ
    public const /* 未知 */ getParentData(/* TODO 参数 */);  // ?getParentData@AV_View@@QBEPAXXZ
    public /* 未知 */ getTick(/* TODO 参数 */);  // ?getTick@AV_View@@QAEIXZ
    public const /* 未知 */ getWindowHeight(/* TODO 参数 */);  // ?getWindowHeight@AV_View@@QBEHXZ
    public const /* 未知 */ getWindowWidth(/* TODO 参数 */);  // ?getWindowWidth@AV_View@@QBEHXZ
    public const /* 未知 */ getXScrollOffset(/* TODO 参数 */);  // ?getXScrollOffset@AV_View@@QBEHXZ
    public const /* 未知 */ getYScrollOffset(/* TODO 参数 */);  // ?getYScrollOffset@AV_View@@QBEHXZ
    public /* 未知 */ incTick(/* TODO 参数 */);  // ?incTick@AV_View@@QAEXXZ
    public bool isActive(/* TODO 参数 */);  // ?isActive@AV_View@@QAE_NXZ
    public const bool isLayoutFilling(/* TODO 参数 */);  // ?isLayoutFilling@AV_View@@QBE_NXZ
    virtual public bool notifyListeners(/* TODO 参数 */);  // ?notifyListeners@AV_View@@UAE_NIPAX@Z
    public bool removeListener(/* TODO 参数 */);  // ?removeListener@AV_View@@QAE_NI@Z
    public /* 未知 */ removeScrollListener(/* TODO 参数 */);  // ?removeScrollListener@AV_View@@QAEXPAVAV_ScrollObj@@@Z
    public /* 未知 */ sendHorizontalScrollEvent(/* TODO 参数 */);  // ?sendHorizontalScrollEvent@AV_View@@QAEXHH@Z
    public /* 未知 */ sendVerticalScrollEvent(/* TODO 参数 */);  // ?sendVerticalScrollEvent@AV_View@@QAEXHH@Z
    public /* 未知 */ setFocus(/* TODO 参数 */);  // ?setFocus@AV_View@@QAEXW4AV_Focus@@@Z
    public /* 未知 */ setInsertMode(/* TODO 参数 */);  // ?setInsertMode@AV_View@@QAEX_N@Z
    public /* 未知 */ setLayoutIsFilling(/* TODO 参数 */);  // ?setLayoutIsFilling@AV_View@@QAEX_N@Z
    public /* 未知 */ setWindowSize(/* TODO 参数 */);  // ?setWindowSize@AV_View@@QAEXHH@Z
};

/* ---- CellHelper (2 方法) ---- */
class CellHelper {
public:
    public const bool isVirtual(/* TODO 参数 */);  // ?isVirtual@CellHelper@@QBE_NXZ
    public /* 未知 */ setProp(/* TODO 参数 */);  // ?setProp@CellHelper@@QAEXPBDVUT_String@@@Z
};

/* ---- DictionaryListener (3 方法, 定制类) ---- */
class DictionaryListener {
public:
    virtual public /* 未知 */ charData(/* TODO 参数 */);  // ?charData@DictionaryListener@@UAEXPBDH@Z
    virtual public /* 未知 */ endElement(/* TODO 参数 */);  // ?endElement@DictionaryListener@@UAEXPBD@Z
    virtual public /* 未知 */ startElement(/* TODO 参数 */);  // ?startElement@DictionaryListener@@UAEXPBDPAPBD@Z
};

/* ---- EV_EditBinding (3 方法) ---- */
class EV_EditBinding {
public:
    public const /* 未知 */ getMap(/* TODO 参数 */);  // ?getMap@EV_EditBinding@@QBEPAVEV_EditBindingMap@@XZ
    public const /* 未知 */ getMethod(/* TODO 参数 */);  // ?getMethod@EV_EditBinding@@QBEPAVEV_EditMethod@@XZ
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@EV_EditBinding@@QBEIXZ
};

/* ---- EV_EditBindingMap (6 方法) ---- */
class EV_EditBindingMap {
public:
    public /* 未知 */ findEditBinding(/* TODO 参数 */);  // ?findEditBinding@EV_EditBindingMap@@QAEPAVEV_EditBinding@@I@
    public const /* 未知 */ getShortcutFor(/* TODO 参数 */);  // ?getShortcutFor@EV_EditBindingMap@@QBEPBDPBVEV_EditMethod@@@
    public bool parseEditBinding(/* TODO 参数 */);  // ?parseEditBinding@EV_EditBindingMap@@QAE_NXZ
    public bool removeBinding(/* TODO 参数 */);  // ?removeBinding@EV_EditBindingMap@@QAE_NI@Z
    public bool setBinding(/* TODO 参数 */);  // ?setBinding@EV_EditBindingMap@@QAE_NIPAVEV_EditBinding@@@Z
    public bool setBinding(/* TODO 参数 */);  // ?setBinding@EV_EditBindingMap@@QAE_NIPBD@Z
};

/* ---- EV_EditEventMapper (3 方法) ---- */
class EV_EditEventMapper {
public:
    public /* 未知 */ Keystroke(/* TODO 参数 */);  // ?Keystroke@EV_EditEventMapper@@QAEIIPAPAVEV_EditMethod@@@Z
    public /* 未知 */ Mouse(/* TODO 参数 */);  // ?Mouse@EV_EditEventMapper@@QAEIIPAPAVEV_EditMethod@@@Z
    public const /* 未知 */ getShortcutFor(/* TODO 参数 */);  // ?getShortcutFor@EV_EditEventMapper@@QBEPBDPBVEV_EditMethod@@
};

/* ---- EV_EditMethod (4 方法) ---- */
class EV_EditMethod {
public:
    public const bool Fn(/* TODO 参数 */);  // ?Fn@EV_EditMethod@@QBE_NPAVAV_View@@PAVEV_EditMethodCallData
    public const /* 未知 */ getDescription(/* TODO 参数 */);  // ?getDescription@EV_EditMethod@@QBEPBDXZ
    public const /* 未知 */ getName(/* TODO 参数 */);  // ?getName@EV_EditMethod@@QBEPBDXZ
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@EV_EditMethod@@QBEIXZ
};

/* ---- EV_EditMethodCallData (3 方法) ---- */
class EV_EditMethodCallData {
public:
    public /* 未知 */ getScriptName(/* TODO 参数 */);  // ?getScriptName@EV_EditMethodCallData@@QAEABVUT_String@@XZ
    public /* 未知 */ getX(/* TODO 参数 */);  // ?getX@EV_EditMethodCallData@@QAEHXZ
    public /* 未知 */ getY(/* TODO 参数 */);  // ?getY@EV_EditMethodCallData@@QAEHXZ
};

/* ---- EV_EditMethodContainer (5 方法) ---- */
class EV_EditMethodContainer {
public:
    public bool addEditMethod(/* TODO 参数 */);  // ?addEditMethod@EV_EditMethodContainer@@QAE_NPAVEV_EditMethod
    public /* 未知 */ countEditMethods(/* TODO 参数 */);  // ?countEditMethods@EV_EditMethodContainer@@QAEIXZ
    public const /* 未知 */ findEditMethodByName(/* TODO 参数 */);  // ?findEditMethodByName@EV_EditMethodContainer@@QBEPAVEV_EditM
    public /* 未知 */ getNthEditMethod(/* TODO 参数 */);  // ?getNthEditMethod@EV_EditMethodContainer@@QAEPAVEV_EditMetho
    public bool removeEditMethod(/* TODO 参数 */);  // ?removeEditMethod@EV_EditMethodContainer@@QAE_NPAVEV_EditMet
};

/* ---- EV_Keyboard (2 方法) ---- */
class EV_Keyboard {
public:
    public bool invokeKeyboardMethod(/* TODO 参数 */);  // ?invokeKeyboardMethod@EV_Keyboard@@QAE_NPAVAV_View@@PAVEV_Ed
    public /* 未知 */ setEditEventMap(/* TODO 参数 */);  // ?setEditEventMap@EV_Keyboard@@QAEXPAVEV_EditEventMapper@@@Z
};

/* ---- EV_Menu (9 方法) ---- */
class EV_Menu {
public:
    public /* 未知 */ addMenuItem(/* TODO 参数 */);  // ?addMenuItem@EV_Menu@@QAEHABVUT_String@@0@Z
    protected /* 未知 */ getApp(/* TODO 参数 */);  // ?getApp@EV_Menu@@IAEPAVXAP_App@@XZ
    protected /* 未知 */ getLabelName(/* TODO 参数 */);  // ?getLabelName@EV_Menu@@IAEPAPBDPAVXAP_App@@PBVEV_Menu_Action
    public /* 未知 */ getLabelSet(/* TODO 参数 */);  // ?getLabelSet@EV_Menu@@QAEPAVEV_Menu_LabelSet@@XZ
    public const /* 未知 */ getLabelSet(/* TODO 参数 */);  // ?getLabelSet@EV_Menu@@QBEPBVEV_Menu_LabelSet@@XZ
    public /* 未知 */ getLayout(/* TODO 参数 */);  // ?getLayout@EV_Menu@@QAEPAVEV_Menu_Layout@@XZ
    public const /* 未知 */ getLayout(/* TODO 参数 */);  // ?getLayout@EV_Menu@@QBEPBVEV_Menu_Layout@@XZ
    public bool invokeMenuMethod(/* TODO 参数 */);  // ?invokeMenuMethod@EV_Menu@@QAE_NPAVAV_View@@PAVEV_EditMethod
    public bool invokeMenuMethod(/* TODO 参数 */);  // ?invokeMenuMethod@EV_Menu@@QAE_NPAVAV_View@@PAVEV_EditMethod
};

/* ---- EV_Menu_Action (10 方法) ---- */
class EV_Menu_Action {
public:
    public const /* 未知 */ getDynamicLabel(/* TODO 参数 */);  // ?getDynamicLabel@EV_Menu_Action@@QBEPBDPBVEV_Menu_Label@@@Z
    public const /* 未知 */ getMenuId(/* TODO 参数 */);  // ?getMenuId@EV_Menu_Action@@QBEHXZ
    public const /* 未知 */ getMenuItemState(/* TODO 参数 */);  // ?getMenuItemState@EV_Menu_Action@@QBE?AW4_ev_Menu_ItemState@
    public const /* 未知 */ getMethodName(/* TODO 参数 */);  // ?getMethodName@EV_Menu_Action@@QBEPBDXZ
    public const /* 未知 */ getScriptName(/* TODO 参数 */);  // ?getScriptName@EV_Menu_Action@@QBEABVUT_String@@XZ
    public const bool hasDynamicLabel(/* TODO 参数 */);  // ?hasDynamicLabel@EV_Menu_Action@@QBE_NXZ
    public const bool hasGetStateFunction(/* TODO 参数 */);  // ?hasGetStateFunction@EV_Menu_Action@@QBE_NXZ
    public const bool isCheckable(/* TODO 参数 */);  // ?isCheckable@EV_Menu_Action@@QBE_NXZ
    public const bool isRadio(/* TODO 参数 */);  // ?isRadio@EV_Menu_Action@@QBE_NXZ
    public const bool raisesDialog(/* TODO 参数 */);  // ?raisesDialog@EV_Menu_Action@@QBE_NXZ
};

/* ---- EV_Menu_ActionSet (3 方法) ---- */
class EV_Menu_ActionSet {
public:
    public bool addAction(/* TODO 参数 */);  // ?addAction@EV_Menu_ActionSet@@QAE_NPAVEV_Menu_Action@@@Z
    public const /* 未知 */ getAction(/* TODO 参数 */);  // ?getAction@EV_Menu_ActionSet@@QBEPBVEV_Menu_Action@@H@Z
    public bool setAction(/* TODO 参数 */);  // ?setAction@EV_Menu_ActionSet@@QAE_NH_N000PBDP6A?AW4_ev_Menu_
};

/* ---- EV_Menu_Label (3 方法) ---- */
class EV_Menu_Label {
public:
    public const /* 未知 */ getMenuId(/* TODO 参数 */);  // ?getMenuId@EV_Menu_Label@@QBEHXZ
    public const /* 未知 */ getMenuLabel(/* TODO 参数 */);  // ?getMenuLabel@EV_Menu_Label@@QBEPBDXZ
    public const /* 未知 */ getMenuStatusMessage(/* TODO 参数 */);  // ?getMenuStatusMessage@EV_Menu_Label@@QBEPBDXZ
};

/* ---- EV_Menu_LabelSet (7 方法) ---- */
class EV_Menu_LabelSet {
public:
    public bool addLabel(/* TODO 参数 */);  // ?addLabel@EV_Menu_LabelSet@@QAE_NPAVEV_Menu_Label@@@Z
    public const /* 未知 */ getAllLabels(/* TODO 参数 */);  // ?getAllLabels@EV_Menu_LabelSet@@QBEPBV?$UT_GenericVector@PAV
    public /* 未知 */ getFirst(/* TODO 参数 */);  // ?getFirst@EV_Menu_LabelSet@@QAEHXZ
    public const /* 未知 */ getLabel(/* TODO 参数 */);  // ?getLabel@EV_Menu_LabelSet@@QBEPAVEV_Menu_Label@@H@Z
    public const /* 未知 */ getLanguage(/* TODO 参数 */);  // ?getLanguage@EV_Menu_LabelSet@@QBEPBDXZ
    public bool setLabel(/* TODO 参数 */);  // ?setLabel@EV_Menu_LabelSet@@QAE_NHPBD0@Z
    public /* 未知 */ setLanguage(/* TODO 参数 */);  // ?setLanguage@EV_Menu_LabelSet@@QAEXPBD@Z
};

/* ---- EV_Menu_Layout (8 方法) ---- */
class EV_Menu_Layout {
public:
    public /* 未知 */ addFakeLayoutItem(/* TODO 参数 */);  // ?addFakeLayoutItem@EV_Menu_Layout@@QAEXHW4_ev_Menu_LayoutFla
    public /* 未知 */ addLayoutItem(/* TODO 参数 */);  // ?addLayoutItem@EV_Menu_Layout@@QAEHHW4_ev_Menu_LayoutFlags@@
    public const /* 未知 */ getLayoutIndex(/* TODO 参数 */);  // ?getLayoutIndex@EV_Menu_Layout@@QBEHH@Z
    public const /* 未知 */ getLayoutItem(/* TODO 参数 */);  // ?getLayoutItem@EV_Menu_Layout@@QBEPAVEV_Menu_LayoutItem@@H@Z
    public const /* 未知 */ getLayoutItemCount(/* TODO 参数 */);  // ?getLayoutItemCount@EV_Menu_Layout@@QBEHXZ
    public const /* 未知 */ getName(/* TODO 参数 */);  // ?getName@EV_Menu_Layout@@QBEPBDXZ
    public bool setLayoutItem(/* TODO 参数 */);  // ?setLayoutItem@EV_Menu_Layout@@QAE_NHHW4_ev_Menu_LayoutFlags
    public const /* 未知 */ size(/* TODO 参数 */);  // ?size@EV_Menu_Layout@@QBEHXZ
};

/* ---- EV_Menu_LayoutItem (2 方法) ---- */
class EV_Menu_LayoutItem {
public:
    public const /* 未知 */ getMenuId(/* TODO 参数 */);  // ?getMenuId@EV_Menu_LayoutItem@@QBEHXZ
    public const /* 未知 */ getMenuLayoutFlags(/* TODO 参数 */);  // ?getMenuLayoutFlags@EV_Menu_LayoutItem@@QBE?AW4_ev_Menu_Layo
};

/* ---- EV_Mouse (3 方法) ---- */
class EV_Mouse {
public:
    public /* 未知 */ clearMouseContext(/* TODO 参数 */);  // ?clearMouseContext@EV_Mouse@@QAEXXZ
    public bool invokeMouseMethod(/* TODO 参数 */);  // ?invokeMouseMethod@EV_Mouse@@QAE_NPAVAV_View@@PAVEV_EditMeth
    public /* 未知 */ setEditEventMap(/* TODO 参数 */);  // ?setEditEventMap@EV_Mouse@@QAEXPAVEV_EditEventMapper@@@Z
};

/* ---- EV_Toolbar (8 方法) ---- */
class EV_Toolbar {
public:
    public const /* 未知 */ getToolbarLabelSet(/* TODO 参数 */);  // ?getToolbarLabelSet@EV_Toolbar@@QBEPBVEV_Toolbar_LabelSet@@X
    public const /* 未知 */ getToolbarLayout(/* TODO 参数 */);  // ?getToolbarLayout@EV_Toolbar@@QBEPBVEV_Toolbar_Layout@@XZ
    virtual public /* 未知 */ hide(/* TODO 参数 */);  // ?hide@EV_Toolbar@@UAEXXZ
    public bool invokeToolbarMethod(/* TODO 参数 */);  // ?invokeToolbarMethod@EV_Toolbar@@QAE_NPAVAV_View@@PAVEV_Edit
    public const bool isHidden(/* TODO 参数 */);  // ?isHidden@EV_Toolbar@@QBE_NXZ
    virtual public bool repopulateStyles(/* TODO 参数 */);  // ?repopulateStyles@EV_Toolbar@@UAE_NXZ
    virtual public /* 未知 */ show(/* TODO 参数 */);  // ?show@EV_Toolbar@@UAEXXZ
    virtual public bool synthesize(/* TODO 参数 */);  // ?synthesize@EV_Toolbar@@UAE_NXZ
};

/* ---- EV_Toolbar_Action (5 方法) ---- */
class EV_Toolbar_Action {
public:
    public const /* 未知 */ getChangeMaskOfInterest(/* TODO 参数 */);  // ?getChangeMaskOfInterest@EV_Toolbar_Action@@QBEIXZ
    public const /* 未知 */ getItemType(/* TODO 参数 */);  // ?getItemType@EV_Toolbar_Action@@QBE?AW4_ev_Toolbar_ItemType@
    public const /* 未知 */ getMethodName(/* TODO 参数 */);  // ?getMethodName@EV_Toolbar_Action@@QBEPBDXZ
    public const /* 未知 */ getToolbarId(/* TODO 参数 */);  // ?getToolbarId@EV_Toolbar_Action@@QBEHXZ
    public const /* 未知 */ getToolbarItemState(/* TODO 参数 */);  // ?getToolbarItemState@EV_Toolbar_Action@@QBE?AW4_ev_Toolbar_I
};

/* ---- EV_Toolbar_ActionSet (2 方法) ---- */
class EV_Toolbar_ActionSet {
public:
    public const /* 未知 */ getAction(/* TODO 参数 */);  // ?getAction@EV_Toolbar_ActionSet@@QBEPAVEV_Toolbar_Action@@H@
    public bool setAction(/* TODO 参数 */);  // ?setAction@EV_Toolbar_ActionSet@@QAE_NHW4_ev_Toolbar_ItemTyp
};

/* ---- EV_Toolbar_Control (6 方法) ---- */
class EV_Toolbar_Control {
public:
    public const /* 未知 */ getContents(/* TODO 参数 */);  // ?getContents@EV_Toolbar_Control@@QBEPBV?$UT_GenericVector@PB
    virtual public const /* 未知 */ getDroppedWidth(/* TODO 参数 */);  // ?getDroppedWidth@EV_Toolbar_Control@@UBEIXZ
    public const /* 未知 */ getMaxLength(/* TODO 参数 */);  // ?getMaxLength@EV_Toolbar_Control@@QBEIXZ
    public const /* 未知 */ getNthItem(/* TODO 参数 */);  // ?getNthItem@EV_Toolbar_Control@@QBEPBDI@Z
    public const /* 未知 */ getPixelWidth(/* TODO 参数 */);  // ?getPixelWidth@EV_Toolbar_Control@@QBEIXZ
    public const bool shouldSort(/* TODO 参数 */);  // ?shouldSort@EV_Toolbar_Control@@QBE_NXZ
};

/* ---- EV_Toolbar_Label (5 方法) ---- */
class EV_Toolbar_Label {
public:
    public const /* 未知 */ getIconName(/* TODO 参数 */);  // ?getIconName@EV_Toolbar_Label@@QBEPBDXZ
    public const /* 未知 */ getStatusMsg(/* TODO 参数 */);  // ?getStatusMsg@EV_Toolbar_Label@@QBEPBDXZ
    public const /* 未知 */ getToolTip(/* TODO 参数 */);  // ?getToolTip@EV_Toolbar_Label@@QBEPBDXZ
    public const /* 未知 */ getToolbarId(/* TODO 参数 */);  // ?getToolbarId@EV_Toolbar_Label@@QBEHXZ
    public const /* 未知 */ getToolbarLabel(/* TODO 参数 */);  // ?getToolbarLabel@EV_Toolbar_Label@@QBEPBDXZ
};

/* ---- EV_Toolbar_LabelSet (4 方法) ---- */
class EV_Toolbar_LabelSet {
public:
    public /* 未知 */ getLabel(/* TODO 参数 */);  // ?getLabel@EV_Toolbar_LabelSet@@QAEPAVEV_Toolbar_Label@@H@Z
    public const /* 未知 */ getLanguage(/* TODO 参数 */);  // ?getLanguage@EV_Toolbar_LabelSet@@QBEPBDXZ
    public bool setLabel(/* TODO 参数 */);  // ?setLabel@EV_Toolbar_LabelSet@@QAE_NHPBD000@Z
    public /* 未知 */ setLanguage(/* TODO 参数 */);  // ?setLanguage@EV_Toolbar_LabelSet@@QAEXPBD@Z
};

/* ---- EV_Toolbar_Layout (4 方法) ---- */
class EV_Toolbar_Layout {
public:
    public const /* 未知 */ getLayoutItem(/* TODO 参数 */);  // ?getLayoutItem@EV_Toolbar_Layout@@QBEPAVEV_Toolbar_LayoutIte
    public const /* 未知 */ getLayoutItemCount(/* TODO 参数 */);  // ?getLayoutItemCount@EV_Toolbar_Layout@@QBEIXZ
    public const /* 未知 */ getName(/* TODO 参数 */);  // ?getName@EV_Toolbar_Layout@@QBEPBDXZ
    public bool setLayoutItem(/* TODO 参数 */);  // ?setLayoutItem@EV_Toolbar_Layout@@QAE_NIHW4_ev_Toolbar_Layou
};

/* ---- EV_Toolbar_LayoutItem (2 方法) ---- */
class EV_Toolbar_LayoutItem {
public:
    public const /* 未知 */ getToolbarId(/* TODO 参数 */);  // ?getToolbarId@EV_Toolbar_LayoutItem@@QBEHXZ
    public const /* 未知 */ getToolbarLayoutFlags(/* TODO 参数 */);  // ?getToolbarLayoutFlags@EV_Toolbar_LayoutItem@@QBE?AW4_ev_Too
};

/* ---- FG_Graphic (8 方法) ---- */
class FG_Graphic {
public:
    public /* 未知 */ createFromChangeRecord(/* TODO 参数 */);  // ?createFromChangeRecord@FG_Graphic@@SAPAV1@PBVfl_ContainerLa
    public /* 未知 */ createFromStrux(/* TODO 参数 */);  // ?createFromStrux@FG_Graphic@@SAPAV1@PBVfl_ContainerLayout@@@
    virtual public /* 未知 */ getGraphicPicName(/* TODO 参数 */);  // ?getGraphicPicName@FG_Graphic@@UAEPADXZ
    virtual public /* 未知 */ getGraphicPicUseage(/* TODO 参数 */);  // ?getGraphicPicUseage@FG_Graphic@@UAE?AW4GraphicUseage@@XZ
    virtual public bool setGraphicPicName(/* TODO 参数 */);  // ?setGraphicPicName@FG_Graphic@@UAE_NPBD@Z
    virtual public bool setGraphicPicUseage(/* TODO 参数 */);  // ?setGraphicPicUseage@FG_Graphic@@UAE_NW4GraphicUseage@@@Z
    virtual public bool setHeight(/* TODO 参数 */);  // ?setHeight@FG_Graphic@@UAE_NN@Z
    virtual public bool setWidth(/* TODO 参数 */);  // ?setWidth@FG_Graphic@@UAE_NN@Z
};

/* ---- FG_GraphicRaster (21 方法) ---- */
class FG_GraphicRaster {
public:
    virtual public /* 未知 */ clone(/* TODO 参数 */);  // ?clone@FG_GraphicRaster@@UAEPAVFG_Graphic@@XZ
    public /* 未知 */ createFromChangeRecord(/* TODO 参数 */);  // ?createFromChangeRecord@FG_GraphicRaster@@SAPAVFG_Graphic@@P
    public /* 未知 */ createFromStrux(/* TODO 参数 */);  // ?createFromStrux@FG_GraphicRaster@@SAPAVFG_Graphic@@PBVfl_Co
    virtual public /* 未知 */ generateImage(/* TODO 参数 */);  // ?generateImage@FG_GraphicRaster@@UAEPAVGR_Image@@PAVGR_Graph
    virtual public const /* 未知 */ getDataId(/* TODO 参数 */);  // ?getDataId@FG_GraphicRaster@@UBEPBDXZ
    virtual public /* 未知 */ getGraphicPicName(/* TODO 参数 */);  // ?getGraphicPicName@FG_GraphicRaster@@UAEPADXZ
    virtual public /* 未知 */ getGraphicPicUseage(/* TODO 参数 */);  // ?getGraphicPicUseage@FG_GraphicRaster@@UAE?AW4GraphicUseage@
    virtual public /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@FG_GraphicRaster@@UAENXZ
    virtual public /* 未知 */ getHeightProp(/* TODO 参数 */);  // ?getHeightProp@FG_GraphicRaster@@UAEPBDXZ
    public /* 未知 */ getRaster_PNG(/* TODO 参数 */);  // ?getRaster_PNG@FG_GraphicRaster@@QAEPAVUT_ByteBuf@@XZ
    virtual public /* 未知 */ getType(/* TODO 参数 */);  // ?getType@FG_GraphicRaster@@UAE?AW4FGType@@XZ
    virtual public /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@FG_GraphicRaster@@UAENXZ
    virtual public /* 未知 */ getWidthProp(/* TODO 参数 */);  // ?getWidthProp@FG_GraphicRaster@@UAEPBDXZ
    virtual public /* 未知 */ insertAtStrux(/* TODO 参数 */);  // ?insertAtStrux@FG_GraphicRaster@@UAEHPAVPD_Document@@IIW4_PT
    virtual public /* 未知 */ insertIntoDocument(/* TODO 参数 */);  // ?insertIntoDocument@FG_GraphicRaster@@UAEHPAVPD_Document@@II
    virtual public /* 未知 */ regenerateImage(/* TODO 参数 */);  // ?regenerateImage@FG_GraphicRaster@@UAEPAVGR_Image@@PAVGR_Gra
    virtual public bool setGraphicPicName(/* TODO 参数 */);  // ?setGraphicPicName@FG_GraphicRaster@@UAE_NPBD@Z
    virtual public bool setGraphicPicUseage(/* TODO 参数 */);  // ?setGraphicPicUseage@FG_GraphicRaster@@UAE_NW4GraphicUseage@
    virtual public bool setHeight(/* TODO 参数 */);  // ?setHeight@FG_GraphicRaster@@UAE_NN@Z
    public bool setRaster_PNG(/* TODO 参数 */);  // ?setRaster_PNG@FG_GraphicRaster@@QAE_NPAVUT_ByteBuf@@@Z
    virtual public bool setWidth(/* TODO 参数 */);  // ?setWidth@FG_GraphicRaster@@UAE_NN@Z
};

/* ---- FG_GraphicVector (17 方法) ---- */
class FG_GraphicVector {
public:
    virtual public /* 未知 */ clone(/* TODO 参数 */);  // ?clone@FG_GraphicVector@@UAEPAVFG_Graphic@@XZ
    public /* 未知 */ createFromChangeRecord(/* TODO 参数 */);  // ?createFromChangeRecord@FG_GraphicVector@@SAPAVFG_Graphic@@P
    public /* 未知 */ createFromStrux(/* TODO 参数 */);  // ?createFromStrux@FG_GraphicVector@@SAPAVFG_Graphic@@PBVfl_Co
    virtual public /* 未知 */ generateImage(/* TODO 参数 */);  // ?generateImage@FG_GraphicVector@@UAEPAVGR_Image@@PAVGR_Graph
    virtual public const /* 未知 */ getDataId(/* TODO 参数 */);  // ?getDataId@FG_GraphicVector@@UBEPBDXZ
    virtual public /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@FG_GraphicVector@@UAENXZ
    virtual public /* 未知 */ getHeightProp(/* TODO 参数 */);  // ?getHeightProp@FG_GraphicVector@@UAEPBDXZ
    virtual public /* 未知 */ getType(/* TODO 参数 */);  // ?getType@FG_GraphicVector@@UAE?AW4FGType@@XZ
    public /* 未知 */ getVector_SVG(/* TODO 参数 */);  // ?getVector_SVG@FG_GraphicVector@@QAEPAVUT_ByteBuf@@XZ
    virtual public /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@FG_GraphicVector@@UAENXZ
    virtual public /* 未知 */ getWidthProp(/* TODO 参数 */);  // ?getWidthProp@FG_GraphicVector@@UAEPBDXZ
    virtual public /* 未知 */ insertAtStrux(/* TODO 参数 */);  // ?insertAtStrux@FG_GraphicVector@@UAEHPAVPD_Document@@IIW4_PT
    virtual public /* 未知 */ insertIntoDocument(/* TODO 参数 */);  // ?insertIntoDocument@FG_GraphicVector@@UAEHPAVPD_Document@@II
    virtual public /* 未知 */ regenerateImage(/* TODO 参数 */);  // ?regenerateImage@FG_GraphicVector@@UAEPAVGR_Image@@PAVGR_Gra
    virtual public bool setGraphicPicName(/* TODO 参数 */);  // ?setGraphicPicName@FG_GraphicVector@@UAE_NPBD@Z
    virtual public bool setGraphicPicUseage(/* TODO 参数 */);  // ?setGraphicPicUseage@FG_GraphicVector@@UAE_NW4GraphicUseage@
    public bool setVector_SVG(/* TODO 参数 */);  // ?setVector_SVG@FG_GraphicVector@@QAE_NPAVUT_ByteBuf@@@Z
};

/* ---- FL_DocLayout (127 方法) ---- */
class FL_DocLayout {
public:
    public /* 未知 */ FootnoteTypeFromString(/* TODO 参数 */);  // ?FootnoteTypeFromString@FL_DocLayout@@QAE?AW4_FootnoteType@@
    public const /* 未知 */ GetChildwndActionType(/* TODO 参数 */);  // ?GetChildwndActionType@FL_DocLayout@@QBE?AW4_ChildwndActionT
    public /* 未知 */ _backgroundCheck(/* TODO 参数 */);  // ?_backgroundCheck@FL_DocLayout@@KAXPAVUT_Worker@@@Z
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@FL_DocLayout@@AAEXXZ
    public /* 未知 */ _prefsListener(/* TODO 参数 */);  // ?_prefsListener@FL_DocLayout@@KAXPAVXAP_App@@PAVXAP_Prefs@@P
    public /* 未知 */ _redrawUpdate(/* TODO 参数 */);  // ?_redrawUpdate@FL_DocLayout@@KAXPAVUT_Worker@@@Z
    protected /* 未知 */ _toggleAutoGrammar(/* TODO 参数 */);  // ?_toggleAutoGrammar@FL_DocLayout@@IAEX_N@Z
    protected /* 未知 */ _toggleAutoSmartQuotes(/* TODO 参数 */);  // ?_toggleAutoSmartQuotes@FL_DocLayout@@IAEX_N@Z
    protected /* 未知 */ _toggleAutoSpell(/* TODO 参数 */);  // ?_toggleAutoSpell@FL_DocLayout@@IAEX_N@Z
    public /* 未知 */ addBackgroundCheckReason(/* TODO 参数 */);  // ?addBackgroundCheckReason@FL_DocLayout@@QAEXI@Z
    public /* 未知 */ addEndnote(/* TODO 参数 */);  // ?addEndnote@FL_DocLayout@@QAEXPAVfl_EndnoteLayout@@@Z
    public /* 未知 */ addFootnote(/* TODO 参数 */);  // ?addFootnote@FL_DocLayout@@QAEXPAVfl_FootnoteLayout@@@Z
    public /* 未知 */ addHdrFtrSection(/* TODO 参数 */);  // ?addHdrFtrSection@FL_DocLayout@@QAEXPAVfl_SectionLayout@@@Z
    public /* 未知 */ addList(/* TODO 参数 */);  // ?addList@FL_DocLayout@@QAEXPAVfl_AutoNum@@@Z
    public /* 未知 */ addNewPage(/* TODO 参数 */);  // ?addNewPage@FL_DocLayout@@QAEPAVfp_Page@@PAVfl_DocSectionLay
    public bool addOrRemoveBlockFromTOC(/* TODO 参数 */);  // ?addOrRemoveBlockFromTOC@FL_DocLayout@@QAE_NPAVfl_BlockLayou
    public /* 未知 */ addSection(/* TODO 参数 */);  // ?addSection@FL_DocLayout@@QAEXPAVfl_DocSectionLayout@@@Z
    public bool addTOC(/* TODO 参数 */);  // ?addTOC@FL_DocLayout@@QAE_NPAVfl_TOCLayout@@@Z
    public /* 未知 */ changeDocSections(/* TODO 参数 */);  // ?changeDocSections@FL_DocLayout@@QAEXPBVPX_ChangeRecord_Stru
    public bool checkPendingWordForSpell(/* TODO 参数 */);  // ?checkPendingWordForSpell@FL_DocLayout@@QAE_NXZ
    public /* 未知 */ considerPendingSmartQuoteCandidate(/* TODO 参数 */);  // ?considerPendingSmartQuoteCandidate@FL_DocLayout@@QAEXXZ
    public /* 未知 */ considerSmartQuoteCandidateAt(/* TODO 参数 */);  // ?considerSmartQuoteCandidateAt@FL_DocLayout@@QAEXPAVfl_Block
    public /* 未知 */ countEndnotes(/* TODO 参数 */);  // ?countEndnotes@FL_DocLayout@@QAEIXZ
    public /* 未知 */ countFootnotes(/* TODO 参数 */);  // ?countFootnotes@FL_DocLayout@@QAEIXZ
    public /* 未知 */ countPages(/* TODO 参数 */);  // ?countPages@FL_DocLayout@@QAEIXZ
    public /* 未知 */ deleteEmptyColumnsAndPages(/* TODO 参数 */);  // ?deleteEmptyColumnsAndPages@FL_DocLayout@@QAEXXZ
    public /* 未知 */ deleteEmptyPages(/* TODO 参数 */);  // ?deleteEmptyPages@FL_DocLayout@@QAEX_N@Z
    public /* 未知 */ deletePage(/* TODO 参数 */);  // ?deletePage@FL_DocLayout@@QAEXPAVfp_Page@@_N@Z
    public /* 未知 */ dequeueAll(/* TODO 参数 */);  // ?dequeueAll@FL_DocLayout@@QAEXXZ
    public bool dequeueBlockForBackgroundCheck(/* TODO 参数 */);  // ?dequeueBlockForBackgroundCheck@FL_DocLayout@@QAE_NPAVfl_Blo
    public /* 未知 */ fillLayouts(/* TODO 参数 */);  // ?fillLayouts@FL_DocLayout@@QAEXW4_ChildwndActionType@1@@Z
    public bool fillTOC(/* TODO 参数 */);  // ?fillTOC@FL_DocLayout@@QAE_NPAVfl_TOCLayout@@@Z
    public const /* 未知 */ findBlockAtPosition(/* TODO 参数 */);  // ?findBlockAtPosition@FL_DocLayout@@QBEPAVfl_BlockLayout@@I@Z
    public /* 未知 */ findBlockAtPositionReverse(/* TODO 参数 */);  // ?findBlockAtPositionReverse@FL_DocLayout@@QAEPAVfl_BlockLayo
    public /* 未知 */ findEndnoteLayout(/* TODO 参数 */);  // ?findEndnoteLayout@FL_DocLayout@@QAEPAVfl_EndnoteLayout@@I@Z
    public /* 未知 */ findFont(/* TODO 参数 */);  // ?findFont@FL_DocLayout@@QAEPBVGR_Font@@PBVPP_AttrProp@@00_N@
    public /* 未知 */ findFootnoteLayout(/* TODO 参数 */);  // ?findFootnoteLayout@FL_DocLayout@@QAEPAVfl_FootnoteLayout@@I
    public /* 未知 */ findPage(/* TODO 参数 */);  // ?findPage@FL_DocLayout@@QAEHPAVfp_Page@@@Z
    public const /* 未知 */ findSectionForHdrFtr(/* TODO 参数 */);  // ?findSectionForHdrFtr@FL_DocLayout@@QBEPAVfl_DocSectionLayou
    public /* 未知 */ formatAll(/* TODO 参数 */);  // ?formatAll@FL_DocLayout@@QAEXXZ
    public const bool getAutoGrammarCheck(/* TODO 参数 */);  // ?getAutoGrammarCheck@FL_DocLayout@@QBE_NXZ
    public const bool getAutoSpellCheck(/* TODO 参数 */);  // ?getAutoSpellCheck@FL_DocLayout@@QBE_NXZ
    public const /* 未知 */ getBackgroundCheckReasons(/* TODO 参数 */);  // ?getBackgroundCheckReasons@FL_DocLayout@@QBEIXZ
    public /* 未知 */ getDocSecForEndnote(/* TODO 参数 */);  // ?getDocSecForEndnote@FL_DocLayout@@QAEPAVfl_DocSectionLayout
    public /* 未知 */ getDocSize(/* TODO 参数 */);  // ?getDocSize@FL_DocLayout@@QAEIXZ
    public const /* 未知 */ getDocument(/* TODO 参数 */);  // ?getDocument@FL_DocLayout@@QBEPAVPD_Document@@XZ
    public /* 未知 */ getEmbedManager(/* TODO 参数 */);  // ?getEmbedManager@FL_DocLayout@@QAEPAVGR_EmbedManager@@PBD@Z
    public const /* 未知 */ getEndnoteType(/* TODO 参数 */);  // ?getEndnoteType@FL_DocLayout@@QBE?AW4_FootnoteType@@XZ
    public /* 未知 */ getEndnoteVal(/* TODO 参数 */);  // ?getEndnoteVal@FL_DocLayout@@QAEHI@Z
    public /* 未知 */ getFirstPage(/* TODO 参数 */);  // ?getFirstPage@FL_DocLayout@@QAEPAVfp_Page@@XZ
    public const /* 未知 */ getFirstSection(/* TODO 参数 */);  // ?getFirstSection@FL_DocLayout@@QBEPAVfl_DocSectionLayout@@XZ
    public const /* 未知 */ getFootnoteType(/* TODO 参数 */);  // ?getFootnoteType@FL_DocLayout@@QBE?AW4_FootnoteType@@XZ
    public /* 未知 */ getFootnoteVal(/* TODO 参数 */);  // ?getFootnoteVal@FL_DocLayout@@QAEHI@Z
    public const /* 未知 */ getGraphicTick(/* TODO 参数 */);  // ?getGraphicTick@FL_DocLayout@@QBEIXZ
    public const /* 未知 */ getGraphics(/* TODO 参数 */);  // ?getGraphics@FL_DocLayout@@QBEPAVGR_Graphics@@XZ
    public /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@FL_DocLayout@@QAEHXZ
    public const /* 未知 */ getInitialEndVal(/* TODO 参数 */);  // ?getInitialEndVal@FL_DocLayout@@QBEHXZ
    public const /* 未知 */ getInitialFootVal(/* TODO 参数 */);  // ?getInitialFootVal@FL_DocLayout@@QBEHXZ
    public const /* 未知 */ getLID(/* TODO 参数 */);  // ?getLID@FL_DocLayout@@QBEIXZ
    public /* 未知 */ getLastPage(/* TODO 参数 */);  // ?getLastPage@FL_DocLayout@@QAEPAVfp_Page@@XZ
    public const /* 未知 */ getLastSection(/* TODO 参数 */);  // ?getLastSection@FL_DocLayout@@QBEPAVfl_DocSectionLayout@@XZ
    public const /* 未知 */ getListByID(/* TODO 参数 */);  // ?getListByID@FL_DocLayout@@QBEPAVfl_AutoNum@@I@Z
    public const /* 未知 */ getListsCount(/* TODO 参数 */);  // ?getListsCount@FL_DocLayout@@QBEIXZ
    public bool getMatchingBlocksFromTOCs(/* TODO 参数 */);  // ?getMatchingBlocksFromTOCs@FL_DocLayout@@QAE_NPAVfl_BlockLay
    public /* 未知 */ getNthEndnote(/* TODO 参数 */);  // ?getNthEndnote@FL_DocLayout@@QAEPAVfl_EndnoteLayout@@H@Z
    public /* 未知 */ getNthFootnote(/* TODO 参数 */);  // ?getNthFootnote@FL_DocLayout@@QAEPAVfl_FootnoteLayout@@H@Z
    public const /* 未知 */ getNthList(/* TODO 参数 */);  // ?getNthList@FL_DocLayout@@QBEPAVfl_AutoNum@@I@Z
    public /* 未知 */ getNthPage(/* TODO 参数 */);  // ?getNthPage@FL_DocLayout@@QAEPAVfp_Page@@H@Z
    public /* 未知 */ getNthTOC(/* TODO 参数 */);  // ?getNthTOC@FL_DocLayout@@QAEPAVfl_TOCLayout@@H@Z
    public /* 未知 */ getNumTOCs(/* TODO 参数 */);  // ?getNumTOCs@FL_DocLayout@@QAEHXZ
    public const /* 未知 */ getOffsetForSmartQuote(/* TODO 参数 */);  // ?getOffsetForSmartQuote@FL_DocLayout@@QBEIXZ
    public /* 未知 */ getPendingBlockForGrammar(/* TODO 参数 */);  // ?getPendingBlockForGrammar@FL_DocLayout@@QAEPAVfl_BlockLayou
    public const /* 未知 */ getPendingBlockForSmartQuote(/* TODO 参数 */);  // ?getPendingBlockForSmartQuote@FL_DocLayout@@QBEPAVfl_BlockLa
    public const /* 未知 */ getPendingBlockForSpell(/* TODO 参数 */);  // ?getPendingBlockForSpell@FL_DocLayout@@QBEPAVfl_BlockLayout@
    public const /* 未知 */ getPendingWordForSpell(/* TODO 参数 */);  // ?getPendingWordForSpell@FL_DocLayout@@QBEPAVfl_PartOfBlock@@
    public /* 未知 */ getPercentFilled(/* TODO 参数 */);  // ?getPercentFilled@FL_DocLayout@@QAEHXZ
    public const bool getPlaceEndAtDocEnd(/* TODO 参数 */);  // ?getPlaceEndAtDocEnd@FL_DocLayout@@QBE_NXZ
    public const bool getPlaceEndAtSecEnd(/* TODO 参数 */);  // ?getPlaceEndAtSecEnd@FL_DocLayout@@QBE_NXZ
    public /* 未知 */ getRedrawCount(/* TODO 参数 */);  // ?getRedrawCount@FL_DocLayout@@QAEIXZ
    public const bool getRestartEndOnSection(/* TODO 参数 */);  // ?getRestartEndOnSection@FL_DocLayout@@QBE_NXZ
    public const bool getRestartFootOnPage(/* TODO 参数 */);  // ?getRestartFootOnPage@FL_DocLayout@@QBE_NXZ
    public const bool getRestartFootOnSection(/* TODO 参数 */);  // ?getRestartFootOnSection@FL_DocLayout@@QBE_NXZ
    public /* 未知 */ getSkipUpdates(/* TODO 参数 */);  // ?getSkipUpdates@FL_DocLayout@@QAEIXZ
    public const bool getSpellCheckCaps(/* TODO 参数 */);  // ?getSpellCheckCaps@FL_DocLayout@@QBE_NXZ
    public const bool getSpellCheckInternet(/* TODO 参数 */);  // ?getSpellCheckInternet@FL_DocLayout@@QBE_NXZ
    public const bool getSpellCheckNumbers(/* TODO 参数 */);  // ?getSpellCheckNumbers@FL_DocLayout@@QBE_NXZ
    public /* 未知 */ getStringFromFootnoteVal(/* TODO 参数 */);  // ?getStringFromFootnoteVal@FL_DocLayout@@QAEXAAVUT_String@@HW
    public const /* 未知 */ getView(/* TODO 参数 */);  // ?getView@FL_DocLayout@@QBEPAVFV_View@@XZ
    public /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@FL_DocLayout@@QAEHXZ
    public const bool hasBackgroundCheckReason(/* TODO 参数 */);  // ?hasBackgroundCheckReason@FL_DocLayout@@QBE_NI@Z
    public /* 未知 */ incrementGraphicTick(/* TODO 参数 */);  // ?incrementGraphicTick@FL_DocLayout@@QAEXXZ
    public /* 未知 */ insertEndnoteContainer(/* TODO 参数 */);  // ?insertEndnoteContainer@FL_DocLayout@@QAEXPAVfp_EndnoteConta
    public /* 未知 */ insertSectionAfter(/* TODO 参数 */);  // ?insertSectionAfter@FL_DocLayout@@QAEXPAVfl_DocSectionLayout
    public bool isBlockInTOC(/* TODO 参数 */);  // ?isBlockInTOC@FL_DocLayout@@QAE_NPAVfl_BlockLayout@@@Z
    public const bool isLayoutDeleting(/* TODO 参数 */);  // ?isLayoutDeleting@FL_DocLayout@@QBE_NXZ
    public const bool isLayoutFilling(/* TODO 参数 */);  // ?isLayoutFilling@FL_DocLayout@@QBE_NXZ
    public const bool isPendingWordForSpell(/* TODO 参数 */);  // ?isPendingWordForSpell@FL_DocLayout@@QBE_NXZ
    public /* 未知 */ notifyBlockIsBeingDeleted(/* TODO 参数 */);  // ?notifyBlockIsBeingDeleted@FL_DocLayout@@QAEXPAVfl_BlockLayo
    public /* 未知 */ notifyListeners(/* TODO 参数 */);  // ?notifyListeners@FL_DocLayout@@QAEXI@Z
    public /* 未知 */ queueAll(/* TODO 参数 */);  // ?queueAll@FL_DocLayout@@QAEXI@Z
    public /* 未知 */ queueBlockForBackgroundCheck(/* TODO 参数 */);  // ?queueBlockForBackgroundCheck@FL_DocLayout@@QAEXIPAVfl_Block
    public /* 未知 */ rebuildFromHere(/* TODO 参数 */);  // ?rebuildFromHere@FL_DocLayout@@QAEXPAVfl_DocSectionLayout@@@
    public /* 未知 */ recalculateTOCFields(/* TODO 参数 */);  // ?recalculateTOCFields@FL_DocLayout@@QAEXXZ
    public /* 未知 */ recheckIgnoredWords(/* TODO 参数 */);  // ?recheckIgnoredWords@FL_DocLayout@@QAEXXZ
    public /* 未知 */ removeBackgroundCheckReason(/* TODO 参数 */);  // ?removeBackgroundCheckReason@FL_DocLayout@@QAEXI@Z
    public bool removeBlockFromTOC(/* TODO 参数 */);  // ?removeBlockFromTOC@FL_DocLayout@@QAE_NPAVfl_BlockLayout@@@Z
    public /* 未知 */ removeEndnote(/* TODO 参数 */);  // ?removeEndnote@FL_DocLayout@@QAEXPAVfl_EndnoteLayout@@@Z
    public /* 未知 */ removeEndnoteContainer(/* TODO 参数 */);  // ?removeEndnoteContainer@FL_DocLayout@@QAEXPAVfp_EndnoteConta
    public /* 未知 */ removeFootnote(/* TODO 参数 */);  // ?removeFootnote@FL_DocLayout@@QAEXPAVfl_FootnoteLayout@@@Z
    public /* 未知 */ removeHdrFtrSection(/* TODO 参数 */);  // ?removeHdrFtrSection@FL_DocLayout@@QAEXPAVfl_SectionLayout@@
    public /* 未知 */ removeSection(/* TODO 参数 */);  // ?removeSection@FL_DocLayout@@QAEXPAVfl_DocSectionLayout@@@Z
    public bool removeTOC(/* TODO 参数 */);  // ?removeTOC@FL_DocLayout@@QAE_NPAVfl_TOCLayout@@@Z
    public /* 未知 */ setGraphics(/* TODO 参数 */);  // ?setGraphics@FL_DocLayout@@QAEXPAVGR_Graphics@@@Z
    public /* 未知 */ setLayoutIsFilling(/* TODO 参数 */);  // ?setLayoutIsFilling@FL_DocLayout@@QAEX_N@Z
    public /* 未知 */ setPendingBlockForGrammar(/* TODO 参数 */);  // ?setPendingBlockForGrammar@FL_DocLayout@@QAEXPAVfl_BlockLayo
    public /* 未知 */ setPendingSmartQuote(/* TODO 参数 */);  // ?setPendingSmartQuote@FL_DocLayout@@QAEXPAVfl_BlockLayout@@I
    public /* 未知 */ setPendingWordForSpell(/* TODO 参数 */);  // ?setPendingWordForSpell@FL_DocLayout@@QAEXPAVfl_BlockLayout@
    public /* 未知 */ setPercentFilled(/* TODO 参数 */);  // ?setPercentFilled@FL_DocLayout@@QAEXH@Z
    public /* 未知 */ setSkipUpdates(/* TODO 参数 */);  // ?setSkipUpdates@FL_DocLayout@@QAEXI@Z
    public /* 未知 */ setView(/* TODO 参数 */);  // ?setView@FL_DocLayout@@QAEXPAVFV_View@@@Z
    public const bool touchesPendingWordForSpell(/* TODO 参数 */);  // ?touchesPendingWordForSpell@FL_DocLayout@@QBE_NPAVfl_BlockLa
    public /* 未知 */ triggerPendingBlock(/* TODO 参数 */);  // ?triggerPendingBlock@FL_DocLayout@@QAEXPAVfl_BlockLayout@@@Z
    public /* 未知 */ updateColor(/* TODO 参数 */);  // ?updateColor@FL_DocLayout@@QAEXXZ
    public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@FL_DocLayout@@QAEXXZ
    public /* 未知 */ updatePropsNoRebuild(/* TODO 参数 */);  // ?updatePropsNoRebuild@FL_DocLayout@@QAEXXZ
    public /* 未知 */ updatePropsRebuild(/* TODO 参数 */);  // ?updatePropsRebuild@FL_DocLayout@@QAEXXZ
    public bool updateTOCsOnBookmarkChange(/* TODO 参数 */);  // ?updateTOCsOnBookmarkChange@FL_DocLayout@@QAE_NPBD@Z
};

/* ---- FV_FrameEdit (24 方法) ---- */
class FV_FrameEdit {
public:
    public /* 未知 */ _autoScroll(/* TODO 参数 */);  // ?_autoScroll@FV_FrameEdit@@SAXPAVUT_Worker@@@Z
    public /* 未知 */ _beginGlob(/* TODO 参数 */);  // ?_beginGlob@FV_FrameEdit@@QAEXXZ
    public /* 未知 */ _endGlob(/* TODO 参数 */);  // ?_endGlob@FV_FrameEdit@@QAEXXZ
    public /* 未知 */ deleteFrame(/* TODO 参数 */);  // ?deleteFrame@FV_FrameEdit@@QAEXPAVfl_FrameLayout@@@Z
    public /* 未知 */ drawFrame(/* TODO 参数 */);  // ?drawFrame@FV_FrameEdit@@QAEX_N@Z
    public const /* 未知 */ getDoc(/* TODO 参数 */);  // ?getDoc@FV_FrameEdit@@QBEPAVPD_Document@@XZ
    public /* 未知 */ getFrameContainer(/* TODO 参数 */);  // ?getFrameContainer@FV_FrameEdit@@QAEPAVfp_FrameContainer@@XZ
    public const /* 未知 */ getFrameEditDragWhat(/* TODO 参数 */);  // ?getFrameEditDragWhat@FV_FrameEdit@@QBE?AW4_FV_FrameEditDrag
    public const /* 未知 */ getFrameEditMode(/* TODO 参数 */);  // ?getFrameEditMode@FV_FrameEdit@@QBE?AW4_FV_FrameEditMode@@XZ
    public /* 未知 */ getFrameLayout(/* TODO 参数 */);  // ?getFrameLayout@FV_FrameEdit@@QAEPAVfl_FrameLayout@@XZ
    public bool getFrameStrings(/* TODO 参数 */);  // ?getFrameStrings@FV_FrameEdit@@QAE_NHHAAVUT_String@@0000000P
    public /* 未知 */ getGlobCount(/* TODO 参数 */);  // ?getGlobCount@FV_FrameEdit@@QAEHXZ
    public const /* 未知 */ getGraphics(/* TODO 参数 */);  // ?getGraphics@FV_FrameEdit@@QBEPAVGR_Graphics@@XZ
    public const /* 未知 */ getLayout(/* TODO 参数 */);  // ?getLayout@FV_FrameEdit@@QBEPAVFL_DocLayout@@XZ
    public const /* 未知 */ haveDragged(/* TODO 参数 */);  // ?haveDragged@FV_FrameEdit@@QBEHXZ
    public const bool isActive(/* TODO 参数 */);  // ?isActive@FV_FrameEdit@@QBE_NXZ
    public const bool isImageWrapper(/* TODO 参数 */);  // ?isImageWrapper@FV_FrameEdit@@QBE_NXZ
    public /* 未知 */ mouseDrag(/* TODO 参数 */);  // ?mouseDrag@FV_FrameEdit@@QAEXHH@Z
    public /* 未知 */ mouseLeftPress(/* TODO 参数 */);  // ?mouseLeftPress@FV_FrameEdit@@QAEXHH@Z
    public /* 未知 */ mouseMotion(/* TODO 参数 */);  // ?mouseMotion@FV_FrameEdit@@QAE?AW4_FV_FrameEditDragWhat@@HH@
    public /* 未知 */ mouseRelease(/* TODO 参数 */);  // ?mouseRelease@FV_FrameEdit@@QAEXHH@Z
    public /* 未知 */ setDragType(/* TODO 参数 */);  // ?setDragType@FV_FrameEdit@@QAEXHH_N@Z
    public /* 未知 */ setMode(/* TODO 参数 */);  // ?setMode@FV_FrameEdit@@QAEXW4_FV_FrameEditMode@@@Z
    public /* 未知 */ setPointInside(/* TODO 参数 */);  // ?setPointInside@FV_FrameEdit@@QAEXXZ
};

/* ---- FV_Selection (26 方法) ---- */
class FV_Selection {
public:
    public /* 未知 */ addCellToSelection(/* TODO 参数 */);  // ?addCellToSelection@FV_Selection@@QAEXPAVfl_CellLayout@@@Z
    public /* 未知 */ addSelectedRange(/* TODO 参数 */);  // ?addSelectedRange@FV_Selection@@QAEXII_N@Z
    public /* 未知 */ checkSelectAll(/* TODO 参数 */);  // ?checkSelectAll@FV_Selection@@QAEXXZ
    public /* 未知 */ clearSelection(/* TODO 参数 */);  // ?clearSelection@FV_Selection@@QAEXXZ
    public const /* 未知 */ getDoc(/* TODO 参数 */);  // ?getDoc@FV_Selection@@QBEPAVPD_Document@@XZ
    public const /* 未知 */ getLayout(/* TODO 参数 */);  // ?getLayout@FV_Selection@@QBEPAVFL_DocLayout@@XZ
    public const /* 未知 */ getNthSelection(/* TODO 参数 */);  // ?getNthSelection@FV_Selection@@QBEPAVPD_DocumentRange@@H@Z
    public const /* 未知 */ getNumSelections(/* TODO 参数 */);  // ?getNumSelections@FV_Selection@@QBEHXZ
    public const /* 未知 */ getPrevSelectionMode(/* TODO 参数 */);  // ?getPrevSelectionMode@FV_Selection@@QBE?AW4_FV_SelectionMode
    public /* 未知 */ getSelectedTOC(/* TODO 参数 */);  // ?getSelectedTOC@FV_Selection@@QAEPAVfl_TOCLayout@@XZ
    public const /* 未知 */ getSelectionAnchor(/* TODO 参数 */);  // ?getSelectionAnchor@FV_Selection@@QBEIXZ
    public const /* 未知 */ getSelectionLeftAnchor(/* TODO 参数 */);  // ?getSelectionLeftAnchor@FV_Selection@@QBEIXZ
    public const /* 未知 */ getSelectionMode(/* TODO 参数 */);  // ?getSelectionMode@FV_Selection@@QBE?AW4_FV_SelectionMode@@XZ
    public const /* 未知 */ getSelectionRightAnchor(/* TODO 参数 */);  // ?getSelectionRightAnchor@FV_Selection@@QBEIXZ
    public /* 未知 */ getTableLayout(/* TODO 参数 */);  // ?getTableLayout@FV_Selection@@QAEPAVfl_TableLayout@@XZ
    public const bool isPosSelected(/* TODO 参数 */);  // ?isPosSelected@FV_Selection@@QBE_NI@Z
    public const bool isSelectAll(/* TODO 参数 */);  // ?isSelectAll@FV_Selection@@QBE_NXZ
    public const bool isSelected(/* TODO 参数 */);  // ?isSelected@FV_Selection@@QBE_NXZ
    public /* 未知 */ pasteRowOrCol(/* TODO 参数 */);  // ?pasteRowOrCol@FV_Selection@@QAEXXZ
    public /* 未知 */ setMode(/* TODO 参数 */);  // ?setMode@FV_Selection@@QAEXW4_FV_SelectionMode@@@Z
    public /* 未知 */ setSelectAll(/* TODO 参数 */);  // ?setSelectAll@FV_Selection@@QAEX_N@Z
    public /* 未知 */ setSelectionAnchor(/* TODO 参数 */);  // ?setSelectionAnchor@FV_Selection@@QAEXI@Z
    public /* 未知 */ setSelectionLeftAnchor(/* TODO 参数 */);  // ?setSelectionLeftAnchor@FV_Selection@@QAEXI@Z
    public /* 未知 */ setSelectionRightAnchor(/* TODO 参数 */);  // ?setSelectionRightAnchor@FV_Selection@@QAEXI@Z
    public /* 未知 */ setTOCSelected(/* TODO 参数 */);  // ?setTOCSelected@FV_Selection@@QAEXPAVfl_TOCLayout@@@Z
    public /* 未知 */ setTableLayout(/* TODO 参数 */);  // ?setTableLayout@FV_Selection@@QAEXPAVfl_TableLayout@@@Z
};

/* ---- FV_View (609 方法) ---- */
class FV_View {
public:
    public /* 未知 */ AddComposite(/* TODO 参数 */);  // ?AddComposite@FV_View@@QAEHPAVEMRElement@@PBDH@Z
    public /* 未知 */ AddElement(/* TODO 参数 */);  // ?AddElement@FV_View@@QAEHPAVEMRElement@@PBD1@Z
    public bool CanHyperLinkExt(/* TODO 参数 */);  // ?CanHyperLinkExt@FV_View@@QAE_NPBD@Z
    public /* 未知 */ ChangeRgnHighlight(/* TODO 参数 */);  // ?ChangeRgnHighlight@FV_View@@QAEXW4_PTChangeFmt@@PBVppt_Regi
    public /* 未知 */ GetCursorStatus(/* TODO 参数 */);  // ?GetCursorStatus@FV_View@@QAE?AW4_PPTCursorStatus@@XZ
    public bool GetFistAndLastFragofParaKey(/* TODO 参数 */);  // ?GetFistAndLastFragofParaKey@FV_View@@QAE_NPAVpf_Frag@@AAPAV
    public bool GetParagrapInfo(/* TODO 参数 */);  // ?GetParagrapInfo@FV_View@@QAE_NV?$basic_string@DU?$char_trai
    public /* 未知 */ GetParagrapPos(/* TODO 参数 */);  // ?GetParagrapPos@FV_View@@QAEHAAV?$basic_string@DU?$char_trai
    public /* 未知 */ HCFV_ContiuePrintDrawHDROrNot(/* TODO 参数 */);  // ?HCFV_ContiuePrintDrawHDROrNot@FV_View@@QAEHXZ
    public /* 未知 */ HCFV_GetElemList(/* TODO 参数 */);  // ?HCFV_GetElemList@FV_View@@QAEHABV?$basic_string@DU?$char_tr
    public bool HCFV_GetElementDispalyedByElemname(/* TODO 参数 */);  // ?HCFV_GetElementDispalyedByElemname@FV_View@@QAE_NPADAAV?$ba
    public /* 未知 */ HCFV_GetRefElement(/* TODO 参数 */);  // ?HCFV_GetRefElement@FV_View@@QAEHAAV?$basic_string@DU?$char_
    public /* 未知 */ HCFV_GetRefElement(/* TODO 参数 */);  // ?HCFV_GetRefElement@FV_View@@QAEHABV?$basic_string@DU?$char_
    public bool HCFV_GetRelashipByParakey(/* TODO 参数 */);  // ?HCFV_GetRelashipByParakey@FV_View@@QAE_NPBD@Z
    public /* 未知 */ HCFV_changeText2Para(/* TODO 参数 */);  // ?HCFV_changeText2Para@FV_View@@QAEHPBUEMRElementMapStruct@@@
    public bool HCFV_cleanDocBackColor(/* TODO 参数 */);  // ?HCFV_cleanDocBackColor@FV_View@@QAE_NXZ
    public bool HCFV_cleanExtraProps(/* TODO 参数 */);  // ?HCFV_cleanExtraProps@FV_View@@QAE_NXZ
    public bool HCFV_cleanExtraPropsByStringRepalce(/* TODO 参数 */);  // ?HCFV_cleanExtraPropsByStringRepalce@FV_View@@QAE_NAAV?$basi
    public bool HCFV_cleanExtraPropsofPtxBlock(/* TODO 参数 */);  // ?HCFV_cleanExtraPropsofPtxBlock@FV_View@@QAE_NXZ
    public /* 未知 */ HCFV_delEmptyPage(/* TODO 参数 */);  // ?HCFV_delEmptyPage@FV_View@@QAEHXZ
    public bool HCFV_getElempropsByType(/* TODO 参数 */);  // ?HCFV_getElempropsByType@FV_View@@QAE_NHAAV?$basic_string@DU
    public bool HCFV_modifySpanFmtWithMoreProps(/* TODO 参数 */);  // ?HCFV_modifySpanFmtWithMoreProps@FV_View@@QAE_NW4_PTChangeFm
    public bool HCFV_modifyStruxFmtWithMoreProps(/* TODO 参数 */);  // ?HCFV_modifyStruxFmtWithMoreProps@FV_View@@QAE_NW4_PTChangeF
    public /* 未知 */ HCFV_setElemValue(/* TODO 参数 */);  // ?HCFV_setElemValue@FV_View@@QAEHPBD00@Z
    public /* 未知 */ RestoreSavedPieceTableState(/* TODO 参数 */);  // ?RestoreSavedPieceTableState@FV_View@@QAEXXZ
    public /* 未知 */ ReversionInfoSendToPB(/* TODO 参数 */);  // ?ReversionInfoSendToPB@FV_View@@QAEXII@Z
    virtual public bool RgnEventFire(/* TODO 参数 */);  // ?RgnEventFire@FV_View@@UAE_NW4TEventType@@I@Z
    public /* 未知 */ SetupSavePieceTableState(/* TODO 参数 */);  // ?SetupSavePieceTableState@FV_View@@QAEXXZ
    public /* 未知 */ UW_Assert(/* TODO 参数 */);  // ?UW_Assert@FV_View@@QAEX_NV?$basic_string@DU?$char_traits@D@
    public /* 未知 */ UW_BuildParaInfo(/* TODO 参数 */);  // ?UW_BuildParaInfo@FV_View@@QAEXXZ
    public bool UW_CalcCurrState(/* TODO 参数 */);  // ?UW_CalcCurrState@FV_View@@QAE_NPAVppt_RegionState@@_N@Z
    public bool UW_CalcParaInfo(/* TODO 参数 */);  // ?UW_CalcParaInfo@FV_View@@QAE_NAAV?$basic_string@DU?$char_tr
    public bool UW_CheckElem(/* TODO 参数 */);  // ?UW_CheckElem@FV_View@@QAE_NII@Z
    public bool UW_CheckInitStatus(/* TODO 参数 */);  // ?UW_CheckInitStatus@FV_View@@QAE_NPAVppt_RegionState@@@Z
    public bool UW_CheckParaElem(/* TODO 参数 */);  // ?UW_CheckParaElem@FV_View@@QAE_NII@Z
    public bool UW_CheckParaElemContainSignature(/* TODO 参数 */);  // ?UW_CheckParaElemContainSignature@FV_View@@QAE_NII@Z
    public bool UW_CheckSectionpf(/* TODO 参数 */);  // ?UW_CheckSectionpf@FV_View@@QAE_NI@Z
    public bool UW_ConvertTextToElem(/* TODO 参数 */);  // ?UW_ConvertTextToElem@FV_View@@QAE_NXZ
    public bool UW_DelParaContent(/* TODO 参数 */);  // ?UW_DelParaContent@FV_View@@QAE_NI@Z
    public bool UW_DocRef_GetData(/* TODO 参数 */);  // ?UW_DocRef_GetData@FV_View@@QAE_NV?$basic_string@DU?$char_tr
    public /* 未知 */ UW_DocRef_SetData(/* TODO 参数 */);  // ?UW_DocRef_SetData@FV_View@@QAEHV?$basic_string@DU?$char_tra
    public /* 未知 */ UW_FindEMRDataItem(/* TODO 参数 */);  // ?UW_FindEMRDataItem@FV_View@@QAEPAUEMRDataItem@@V?$basic_str
    public bool UW_GetContentBypath(/* TODO 参数 */);  // ?UW_GetContentBypath@FV_View@@QAE_NV?$basic_string@DU?$char_
    public bool UW_GetCurrElement(/* TODO 参数 */);  // ?UW_GetCurrElement@FV_View@@QAE_NAAPAVEMRElement@@@Z
    public /* 未知 */ UW_GetCurrParaElem(/* TODO 参数 */);  // ?UW_GetCurrParaElem@FV_View@@QAEPAVEMRParagraph@@XZ
    public /* 未知 */ UW_GetCurrRegionFrag(/* TODO 参数 */);  // ?UW_GetCurrRegionFrag@FV_View@@QAEXPAVppt_RegionState@@@Z
    public /* 未知 */ UW_GetDataLen_EMRElementMapStruct(/* TODO 参数 */);  // ?UW_GetDataLen_EMRElementMapStruct@FV_View@@QAEXIAAI@Z
    public /* 未知 */ UW_GetElemtreeByparakey(/* TODO 参数 */);  // ?UW_GetElemtreeByparakey@FV_View@@QAEXV?$basic_string@DU?$ch
    public /* 未知 */ UW_GetElemtreeBypathname(/* TODO 参数 */);  // ?UW_GetElemtreeBypathname@FV_View@@QAEXAAVUT_String@@@Z
    public /* 未知 */ UW_GetFirstpfByParapath(/* TODO 参数 */);  // ?UW_GetFirstpfByParapath@FV_View@@QAEPAVpf_Frag@@V?$basic_st
    public /* 未知 */ UW_GetInstancetreeByparakey(/* TODO 参数 */);  // ?UW_GetInstancetreeByparakey@FV_View@@QAEXV?$basic_string@DU
    public bool UW_GetParaCaption(/* TODO 参数 */);  // ?UW_GetParaCaption@FV_View@@QAE_NPAVpf_Frag@@PAPBVUT_UTF8Str
    public bool UW_GetParaFragPair(/* TODO 参数 */);  // ?UW_GetParaFragPair@FV_View@@QAE_NV?$basic_string@DU?$char_t
    public bool UW_GetPositionByPathprop(/* TODO 参数 */);  // ?UW_GetPositionByPathprop@FV_View@@QAE_NV?$basic_string@DU?$
    public bool UW_GetRegionColor(/* TODO 参数 */);  // ?UW_GetRegionColor@FV_View@@QAE_NPBVppt_RegionState@@PAPBVUT
    public bool UW_GetRegionText(/* TODO 参数 */);  // ?UW_GetRegionText@FV_View@@QAE_NPBVppt_RegionState@@PAPBVUT_
    public bool UW_GetRegionTextExceptReversion(/* TODO 参数 */);  // ?UW_GetRegionTextExceptReversion@FV_View@@QAE_NABVppt_Region
    public bool UW_GetRegstateBypath(/* TODO 参数 */);  // ?UW_GetRegstateBypath@FV_View@@QAE_NI_NPBDPAVppt_AdvRegionSt
    public bool UW_GetRegstateBypath(/* TODO 参数 */);  // ?UW_GetRegstateBypath@FV_View@@QAE_NI_NPBDPAVppt_RegionState
    public bool UW_GetRegstateBypath(/* TODO 参数 */);  // ?UW_GetRegstateBypath@FV_View@@QAE_NV?$basic_string@DU?$char
    public bool UW_GetRegstateBypath(/* TODO 参数 */);  // ?UW_GetRegstateBypath@FV_View@@QAE_NV?$basic_string@DU?$char
    virtual public bool UW_GetRegstateBypath(/* TODO 参数 */);  // ?UW_GetRegstateBypath@FV_View@@UAE_NV?$basic_string@DU?$char
    public /* 未知 */ UW_GetRegtypeBypath(/* TODO 参数 */);  // ?UW_GetRegtypeBypath@FV_View@@QAE?AW4PPTRegionType@@V?$basic
    public /* 未知 */ UW_Init_EMRElementMapStruct(/* TODO 参数 */);  // ?UW_Init_EMRElementMapStruct@FV_View@@QAEXAAI@Z
    public bool UW_LoadFromXML_BE(/* TODO 参数 */);  // ?UW_LoadFromXML_BE@FV_View@@QAE_NHI@Z
    public /* 未知 */ UW_LocateCursorByPathprop(/* TODO 参数 */);  // ?UW_LocateCursorByPathprop@FV_View@@QAEXV?$basic_string@DU?$
    public /* 未知 */ UW_LocateDocCursor(/* TODO 参数 */);  // ?UW_LocateDocCursor@FV_View@@QAEXW4_FVDocPos@@@Z
    public bool UW_LocateParaByParapath(/* TODO 参数 */);  // ?UW_LocateParaByParapath@FV_View@@QAE_NV?$basic_string@DU?$c
    public bool UW_PreloadParaTemplateXML(/* TODO 参数 */);  // ?UW_PreloadParaTemplateXML@FV_View@@QAE_NPBD@Z
    public /* 未知 */ UW_ReCalcElemAreaSN(/* TODO 参数 */);  // ?UW_ReCalcElemAreaSN@FV_View@@QAEXAAV?$basic_string@DU?$char
    public /* 未知 */ UW_ReCalcSN(/* TODO 参数 */);  // ?UW_ReCalcSN@FV_View@@QAEXAAV?$basic_string@DU?$char_traits@
    public bool UW_ReplaceRgnColor(/* TODO 参数 */);  // ?UW_ReplaceRgnColor@FV_View@@QAE_NPBVppt_RegionState@@PBD@Z
    public bool UW_ReplaceRgnText(/* TODO 参数 */);  // ?UW_ReplaceRgnText@FV_View@@QAE_NPAVpf_Frag@@PBD@Z
    virtual public bool UW_ReplaceRgnText(/* TODO 参数 */);  // ?UW_ReplaceRgnText@FV_View@@UAE_NPBVppt_RegionState@@PBD@Z
    public bool UW_ReplaceRgnTextCheck(/* TODO 参数 */);  // ?UW_ReplaceRgnTextCheck@FV_View@@QAE_NPBVppt_RegionState@@PB
    public /* 未知 */ UW_ResetSection(/* TODO 参数 */);  // ?UW_ResetSection@FV_View@@QAEXI@Z
    public /* 未知 */ UW_ResetState(/* TODO 参数 */);  // ?UW_ResetState@FV_View@@QAEXIPAVppt_RegionState@@@Z
    public /* 未知 */ UW_ResetState(/* TODO 参数 */);  // ?UW_ResetState@FV_View@@QAEXPAVppt_RegionState@@@Z
    public /* 未知 */ UW_SearchReferExtended(/* TODO 参数 */);  // ?UW_SearchReferExtended@FV_View@@QAEHV?$basic_string@DU?$cha
    public /* 未知 */ UW_SearchReferNotExtended(/* TODO 参数 */);  // ?UW_SearchReferNotExtended@FV_View@@QAEHV?$basic_string@DU?$
    public bool UW_SearchRegionstate(/* TODO 参数 */);  // ?UW_SearchRegionstate@FV_View@@QAE_NV?$basic_string@DU?$char
    virtual public bool UW_SearchRegionstate(/* TODO 参数 */);  // ?UW_SearchRegionstate@FV_View@@UAE_NV?$basic_string@DU?$char
    public bool UW_SetContentBypath(/* TODO 参数 */);  // ?UW_SetContentBypath@FV_View@@QAE_NV?$basic_string@DU?$char_
    public bool UW_SetCurrParacaption(/* TODO 参数 */);  // ?UW_SetCurrParacaption@FV_View@@QAE_NPBD@Z
    public /* 未知 */ UW_SetCursorStatus(/* TODO 参数 */);  // ?UW_SetCursorStatus@FV_View@@QAEXW4_PPTCursorStatus@@_N@Z
    public bool UW_SetParacaptionByParapath(/* TODO 参数 */);  // ?UW_SetParacaptionByParapath@FV_View@@QAE_NV?$basic_string@D
    public /* 未知 */ UW_SetPoint_Begin(/* TODO 参数 */);  // ?UW_SetPoint_Begin@FV_View@@QAEII_NI@Z
    public /* 未知 */ UW_SetPoint_End(/* TODO 参数 */);  // ?UW_SetPoint_End@FV_View@@QAEXII@Z
    public /* 未知 */ UW_SetRegionTail(/* TODO 参数 */);  // ?UW_SetRegionTail@FV_View@@QAEXW4_PPTCursorStatus@@@Z
    public /* 未知 */ UW_SetScriptCursorProp(/* TODO 参数 */);  // ?UW_SetScriptCursorProp@FV_View@@QAEXV?$basic_string@DU?$cha
    public /* 未知 */ UW_UpdateFormatElemInfo(/* TODO 参数 */);  // ?UW_UpdateFormatElemInfo@FV_View@@QAEXI@Z
    public /* 未知 */ UW_ViewParamsClone(/* TODO 参数 */);  // ?UW_ViewParamsClone@FV_View@@QAEXPAV1@0@Z
    public bool UW_addElement(/* TODO 参数 */);  // ?UW_addElement@FV_View@@QAE_NIPAVEMRElement@@PBD@Z
    public bool UW_addPara(/* TODO 参数 */);  // ?UW_addPara@FV_View@@QAE_NIPBDPAVEMRParagraph@@0_N0@Z
    public bool UW_addTextContent(/* TODO 参数 */);  // ?UW_addTextContent@FV_View@@QAE_NIPBD@Z
    public bool UW_delElemRegion(/* TODO 参数 */);  // ?UW_delElemRegion@FV_View@@QAE_NI@Z
    public bool UW_delParaRegion(/* TODO 参数 */);  // ?UW_delParaRegion@FV_View@@QAE_NI@Z
    public /* 未知 */ _BlockOffsetToPos(/* TODO 参数 */);  // ?_BlockOffsetToPos@FV_View@@AAEIPAVfl_BlockLayout@@I@Z
    public bool _MergeCells(/* TODO 参数 */);  // ?_MergeCells@FV_View@@QAE_NII_N@Z
    protected /* 未知 */ _adjustDeletePosition(/* TODO 参数 */);  // ?_adjustDeletePosition@FV_View@@IAEXAAI0@Z
    public /* 未知 */ _autoScroll(/* TODO 参数 */);  // ?_autoScroll@FV_View@@KAXPAVUT_Worker@@@Z
    public /* 未知 */ _changeCellParams(/* TODO 参数 */);  // ?_changeCellParams@FV_View@@QAEHIPBX@Z
    public bool _changeCellTo(/* TODO 参数 */);  // ?_changeCellTo@FV_View@@QAE_NIHHHHHH@Z
    protected bool _charInsert(/* TODO 参数 */);  // ?_charInsert@FV_View@@IAE_NPBII_N@Z
    protected bool _charMotion(/* TODO 参数 */);  // ?_charMotion@FV_View@@IAE_N_NI0@Z
    protected /* 未知 */ _checkPendingWordForSpell(/* TODO 参数 */);  // ?_checkPendingWordForSpell@FV_View@@IAEXXZ
    protected bool _clearBetweenPositions(/* TODO 参数 */);  // ?_clearBetweenPositions@FV_View@@IAE_NII_N@Z
    protected /* 未知 */ _clearIfAtFmtMark(/* TODO 参数 */);  // ?_clearIfAtFmtMark@FV_View@@IAEXI@Z
    public /* 未知 */ _clearSelection(/* TODO 参数 */);  // ?_clearSelection@FV_View@@QAEXXZ
    protected /* 未知 */ _cmdEditHdrFtr(/* TODO 参数 */);  // ?_cmdEditHdrFtr@FV_View@@IAEXW4_HdrFtrType@@@Z
    public /* 未知 */ _computeFindPrefix(/* TODO 参数 */);  // ?_computeFindPrefix@FV_View@@QAEPAIPBI@Z
    protected /* 未知 */ _deleteBookmark(/* TODO 参数 */);  // ?_deleteBookmark@FV_View@@IAEHPBD_NPAI2@Z
    public bool _deleteCellAt(/* TODO 参数 */);  // ?_deleteCellAt@FV_View@@QAE_NIHH@Z
    protected /* 未知 */ _deleteHyperlink(/* TODO 参数 */);  // ?_deleteHyperlink@FV_View@@IAEHAAI_N@Z
    protected /* 未知 */ _deleteSelection(/* TODO 参数 */);  // ?_deleteSelection@FV_View@@IAEXPAVPP_AttrProp@@_N@Z
    protected /* 未知 */ _doPaste(/* TODO 参数 */);  // ?_doPaste@FV_View@@IAEX_N0I@Z
    protected /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@FV_View@@IAEXHHHH_N0@Z
    protected /* 未知 */ _drawBetweenPositions(/* TODO 参数 */);  // ?_drawBetweenPositions@FV_View@@IAEXII@Z
    protected bool _drawOrClearBetweenPositions(/* TODO 参数 */);  // ?_drawOrClearBetweenPositions@FV_View@@IAE_NII_N0@Z
    public /* 未知 */ _drawResizeHandle(/* TODO 参数 */);  // ?_drawResizeHandle@FV_View@@AAEXAAVUT_Rect@@@Z
    protected /* 未知 */ _drawSelection(/* TODO 参数 */);  // ?_drawSelection@FV_View@@IAEXXZ
    protected bool _ensureInsertionPointOnScreen(/* TODO 参数 */);  // ?_ensureInsertionPointOnScreen@FV_View@@IAE_NXZ
    protected /* 未知 */ _eraseSelection(/* TODO 参数 */);  // ?_eraseSelection@FV_View@@IAEXXZ
    protected /* 未知 */ _extSel(/* TODO 参数 */);  // ?_extSel@FV_View@@IAEXI@Z
    protected /* 未知 */ _extSelToPos(/* TODO 参数 */);  // ?_extSelToPos@FV_View@@IAEXI@Z
    public /* 未知 */ _findBlockAtPosition(/* TODO 参数 */);  // ?_findBlockAtPosition@FV_View@@IBEPAVfl_BlockLayout@@I@Z
    public /* 未知 */ _findBlockSearchRegexp(/* TODO 参数 */);  // ?_findBlockSearchRegexp@FV_View@@AAEHPBI0@Z
    public /* 未知 */ _findGetCurrentBlock(/* TODO 参数 */);  // ?_findGetCurrentBlock@FV_View@@ABEPAVfl_BlockLayout@@XZ
    public /* 未知 */ _findGetCurrentOffset(/* TODO 参数 */);  // ?_findGetCurrentOffset@FV_View@@AAEIXZ
    public /* 未知 */ _findGetNextBlockBuffer(/* TODO 参数 */);  // ?_findGetNextBlockBuffer@FV_View@@AAEPAIPAPAVfl_BlockLayout@
    public /* 未知 */ _findGetPrevBlockBuffer(/* TODO 参数 */);  // ?_findGetPrevBlockBuffer@FV_View@@AAEPAIPAPAVfl_BlockLayout@
    public bool _findNext(/* TODO 参数 */);  // ?_findNext@FV_View@@QAE_NPAIAA_N@Z
    public /* 未知 */ _findPositionCoords(/* TODO 参数 */);  // ?_findPositionCoords@FV_View@@IBEXI_NAAH111AAIAA_NPAPAVfl_Bl
    public bool _findPrev(/* TODO 参数 */);  // ?_findPrev@FV_View@@QAE_NPAIAA_N@Z
    public bool _findReplace(/* TODO 参数 */);  // ?_findReplace@FV_View@@QAE_NPAIAA_N_N@Z
    public bool _findReplaceReverse(/* TODO 参数 */);  // ?_findReplaceReverse@FV_View@@QAE_NPAIAA_N_N@Z
    protected /* 未知 */ _fixInsertionPointAfterRevision(/* TODO 参数 */);  // ?_fixInsertionPointAfterRevision@FV_View@@IAEXXZ
    protected /* 未知 */ _fixInsertionPointCoords(/* TODO 参数 */);  // ?_fixInsertionPointCoords@FV_View@@IAEXXZ
    public /* 未知 */ _generalUpdate(/* TODO 参数 */);  // ?_generalUpdate@FV_View@@QAEXXZ
    protected /* 未知 */ _getCurrentPage(/* TODO 参数 */);  // ?_getCurrentPage@FV_View@@IAEPAVfp_Page@@XZ
    protected /* 未知 */ _getDataCount(/* TODO 参数 */);  // ?_getDataCount@FV_View@@IAEIII@Z
    protected /* 未知 */ _getDocPos(/* TODO 参数 */);  // ?_getDocPos@FV_View@@IAEIW4_FVDocPos@@_N@Z
    protected /* 未知 */ _getDocPosFromPoint(/* TODO 参数 */);  // ?_getDocPosFromPoint@FV_View@@IAEIIW4_FVDocPos@@_N@Z
    protected /* 未知 */ _getHyperlinkInRange(/* TODO 参数 */);  // ?_getHyperlinkInRange@FV_View@@IAEPAVfp_HyperlinkRun@@AAI0@Z
    public /* 未知 */ _getPageForXY(/* TODO 参数 */);  // ?_getPageForXY@FV_View@@IBEPAVfp_Page@@HHAAH0@Z
    public bool _insertCellAfter(/* TODO 参数 */);  // ?_insertCellAfter@FV_View@@QAE_NIHHHHHH@Z
    public bool _insertCellBefore(/* TODO 参数 */);  // ?_insertCellBefore@FV_View@@QAE_NIHHHHHH@Z
    protected bool _insertField(/* TODO 参数 */);  // ?_insertField@FV_View@@IAE_NPBDPAPBD1@Z
    protected /* 未知 */ _insertGraphic(/* TODO 参数 */);  // ?_insertGraphic@FV_View@@IAEHPAVFG_Graphic@@PBD@Z
    protected /* 未知 */ _insertSectionBreak(/* TODO 参数 */);  // ?_insertSectionBreak@FV_View@@IAEXXZ
    protected bool _isSpaceBefore(/* TODO 参数 */);  // ?_isSpaceBefore@FV_View@@IAE_NI@Z
    protected /* 未知 */ _lookupSuggestion(/* TODO 参数 */);  // ?_lookupSuggestion@FV_View@@IAEPAIPAVfl_BlockLayout@@PAVfl_P
    protected bool _makePointLegal(/* TODO 参数 */);  // ?_makePointLegal@FV_View@@IAE_NXZ
    protected /* 未知 */ _moveInsPtNextPrevLine(/* TODO 参数 */);  // ?_moveInsPtNextPrevLine@FV_View@@IAEX_N@Z
    protected /* 未知 */ _moveInsPtNextPrevPage(/* TODO 参数 */);  // ?_moveInsPtNextPrevPage@FV_View@@IAEX_N@Z
    protected /* 未知 */ _moveInsPtNextPrevScreen(/* TODO 参数 */);  // ?_moveInsPtNextPrevScreen@FV_View@@IAEX_N@Z
    protected /* 未知 */ _moveInsPtNthPage(/* TODO 参数 */);  // ?_moveInsPtNthPage@FV_View@@IAEXI@Z
    protected /* 未知 */ _moveInsPtToPage(/* TODO 参数 */);  // ?_moveInsPtToPage@FV_View@@IAEXPAVfp_Page@@@Z
    protected /* 未知 */ _moveToSelectionEnd(/* TODO 参数 */);  // ?_moveToSelectionEnd@FV_View@@IAEX_N@Z
    public /* 未知 */ _pasteFromLocalTo(/* TODO 参数 */);  // ?_pasteFromLocalTo@FV_View@@QAEXI@Z
    public /* 未知 */ _populateThisHdrFtr(/* TODO 参数 */);  // ?_populateThisHdrFtr@FV_View@@QAEXPAVfl_HdrFtrSectionLayout@
    public /* 未知 */ _prefsListener(/* TODO 参数 */);  // ?_prefsListener@FV_View@@CAXPAVXAP_App@@PAVXAP_Prefs@@PAV?$U
    protected /* 未知 */ _removeThisHdrFtr(/* TODO 参数 */);  // ?_removeThisHdrFtr@FV_View@@IAEXPAVfl_HdrFtrSectionLayout@@@
    protected /* 未知 */ _resetSelection(/* TODO 参数 */);  // ?_resetSelection@FV_View@@IAEXXZ
    public bool _restoreCellParams(/* TODO 参数 */);  // ?_restoreCellParams@FV_View@@QAE_NIH@Z
    protected /* 未知 */ _restorePieceTableState(/* TODO 参数 */);  // ?_restorePieceTableState@FV_View@@IAEXXZ
    protected /* 未知 */ _saveAndNotifyPieceTableChange(/* TODO 参数 */);  // ?_saveAndNotifyPieceTableChange@FV_View@@IAEXXZ
    protected /* 未知 */ _setPoint(/* TODO 参数 */);  // ?_setPoint@FV_View@@IAEXI_N@Z
    protected /* 未知 */ _setSelectionAnchor(/* TODO 参数 */);  // ?_setSelectionAnchor@FV_View@@IAEXXZ
    protected /* 未知 */ _swapSelectionOrientation(/* TODO 参数 */);  // ?_swapSelectionOrientation@FV_View@@IAEXXZ
    protected /* 未知 */ _updateInsertionPoint(/* TODO 参数 */);  // ?_updateInsertionPoint@FV_View@@IAEXXZ
    public bool addElementByParaAndComp(/* TODO 参数 */);  // ?addElementByParaAndComp@FV_View@@QAE_NPAVEMRElement@@PBD1H@
    public /* 未知 */ allowChangeInsPoint(/* TODO 参数 */);  // ?allowChangeInsPoint@FV_View@@QAEXXZ
    public bool appendStyle(/* TODO 参数 */);  // ?appendStyle@FV_View@@QAE_NPAPBD@Z
    public /* 未知 */ btn0Frame(/* TODO 参数 */);  // ?btn0Frame@FV_View@@QAEXHH@Z
    public /* 未知 */ btn0InlineImage(/* TODO 参数 */);  // ?btn0InlineImage@FV_View@@QAEXHH@Z
    public /* 未知 */ btn0VisualDrag(/* TODO 参数 */);  // ?btn0VisualDrag@FV_View@@QAEXHH@Z
    public /* 未知 */ btn1CopyImage(/* TODO 参数 */);  // ?btn1CopyImage@FV_View@@QAEXHH@Z
    public /* 未知 */ btn1Frame(/* TODO 参数 */);  // ?btn1Frame@FV_View@@QAEXHH@Z
    public /* 未知 */ btn1InlineImage(/* TODO 参数 */);  // ?btn1InlineImage@FV_View@@QAEXHH@Z
    virtual public /* 未知 */ calculateZoomPercentForPageHeight(/* TODO 参数 */);  // ?calculateZoomPercentForPageHeight@FV_View@@UAEIXZ
    virtual public /* 未知 */ calculateZoomPercentForPageWidth(/* TODO 参数 */);  // ?calculateZoomPercentForPageWidth@FV_View@@UAEIXZ
    virtual public /* 未知 */ calculateZoomPercentForWholePage(/* TODO 参数 */);  // ?calculateZoomPercentForWholePage@FV_View@@UAEIXZ
    virtual public const bool canDo(/* TODO 参数 */);  // ?canDo@FV_View@@UBE_N_N@Z
    public /* 未知 */ changeListStyle(/* TODO 参数 */);  // ?changeListStyle@FV_View@@QAEXPAVfl_AutoNum@@W4FL_ListType@@
    public bool checkTextRunInLine(/* TODO 参数 */);  // ?checkTextRunInLine@FV_View@@QAE_NPAVfp_Line@@@Z
    virtual public /* 未知 */ clearCursorWait(/* TODO 参数 */);  // ?clearCursorWait@FV_View@@UAEXXZ
    public /* 未知 */ clearHdrFtrEdit(/* TODO 参数 */);  // ?clearHdrFtrEdit@FV_View@@QAEXXZ
    public /* 未知 */ clearSavedPosition(/* TODO 参数 */);  // ?clearSavedPosition@FV_View@@QAEXXZ
    public /* 未知 */ cmdAcceptRejectRevision(/* TODO 参数 */);  // ?cmdAcceptRejectRevision@FV_View@@QAEX_NHH@Z
    public bool cmdAdvanceNextPrevCell(/* TODO 参数 */);  // ?cmdAdvanceNextPrevCell@FV_View@@QAE_N_N@Z
    public bool cmdAdvanceUpDownCell(/* TODO 参数 */);  // ?cmdAdvanceUpDownCell@FV_View@@QAE_N_N@Z
    public bool cmdAutoFitTable(/* TODO 参数 */);  // ?cmdAutoFitTable@FV_View@@QAE_NXZ
    public bool cmdAutoSizeCols(/* TODO 参数 */);  // ?cmdAutoSizeCols@FV_View@@QAE_NXZ
    public bool cmdAutoSizeRows(/* TODO 参数 */);  // ?cmdAutoSizeRows@FV_View@@QAE_NXZ
    public bool cmdCellBackspace(/* TODO 参数 */);  // ?cmdCellBackspace@FV_View@@QAE_NXZ
    public /* 未知 */ cmdCharDelete(/* TODO 参数 */);  // ?cmdCharDelete@FV_View@@QAEX_NI0@Z
    public bool cmdCharInsert(/* TODO 参数 */);  // ?cmdCharInsert@FV_View@@QAE_NPBII_NI@Z
    public /* 未知 */ cmdCharMotion(/* TODO 参数 */);  // ?cmdCharMotion@FV_View@@QAEX_NI@Z
    public /* 未知 */ cmdContextAdd(/* TODO 参数 */);  // ?cmdContextAdd@FV_View@@QAEXXZ
    public /* 未知 */ cmdContextIgnoreAll(/* TODO 参数 */);  // ?cmdContextIgnoreAll@FV_View@@QAEXXZ
    public /* 未知 */ cmdContextSuggest(/* TODO 参数 */);  // ?cmdContextSuggest@FV_View@@QAEXIPAVfl_BlockLayout@@PAVfl_Pa
    virtual public /* 未知 */ cmdCopy(/* TODO 参数 */);  // ?cmdCopy@FV_View@@UAEX_N@Z
    virtual public /* 未知 */ cmdCut(/* TODO 参数 */);  // ?cmdCut@FV_View@@UAEXXZ
    public /* 未知 */ cmdDeleteBookmark(/* TODO 参数 */);  // ?cmdDeleteBookmark@FV_View@@QAEHPBD@Z
    public bool cmdDeleteCell(/* TODO 参数 */);  // ?cmdDeleteCell@FV_View@@QAE_NI@Z
    public bool cmdDeleteCol(/* TODO 参数 */);  // ?cmdDeleteCol@FV_View@@QAE_NI@Z
    public bool cmdDeleteEmbed(/* TODO 参数 */);  // ?cmdDeleteEmbed@FV_View@@QAE_NPAVfp_Run@@@Z
    public /* 未知 */ cmdDeleteHyperlink(/* TODO 参数 */);  // ?cmdDeleteHyperlink@FV_View@@QAEHXZ
    public bool cmdDeleteRow(/* TODO 参数 */);  // ?cmdDeleteRow@FV_View@@QAE_NI@Z
    public bool cmdDeleteTable(/* TODO 参数 */);  // ?cmdDeleteTable@FV_View@@QAE_NI_N@Z
    public /* 未知 */ cmdEditFooter(/* TODO 参数 */);  // ?cmdEditFooter@FV_View@@QAEXXZ
    public /* 未知 */ cmdEditHeader(/* TODO 参数 */);  // ?cmdEditHeader@FV_View@@QAEXXZ
    public bool cmdFindRevision(/* TODO 参数 */);  // ?cmdFindRevision@FV_View@@QAE_N_NHH@Z
    public /* 未知 */ cmdHyperlinkCopyLocation(/* TODO 参数 */);  // ?cmdHyperlinkCopyLocation@FV_View@@QAEXI@Z
    public /* 未知 */ cmdHyperlinkJump(/* TODO 参数 */);  // ?cmdHyperlinkJump@FV_View@@QAEXI@Z
    virtual public /* 未知 */ cmdHyperlinkJump(/* TODO 参数 */);  // ?cmdHyperlinkJump@FV_View@@UAEXHH@Z
    public /* 未知 */ cmdHyperlinkStatusBar(/* TODO 参数 */);  // ?cmdHyperlinkStatusBar@FV_View@@QAEHHH@Z
    public /* 未知 */ cmdInsertBookmark(/* TODO 参数 */);  // ?cmdInsertBookmark@FV_View@@QAEHPBD@Z
    public bool cmdInsertCol(/* TODO 参数 */);  // ?cmdInsertCol@FV_View@@QAE_NI_N@Z
    public bool cmdInsertEmbed(/* TODO 参数 */);  // ?cmdInsertEmbed@FV_View@@QAE_NPAVUT_ByteBuf@@IPBD1@Z
    public /* 未知 */ cmdInsertField(/* TODO 参数 */);  // ?cmdInsertField@FV_View@@QAEHPBDPAPBD1@Z
    public /* 未知 */ cmdInsertGraphic(/* TODO 参数 */);  // ?cmdInsertGraphic@FV_View@@QAEHPAVFG_Graphic@@@Z
    public /* 未知 */ cmdInsertGraphicAtStrux(/* TODO 参数 */);  // ?cmdInsertGraphicAtStrux@FV_View@@QAEHPAVFG_Graphic@@IW4_PTS
    public /* 未知 */ cmdInsertHyperlink(/* TODO 参数 */);  // ?cmdInsertHyperlink@FV_View@@QAEHPBD@Z
    public bool cmdInsertLatexMath(/* TODO 参数 */);  // ?cmdInsertLatexMath@FV_View@@QAE_NAAVUT_UTF8String@@0@Z
    public bool cmdInsertMathML(/* TODO 参数 */);  // ?cmdInsertMathML@FV_View@@QAE_NPBDI@Z
    public bool cmdInsertRow(/* TODO 参数 */);  // ?cmdInsertRow@FV_View@@QAE_NI_N@Z
    public /* 未知 */ cmdInsertTOC(/* TODO 参数 */);  // ?cmdInsertTOC@FV_View@@QAEHXZ
    public /* 未知 */ cmdInsertTable(/* TODO 参数 */);  // ?cmdInsertTable@FV_View@@QAEHHHQAPBD@Z
    public bool cmdMergeCells(/* TODO 参数 */);  // ?cmdMergeCells@FV_View@@QAE_NII@Z
    public /* 未知 */ cmdMyDeleteGraphicAtStrux(/* TODO 参数 */);  // ?cmdMyDeleteGraphicAtStrux@FV_View@@QAEHIW4_PTStruxType@@@Z
    virtual public /* 未知 */ cmdPaste(/* TODO 参数 */);  // ?cmdPaste@FV_View@@UAEX_NI@Z
    virtual public /* 未知 */ cmdPasteSelectionAt(/* TODO 参数 */);  // ?cmdPasteSelectionAt@FV_View@@UAEXHH@Z
    virtual public /* 未知 */ cmdRedo(/* TODO 参数 */);  // ?cmdRedo@FV_View@@UAEXI@Z
    public /* 未知 */ cmdRemoveHdrFtr(/* TODO 参数 */);  // ?cmdRemoveHdrFtr@FV_View@@QAEX_N@Z
    virtual public /* 未知 */ cmdSave(/* TODO 参数 */);  // ?cmdSave@FV_View@@UAEHXZ
    virtual public /* 未知 */ cmdSaveAs(/* TODO 参数 */);  // ?cmdSaveAs@FV_View@@UAEHPBDH@Z
    virtual public /* 未知 */ cmdSaveAs(/* TODO 参数 */);  // ?cmdSaveAs@FV_View@@UAEHPBDH_N@Z
    virtual public /* 未知 */ cmdScroll(/* TODO 参数 */);  // ?cmdScroll@FV_View@@UAEXW4_AV_ScrollCmd@@I@Z
    public /* 未知 */ cmdSelect(/* TODO 参数 */);  // ?cmdSelect@FV_View@@QAEXHHW4_FVDocPos@@0_N@Z
    public /* 未知 */ cmdSelect(/* TODO 参数 */);  // ?cmdSelect@FV_View@@QAEXII_N@Z
    public bool cmdSelectColumn(/* TODO 参数 */);  // ?cmdSelectColumn@FV_View@@QAE_NI@Z
    public /* 未知 */ cmdSelectTOC(/* TODO 参数 */);  // ?cmdSelectTOC@FV_View@@QAEXHH@Z
    public /* 未知 */ cmdSetRevisionLevel(/* TODO 参数 */);  // ?cmdSetRevisionLevel@FV_View@@QAEXI@Z
    public bool cmdSplitCells(/* TODO 参数 */);  // ?cmdSplitCells@FV_View@@QAE_NW4AP_CellSplitType@@@Z
    public bool cmdStartList(/* TODO 参数 */);  // ?cmdStartList@FV_View@@QAE_NPBD@Z
    public bool cmdStopList(/* TODO 参数 */);  // ?cmdStopList@FV_View@@QAE_NXZ
    public bool cmdTableToText(/* TODO 参数 */);  // ?cmdTableToText@FV_View@@QAE_NIH@Z
    public bool cmdTextToTable(/* TODO 参数 */);  // ?cmdTextToTable@FV_View@@QAE_N_N@Z
    virtual public /* 未知 */ cmdUndo(/* TODO 参数 */);  // ?cmdUndo@FV_View@@UAEXI@Z
    virtual public /* 未知 */ cmdUnselectSelection(/* TODO 参数 */);  // ?cmdUnselectSelection@FV_View@@UAEXXZ
    public bool cmdUpdateEmbed(/* TODO 参数 */);  // ?cmdUpdateEmbed@FV_View@@QAE_NPAVUT_ByteBuf@@PBD1@Z
    public bool cmdUpdateEmbed(/* TODO 参数 */);  // ?cmdUpdateEmbed@FV_View@@QAE_NPAVfp_Run@@PAVUT_ByteBuf@@PBD2
    public bool comp_InsertPosCheck(/* TODO 参数 */);  // ?comp_InsertPosCheck@FV_View@@QAE_NXZ
    public bool comp_IsCheckReadOnlyPara(/* TODO 参数 */);  // ?comp_IsCheckReadOnlyPara@FV_View@@QAE_N_N@Z
    public bool comp_SelectDataCheck(/* TODO 参数 */);  // ?comp_SelectDataCheck@FV_View@@QAE_NXZ
    public /* 未知 */ convertInLineToPositioned(/* TODO 参数 */);  // ?convertInLineToPositioned@FV_View@@QAEXIPAPBD@Z
    public bool convertPositionedToInLine(/* TODO 参数 */);  // ?convertPositionedToInLine@FV_View@@QAE_NPAVfl_FrameLayout@@
    public /* 未知 */ copyTextToClipboard(/* TODO 参数 */);  // ?copyTextToClipboard@FV_View@@QAEXVUT_UCS4String@@_N@Z
    public /* 未知 */ copyToLocal(/* TODO 参数 */);  // ?copyToLocal@FV_View@@QAEXII@Z
    public /* 未知 */ copyVisualText(/* TODO 参数 */);  // ?copyVisualText@FV_View@@QAEXHH@Z
    public /* 未知 */ countWords(/* TODO 参数 */);  // ?countWords@FV_View@@QAE?AUFV_DocCount@@XZ
    public /* 未知 */ createThisHdrFtr(/* TODO 参数 */);  // ?createThisHdrFtr@FV_View@@QAEXW4_HdrFtrType@@_N@Z
    public /* 未知 */ cutFrame(/* TODO 参数 */);  // ?cutFrame@FV_View@@QAEXXZ
    public /* 未知 */ cutVisualText(/* TODO 参数 */);  // ?cutVisualText@FV_View@@QAEXHH@Z
    public /* 未知 */ delTo(/* TODO 参数 */);  // ?delTo@FV_View@@QAEXW4_FVDocPos@@@Z
    public /* 未知 */ deleteFrame(/* TODO 参数 */);  // ?deleteFrame@FV_View@@QAEXXZ
    public const bool doesSelectionContainRevision(/* TODO 参数 */);  // ?doesSelectionContainRevision@FV_View@@QBE_NXZ
    public /* 未知 */ dragFrame(/* TODO 参数 */);  // ?dragFrame@FV_View@@QAEXHH@Z
    public /* 未知 */ dragInlineImage(/* TODO 参数 */);  // ?dragInlineImage@FV_View@@QAEXHH@Z
    public /* 未知 */ dragVisualText(/* TODO 参数 */);  // ?dragVisualText@FV_View@@QAEXHH@Z
    public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@FV_View@@QAEXHPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@FV_View@@UAEXPBVUT_Rect@@@Z
    public /* 未知 */ drawDraggedImage(/* TODO 参数 */);  // ?drawDraggedImage@FV_View@@QAEXHH@Z
    virtual public /* 未知 */ drawSelectionBox(/* TODO 参数 */);  // ?drawSelectionBox@FV_View@@UAEXAAVUT_Rect@@_N@Z
    public /* 未知 */ endDrag(/* TODO 参数 */);  // ?endDrag@FV_View@@QAEXHH@Z
    public /* 未知 */ endDragSelection(/* TODO 参数 */);  // ?endDragSelection@FV_View@@QAEXHH@Z
    public /* 未知 */ ensureInsertionPointOnScreen(/* TODO 参数 */);  // ?ensureInsertionPointOnScreen@FV_View@@QAEXXZ
    public /* 未知 */ extSelHorizontal(/* TODO 参数 */);  // ?extSelHorizontal@FV_View@@QAEX_NI@Z
    public /* 未知 */ extSelNextPrevLine(/* TODO 参数 */);  // ?extSelNextPrevLine@FV_View@@QAEX_N@Z
    public /* 未知 */ extSelNextPrevPage(/* TODO 参数 */);  // ?extSelNextPrevPage@FV_View@@QAEX_N@Z
    public /* 未知 */ extSelNextPrevScreen(/* TODO 参数 */);  // ?extSelNextPrevScreen@FV_View@@QAEX_N@Z
    public /* 未知 */ extSelTo(/* TODO 参数 */);  // ?extSelTo@FV_View@@QAEXW4_FVDocPos@@@Z
    public /* 未知 */ extSelToXY(/* TODO 参数 */);  // ?extSelToXY@FV_View@@QAEXHH_N@Z
    public /* 未知 */ extSelToXYword(/* TODO 参数 */);  // ?extSelToXYword@FV_View@@QAEXHH_N@Z
    public bool findAgain(/* TODO 参数 */);  // ?findAgain@FV_View@@QAE_NXZ
    public /* 未知 */ findCellPosAt(/* TODO 参数 */);  // ?findCellPosAt@FV_View@@QAEIIHH@Z
    public /* 未知 */ findGetFindString(/* TODO 参数 */);  // ?findGetFindString@FV_View@@QAEPAIXZ
    public bool findGetMatchCase(/* TODO 参数 */);  // ?findGetMatchCase@FV_View@@QAE_NXZ
    public /* 未知 */ findGetReplaceString(/* TODO 参数 */);  // ?findGetReplaceString@FV_View@@QAEPAIXZ
    public bool findGetReverseFind(/* TODO 参数 */);  // ?findGetReverseFind@FV_View@@QAE_NXZ
    public bool findGetWholeWord(/* TODO 参数 */);  // ?findGetWholeWord@FV_View@@QAE_NXZ
    public bool findNext(/* TODO 参数 */);  // ?findNext@FV_View@@QAE_NAA_N@Z
    public bool findNext(/* TODO 参数 */);  // ?findNext@FV_View@@QAE_NPBIAA_N@Z
    public bool findPrev(/* TODO 参数 */);  // ?findPrev@FV_View@@QAE_NAA_N@Z
    public bool findPrev(/* TODO 参数 */);  // ?findPrev@FV_View@@QAE_NPBIAA_N@Z
    public bool findReplace(/* TODO 参数 */);  // ?findReplace@FV_View@@QAE_NAA_N@Z
    public /* 未知 */ findReplaceAll(/* TODO 参数 */);  // ?findReplaceAll@FV_View@@QAEIXZ
    public bool findReplaceReverse(/* TODO 参数 */);  // ?findReplaceReverse@FV_View@@QAE_NAA_N@Z
    public /* 未知 */ findSetFindString(/* TODO 参数 */);  // ?findSetFindString@FV_View@@QAEXPBI@Z
    public /* 未知 */ findSetMatchCase(/* TODO 参数 */);  // ?findSetMatchCase@FV_View@@QAEX_N@Z
    public /* 未知 */ findSetReplaceString(/* TODO 参数 */);  // ?findSetReplaceString@FV_View@@QAEXPBI@Z
    public /* 未知 */ findSetReverseFind(/* TODO 参数 */);  // ?findSetReverseFind@FV_View@@QAEX_N@Z
    public /* 未知 */ findSetStartAtInsPoint(/* TODO 参数 */);  // ?findSetStartAtInsPoint@FV_View@@QAEXXZ
    public /* 未知 */ findSetWholeWord(/* TODO 参数 */);  // ?findSetWholeWord@FV_View@@QAEX_N@Z
    virtual public /* 未知 */ focusChange(/* TODO 参数 */);  // ?focusChange@FV_View@@UAEXW4AV_Focus@@@Z
    virtual public /* 未知 */ fontMetricsChange(/* TODO 参数 */);  // ?fontMetricsChange@FV_View@@UAEXXZ
    public /* 未知 */ fvSetInsertColor(/* TODO 参数 */);  // ?fvSetInsertColor@FV_View@@QAEXVUT_RGBColor@@@Z
    public const bool getAllAttrProp(/* TODO 参数 */);  // ?getAllAttrProp@FV_View@@QBE_NAAPBVPP_AttrProp@@000@Z
    public /* 未知 */ getAllBlocksInList(/* TODO 参数 */);  // ?getAllBlocksInList@FV_View@@QAEXPAV?$UT_GenericVector@PAVfl
    public /* 未知 */ getAttrPropForPoint(/* TODO 参数 */);  // ?getAttrPropForPoint@FV_View@@QAEPBVPP_AttrProp@@XZ
    public bool getAttributes(/* TODO 参数 */);  // ?getAttributes@FV_View@@QAE_NPAPBVPP_AttrProp@@0I@Z
    public const /* 未知 */ getBidiOrder(/* TODO 参数 */);  // ?getBidiOrder@FV_View@@QBE?AW4FV_BIDI_Order@@XZ
    public const /* 未知 */ getBlockAtPosition(/* TODO 参数 */);  // ?getBlockAtPosition@FV_View@@QBEPAVfl_BlockLayout@@I@Z
    public bool getBlockFormat(/* TODO 参数 */);  // ?getBlockFormat@FV_View@@QAE_NPAPAPBD_N@Z
    public /* 未知 */ getBlockFromSDH(/* TODO 参数 */);  // ?getBlockFromSDH@FV_View@@QAEPAVfl_BlockLayout@@PBX@Z
    public const /* 未知 */ getBlocksInSelection(/* TODO 参数 */);  // ?getBlocksInSelection@FV_View@@QBEXPAV?$UT_GenericVector@PAV
    public /* 未知 */ getBsoftPositionFromXY(/* TODO 参数 */);  // ?getBsoftPositionFromXY@FV_View@@QAEHHH@Z
    public /* 未知 */ getCellAtPos(/* TODO 参数 */);  // ?getCellAtPos@FV_View@@QAEPAVfp_CellContainer@@I@Z
    public bool getCellFormat(/* TODO 参数 */);  // ?getCellFormat@FV_View@@QAE_NIAAVUT_String@@@Z
    public bool getCellLineStyle(/* TODO 参数 */);  // ?getCellLineStyle@FV_View@@QAE_NIPAH000@Z
    public bool getCellParams(/* TODO 参数 */);  // ?getCellParams@FV_View@@QAE_NIPAH000@Z
    public bool getCellProperty(/* TODO 参数 */);  // ?getCellProperty@FV_View@@QAE_NPADAAPAD@Z
    public bool getCharFormat(/* TODO 参数 */);  // ?getCharFormat@FV_View@@QAE_NPAPAPBD_N@Z
    public bool getCharFormat(/* TODO 参数 */);  // ?getCharFormat@FV_View@@QAE_NPAPAPBD_NI@Z
    public /* 未知 */ getClosestEndnote(/* TODO 参数 */);  // ?getClosestEndnote@FV_View@@QAEPAVfl_EndnoteLayout@@I@Z
    public /* 未知 */ getClosestFootnote(/* TODO 参数 */);  // ?getClosestFootnote@FV_View@@QAEPAVfl_FootnoteLayout@@I@Z
    public const /* 未知 */ getColorColumnLine(/* TODO 参数 */);  // ?getColorColumnLine@FV_View@@QBE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getColorFieldOffset(/* TODO 参数 */);  // ?getColorFieldOffset@FV_View@@QBE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getColorHdrFtr(/* TODO 参数 */);  // ?getColorHdrFtr@FV_View@@QBE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getColorHyperLink(/* TODO 参数 */);  // ?getColorHyperLink@FV_View@@QBE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getColorImage(/* TODO 参数 */);  // ?getColorImage@FV_View@@QBE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getColorImageResize(/* TODO 参数 */);  // ?getColorImageResize@FV_View@@QBE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getColorMargin(/* TODO 参数 */);  // ?getColorMargin@FV_View@@QBE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getColorRevisions(/* TODO 参数 */);  // ?getColorRevisions@FV_View@@QBE?AVUT_RGBColor@@H@Z
    public /* 未知 */ getColorSelBackground(/* TODO 参数 */);  // ?getColorSelBackground@FV_View@@QAE?AVUT_RGBColor@@XZ
    public /* 未知 */ getColorSelForeground(/* TODO 参数 */);  // ?getColorSelForeground@FV_View@@QAE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getColorShowPara(/* TODO 参数 */);  // ?getColorShowPara@FV_View@@QBE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getColorSquiggle(/* TODO 参数 */);  // ?getColorSquiggle@FV_View@@QBE?AVUT_RGBColor@@W4FL_SQUIGGLE_
    public /* 未知 */ getContextSuggest(/* TODO 参数 */);  // ?getContextSuggest@FV_View@@QAEPAII@Z
    public /* 未知 */ getCurImageSel(/* TODO 参数 */);  // ?getCurImageSel@FV_View@@QAE?AVUT_Rect@@XZ
    public const /* 未知 */ getCurrentBlock(/* TODO 参数 */);  // ?getCurrentBlock@FV_View@@QBEPAVfl_BlockLayout@@XZ
    public const /* 未知 */ getCurrentPage(/* TODO 参数 */);  // ?getCurrentPage@FV_View@@QBEPAVfp_Page@@XZ
    public const /* 未知 */ getCurrentPageNumForStatusBar(/* TODO 参数 */);  // ?getCurrentPageNumForStatusBar@FV_View@@QBEIXZ
    public /* 未知 */ getCurrentPageNumber(/* TODO 参数 */);  // ?getCurrentPageNumber@FV_View@@QAEIXZ
    public /* 未知 */ getDictForSelection(/* TODO 参数 */);  // ?getDictForSelection@FV_View@@QAEPAVSpellChecker@@XZ
    public /* 未知 */ getDocPositionFromLastXY(/* TODO 参数 */);  // ?getDocPositionFromLastXY@FV_View@@QAEIXZ
    public /* 未知 */ getDocPositionFromXY(/* TODO 参数 */);  // ?getDocPositionFromXY@FV_View@@QAEIHH_N@Z
    public const /* 未知 */ getDocument(/* TODO 参数 */);  // ?getDocument@FV_View@@QBEPAVPD_Document@@XZ
    public /* 未知 */ getDocumentRangeOfCurrentSelection(/* TODO 参数 */);  // ?getDocumentRangeOfCurrentSelection@FV_View@@QAEXPAVPD_Docum
    public const bool getDragTableLine(/* TODO 参数 */);  // ?getDragTableLine@FV_View@@QBE_NXZ
    public /* 未知 */ getEditShadow(/* TODO 参数 */);  // ?getEditShadow@FV_View@@QAEPAVfl_HdrFtrShadow@@XZ
    public const bool getEditableBounds(/* TODO 参数 */);  // ?getEditableBounds@FV_View@@QBE_N_NAAI0@Z
    public /* 未知 */ getEmbedDepth(/* TODO 参数 */);  // ?getEmbedDepth@FV_View@@QAEHI@Z
    public /* 未知 */ getFrameEdit(/* TODO 参数 */);  // ?getFrameEdit@FV_View@@QAEPAVFV_FrameEdit@@XZ
    public /* 未知 */ getFrameLayout(/* TODO 参数 */);  // ?getFrameLayout@FV_View@@QAEPAVfl_FrameLayout@@I@Z
    public /* 未知 */ getFrameLayout(/* TODO 参数 */);  // ?getFrameLayout@FV_View@@QAEPAVfl_FrameLayout@@XZ
    virtual public const /* 未知 */ getGraphics(/* TODO 参数 */);  // ?getGraphics@FV_View@@UBEPAVGR_Graphics@@XZ
    public /* 未知 */ getHyperLinkRun(/* TODO 参数 */);  // ?getHyperLinkRun@FV_View@@QAEPAVfp_Run@@I@Z
    public /* 未知 */ getImageSelCursor(/* TODO 参数 */);  // ?getImageSelCursor@FV_View@@QAE?AW4Cursor@GR_Graphics@@XZ
    public /* 未知 */ getImageSelInfo(/* TODO 参数 */);  // ?getImageSelInfo@FV_View@@QAEHXZ
    public /* 未知 */ getImageSelRect(/* TODO 参数 */);  // ?getImageSelRect@FV_View@@QAE?AVUT_Rect@@XZ
    public const /* 未知 */ getInsPoint(/* TODO 参数 */);  // ?getInsPoint@FV_View@@QBEIXZ
    public bool getInsertAtTablePending(/* TODO 参数 */);  // ?getInsertAtTablePending@FV_View@@QAE_NXZ
    virtual public /* 未知 */ getInsertionPointContext(/* TODO 参数 */);  // ?getInsertionPointContext@FV_View@@UAEIPAH0@Z
    public const /* 未知 */ getLayout(/* TODO 参数 */);  // ?getLayout@FV_View@@QBEPAVFL_DocLayout@@XZ
    public const /* 未知 */ getLeftRuler(/* TODO 参数 */);  // ?getLeftRuler@FV_View@@QBEPAVAP_LeftRuler@@XZ
    virtual public /* 未知 */ getLeftRulerInfo(/* TODO 参数 */);  // ?getLeftRulerInfo@FV_View@@UAEXIPAVAP_LeftRulerInfo@@@Z
    virtual public /* 未知 */ getLeftRulerInfo(/* TODO 参数 */);  // ?getLeftRulerInfo@FV_View@@UAEXPAVAP_LeftRulerInfo@@@Z
    virtual public /* 未知 */ getMouseContext(/* TODO 参数 */);  // ?getMouseContext@FV_View@@UAEIHH@Z
    public const /* 未知 */ getNthSelection(/* TODO 参数 */);  // ?getNthSelection@FV_View@@QBEPAVPD_DocumentRange@@H@Z
    public /* 未知 */ getNumColumnsInSelection(/* TODO 参数 */);  // ?getNumColumnsInSelection@FV_View@@QAEHXZ
    public const /* 未知 */ getNumRowsInSelection(/* TODO 参数 */);  // ?getNumRowsInSelection@FV_View@@QBEHXZ
    public const /* 未知 */ getNumSelections(/* TODO 参数 */);  // ?getNumSelections@FV_View@@QBEHXZ
    public /* 未知 */ getPageScreenOffsets(/* TODO 参数 */);  // ?getPageScreenOffsets@FV_View@@QAEXPBVfp_Page@@AAH1@Z
    public const /* 未知 */ getPageSize(/* TODO 参数 */);  // ?getPageSize@FV_View@@QBEABVfp_PageSize@@XZ
    virtual public const /* 未知 */ getPageViewLeftMargin(/* TODO 参数 */);  // ?getPageViewLeftMargin@FV_View@@UBEHXZ
    virtual public const /* 未知 */ getPageViewSep(/* TODO 参数 */);  // ?getPageViewSep@FV_View@@UBEHXZ
    virtual public const /* 未知 */ getPageViewTopMargin(/* TODO 参数 */);  // ?getPageViewTopMargin@FV_View@@UBEHXZ
    public const /* 未知 */ getPageYOffset(/* TODO 参数 */);  // ?getPageYOffset@FV_View@@QBEXPAVfp_Page@@AAH@Z
    public /* 未知 */ getParaTreeStr(/* TODO 参数 */);  // ?getParaTreeStr@FV_View@@QAEXAAVUT_String@@V?$basic_string@D
    virtual public const /* 未知 */ getPoint(/* TODO 参数 */);  // ?getPoint@FV_View@@UBEIXZ
    virtual public const /* 未知 */ getPrevPoint(/* TODO 参数 */);  // ?getPrevPoint@FV_View@@UBEIXZ
    public const /* 未知 */ getPrevSelectionMode(/* TODO 参数 */);  // ?getPrevSelectionMode@FV_View@@QBE?AW4_FV_SelectionMode@@XZ
    public /* 未知 */ getPreviewMode(/* TODO 参数 */);  // ?getPreviewMode@FV_View@@QAE?AW4PreViewMode@@XZ
    public /* 未知 */ getResizeOrigin(/* TODO 参数 */);  // ?getResizeOrigin@FV_View@@QAEXAAH0@Z
    public const /* 未知 */ getRevisionLevel(/* TODO 参数 */);  // ?getRevisionLevel@FV_View@@QBEIXZ
    public const /* 未知 */ getRunAtPosition(/* TODO 参数 */);  // ?getRunAtPosition@FV_View@@QBEPAVfp_Run@@I@Z
    public /* 未知 */ getSavedPosition(/* TODO 参数 */);  // ?getSavedPosition@FV_View@@QAEIXZ
    public bool getSectionFormat(/* TODO 参数 */);  // ?getSectionFormat@FV_View@@QAE_NPAPAPBD@Z
    public /* 未知 */ getSelectedImage(/* TODO 参数 */);  // ?getSelectedImage@FV_View@@QAEIPAPBD@Z
    public const /* 未知 */ getSelectionAnchor(/* TODO 参数 */);  // ?getSelectionAnchor@FV_View@@QBEIXZ
    public const /* 未知 */ getSelectionLength(/* TODO 参数 */);  // ?getSelectionLength@FV_View@@QBEIXZ
    public const /* 未知 */ getSelectionMode(/* TODO 参数 */);  // ?getSelectionMode@FV_View@@QBE?AW4_FV_SelectionMode@@XZ
    public /* 未知 */ getSelectionText(/* TODO 参数 */);  // ?getSelectionText@FV_View@@QAEXAAPAI@Z
    public const bool getShowPara(/* TODO 参数 */);  // ?getShowPara@FV_View@@QBE_NXZ
    public bool getStyle(/* TODO 参数 */);  // ?getStyle@FV_View@@QAE_NPAPBD@Z
    public /* 未知 */ getTableAtPos(/* TODO 参数 */);  // ?getTableAtPos@FV_View@@QAEPAVfl_TableLayout@@I@Z
    public /* 未知 */ getTextBetweenPos(/* TODO 参数 */);  // ?getTextBetweenPos@FV_View@@QAEPAIII_N@Z
    public /* 未知 */ getTextInCurrentBlock(/* TODO 参数 */);  // ?getTextInCurrentBlock@FV_View@@QAEXAAVUT_GrowBuf@@@Z
    public /* 未知 */ getTextInCurrentSection(/* TODO 参数 */);  // ?getTextInCurrentSection@FV_View@@QAEXAAVUT_GrowBuf@@@Z
    public /* 未知 */ getTextInDocument(/* TODO 参数 */);  // ?getTextInDocument@FV_View@@QAEXAAVUT_GrowBuf@@@Z
    public const /* 未知 */ getTopRuler(/* TODO 参数 */);  // ?getTopRuler@FV_View@@QBEPAVAP_TopRuler@@XZ
    virtual public /* 未知 */ getTopRulerInfo(/* TODO 参数 */);  // ?getTopRulerInfo@FV_View@@UAEXIPAVAP_TopRulerInfo@@@Z
    virtual public /* 未知 */ getTopRulerInfo(/* TODO 参数 */);  // ?getTopRulerInfo@FV_View@@UAEXPAVAP_TopRulerInfo@@@Z
    public const /* 未知 */ getViewMode(/* TODO 参数 */);  // ?getViewMode@FV_View@@QBE?AW4ViewMode@@XZ
    public /* 未知 */ getViewPersistentProps(/* TODO 参数 */);  // ?getViewPersistentProps@FV_View@@QAEPAPBDXZ
    public const /* 未知 */ getVisibleDocumentPagesAndRectangles(/* TODO 参数 */);  // ?getVisibleDocumentPagesAndRectangles@FV_View@@QBEXAAV?$UT_G
    public /* 未知 */ getVisualText(/* TODO 参数 */);  // ?getVisualText@FV_View@@QAEPAVFV_VisualDragText@@XZ
    public /* 未知 */ getWorkingLineWidth(/* TODO 参数 */);  // ?getWorkingLineWidth@FV_View@@QAEHXZ
    public bool gotoTarget(/* TODO 参数 */);  // ?gotoTarget@FV_View@@QAE_NW4_AP_JumpTarget@@PAI@Z
    public bool hcfv_GetElemDispByParaAndElemname(/* TODO 参数 */);  // ?hcfv_GetElemDispByParaAndElemname@FV_View@@QAE_NV?$basic_st
    public bool hcfv_getAllElemsDispByElemname(/* TODO 参数 */);  // ?hcfv_getAllElemsDispByElemname@FV_View@@QAE_NAAV?$basic_str
    public bool hcfv_getOneElement(/* TODO 参数 */);  // ?hcfv_getOneElement@FV_View@@QAE_NAAPAVpf_Frag@@AAUtagElemDs
    public bool insertFootnote(/* TODO 参数 */);  // ?insertFootnote@FV_View@@QAE_N_N@Z
    public bool insertFootnoteSection(/* TODO 参数 */);  // ?insertFootnoteSection@FV_View@@QAE_N_NPBD@Z
    public /* 未知 */ insertHeaderFooter(/* TODO 参数 */);  // ?insertHeaderFooter@FV_View@@QAEXW4_HdrFtrType@@@Z
    public bool insertHeaderFooter(/* TODO 参数 */);  // ?insertHeaderFooter@FV_View@@QAE_NPAPBDW4_HdrFtrType@@PAVfl_
    public bool insertPageNum(/* TODO 参数 */);  // ?insertPageNum@FV_View@@QAE_NPAPBDW4_HdrFtrType@@@Z
    public bool insertParaBreakIfNeededAtPos(/* TODO 参数 */);  // ?insertParaBreakIfNeededAtPos@FV_View@@QAE_NI@Z
    public /* 未知 */ insertParagraphBreak(/* TODO 参数 */);  // ?insertParagraphBreak@FV_View@@QAEXXZ
    public /* 未知 */ insertParagraphBreaknoListUpdate(/* TODO 参数 */);  // ?insertParagraphBreaknoListUpdate@FV_View@@QAEXXZ
    public /* 未知 */ insertSectionBreak(/* TODO 参数 */);  // ?insertSectionBreak@FV_View@@QAEXW4BreakSectionType@@@Z
    public /* 未知 */ insertSectionBreak(/* TODO 参数 */);  // ?insertSectionBreak@FV_View@@QAEXXZ
    public /* 未知 */ insertSymbol(/* TODO 参数 */);  // ?insertSymbol@FV_View@@QAEXIPAD@Z
    public bool isCurrentListBlockEmpty(/* TODO 参数 */);  // ?isCurrentListBlockEmpty@FV_View@@QAE_NXZ
    virtual public bool isDocumentPresent(/* TODO 参数 */);  // ?isDocumentPresent@FV_View@@UAE_NXZ
    public bool isDraggingImage(/* TODO 参数 */);  // ?isDraggingImage@FV_View@@QAE_NXZ
    public bool isFooterOnPage(/* TODO 参数 */);  // ?isFooterOnPage@FV_View@@QAE_NXZ
    public bool isGrammarLoaded(/* TODO 参数 */);  // ?isGrammarLoaded@FV_View@@QAE_NXZ
    public bool isHdrFtrEdit(/* TODO 参数 */);  // ?isHdrFtrEdit@FV_View@@QAE_NXZ
    public bool isHeaderOnPage(/* TODO 参数 */);  // ?isHeaderOnPage@FV_View@@QAE_NXZ
    public bool isImageAtStrux(/* TODO 参数 */);  // ?isImageAtStrux@FV_View@@QAE_NIW4_PTStruxType@@@Z
    public bool isImageSelected(/* TODO 参数 */);  // ?isImageSelected@FV_View@@QAE_NXZ
    public bool isInDocSection(/* TODO 参数 */);  // ?isInDocSection@FV_View@@QAE_NI@Z
    public bool isInEndnote(/* TODO 参数 */);  // ?isInEndnote@FV_View@@QAE_NI@Z
    public bool isInEndnote(/* TODO 参数 */);  // ?isInEndnote@FV_View@@QAE_NXZ
    public bool isInFootnote(/* TODO 参数 */);  // ?isInFootnote@FV_View@@QAE_NI@Z
    public bool isInFootnote(/* TODO 参数 */);  // ?isInFootnote@FV_View@@QAE_NXZ
    public bool isInFrame(/* TODO 参数 */);  // ?isInFrame@FV_View@@QAE_NI@Z
    public bool isInHdrFtr(/* TODO 参数 */);  // ?isInHdrFtr@FV_View@@QAE_NI@Z
    public bool isInTable(/* TODO 参数 */);  // ?isInTable@FV_View@@QAE_NI@Z
    public bool isInTable(/* TODO 参数 */);  // ?isInTable@FV_View@@QAE_NXZ
    public bool isInTableForSure(/* TODO 参数 */);  // ?isInTableForSure@FV_View@@QAE_NI@Z
    public bool isLeftMargin(/* TODO 参数 */);  // ?isLeftMargin@FV_View@@QAE_NHH@Z
    public const bool isMarkRevisions(/* TODO 参数 */);  // ?isMarkRevisions@FV_View@@QBE_NXZ
    public bool isMathLoaded(/* TODO 参数 */);  // ?isMathLoaded@FV_View@@QAE_NXZ
    public bool isMathSelected(/* TODO 参数 */);  // ?isMathSelected@FV_View@@QAE_NHHAAI@Z
    public bool isNumberedHeadingHere(/* TODO 参数 */);  // ?isNumberedHeadingHere@FV_View@@QAE_NPAVfl_BlockLayout@@@Z
    public bool isOverImageResizeBox(/* TODO 参数 */);  // ?isOverImageResizeBox@FV_View@@QAE_NAAW4Cursor@GR_Graphics@@
    public bool isParaBreakNeededAtPos(/* TODO 参数 */);  // ?isParaBreakNeededAtPos@FV_View@@QAE_NI@Z
    public bool isPointBeforeListLabel(/* TODO 参数 */);  // ?isPointBeforeListLabel@FV_View@@QAE_NXZ
    public bool isPointLegal(/* TODO 参数 */);  // ?isPointLegal@FV_View@@QAE_NI@Z
    public bool isPointLegal(/* TODO 参数 */);  // ?isPointLegal@FV_View@@QAE_NXZ
    public const bool isPosSelected(/* TODO 参数 */);  // ?isPosSelected@FV_View@@QBE_NI@Z
    public const bool isPreview(/* TODO 参数 */);  // ?isPreview@FV_View@@QBE_NXZ
    public const bool isPureText(/* TODO 参数 */);  // ?isPureText@FV_View@@QBE_NXZ
    public bool isResizingImage(/* TODO 参数 */);  // ?isResizingImage@FV_View@@QAE_NXZ
    public bool isSelectAll(/* TODO 参数 */);  // ?isSelectAll@FV_View@@QAE_NXZ
    virtual public const bool isSelectionEmpty(/* TODO 参数 */);  // ?isSelectionEmpty@FV_View@@UBE_NXZ
    public const bool isShowRevisions(/* TODO 参数 */);  // ?isShowRevisions@FV_View@@QBE_NXZ
    public bool isTOCSelected(/* TODO 参数 */);  // ?isTOCSelected@FV_View@@QAE_NXZ
    public bool isTabListAheadPoint(/* TODO 参数 */);  // ?isTabListAheadPoint@FV_View@@QAE_NXZ
    public bool isTabListBehindPoint(/* TODO 参数 */);  // ?isTabListBehindPoint@FV_View@@QAE_NAAH@Z
    public const bool isTextMisspelled(/* TODO 参数 */);  // ?isTextMisspelled@FV_View@@QBE_NXZ
    public const bool isXYSelected(/* TODO 参数 */);  // ?isXYSelected@FV_View@@QBE_NHH@Z
    public /* 未知 */ killBlink(/* TODO 参数 */);  // ?killBlink@FV_View@@QAEXXZ
    public /* 未知 */ mapDocPos(/* TODO 参数 */);  // ?mapDocPos@FV_View@@QAEIW4_FVDocPos@@@Z
    public /* 未知 */ mapDocPosSimple(/* TODO 参数 */);  // ?mapDocPosSimple@FV_View@@QAEIW4_FVDocPos@@@Z
    public /* 未知 */ markSavedPositionAsNeeded(/* TODO 参数 */);  // ?markSavedPositionAsNeeded@FV_View@@QAEXXZ
    public /* 未知 */ moveInsPtTo(/* TODO 参数 */);  // ?moveInsPtTo@FV_View@@QAEXI@Z
    public /* 未知 */ moveInsPtTo(/* TODO 参数 */);  // ?moveInsPtTo@FV_View@@QAEXW4_FVDocPos@@_N@Z
    public bool needSavedPosition(/* TODO 参数 */);  // ?needSavedPosition@FV_View@@QAE_NXZ
    virtual public bool notifyListeners(/* TODO 参数 */);  // ?notifyListeners@FV_View@@UAE_NI@Z
    public /* 未知 */ pasteFromLocalTo(/* TODO 参数 */);  // ?pasteFromLocalTo@FV_View@@QAEXI@Z
    public /* 未知 */ pasteVisualText(/* TODO 参数 */);  // ?pasteVisualText@FV_View@@QAEXHH@Z
    public /* 未知 */ populateThisHdrFtr(/* TODO 参数 */);  // ?populateThisHdrFtr@FV_View@@QAEXW4_HdrFtrType@@_N@Z
    public bool processPageNumber(/* TODO 参数 */);  // ?processPageNumber@FV_View@@QAE_NW4_HdrFtrType@@PAPBD@Z
    public /* 未知 */ processSelectedBlocks(/* TODO 参数 */);  // ?processSelectedBlocks@FV_View@@QAEXW4FL_ListType@@@Z
    public const bool queryCharFormat(/* TODO 参数 */);  // ?queryCharFormat@FV_View@@QBE_NPBDAAVUT_UTF8String@@AA_N2@Z
    public const bool queryCharFormat(/* TODO 参数 */);  // ?queryCharFormat@FV_View@@QBE_NPBDAAVUT_UTF8String@@AA_NI@Z
    virtual public /* 未知 */ rebuildLayout(/* TODO 参数 */);  // ?rebuildLayout@FV_View@@UAEXXZ
    public /* 未知 */ releaseFrame(/* TODO 参数 */);  // ?releaseFrame@FV_View@@QAEXHH@Z
    public /* 未知 */ releaseInlineImage(/* TODO 参数 */);  // ?releaseInlineImage@FV_View@@QAEXHH@Z
    virtual public /* 未知 */ remeasureCharsWithoutRebuild(/* TODO 参数 */);  // ?remeasureCharsWithoutRebuild@FV_View@@UAEXXZ
    public /* 未知 */ rememberCurrentPosition(/* TODO 参数 */);  // ?rememberCurrentPosition@FV_View@@QAEXXZ
    public bool removeStruxAttrProps(/* TODO 参数 */);  // ?removeStruxAttrProps@FV_View@@QAE_NIIW4_PTStruxType@@QAPBD1
    public /* 未知 */ removeThisHdrFtr(/* TODO 参数 */);  // ?removeThisHdrFtr@FV_View@@QAEXW4_HdrFtrType@@_N@Z
    public /* 未知 */ replaceGraphics(/* TODO 参数 */);  // ?replaceGraphics@FV_View@@QAEXPAVGR_Graphics@@@Z
    public bool resetCharFormat(/* TODO 参数 */);  // ?resetCharFormat@FV_View@@QAE_N_N@Z
    public /* 未知 */ saveSelectedImage(/* TODO 参数 */);  // ?saveSelectedImage@FV_View@@QAEIPAPBVUT_ByteBuf@@@Z
    public /* 未知 */ saveSelectedImage(/* TODO 参数 */);  // ?saveSelectedImage@FV_View@@QAEIPBD@Z
    public /* 未知 */ screenRefresh_InvalidateRect(/* TODO 参数 */);  // ?screenRefresh_InvalidateRect@FV_View@@SAXPAVUT_Worker@@@Z
    public /* 未知 */ selectFrame(/* TODO 参数 */);  // ?selectFrame@FV_View@@QAEXXZ
    public /* 未知 */ sendErrinfoToDelphi(/* TODO 参数 */);  // ?sendErrinfoToDelphi@FV_View@@QAEXH@Z
    public /* 未知 */ setBidiOrder(/* TODO 参数 */);  // ?setBidiOrder@FV_View@@QAEXW4FV_BIDI_Order@@@Z
    public bool setBlockFormat(/* TODO 参数 */);  // ?setBlockFormat@FV_View@@QAE_NQAPBD@Z
    public bool setBlockIndents(/* TODO 参数 */);  // ?setBlockIndents@FV_View@@QAE_N_NNN@Z
    public bool setCellFormat(/* TODO 参数 */);  // ?setCellFormat@FV_View@@QAE_NQAPBDW4_FormatTable@@PAVFG_Grap
    public bool setCellPropertires(/* TODO 参数 */);  // ?setCellPropertires@FV_View@@QAE_NPAPBD@Z
    public bool setCharFormat(/* TODO 参数 */);  // ?setCharFormat@FV_View@@QAE_NQAPBD0_N@Z
    public bool setCollapsedRange(/* TODO 参数 */);  // ?setCollapsedRange@FV_View@@QAE_NIIQAPBD@Z
    public /* 未知 */ setCurImageSel(/* TODO 参数 */);  // ?setCurImageSel@FV_View@@QAEXVUT_Rect@@@Z
    virtual public /* 未知 */ setCursorToContext(/* TODO 参数 */);  // ?setCursorToContext@FV_View@@UAEXXZ
    virtual public /* 未知 */ setCursorWait(/* TODO 参数 */);  // ?setCursorWait@FV_View@@UAEXXZ
    public /* 未知 */ setDontChangeInsPoint(/* TODO 参数 */);  // ?setDontChangeInsPoint@FV_View@@QAEXXZ
    public /* 未知 */ setDragTableLine(/* TODO 参数 */);  // ?setDragTableLine@FV_View@@QAEX_N@Z
    public /* 未知 */ setFrameFormat(/* TODO 参数 */);  // ?setFrameFormat@FV_View@@QAEXPAPBD0@Z
    public /* 未知 */ setFrameFormat(/* TODO 参数 */);  // ?setFrameFormat@FV_View@@QAEXPAPBD@Z
    public /* 未知 */ setFrameFormat(/* TODO 参数 */);  // ?setFrameFormat@FV_View@@QAEXPAPBDPAVFG_Graphic@@AAVUT_Strin
    public /* 未知 */ setGraphics(/* TODO 参数 */);  // ?setGraphics@FV_View@@QAEXPAVGR_Graphics@@@Z
    public /* 未知 */ setHdrFtrEdit(/* TODO 参数 */);  // ?setHdrFtrEdit@FV_View@@QAEXPAVfl_HdrFtrShadow@@@Z
    public /* 未知 */ setImageSelRect(/* TODO 参数 */);  // ?setImageSelRect@FV_View@@QAEXVUT_Rect@@@Z
    public /* 未知 */ setLeftRuler(/* TODO 参数 */);  // ?setLeftRuler@FV_View@@QAEXPAVAP_LeftRuler@@@Z
    virtual public /* 未知 */ setPaperColor(/* TODO 参数 */);  // ?setPaperColor@FV_View@@UAEXPBD@Z
    public /* 未知 */ setPoint(/* TODO 参数 */);  // ?setPoint@FV_View@@QAEXI@Z
    public /* 未知 */ setPreviewMode(/* TODO 参数 */);  // ?setPreviewMode@FV_View@@QAEXW4PreViewMode@@@Z
    public /* 未知 */ setRevisionLevel(/* TODO 参数 */);  // ?setRevisionLevel@FV_View@@QAEXI@Z
    public /* 未知 */ setScreenUpdateOnGeneralUpdate(/* TODO 参数 */);  // ?setScreenUpdateOnGeneralUpdate@FV_View@@QAEX_N@Z
    public bool setSectionFormat(/* TODO 参数 */);  // ?setSectionFormat@FV_View@@QAE_NQAPBD@Z
    public /* 未知 */ setSelectionMode(/* TODO 参数 */);  // ?setSelectionMode@FV_View@@QAEXW4_FV_SelectionMode@@@Z
    public /* 未知 */ setShowPara(/* TODO 参数 */);  // ?setShowPara@FV_View@@QAEX_N@Z
    public /* 未知 */ setShowRevisions(/* TODO 参数 */);  // ?setShowRevisions@FV_View@@QAEX_N@Z
    public bool setStyle(/* TODO 参数 */);  // ?setStyle@FV_View@@QAE_NPBD_N@Z
    public bool setStyleAtPos(/* TODO 参数 */);  // ?setStyleAtPos@FV_View@@QAE_NPBDII_N0@Z
    public bool setTOCProps(/* TODO 参数 */);  // ?setTOCProps@FV_View@@QAE_NIPBD@Z
    public bool setTableFormat(/* TODO 参数 */);  // ?setTableFormat@FV_View@@QAE_NIQAPBD@Z
    public bool setTableFormat(/* TODO 参数 */);  // ?setTableFormat@FV_View@@QAE_NQAPBD@Z
    public bool setTablePrintType(/* TODO 参数 */);  // ?setTablePrintType@FV_View@@QAE_NPBD@Z
    public /* 未知 */ setTopRuler(/* TODO 参数 */);  // ?setTopRuler@FV_View@@QAEXPAVAP_TopRuler@@@Z
    public /* 未知 */ setViewMode(/* TODO 参数 */);  // ?setViewMode@FV_View@@QAEXW4ViewMode@@@Z
    virtual public /* 未知 */ setXScrollOffset(/* TODO 参数 */);  // ?setXScrollOffset@FV_View@@UAEXH@Z
    virtual public /* 未知 */ setYScrollOffset(/* TODO 参数 */);  // ?setYScrollOffset@FV_View@@UAEXH@Z
    public const bool shouldScreenUpdateOnGeneralUpdate(/* TODO 参数 */);  // ?shouldScreenUpdateOnGeneralUpdate@FV_View@@QBE_NXZ
    public /* 未知 */ startImageDrag(/* TODO 参数 */);  // ?startImageDrag@FV_View@@QAEXPAVfp_Run@@HH@Z
    public /* 未知 */ startImageResizing(/* TODO 参数 */);  // ?startImageResizing@FV_View@@QAEXHH@Z
    public /* 未知 */ stopImageDrag(/* TODO 参数 */);  // ?stopImageDrag@FV_View@@QAEXHH@Z
    public /* 未知 */ stopImageResizing(/* TODO 参数 */);  // ?stopImageResizing@FV_View@@QAEXXZ
    virtual public /* 未知 */ toggleCase(/* TODO 参数 */);  // ?toggleCase@FV_View@@UAEXW4_ToggleCase@@@Z
    public /* 未知 */ toggleMarkRevisions(/* TODO 参数 */);  // ?toggleMarkRevisions@FV_View@@QAEXXZ
    public /* 未知 */ toggleShowRevisions(/* TODO 参数 */);  // ?toggleShowRevisions@FV_View@@QAEXXZ
    virtual public const /* 未知 */ undoCount(/* TODO 参数 */);  // ?undoCount@FV_View@@UBEI_N@Z
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@FV_View@@UAEXXZ
    public /* 未知 */ updateRevisionMode(/* TODO 参数 */);  // ?updateRevisionMode@FV_View@@QAEXXZ
    virtual public /* 未知 */ updateScreen(/* TODO 参数 */);  // ?updateScreen@FV_View@@UAEX_N@Z
    public bool uwCheckBlockIsEmpty(/* TODO 参数 */);  // ?uwCheckBlockIsEmpty@FV_View@@QAE_NIH@Z
    public bool uwCheckElemIsExtProp1SelectTrue(/* TODO 参数 */);  // ?uwCheckElemIsExtProp1SelectTrue@FV_View@@QAE_NI@Z
    public bool uwCheckElemIsReadonly(/* TODO 参数 */);  // ?uwCheckElemIsReadonly@FV_View@@QAE_NI@Z
    public /* 未知 */ uwCheckLineStatus(/* TODO 参数 */);  // ?uwCheckLineStatus@FV_View@@QAEXIAAI@Z
    public bool uwCheckParaElems(/* TODO 参数 */);  // ?uwCheckParaElems@FV_View@@QAE_NPBD@Z
    public bool uwCheckRDExtProp1forRgn(/* TODO 参数 */);  // ?uwCheckRDExtProp1forRgn@FV_View@@QAE_NII@Z
    public bool uwCheckRDforRgn(/* TODO 参数 */);  // ?uwCheckRDforRgn@FV_View@@QAE_NII@Z
    public /* 未知 */ uwCheckSelectXml(/* TODO 参数 */);  // ?uwCheckSelectXml@FV_View@@QAEXXZ
    public /* 未知 */ uwContinuePrintEnd(/* TODO 参数 */);  // ?uwContinuePrintEnd@FV_View@@QAEXXZ
    public bool uwConvertTextToElem(/* TODO 参数 */);  // ?uwConvertTextToElem@FV_View@@QAE_NXZ
    public /* 未知 */ uwCopySelectXmlData(/* TODO 参数 */);  // ?uwCopySelectXmlData@FV_View@@QAEXXZ
    public /* 未知 */ uwDeleteEmptyBlock(/* TODO 参数 */);  // ?uwDeleteEmptyBlock@FV_View@@QAEIIH@Z
    public bool uwDeleteParaDataCheck(/* TODO 参数 */);  // ?uwDeleteParaDataCheck@FV_View@@QAE_NH@Z
    public bool uwEnableParaChange(/* TODO 参数 */);  // ?uwEnableParaChange@FV_View@@QAE_NI@Z
    public bool uwFindCellByStartPos(/* TODO 参数 */);  // ?uwFindCellByStartPos@FV_View@@QAE_NIIIAAI@Z
    public bool uwFindCellByTblkey(/* TODO 参数 */);  // ?uwFindCellByTblkey@FV_View@@QAE_NV?$basic_string@DU?$char_t
    public bool uwFindCellByTblpos(/* TODO 参数 */);  // ?uwFindCellByTblpos@FV_View@@QAE_NIIIAAI@Z
    public /* 未知 */ uwFindEMRDataItem(/* TODO 参数 */);  // ?uwFindEMRDataItem@FV_View@@QAEPAUEMRDataItem@@V?$basic_stri
    public bool uwFindKeyTblByPos(/* TODO 参数 */);  // ?uwFindKeyTblByPos@FV_View@@QAE_NIAAI@Z
    public /* 未知 */ uwFindParaPathname(/* TODO 参数 */);  // ?uwFindParaPathname@FV_View@@QAEPAVpf_Frag@@PAV2@PAPBD@Z
    public bool uwFindTblByTblkey(/* TODO 参数 */);  // ?uwFindTblByTblkey@FV_View@@QAE_NV?$basic_string@DU?$char_tr
    public /* 未知 */ uwGetElemColor(/* TODO 参数 */);  // ?uwGetElemColor@FV_View@@QAEHW4TElemPropType@@IPBDAAVUT_Stri
    public /* 未知 */ uwGetElemValue(/* TODO 参数 */);  // ?uwGetElemValue@FV_View@@QAEHW4TElemPropType@@IPBDAAVUT_Stri
    public bool uwGetHdrftrFragPair(/* TODO 参数 */);  // ?uwGetHdrftrFragPair@FV_View@@QAE_NV?$basic_string@DU?$char_
    public /* 未知 */ uwGetInstanceTreeByParakey(/* TODO 参数 */);  // ?uwGetInstanceTreeByParakey@FV_View@@QAEXV?$basic_string@DU?
    public bool uwGetParaContentFirstPos(/* TODO 参数 */);  // ?uwGetParaContentFirstPos@FV_View@@QAE_NV?$basic_string@DU?$
    public /* 未知 */ uwGetPrinterGraphicsContext(/* TODO 参数 */);  // ?uwGetPrinterGraphicsContext@FV_View@@QAEPAVGR_Graphics@@II@
    public /* 未知 */ uwGetSectionFormat(/* TODO 参数 */);  // ?uwGetSectionFormat@FV_View@@QAEXAAV?$basic_string@DU?$char_
    public /* 未知 */ uwGetSelectionAnchor(/* TODO 参数 */);  // ?uwGetSelectionAnchor@FV_View@@QAEIXZ
    public bool uwGetSelectiondata(/* TODO 参数 */);  // ?uwGetSelectiondata@FV_View@@QAE_NAAVUT_String@@PBD@Z
    public bool uwGetTblInfo(/* TODO 参数 */);  // ?uwGetTblInfo@FV_View@@QAE_NIAAIAAH10@Z
    public bool uwGetTblKeyAttr(/* TODO 参数 */);  // ?uwGetTblKeyAttr@FV_View@@QAE_NIAAV?$basic_string@DU?$char_t
    public bool uwGetTblkeyList(/* TODO 参数 */);  // ?uwGetTblkeyList@FV_View@@QAE_NAAV?$basic_string@DU?$char_tr
    public /* 未知 */ uwGetWin32AppInstance(/* TODO 参数 */);  // ?uwGetWin32AppInstance@FV_View@@QAEIXZ
    public bool uwIMENavigate(/* TODO 参数 */);  // ?uwIMENavigate@FV_View@@QAE_N_N0@Z
    public /* 未知 */ uwIllrecpara_spacing(/* TODO 参数 */);  // ?uwIllrecpara_spacing@FV_View@@QAEXV?$basic_string@DU?$char_
    public bool uwImptextForElem(/* TODO 参数 */);  // ?uwImptextForElem@FV_View@@QAE_NV?$basic_string@DU?$char_tra
    public bool uwInsertParagraphBreak(/* TODO 参数 */);  // ?uwInsertParagraphBreak@FV_View@@QAE_NI_N@Z
    public bool uwIsDraw(/* TODO 参数 */);  // ?uwIsDraw@FV_View@@QAE_NI@Z
    public bool uwIsDraw(/* TODO 参数 */);  // ?uwIsDraw@FV_View@@QAE_NPBVpf_Frag@@@Z
    public bool uwIsInParaTitle(/* TODO 参数 */);  // ?uwIsInParaTitle@FV_View@@QAE_NI@Z
    public /* 未知 */ uwJustifyInsertPos(/* TODO 参数 */);  // ?uwJustifyInsertPos@FV_View@@QAEII@Z
    public /* 未知 */ uwMergePTag(/* TODO 参数 */);  // ?uwMergePTag@FV_View@@QAEXI@Z
    public /* 未知 */ uwNotifyBindform(/* TODO 参数 */);  // ?uwNotifyBindform@FV_View@@QAEXIV?$basic_string@DU?$char_tra
    public bool uwOverrideParaDataCheck(/* TODO 参数 */);  // ?uwOverrideParaDataCheck@FV_View@@QAE_N_N@Z
    public /* 未知 */ uwParaRepair(/* TODO 参数 */);  // ?uwParaRepair@FV_View@@QAEXXZ
    public bool uwParaSerialize(/* TODO 参数 */);  // ?uwParaSerialize@FV_View@@QAE_NPBD@Z
    public /* 未知 */ uwPasteXmlData(/* TODO 参数 */);  // ?uwPasteXmlData@FV_View@@QAEHI@Z
    public bool uwPasteXmlData_GenerNewDataID(/* TODO 参数 */);  // ?uwPasteXmlData_GenerNewDataID@FV_View@@QAE_NAAV?$basic_stri
    public /* 未知 */ uwReleasePrinterGraphicsContext(/* TODO 参数 */);  // ?uwReleasePrinterGraphicsContext@FV_View@@QAEXPAVGR_Graphics
    public bool uwSaveCellToStreamByPos(/* TODO 参数 */);  // ?uwSaveCellToStreamByPos@FV_View@@QAE_NIAAV?$basic_string@DU
    public bool uwSaveDocRangeToStream(/* TODO 参数 */);  // ?uwSaveDocRangeToStream@FV_View@@QAE_NHIIAAV?$basic_string@D
    public bool uwSaveTblToStreamByPos(/* TODO 参数 */);  // ?uwSaveTblToStreamByPos@FV_View@@QAE_NIAAV?$basic_string@DU?
    public /* 未知 */ uwSetElemColor(/* TODO 参数 */);  // ?uwSetElemColor@FV_View@@QAEHW4TElemPropType@@IPBD1@Z
    public /* 未知 */ uwSetElemValue(/* TODO 参数 */);  // ?uwSetElemValue@FV_View@@QAEHW4TElemPropType@@IPBD1@Z
    public /* 未知 */ uwSetElemVisible(/* TODO 参数 */);  // ?uwSetElemVisible@FV_View@@QAEHW4TElemPropType@@IPBD111@Z
    public /* 未知 */ uwSetSectionFormat(/* TODO 参数 */);  // ?uwSetSectionFormat@FV_View@@QAEXV?$basic_string@DU?$char_tr
    public bool uwSetTblKeyAttr(/* TODO 参数 */);  // ?uwSetTblKeyAttr@FV_View@@QAE_NIV?$basic_string@DU?$char_tra
    public /* 未知 */ uwsethdrftrepvalModify(/* TODO 参数 */);  // ?uwsethdrftrepvalModify@FV_View@@QAEHXZ
    public /* 未知 */ warpInsPtNextPrevLine(/* TODO 参数 */);  // ?warpInsPtNextPrevLine@FV_View@@QAEX_N@Z
    public /* 未知 */ warpInsPtNextPrevPage(/* TODO 参数 */);  // ?warpInsPtNextPrevPage@FV_View@@QAEX_N@Z
    public /* 未知 */ warpInsPtNextPrevScreen(/* TODO 参数 */);  // ?warpInsPtNextPrevScreen@FV_View@@QAEX_N@Z
    public /* 未知 */ warpInsPtToXY(/* TODO 参数 */);  // ?warpInsPtToXY@FV_View@@QAEXHH_N@Z
};

/* ---- FV_VisualDragText (18 方法) ---- */
class FV_VisualDragText {
public:
    public /* 未知 */ _autoScroll(/* TODO 参数 */);  // ?_autoScroll@FV_VisualDragText@@SAXPAVUT_Worker@@@Z
    public /* 未知 */ abortDrag(/* TODO 参数 */);  // ?abortDrag@FV_VisualDragText@@QAEXXZ
    public /* 未知 */ clearCursor(/* TODO 参数 */);  // ?clearCursor@FV_VisualDragText@@QAEXXZ
    public /* 未知 */ drawCursor(/* TODO 参数 */);  // ?drawCursor@FV_VisualDragText@@QAEXI@Z
    public /* 未知 */ drawImage(/* TODO 参数 */);  // ?drawImage@FV_VisualDragText@@QAEXXZ
    public const /* 未知 */ getGraphics(/* TODO 参数 */);  // ?getGraphics@FV_VisualDragText@@QBEPAVGR_Graphics@@XZ
    public /* 未知 */ getImageFromSelection(/* TODO 参数 */);  // ?getImageFromSelection@FV_VisualDragText@@QAEXHH@Z
    public /* 未知 */ getPosFromXY(/* TODO 参数 */);  // ?getPosFromXY@FV_VisualDragText@@QAEIHH@Z
    public const /* 未知 */ getVisualDragMode(/* TODO 参数 */);  // ?getVisualDragMode@FV_VisualDragText@@QBE?AW4_FV_VisualDragM
    public const bool isActive(/* TODO 参数 */);  // ?isActive@FV_VisualDragText@@QBE_NXZ
    public bool isDoingCopy(/* TODO 参数 */);  // ?isDoingCopy@FV_VisualDragText@@QAE_NXZ
    public bool isNotdraggingImage(/* TODO 参数 */);  // ?isNotdraggingImage@FV_VisualDragText@@QAE_NXZ
    public /* 未知 */ mouseCopy(/* TODO 参数 */);  // ?mouseCopy@FV_VisualDragText@@QAEXHH@Z
    public bool mouseCut(/* TODO 参数 */);  // ?mouseCut@FV_VisualDragText@@QAE_NHH@Z
    public /* 未知 */ mouseDrag(/* TODO 参数 */);  // ?mouseDrag@FV_VisualDragText@@QAEXHH@Z
    public /* 未知 */ mouseRelease(/* TODO 参数 */);  // ?mouseRelease@FV_VisualDragText@@QAEXHH@Z
    public bool reposOffsets(/* TODO 参数 */);  // ?reposOffsets@FV_VisualDragText@@QAE_NHH@Z
    public /* 未知 */ setMode(/* TODO 参数 */);  // ?setMode@FV_VisualDragText@@QAEXW4_FV_VisualDragMode@@@Z
};

/* ---- FV_VisualInlineImage (24 方法) ---- */
class FV_VisualInlineImage {
public:
    public /* 未知 */ _autoScroll(/* TODO 参数 */);  // ?_autoScroll@FV_VisualInlineImage@@SAXPAVUT_Worker@@@Z
    public /* 未知 */ _beginGlob(/* TODO 参数 */);  // ?_beginGlob@FV_VisualInlineImage@@QAEXXZ
    public /* 未知 */ _endGlob(/* TODO 参数 */);  // ?_endGlob@FV_VisualInlineImage@@QAEXXZ
    public /* 未知 */ cleanUP(/* TODO 参数 */);  // ?cleanUP@FV_VisualInlineImage@@QAEXXZ
    public /* 未知 */ clearCursor(/* TODO 参数 */);  // ?clearCursor@FV_VisualInlineImage@@QAEXXZ
    public /* 未知 */ drawCursor(/* TODO 参数 */);  // ?drawCursor@FV_VisualInlineImage@@QAEXI@Z
    public bool drawImage(/* TODO 参数 */);  // ?drawImage@FV_VisualInlineImage@@QAE_NXZ
    public const /* 未知 */ getDoc(/* TODO 参数 */);  // ?getDoc@FV_VisualInlineImage@@QBEPAVPD_Document@@XZ
    public /* 未知 */ getGlobCount(/* TODO 参数 */);  // ?getGlobCount@FV_VisualInlineImage@@QAEHXZ
    public const /* 未知 */ getGraphics(/* TODO 参数 */);  // ?getGraphics@FV_VisualInlineImage@@QBEPAVGR_Graphics@@XZ
    public /* 未知 */ getImageAPFromXY(/* TODO 参数 */);  // ?getImageAPFromXY@FV_VisualInlineImage@@QAEPAVPP_AttrProp@@H
    public /* 未知 */ getImageFromSelection(/* TODO 参数 */);  // ?getImageFromSelection@FV_VisualInlineImage@@QAEXHHPAPAVPP_A
    public const /* 未知 */ getInlineDragMode(/* TODO 参数 */);  // ?getInlineDragMode@FV_VisualInlineImage@@QBE?AW4_FV_InlineDr
    public const /* 未知 */ getInlineDragWhat(/* TODO 参数 */);  // ?getInlineDragWhat@FV_VisualInlineImage@@QBE?AW4_FV_InlineDr
    public const /* 未知 */ getLayout(/* TODO 参数 */);  // ?getLayout@FV_VisualInlineImage@@QBEPAVFL_DocLayout@@XZ
    public /* 未知 */ getPosFromXY(/* TODO 参数 */);  // ?getPosFromXY@FV_VisualInlineImage@@QAEIHH@Z
    public const bool isActive(/* TODO 参数 */);  // ?isActive@FV_VisualInlineImage@@QBE_NXZ
    public /* 未知 */ mouseCopy(/* TODO 参数 */);  // ?mouseCopy@FV_VisualInlineImage@@QAEXHH@Z
    public /* 未知 */ mouseCut(/* TODO 参数 */);  // ?mouseCut@FV_VisualInlineImage@@QAEXHH@Z
    public /* 未知 */ mouseDrag(/* TODO 参数 */);  // ?mouseDrag@FV_VisualInlineImage@@QAEXHH@Z
    public /* 未知 */ mouseLeftPress(/* TODO 参数 */);  // ?mouseLeftPress@FV_VisualInlineImage@@QAEXHH@Z
    public /* 未知 */ mouseRelease(/* TODO 参数 */);  // ?mouseRelease@FV_VisualInlineImage@@QAEXHH@Z
    public /* 未知 */ setDragType(/* TODO 参数 */);  // ?setDragType@FV_VisualInlineImage@@QAEXHH_N@Z
    public /* 未知 */ setMode(/* TODO 参数 */);  // ?setMode@FV_VisualInlineImage@@QAEXW4_FV_InlineDragMode@@@Z
};

/* ---- GR_Caret (19 方法) ---- */
class GR_Caret {
public:
    public const /* 未知 */ GetInsertColor(/* TODO 参数 */);  // ?GetInsertColor@GR_Caret@@QBE?AVUT_RGBColor@@XZ
    public /* 未知 */ _blink(/* TODO 参数 */);  // ?_blink@GR_Caret@@AAEX_N@Z
    public /* 未知 */ _erase(/* TODO 参数 */);  // ?_erase@GR_Caret@@AAEXXZ
    public /* 未知 */ disable(/* TODO 参数 */);  // ?disable@GR_Caret@@QAEX_N@Z
    public /* 未知 */ enable(/* TODO 参数 */);  // ?enable@GR_Caret@@QAEXXZ
    public /* 未知 */ forceDraw(/* TODO 参数 */);  // ?forceDraw@GR_Caret@@QAEXXZ
    public /* 未知 */ getCanCursorBlink(/* TODO 参数 */);  // ?getCanCursorBlink@GR_Caret@@ABE_NXZ
    public /* 未知 */ getCaretHeight(/* TODO 参数 */);  // ?getCaretHeight@GR_Caret@@QAEXPAI@Z
    public /* 未知 */ getCaretPos(/* TODO 参数 */);  // ?getCaretPos@GR_Caret@@QAEXPAI0@Z
    public /* 未知 */ getCursorBlinkTime(/* TODO 参数 */);  // ?getCursorBlinkTime@GR_Caret@@ABEIXZ
    public bool getInsertMode(/* TODO 参数 */);  // ?getInsertMode@GR_Caret@@QAE_NXZ
    public const bool isEnabled(/* TODO 参数 */);  // ?isEnabled@GR_Caret@@QBE_NXZ
    public /* 未知 */ s_enable(/* TODO 参数 */);  // ?s_enable@GR_Caret@@CAXPAVUT_Worker@@@Z
    public /* 未知 */ s_work(/* TODO 参数 */);  // ?s_work@GR_Caret@@CAXPAVUT_Worker@@@Z
    public /* 未知 */ setBlink(/* TODO 参数 */);  // ?setBlink@GR_Caret@@QAEX_N@Z
    public /* 未知 */ setCoords(/* TODO 参数 */);  // ?setCoords@GR_Caret@@QAEXHHIHHI_NPAVUT_RGBColor@@@Z
    public /* 未知 */ setInsertColor(/* TODO 参数 */);  // ?setInsertColor@GR_Caret@@QAEXVUT_RGBColor@@@Z
    public /* 未知 */ setInsertMode(/* TODO 参数 */);  // ?setInsertMode@GR_Caret@@QAEX_N@Z
    public /* 未知 */ setWindowSize(/* TODO 参数 */);  // ?setWindowSize@GR_Caret@@QAEXII@Z
};

/* ---- GR_CharWidths (3 方法) ---- */
class GR_CharWidths {
public:
    public const /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@GR_CharWidths@@QBEHI@Z
    public /* 未知 */ setWidth(/* TODO 参数 */);  // ?setWidth@GR_CharWidths@@QAEXIH@Z
    public /* 未知 */ zeroWidths(/* TODO 参数 */);  // ?zeroWidths@GR_CharWidths@@QAEXXZ
};

/* ---- GR_EmbedManager (23 方法) ---- */
class GR_EmbedManager {
public:
    virtual public bool changeAPI(/* TODO 参数 */);  // ?changeAPI@GR_EmbedManager@@UAE_NHI@Z
    virtual public bool convert(/* TODO 参数 */);  // ?convert@GR_EmbedManager@@UAE_NIAAVUT_ByteBuf@@0@Z
    virtual public /* 未知 */ create(/* TODO 参数 */);  // ?create@GR_EmbedManager@@UAEPAV1@PAVGR_Graphics@@@Z
    virtual public /* 未知 */ getAscent(/* TODO 参数 */);  // ?getAscent@GR_EmbedManager@@UAEHH@Z
    virtual public /* 未知 */ getDescent(/* TODO 参数 */);  // ?getDescent@GR_EmbedManager@@UAEHH@Z
    public /* 未知 */ getGraphics(/* TODO 参数 */);  // ?getGraphics@GR_EmbedManager@@QAEPAVGR_Graphics@@XZ
    virtual public const /* 未知 */ getObjectType(/* TODO 参数 */);  // ?getObjectType@GR_EmbedManager@@UBEPBDXZ
    virtual public /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@GR_EmbedManager@@UAEHH@Z
    virtual public /* 未知 */ initialize(/* TODO 参数 */);  // ?initialize@GR_EmbedManager@@UAEXXZ
    virtual public /* 未知 */ initializeEmbedView(/* TODO 参数 */);  // ?initializeEmbedView@GR_EmbedManager@@UAEXH@Z
    virtual public bool isDefault(/* TODO 参数 */);  // ?isDefault@GR_EmbedManager@@UAE_NXZ
    virtual public bool isEdittable(/* TODO 参数 */);  // ?isEdittable@GR_EmbedManager@@UAE_NH@Z
    virtual public bool isResizeable(/* TODO 参数 */);  // ?isResizeable@GR_EmbedManager@@UAE_NH@Z
    virtual public /* 未知 */ loadEmbedData(/* TODO 参数 */);  // ?loadEmbedData@GR_EmbedManager@@UAEXH@Z
    virtual public /* 未知 */ makeEmbedView(/* TODO 参数 */);  // ?makeEmbedView@GR_EmbedManager@@UAEHPAVAD_Document@@IPBD@Z
    virtual public /* 未知 */ makeSnapShot(/* TODO 参数 */);  // ?makeSnapShot@GR_EmbedManager@@UAEXHAAVUT_Rect@@@Z
    virtual public bool modify(/* TODO 参数 */);  // ?modify@GR_EmbedManager@@UAE_NH@Z
    virtual public /* 未知 */ releaseEmbedView(/* TODO 参数 */);  // ?releaseEmbedView@GR_EmbedManager@@UAEXH@Z
    virtual public /* 未知 */ render(/* TODO 参数 */);  // ?render@GR_EmbedManager@@UAEXHAAVUT_Rect@@@Z
    virtual public /* 未知 */ setColor(/* TODO 参数 */);  // ?setColor@GR_EmbedManager@@UAEXHVUT_RGBColor@@@Z
    virtual public /* 未知 */ setDefaultFontSize(/* TODO 参数 */);  // ?setDefaultFontSize@GR_EmbedManager@@UAEXHH@Z
    virtual public /* 未知 */ setGraphics(/* TODO 参数 */);  // ?setGraphics@GR_EmbedManager@@UAEXPAVGR_Graphics@@@Z
    virtual public /* 未知 */ setRun(/* TODO 参数 */);  // ?setRun@GR_EmbedManager@@UAEXHPAVfp_Run@@@Z
};

/* ---- GR_EmbedView (1 方法) ---- */
class GR_EmbedView {
public:
    public bool getSnapShots(/* TODO 参数 */);  // ?getSnapShots@GR_EmbedView@@QAE_NXZ
};

/* ---- GR_Font (10 方法) ---- */
class GR_Font {
public:
    public /* 未知 */ _getCharWidths(/* TODO 参数 */);  // ?_getCharWidths@GR_Font@@IBEPAVGR_CharWidths@@XZ
    virtual public bool doesGlyphExist(/* TODO 参数 */);  // ?doesGlyphExist@GR_Font@@UAE_NI@Z
    public const /* 未知 */ getAllocNumber(/* TODO 参数 */);  // ?getAllocNumber@GR_Font@@QBEIXZ
    public const /* 未知 */ getCharWidthFromCache(/* TODO 参数 */);  // ?getCharWidthFromCache@GR_Font@@QBEHI@Z
    virtual public const /* 未知 */ getFamily(/* TODO 参数 */);  // ?getFamily@GR_Font@@UBEPBDXZ
    virtual public const /* 未知 */ hashKey(/* TODO 参数 */);  // ?hashKey@GR_Font@@UBEABVUT_String@@XZ
    virtual public const /* 未知 */ newFontWidths(/* TODO 参数 */);  // ?newFontWidths@GR_Font@@UBEPAVGR_CharWidths@@XZ
    public /* 未知 */ s_doesGlyphExist(/* TODO 参数 */);  // ?s_doesGlyphExist@GR_Font@@SA_NIPAX@Z
    public /* 未知 */ s_getGenericFontProperties(/* TODO 参数 */);  // ?s_getGenericFontProperties@GR_Font@@SAXPBDPAW4FontFamilyEnu
    public /* 未知 */ s_iAllocCount(/* TODO 参数 */);  // ?s_iAllocCount@GR_Font@@0IA
};

/* ---- GR_Graphics (89 方法) ---- */
class GR_Graphics {
public:
    virtual public /* 未知 */ RVS_drawLine_width(/* TODO 参数 */);  // ?RVS_drawLine_width@GR_Graphics@@UAEXHHHH@Z
    virtual public const /* 未知 */ XYToPosition(/* TODO 参数 */);  // ?XYToPosition@GR_Graphics@@UBEIABVGR_RenderInfo@@HH@Z
    public /* 未知 */ _PtInPolygon(/* TODO 参数 */);  // ?_PtInPolygon@GR_Graphics@@AAE_NPAUUT_Point@@IHH@Z
    public /* 未知 */ _beginPaint(/* TODO 参数 */);  // ?_beginPaint@GR_Graphics@@MAEXXZ
    protected /* 未知 */ _destroyFonts(/* TODO 参数 */);  // ?_destroyFonts@GR_Graphics@@IAEXXZ
    public /* 未知 */ _endPaint(/* TODO 参数 */);  // ?_endPaint@GR_Graphics@@MAEXXZ
    public /* 未知 */ _setTransform(/* TODO 参数 */);  // ?_setTransform@GR_Graphics@@EAE_NABVGR_Transform@@@Z
    public const /* 未知 */ _tduR(/* TODO 参数 */);  // ?_tduR@GR_Graphics@@QBEHH@Z
    public const /* 未知 */ _tduX(/* TODO 参数 */);  // ?_tduX@GR_Graphics@@QBEHH@Z
    public const /* 未知 */ _tduY(/* TODO 参数 */);  // ?_tduY@GR_Graphics@@QBEHH@Z
    virtual public /* 未知 */ adjustCaretPosition(/* TODO 参数 */);  // ?adjustCaretPosition@GR_Graphics@@UAEIAAVGR_RenderInfo@@_N@Z
    virtual public /* 未知 */ adjustDeletePosition(/* TODO 参数 */);  // ?adjustDeletePosition@GR_Graphics@@UAEXAAVGR_RenderInfo@@@Z
    virtual public const /* 未知 */ appendRenderedCharsToBuff(/* TODO 参数 */);  // ?appendRenderedCharsToBuff@GR_Graphics@@UBEXAAVGR_RenderInfo
    public /* 未知 */ beginPaint(/* TODO 参数 */);  // ?beginPaint@GR_Graphics@@AAEXXZ
    virtual public bool canBreak(/* TODO 参数 */);  // ?canBreak@GR_Graphics@@UAE_NAAVGR_RenderInfo@@AAH_N@Z
    virtual public const /* 未知 */ countJustificationPoints(/* TODO 参数 */);  // ?countJustificationPoints@GR_Graphics@@UBEHABVGR_RenderInfo@
    public /* 未知 */ createCaret(/* TODO 参数 */);  // ?createCaret@GR_Graphics@@QAEXXZ
    virtual public /* 未知 */ createNewImage(/* TODO 参数 */);  // ?createNewImage@GR_Graphics@@UAEPAVGR_Image@@PBDPBVUT_ByteBu
    public const bool doMerge(/* TODO 参数 */);  // ?doMerge@GR_Graphics@@QBE_NXZ
    public /* 未知 */ doRepaint(/* TODO 参数 */);  // ?doRepaint@GR_Graphics@@QAEXPAVUT_Rect@@@Z
    public /* 未知 */ drawCharsRelativeToBaseline(/* TODO 参数 */);  // ?drawCharsRelativeToBaseline@GR_Graphics@@MAEXPBIHHHHPAH@Z
    public /* 未知 */ drawImage(/* TODO 参数 */);  // ?drawImage@GR_Graphics@@MAEXPAVGR_Image@@HH@Z
    public /* 未知 */ endPaint(/* TODO 参数 */);  // ?endPaint@GR_Graphics@@AAEXXZ
    public /* 未知 */ fillRect(/* TODO 参数 */);  // ?fillRect@GR_Graphics@@MAEXABVUT_RGBColor@@ABVUT_Rect@@@Z
    public /* 未知 */ fillRect(/* TODO 参数 */);  // ?fillRect@GR_Graphics@@MAEXPAVGR_Image@@ABVUT_Rect@@1@Z
    public /* 未知 */ findFont(/* TODO 参数 */);  // ?findFont@GR_Graphics@@QAEPAVGR_Font@@PBD00000@Z
    virtual public /* 未知 */ findNearestFont(/* TODO 参数 */);  // ?findNearestFont@GR_Graphics@@UAEPBDPBD00000@Z
    virtual public /* 未知 */ flush(/* TODO 参数 */);  // ?flush@GR_Graphics@@UAEXXZ
    public const /* 未知 */ ftlu(/* TODO 参数 */);  // ?ftlu@GR_Graphics@@QBEHH@Z
    public const /* 未知 */ ftluD(/* TODO 参数 */);  // ?ftluD@GR_Graphics@@QBENN@Z
    public /* 未知 */ getApp(/* TODO 参数 */);  // ?getApp@GR_Graphics@@IBEPAVXAP_App@@XZ
    virtual public /* 未知 */ getCapability(/* TODO 参数 */);  // ?getCapability@GR_Graphics@@UAE?AW4GR_Capability@@XZ
    public /* 未知 */ getCaret(/* TODO 参数 */);  // ?getCaret@GR_Graphics@@QAEPAVGR_Caret@@XZ
    virtual public /* 未知 */ getClassId(/* TODO 参数 */);  // ?getClassId@GR_Graphics@@UAEIXZ
    public const /* 未知 */ getClipRect(/* TODO 参数 */);  // ?getClipRect@GR_Graphics@@QBEPBVUT_Rect@@XZ
    virtual public bool getColor3D(/* TODO 参数 */);  // ?getColor3D@GR_Graphics@@UAE_NW4GR_Color3D@1@AAVUT_RGBColor@
    public /* 未知 */ getMaxCharacterWidth(/* TODO 参数 */);  // ?getMaxCharacterWidth@GR_Graphics@@QAEIPBII@Z
    public const /* 未知 */ getPaintCount(/* TODO 参数 */);  // ?getPaintCount@GR_Graphics@@QBEIXZ
    public const /* 未知 */ getPendingRect(/* TODO 参数 */);  // ?getPendingRect@GR_Graphics@@QBEPBVUT_Rect@@XZ
    public const /* 未知 */ getPrevXOffset(/* TODO 参数 */);  // ?getPrevXOffset@GR_Graphics@@QBEHXZ
    public const /* 未知 */ getPrevYOffset(/* TODO 参数 */);  // ?getPrevYOffset@GR_Graphics@@QBEHXZ
    public /* 未知 */ getResolution(/* TODO 参数 */);  // ?getResolution@GR_Graphics@@SAIXZ
    virtual public /* 未知 */ getTextWidth(/* TODO 参数 */);  // ?getTextWidth@GR_Graphics@@UAEHAAVGR_RenderInfo@@AAHPAVUT_Te
    virtual public /* 未知 */ getTextWidth(/* TODO 参数 */);  // ?getTextWidth@GR_Graphics@@UAEHAAVGR_RenderInfo@@PAVUT_TextI
    public const /* 未知 */ getTransform(/* TODO 参数 */);  // ?getTransform@GR_Graphics@@QBEABVGR_Transform@@XZ
    virtual public const /* 未知 */ getVersion(/* TODO 参数 */);  // ?getVersion@GR_Graphics@@UBEABVUT_VersionInfo@@XZ
    public const /* 未知 */ getZoomPercentage(/* TODO 参数 */);  // ?getZoomPercentage@GR_Graphics@@QBEIXZ
    public /* 未知 */ invalidateCache(/* TODO 参数 */);  // ?invalidateCache@GR_Graphics@@QAEXXZ
    public const /* 未知 */ invertDimension(/* TODO 参数 */);  // ?invertDimension@GR_Graphics@@QBEPBDW4_ut_dimension@@N@Z
    public bool isDontRedraw(/* TODO 参数 */);  // ?isDontRedraw@GR_Graphics@@QAE_NXZ
    public const /* 未知 */ isExposePending(/* TODO 参数 */);  // ?isExposePending@GR_Graphics@@QBE?B_NXZ
    public const /* 未知 */ isExposedAreaAccessed(/* TODO 参数 */);  // ?isExposedAreaAccessed@GR_Graphics@@QBE?B_NXZ
    public const bool isPortrait(/* TODO 参数 */);  // ?isPortrait@GR_Graphics@@QBE_NXZ
    public const /* 未知 */ isSpawnedRedraw(/* TODO 参数 */);  // ?isSpawnedRedraw@GR_Graphics@@QBE?B_NXZ
    virtual public bool itemize(/* TODO 参数 */);  // ?itemize@GR_Graphics@@UAE_NAAVUT_TextIterator@@AAVGR_Itemiza
    virtual public /* 未知 */ justify(/* TODO 参数 */);  // ?justify@GR_Graphics@@UAEXAAVGR_RenderInfo@@@Z
    virtual public /* 未知 */ measureRenderedCharWidths(/* TODO 参数 */);  // ?measureRenderedCharWidths@GR_Graphics@@UAEXAAVGR_RenderInfo
    virtual public /* 未知 */ measureString(/* TODO 参数 */);  // ?measureString@GR_Graphics@@UAEIPBIHHPAH@Z
    virtual public bool nativeBreakInfoForRightEdge(/* TODO 参数 */);  // ?nativeBreakInfoForRightEdge@GR_Graphics@@UAE_NXZ
    virtual public bool needsSpecialCaretPositioning(/* TODO 参数 */);  // ?needsSpecialCaretPositioning@GR_Graphics@@UAE_NAAVGR_Render
    public /* 未知 */ polygon(/* TODO 参数 */);  // ?polygon@GR_Graphics@@MAEXAAVUT_RGBColor@@PAUUT_Point@@I@Z
    virtual public const /* 未知 */ positionToXY(/* TODO 参数 */);  // ?positionToXY@GR_Graphics@@UBEXABVGR_RenderInfo@@AAH1111AA_N
    virtual public /* 未知 */ prepareToRenderChars(/* TODO 参数 */);  // ?prepareToRenderChars@GR_Graphics@@UAEXAAVGR_RenderInfo@@PAV
    virtual public /* 未知 */ renderChars(/* TODO 参数 */);  // ?renderChars@GR_Graphics@@UAEXAAVGR_RenderInfo@@@Z
    virtual public /* 未知 */ resetJustification(/* TODO 参数 */);  // ?resetJustification@GR_Graphics@@UAEHAAVGR_RenderInfo@@_N@Z
    public /* 未知 */ s_Version(/* TODO 参数 */);  // ?s_Version@GR_Graphics@@0VUT_VersionInfo@@A
    public /* 未知 */ s_getClassId(/* TODO 参数 */);  // ?s_getClassId@GR_Graphics@@SAIXZ
    public const bool scaleDimensions(/* TODO 参数 */);  // ?scaleDimensions@GR_Graphics@@QBE_NPBD0IPAHPAI@Z
    public /* 未知 */ setDoMerge(/* TODO 参数 */);  // ?setDoMerge@GR_Graphics@@QAEX_N@Z
    public /* 未知 */ setDontRedraw(/* TODO 参数 */);  // ?setDontRedraw@GR_Graphics@@QAEX_N@Z
    public /* 未知 */ setExposePending(/* TODO 参数 */);  // ?setExposePending@GR_Graphics@@QAEX_N@Z
    public /* 未知 */ setExposedAreaAccessed(/* TODO 参数 */);  // ?setExposedAreaAccessed@GR_Graphics@@QAEX_N@Z
    virtual public /* 未知 */ setLineProperties(/* TODO 参数 */);  // ?setLineProperties@GR_Graphics@@UAEXNW4JoinStyle@1@W4CapStyl
    public /* 未知 */ setPendingRect(/* TODO 参数 */);  // ?setPendingRect@GR_Graphics@@QAEXHHHH@Z
    public /* 未知 */ setPortrait(/* TODO 参数 */);  // ?setPortrait@GR_Graphics@@QAEX_N@Z
    public /* 未知 */ setPrevXOffset(/* TODO 参数 */);  // ?setPrevXOffset@GR_Graphics@@QAEXH@Z
    public /* 未知 */ setPrevYOffset(/* TODO 参数 */);  // ?setPrevYOffset@GR_Graphics@@QAEXH@Z
    public /* 未知 */ setRecentRect(/* TODO 参数 */);  // ?setRecentRect@GR_Graphics@@QAEXPAVUT_Rect@@@Z
    public /* 未知 */ setSpawnedRedraw(/* TODO 参数 */);  // ?setSpawnedRedraw@GR_Graphics@@QAEX_N@Z
    public bool setTransform(/* TODO 参数 */);  // ?setTransform@GR_Graphics@@QAE_NABVGR_Transform@@@Z
    virtual public /* 未知 */ setZoomPercentage(/* TODO 参数 */);  // ?setZoomPercentage@GR_Graphics@@UAEXI@Z
    virtual public bool shape(/* TODO 参数 */);  // ?shape@GR_Graphics@@UAE_NAAVGR_ShapingInfo@@AAPAVGR_RenderIn
    public const /* 未知 */ tdu(/* TODO 参数 */);  // ?tdu@GR_Graphics@@QBEHH@Z
    public const /* 未知 */ tduD(/* TODO 参数 */);  // ?tduD@GR_Graphics@@QBENN@Z
    public const /* 未知 */ tlu(/* TODO 参数 */);  // ?tlu@GR_Graphics@@QBEHH@Z
    public const /* 未知 */ tluD(/* TODO 参数 */);  // ?tluD@GR_Graphics@@QBENN@Z
    public /* 未知 */ unionPendingRect(/* TODO 参数 */);  // ?unionPendingRect@GR_Graphics@@QAEXPAVUT_Rect@@@Z
    protected /* 未知 */ xorRect(/* TODO 参数 */);  // ?xorRect@GR_Graphics@@IAEXABVUT_Rect@@@Z
    protected /* 未知 */ xorRect(/* TODO 参数 */);  // ?xorRect@GR_Graphics@@IAEXHHHH@Z
};

/* ---- GR_Image (18 方法) ---- */
class GR_Image {
public:
    public /* 未知 */ DestroyOutline(/* TODO 参数 */);  // ?DestroyOutline@GR_Image@@QAEXXZ
    public /* 未知 */ GenerateOutline(/* TODO 参数 */);  // ?GenerateOutline@GR_Image@@QAEXXZ
    public /* 未知 */ GetOffsetFromLeft(/* TODO 参数 */);  // ?GetOffsetFromLeft@GR_Image@@QAEHPAVGR_Graphics@@HHH@Z
    public /* 未知 */ GetOffsetFromRight(/* TODO 参数 */);  // ?GetOffsetFromRight@GR_Image@@QAEHPAVGR_Graphics@@HHH@Z
    virtual public bool convertFromBuffer(/* TODO 参数 */);  // ?convertFromBuffer@GR_Image@@UAE_NPBVUT_ByteBuf@@HH@Z
    virtual public const bool convertToBuffer(/* TODO 参数 */);  // ?convertToBuffer@GR_Image@@UBE_NPAPAVUT_ByteBuf@@@Z
    public /* 未知 */ getBufferType(/* TODO 参数 */);  // ?getBufferType@GR_Image@@SA?AW4GRType@1@PBVUT_ByteBuf@@@Z
    virtual public const /* 未知 */ getDisplayHeight(/* TODO 参数 */);  // ?getDisplayHeight@GR_Image@@UBEHXZ
    virtual public const /* 未知 */ getDisplayWidth(/* TODO 参数 */);  // ?getDisplayWidth@GR_Image@@UBEHXZ
    public const /* 未知 */ getName(/* TODO 参数 */);  // ?getName@GR_Image@@QBEXAAVUT_String@@@Z
    public const /* 未知 */ getName(/* TODO 参数 */);  // ?getName@GR_Image@@QBEXPAD@Z
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@GR_Image@@UBE?AW4GRType@1@XZ
    public const bool isOutLinePresent(/* TODO 参数 */);  // ?isOutLinePresent@GR_Image@@QBE_NXZ
    virtual public bool render(/* TODO 参数 */);  // ?render@GR_Image@@UAE_NPAVGR_Graphics@@HH@Z
    virtual public /* 未知 */ scaleImageTo(/* TODO 参数 */);  // ?scaleImageTo@GR_Image@@UAEXPAVGR_Graphics@@ABVUT_Rect@@@Z
    public /* 未知 */ setDisplaySize(/* TODO 参数 */);  // ?setDisplaySize@GR_Image@@QAEXHH@Z
    protected /* 未知 */ setName(/* TODO 参数 */);  // ?setName@GR_Image@@IAEXABVUT_String@@@Z
    protected /* 未知 */ setName(/* TODO 参数 */);  // ?setName@GR_Image@@IAEXPBD@Z
};

/* ---- GR_RasterImage (1 方法) ---- */
class GR_RasterImage {
public:
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@GR_RasterImage@@UBE?AW4GRType@GR_Image@@XZ
};

/* ---- GR_Transform (10 方法) ---- */
class GR_Transform {
public:
    public const /* 未知 */ getA(/* TODO 参数 */);  // ?getA@GR_Transform@@QBENXZ
    public const /* 未知 */ getB(/* TODO 参数 */);  // ?getB@GR_Transform@@QBENXZ
    public const /* 未知 */ getC(/* TODO 参数 */);  // ?getC@GR_Transform@@QBENXZ
    public const /* 未知 */ getD(/* TODO 参数 */);  // ?getD@GR_Transform@@QBENXZ
    public const /* 未知 */ getE(/* TODO 参数 */);  // ?getE@GR_Transform@@QBENXZ
    public const /* 未知 */ getF(/* TODO 参数 */);  // ?getF@GR_Transform@@QBENXZ
    public /* 未知 */ linearScale(/* TODO 参数 */);  // ?linearScale@GR_Transform@@SA?AV1@N@Z
    public /* 未知 */ rotate(/* TODO 参数 */);  // ?rotate@GR_Transform@@SA?AV1@N@Z
    public /* 未知 */ scale(/* TODO 参数 */);  // ?scale@GR_Transform@@SA?AV1@NN@Z
    public /* 未知 */ translate(/* TODO 参数 */);  // ?translate@GR_Transform@@SA?AV1@NN@Z
};

/* ---- GR_VectorImage (10 方法) ---- */
class GR_VectorImage {
public:
    virtual public bool convertFromBuffer(/* TODO 参数 */);  // ?convertFromBuffer@GR_VectorImage@@UAE_NPBVUT_ByteBuf@@HH@Z
    virtual public const bool convertToBuffer(/* TODO 参数 */);  // ?convertToBuffer@GR_VectorImage@@UBE_NPAPAVUT_ByteBuf@@@Z
    virtual public /* 未知 */ createImageSegment(/* TODO 参数 */);  // ?createImageSegment@GR_VectorImage@@UAEPAVGR_Image@@PAVGR_Gr
    public const /* 未知 */ getDisplayOx(/* TODO 参数 */);  // ?getDisplayOx@GR_VectorImage@@QBEHXZ
    public const /* 未知 */ getDisplayOy(/* TODO 参数 */);  // ?getDisplayOy@GR_VectorImage@@QBEHXZ
    public const /* 未知 */ getSVG(/* TODO 参数 */);  // ?getSVG@GR_VectorImage@@QBEPAVUT_svg@@XZ
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@GR_VectorImage@@UBE?AW4GRType@GR_Image@@XZ
    virtual public const bool hasAlpha(/* TODO 参数 */);  // ?hasAlpha@GR_VectorImage@@UBE_NXZ
    virtual public bool isTransparentAt(/* TODO 参数 */);  // ?isTransparentAt@GR_VectorImage@@UAE_NHH@Z
    virtual public bool render(/* TODO 参数 */);  // ?render@GR_VectorImage@@UAE_NPAVGR_Graphics@@HH@Z
};

/* ---- GR_Win32Font (31 方法) ---- */
class GR_Win32Font {
public:
    public /* 未知 */ _clearAnyCachedInfo(/* TODO 参数 */);  // ?_clearAnyCachedInfo@GR_Win32Font@@MAEXXZ
    public /* 未知 */ _getCharWidths(/* TODO 参数 */);  // ?_getCharWidths@GR_Win32Font@@IBEPAVGR_Win32CharWidths@@XZ
    protected /* 未知 */ _updateFontYMetrics(/* TODO 参数 */);  // ?_updateFontYMetrics@GR_Win32Font@@IAEXPAUHDC__@@0@Z
    public const /* 未知 */ fetchFont(/* TODO 参数 */);  // ?fetchFont@GR_Win32Font@@QBEXI@Z
    public /* 未知 */ getAscent(/* TODO 参数 */);  // ?getAscent@GR_Win32Font@@QAEIPAUHDC__@@0@Z
    public /* 未知 */ getDescent(/* TODO 参数 */);  // ?getDescent@GR_Win32Font@@QAEIPAUHDC__@@0@Z
    public /* 未知 */ getDisplayFont(/* TODO 参数 */);  // ?getDisplayFont@GR_Win32Font@@QAEPAUHFONT__@@PAVGR_Graphics@
    public const /* 未知 */ getFontFromCache(/* TODO 参数 */);  // ?getFontFromCache@GR_Win32Font@@QBEPAUHFONT__@@I_NI@Z
    public const /* 未知 */ getFontHandle(/* TODO 参数 */);  // ?getFontHandle@GR_Win32Font@@QBEPAUHFONT__@@XZ
    public /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@GR_Win32Font@@QAEIPAUHDC__@@0@Z
    public const /* 未知 */ getPointSize(/* TODO 参数 */);  // ?getPointSize@GR_Win32Font@@QBENXZ
    public const /* 未知 */ getPrimaryHDC(/* TODO 参数 */);  // ?getPrimaryHDC@GR_Win32Font@@QBEQAUHDC__@@XZ
    public const /* 未知 */ getTextMetric(/* TODO 参数 */);  // ?getTextMetric@GR_Win32Font@@QBEABUtagTEXTMETRICA@@XZ
    public const /* 未知 */ getUnscaledHeight(/* TODO 参数 */);  // ?getUnscaledHeight@GR_Win32Font@@QBEIXZ
    public const /* 未知 */ getXHDC(/* TODO 参数 */);  // ?getXHDC@GR_Win32Font@@QBEQAUHDC__@@XZ
    public const /* 未知 */ getYHDC(/* TODO 参数 */);  // ?getYHDC@GR_Win32Font@@QBEQAUHDC__@@XZ
    virtual public bool glyphBox(/* TODO 参数 */);  // ?glyphBox@GR_Win32Font@@UAE_NIAAVUT_Rect@@PAVGR_Graphics@@@Z
    public /* 未知 */ insertFontInCache(/* TODO 参数 */);  // ?insertFontInCache@GR_Win32Font@@ABEXIPAUHFONT__@@@Z
    public const bool isFontGUI(/* TODO 参数 */);  // ?isFontGUI@GR_Win32Font@@QBE_NXZ
    public /* 未知 */ markGUIFont(/* TODO 参数 */);  // ?markGUIFont@GR_Win32Font@@QAEXXZ
    public /* 未知 */ measureUnRemappedChar(/* TODO 参数 */);  // ?measureUnRemappedChar@GR_Win32Font@@QAEHI@Z
    virtual public const /* 未知 */ measureUnremappedCharForCache(/* TODO 参数 */);  // ?measureUnremappedCharForCache@GR_Win32Font@@UBEHI@Z
    public /* 未知 */ newFont(/* TODO 参数 */);  // ?newFont@GR_Win32Font@@SAPAV1@AAUtagLOGFONTA@@NPAUHDC__@@1@Z
    virtual public const /* 未知 */ newFontWidths(/* TODO 参数 */);  // ?newFontWidths@GR_Win32Font@@UBEPAVGR_CharWidths@@XZ
    public /* 未知 */ selectFontIntoDC(/* TODO 参数 */);  // ?selectFontIntoDC@GR_Win32Font@@QAEXPAVGR_Graphics@@PAUHDC__
    public /* 未知 */ setAscent(/* TODO 参数 */);  // ?setAscent@GR_Win32Font@@QAEXI@Z
    public /* 未知 */ setDescent(/* TODO 参数 */);  // ?setDescent@GR_Win32Font@@QAEXI@Z
    public /* 未知 */ setHeight(/* TODO 参数 */);  // ?setHeight@GR_Win32Font@@QAEXI@Z
    public /* 未知 */ setPrimaryHDC(/* TODO 参数 */);  // ?setPrimaryHDC@GR_Win32Font@@QAEXQAUHDC__@@@Z
    public /* 未知 */ setXHDC(/* TODO 参数 */);  // ?setXHDC@GR_Win32Font@@QAEXQAUHDC__@@@Z
    public /* 未知 */ setYHDC(/* TODO 参数 */);  // ?setYHDC@GR_Win32Font@@QAEXQAUHDC__@@@Z
};

/* ---- GR_Win32Graphics (76 方法) ---- */
class GR_Win32Graphics {
public:
    protected /* 未知 */ ConvertDDBToDIB(/* TODO 参数 */);  // ?ConvertDDBToDIB@GR_Win32Graphics@@IAEPAUtagBITMAPINFO@@PAUH
    virtual public /* 未知 */ RVS_drawLine_width(/* TODO 参数 */);  // ?RVS_drawLine_width@GR_Win32Graphics@@UAEXHHHH@Z
    public /* 未知 */ _constructorCommonCode(/* TODO 参数 */);  // ?_constructorCommonCode@GR_Win32Graphics@@AAEXPAUHDC__@@@Z
    public /* 未知 */ _findFont(/* TODO 参数 */);  // ?_findFont@GR_Win32Graphics@@MAEPAVGR_Font@@PBD00000@Z
    public /* 未知 */ _newFont(/* TODO 参数 */);  // ?_newFont@GR_Win32Graphics@@EAEPAVGR_Win32Font@@AAUtagLOGFON
    public /* 未知 */ _remapGlyphs(/* TODO 参数 */);  // ?_remapGlyphs@GR_Win32Graphics@@AAEPAGPBIHAAH@Z
    protected /* 未知 */ _setColor(/* TODO 参数 */);  // ?_setColor@GR_Win32Graphics@@IAEXK@Z
    public /* 未知 */ _setTransform(/* TODO 参数 */);  // ?_setTransform@GR_Win32Graphics@@EAE_NABVGR_Transform@@@Z
    virtual public /* 未知 */ clearArea(/* TODO 参数 */);  // ?clearArea@GR_Win32Graphics@@UAEXHHHH@Z
    virtual public /* 未知 */ clearFont(/* TODO 参数 */);  // ?clearFont@GR_Win32Graphics@@UAEXXZ
    virtual public /* 未知 */ createNewImage(/* TODO 参数 */);  // ?createNewImage@GR_Win32Graphics@@UAEPAVGR_Image@@PBDPBVUT_B
    public /* 未知 */ delPrintDC(/* TODO 参数 */);  // ?delPrintDC@GR_Win32Graphics@@QAEXXZ
    virtual public /* 未知 */ drawChar(/* TODO 参数 */);  // ?drawChar@GR_Win32Graphics@@UAEXIHH@Z
    virtual public /* 未知 */ drawChars(/* TODO 参数 */);  // ?drawChars@GR_Win32Graphics@@UAEXPBIHHHHPAH@Z
    virtual public /* 未知 */ drawGlyph(/* TODO 参数 */);  // ?drawGlyph@GR_Win32Graphics@@UAEXIHH@Z
    virtual public /* 未知 */ drawImage(/* TODO 参数 */);  // ?drawImage@GR_Win32Graphics@@UAEXPAVGR_Image@@HH@Z
    virtual public /* 未知 */ drawLine(/* TODO 参数 */);  // ?drawLine@GR_Win32Graphics@@UAEXHHHH@Z
    virtual public bool endPrint(/* TODO 参数 */);  // ?endPrint@GR_Win32Graphics@@UAE_NXZ
    virtual public /* 未知 */ fillRect(/* TODO 参数 */);  // ?fillRect@GR_Win32Graphics@@UAEXABVUT_RGBColor@@HHHHI@Z
    virtual public /* 未知 */ fillRect(/* TODO 参数 */);  // ?fillRect@GR_Win32Graphics@@UAEXW4GR_Color3D@GR_Graphics@@AA
    virtual public /* 未知 */ fillRect(/* TODO 参数 */);  // ?fillRect@GR_Win32Graphics@@UAEXW4GR_Color3D@GR_Graphics@@HH
    public /* 未知 */ fixDevMode(/* TODO 参数 */);  // ?fixDevMode@GR_Win32Graphics@@SA_NPAXPAD@Z
    virtual public /* 未知 */ flush(/* TODO 参数 */);  // ?flush@GR_Win32Graphics@@UAEXXZ
    virtual public /* 未知 */ genImageFromRectangle(/* TODO 参数 */);  // ?genImageFromRectangle@GR_Win32Graphics@@UAEPAVGR_Image@@ABV
    virtual public /* 未知 */ getCapability(/* TODO 参数 */);  // ?getCapability@GR_Win32Graphics@@UAE?AW4GR_Capability@@XZ
    virtual public /* 未知 */ getClassId(/* TODO 参数 */);  // ?getClassId@GR_Win32Graphics@@UAEIXZ
    virtual public /* 未知 */ getColor(/* TODO 参数 */);  // ?getColor@GR_Win32Graphics@@UAEXAAVUT_RGBColor@@@Z
    virtual public const /* 未知 */ getColorSpace(/* TODO 参数 */);  // ?getColorSpace@GR_Win32Graphics@@UBE?AW4ColorSpace@GR_Graphi
    virtual public /* 未知 */ getCoverage(/* TODO 参数 */);  // ?getCoverage@GR_Win32Graphics@@UAEXAAV?$UT_GenericVector@H@@
    virtual public const /* 未知 */ getCursor(/* TODO 参数 */);  // ?getCursor@GR_Win32Graphics@@UBE?AW4Cursor@GR_Graphics@@XZ
    public /* 未知 */ getDC(/* TODO 参数 */);  // ?getDC@GR_Win32Graphics@@QAEPAUHDC__@@XZ
    virtual public const /* 未知 */ getDeviceResolution(/* TODO 参数 */);  // ?getDeviceResolution@GR_Win32Graphics@@UBEIXZ
    public /* 未知 */ getFont(/* TODO 参数 */);  // ?getFont@GR_Win32Graphics@@QAEPAVGR_Win32Font@@XZ
    virtual public /* 未知 */ getFontAscent(/* TODO 参数 */);  // ?getFontAscent@GR_Win32Graphics@@UAEIPAVGR_Font@@@Z
    virtual public /* 未知 */ getFontAscent(/* TODO 参数 */);  // ?getFontAscent@GR_Win32Graphics@@UAEIXZ
    virtual public /* 未知 */ getFontDescent(/* TODO 参数 */);  // ?getFontDescent@GR_Win32Graphics@@UAEIPAVGR_Font@@@Z
    virtual public /* 未知 */ getFontDescent(/* TODO 参数 */);  // ?getFontDescent@GR_Win32Graphics@@UAEIXZ
    virtual public /* 未知 */ getFontHeight(/* TODO 参数 */);  // ?getFontHeight@GR_Win32Graphics@@UAEIPAVGR_Font@@@Z
    virtual public /* 未知 */ getFontHeight(/* TODO 参数 */);  // ?getFontHeight@GR_Win32Graphics@@UAEIXZ
    virtual public /* 未知 */ getGUIFont(/* TODO 参数 */);  // ?getGUIFont@GR_Win32Graphics@@UAEPAVGR_Font@@XZ
    virtual public const /* 未知 */ getHwnd(/* TODO 参数 */);  // ?getHwnd@GR_Win32Graphics@@UBEPAUHWND__@@XZ
    public const /* 未知 */ getPrimaryDC(/* TODO 参数 */);  // ?getPrimaryDC@GR_Win32Graphics@@QBEPAUHDC__@@XZ
    public const /* 未知 */ getPrintDC(/* TODO 参数 */);  // ?getPrintDC@GR_Win32Graphics@@QBEPAUHDC__@@XZ
    public const bool getPrintFlag(/* TODO 参数 */);  // ?getPrintFlag@GR_Win32Graphics@@QBE_NXZ
    public /* 未知 */ getPrinterGraphics(/* TODO 参数 */);  // ?getPrinterGraphics@GR_Win32Graphics@@SAPAVGR_Graphics@@PBD0
    public const /* 未知 */ getXYRatio(/* TODO 参数 */);  // ?getXYRatio@GR_Win32Graphics@@QBENXZ
    public const /* 未知 */ getXYRatioPrint(/* TODO 参数 */);  // ?getXYRatioPrint@GR_Win32Graphics@@QBENXZ
    public /* 未知 */ graphicsAllocator(/* TODO 参数 */);  // ?graphicsAllocator@GR_Win32Graphics@@SAPAVGR_Graphics@@AAVGR
    public /* 未知 */ graphicsDescriptor(/* TODO 参数 */);  // ?graphicsDescriptor@GR_Win32Graphics@@SAPBDXZ
    virtual public /* 未知 */ handleSetCursorMessage(/* TODO 参数 */);  // ?handleSetCursorMessage@GR_Win32Graphics@@UAEXXZ
    public /* 未知 */ init3dColors(/* TODO 参数 */);  // ?init3dColors@GR_Win32Graphics@@QAEXXZ
    virtual public /* 未知 */ invertRect(/* TODO 参数 */);  // ?invertRect@GR_Win32Graphics@@UAEXPBVUT_Rect@@@Z
    virtual public /* 未知 */ measureUnRemappedChar(/* TODO 参数 */);  // ?measureUnRemappedChar@GR_Win32Graphics@@UAEHI@Z
    virtual public /* 未知 */ polyLine(/* TODO 参数 */);  // ?polyLine@GR_Win32Graphics@@UAEXPAUUT_Point@@I@Z
    virtual public /* 未知 */ polygon(/* TODO 参数 */);  // ?polygon@GR_Win32Graphics@@UAEXAAVUT_RGBColor@@PAUUT_Point@@
    virtual public const bool queryProperties(/* TODO 参数 */);  // ?queryProperties@GR_Win32Graphics@@UBE_NW4Properties@GR_Grap
    virtual public /* 未知 */ restoreRectangle(/* TODO 参数 */);  // ?restoreRectangle@GR_Win32Graphics@@UAEXI@Z
    public /* 未知 */ s_getClassId(/* TODO 参数 */);  // ?s_getClassId@GR_Win32Graphics@@SAIXZ
    virtual public /* 未知 */ saveRectangle(/* TODO 参数 */);  // ?saveRectangle@GR_Win32Graphics@@UAEXAAVUT_Rect@@I@Z
    virtual public /* 未知 */ scroll(/* TODO 参数 */);  // ?scroll@GR_Win32Graphics@@UAEXHH@Z
    virtual public /* 未知 */ scroll(/* TODO 参数 */);  // ?scroll@GR_Win32Graphics@@UAEXHHHHHH@Z
    public /* 未知 */ setBrush(/* TODO 参数 */);  // ?setBrush@GR_Win32Graphics@@QAEXPAUHBRUSH__@@@Z
    virtual public /* 未知 */ setClipRect(/* TODO 参数 */);  // ?setClipRect@GR_Win32Graphics@@UAEXPBVUT_Rect@@@Z
    virtual public /* 未知 */ setColor(/* TODO 参数 */);  // ?setColor@GR_Win32Graphics@@UAEXABVUT_RGBColor@@@Z
    virtual public /* 未知 */ setColor3D(/* TODO 参数 */);  // ?setColor3D@GR_Win32Graphics@@UAEXW4GR_Color3D@GR_Graphics@@
    virtual public /* 未知 */ setColorSpace(/* TODO 参数 */);  // ?setColorSpace@GR_Win32Graphics@@UAEXW4ColorSpace@GR_Graphic
    virtual public /* 未知 */ setCursor(/* TODO 参数 */);  // ?setCursor@GR_Win32Graphics@@UAEXW4Cursor@GR_Graphics@@@Z
    public /* 未知 */ setDCFontAllocNo(/* TODO 参数 */);  // ?setDCFontAllocNo@GR_Win32Graphics@@QAEXI@Z
    virtual public /* 未知 */ setFont(/* TODO 参数 */);  // ?setFont@GR_Win32Graphics@@UAEXPAVGR_Font@@@Z
    virtual public /* 未知 */ setLineProperties(/* TODO 参数 */);  // ?setLineProperties@GR_Win32Graphics@@UAEXNW4JoinStyle@GR_Gra
    virtual public /* 未知 */ setLineWidth(/* TODO 参数 */);  // ?setLineWidth@GR_Win32Graphics@@UAEXH@Z
    virtual public /* 未知 */ setPrintDC(/* TODO 参数 */);  // ?setPrintDC@GR_Win32Graphics@@UAEXPAUHDC__@@@Z
    public /* 未知 */ setPrintDCFontAllocNo(/* TODO 参数 */);  // ?setPrintDCFontAllocNo@GR_Win32Graphics@@QAEXI@Z
    virtual public bool startPage(/* TODO 参数 */);  // ?startPage@GR_Win32Graphics@@UAE_NPBDI_NII@Z
    virtual public bool startPrint(/* TODO 参数 */);  // ?startPrint@GR_Win32Graphics@@UAE_NXZ
    virtual public /* 未知 */ xorLine(/* TODO 参数 */);  // ?xorLine@GR_Win32Graphics@@UAEXHHHH@Z
};

/* ---- GR_Win32Image (7 方法) ---- */
class GR_Win32Image {
public:
    virtual public bool convertFromBuffer(/* TODO 参数 */);  // ?convertFromBuffer@GR_Win32Image@@UAE_NPBVUT_ByteBuf@@HH@Z
    virtual public const bool convertToBuffer(/* TODO 参数 */);  // ?convertToBuffer@GR_Win32Image@@UBE_NPAPAVUT_ByteBuf@@@Z
    virtual public /* 未知 */ createImageSegment(/* TODO 参数 */);  // ?createImageSegment@GR_Win32Image@@UAEPAVGR_Image@@PAVGR_Gra
    public const /* 未知 */ getDIB(/* TODO 参数 */);  // ?getDIB@GR_Win32Image@@QBEPAUtagBITMAPINFO@@XZ
    virtual public const bool hasAlpha(/* TODO 参数 */);  // ?hasAlpha@GR_Win32Image@@UBE_NXZ
    virtual public bool isTransparentAt(/* TODO 参数 */);  // ?isTransparentAt@GR_Win32Image@@UAE_NHH@Z
    public /* 未知 */ setDIB(/* TODO 参数 */);  // ?setDIB@GR_Win32Image@@QAEXPAUtagBITMAPINFO@@@Z
};

/* ---- GR_Win32USPFont (7 方法) ---- */
class GR_Win32USPFont {
public:
    public /* 未知 */ _clearAnyCachedInfo(/* TODO 参数 */);  // ?_clearAnyCachedInfo@GR_Win32USPFont@@MAEXXZ
    public const /* 未知 */ getPrintDC(/* TODO 参数 */);  // ?getPrintDC@GR_Win32USPFont@@QBEPAUHDC__@@XZ
    public const /* 未知 */ getScreenAscent(/* TODO 参数 */);  // ?getScreenAscent@GR_Win32USPFont@@QBEHXZ
    public /* 未知 */ getScriptCache(/* TODO 参数 */);  // ?getScriptCache@GR_Win32USPFont@@QAEPAPAXXZ
    public /* 未知 */ newFont(/* TODO 参数 */);  // ?newFont@GR_Win32USPFont@@SAPAV1@AAUtagLOGFONTA@@NPAUHDC__@@
    public /* 未知 */ setPrintDC(/* TODO 参数 */);  // ?setPrintDC@GR_Win32USPFont@@QAEXPAUHDC__@@@Z
    public /* 未知 */ setScreenAscent(/* TODO 参数 */);  // ?setScreenAscent@GR_Win32USPFont@@QAEXH@Z
};

/* ---- GR_Win32USPGraphics (68 方法) ---- */
class GR_Win32USPGraphics {
public:
    public /* 未知 */ GetIndicesCount(/* TODO 参数 */);  // ?GetIndicesCount@GR_Win32USPGraphics@@QAEIAAVGR_RenderInfo@@
    virtual public const /* 未知 */ XYToPosition(/* TODO 参数 */);  // ?XYToPosition@GR_Win32USPGraphics@@UBEIABVGR_RenderInfo@@HH@
    public /* 未知 */ _constructorCommonCode(/* TODO 参数 */);  // ?_constructorCommonCode@GR_Win32USPGraphics@@AAE_NXZ
    public /* 未知 */ _drawChars(/* TODO 参数 */);  // ?_drawChars@GR_Win32USPGraphics@@AAEXPBIHHHHPAH_N@Z
    protected bool _needsSpecialBreaking(/* TODO 参数 */);  // ?_needsSpecialBreaking@GR_Win32USPGraphics@@IAE_NAAVGR_Win32
    protected bool _needsSpecialCaretPositioning(/* TODO 参数 */);  // ?_needsSpecialCaretPositioning@GR_Win32USPGraphics@@IAE_NAAV
    public /* 未知 */ _newFont(/* TODO 参数 */);  // ?_newFont@GR_Win32USPGraphics@@EAEPAVGR_Win32Font@@AAUtagLOG
    protected bool _scriptBreak(/* TODO 参数 */);  // ?_scriptBreak@GR_Win32USPGraphics@@IAE_NAAVGR_Win32USPRender
    public /* 未知 */ _setupFontOnDC(/* TODO 参数 */);  // ?_setupFontOnDC@GR_Win32USPGraphics@@AAEXPAVGR_Win32USPFont@
    virtual public /* 未知 */ adjustCaretPosition(/* TODO 参数 */);  // ?adjustCaretPosition@GR_Win32USPGraphics@@UAEIAAVGR_RenderIn
    virtual public /* 未知 */ adjustDeletePosition(/* TODO 参数 */);  // ?adjustDeletePosition@GR_Win32USPGraphics@@UAEXAAVGR_RenderI
    virtual public const /* 未知 */ appendRenderedCharsToBuff(/* TODO 参数 */);  // ?appendRenderedCharsToBuff@GR_Win32USPGraphics@@UBEXAAVGR_Re
    virtual public bool canBreak(/* TODO 参数 */);  // ?canBreak@GR_Win32USPGraphics@@UAE_NAAVGR_RenderInfo@@AAH_N@
    virtual public const /* 未知 */ countJustificationPoints(/* TODO 参数 */);  // ?countJustificationPoints@GR_Win32USPGraphics@@UBEHABVGR_Ren
    virtual public /* 未知 */ drawChars(/* TODO 参数 */);  // ?drawChars@GR_Win32USPGraphics@@UAEXPBIHHHHPAH_N@Z
    virtual public /* 未知 */ drawCharsRelativeToBaseline(/* TODO 参数 */);  // ?drawCharsRelativeToBaseline@GR_Win32USPGraphics@@UAEXPBIHHH
    public /* 未知 */ fScriptBreak(/* TODO 参数 */);  // ?fScriptBreak@GR_Win32USPGraphics@@2P6GJPBGHPBU_SCRIPT_ANALY
    public /* 未知 */ fScriptCPtoX(/* TODO 参数 */);  // ?fScriptCPtoX@GR_Win32USPGraphics@@2P6GJHHHHPBGPBU_SCRIPT_VI
    public /* 未知 */ fScriptFreeCache(/* TODO 参数 */);  // ?fScriptFreeCache@GR_Win32USPGraphics@@2P6GJPAPAX@ZA
    public /* 未知 */ fScriptGetCMap(/* TODO 参数 */);  // ?fScriptGetCMap@GR_Win32USPGraphics@@2P6GJPAUHDC__@@PAPAXPBG
    public /* 未知 */ fScriptGetFontProperties(/* TODO 参数 */);  // ?fScriptGetFontProperties@GR_Win32USPGraphics@@2P6GJPAUHDC__
    public /* 未知 */ fScriptGetProperties(/* TODO 参数 */);  // ?fScriptGetProperties@GR_Win32USPGraphics@@2P6GJPAPAPBU_SCRI
    public /* 未知 */ fScriptIsComplex(/* TODO 参数 */);  // ?fScriptIsComplex@GR_Win32USPGraphics@@2P6GJPBGHK@ZA
    public /* 未知 */ fScriptItemize(/* TODO 参数 */);  // ?fScriptItemize@GR_Win32USPGraphics@@2P6GJPBGHHPBU_SCRIPT_CO
    public /* 未知 */ fScriptJustify(/* TODO 参数 */);  // ?fScriptJustify@GR_Win32USPGraphics@@2P6GJPBU_SCRIPT_VISATTR
    public /* 未知 */ fScriptPlace(/* TODO 参数 */);  // ?fScriptPlace@GR_Win32USPGraphics@@2P6GJPAUHDC__@@PAPAXPBGHP
    public /* 未知 */ fScriptRecordDigitSubstitution(/* TODO 参数 */);  // ?fScriptRecordDigitSubstitution@GR_Win32USPGraphics@@2P6GJKP
    public /* 未知 */ fScriptShape(/* TODO 参数 */);  // ?fScriptShape@GR_Win32USPGraphics@@2P6GJPAUHDC__@@PAPAXPBGHH
    public /* 未知 */ fScriptStringAnalyse(/* TODO 参数 */);  // ?fScriptStringAnalyse@GR_Win32USPGraphics@@2P6GJPAUHDC__@@PB
    public /* 未知 */ fScriptStringFree(/* TODO 参数 */);  // ?fScriptStringFree@GR_Win32USPGraphics@@2P6GJPAPAX@ZA
    public /* 未知 */ fScriptStringOut(/* TODO 参数 */);  // ?fScriptStringOut@GR_Win32USPGraphics@@2P6GJPAXHHIPBUtagRECT
    public /* 未知 */ fScriptTextOut(/* TODO 参数 */);  // ?fScriptTextOut@GR_Win32USPGraphics@@2P6GJQAUHDC__@@PAPAXHHI
    public /* 未知 */ fScriptXtoCP(/* TODO 参数 */);  // ?fScriptXtoCP@GR_Win32USPGraphics@@2P6GJHHHPBGPBU_SCRIPT_VIS
    virtual public /* 未知 */ getCapability(/* TODO 参数 */);  // ?getCapability@GR_Win32USPGraphics@@UAE?AW4GR_Capability@@XZ
    virtual public /* 未知 */ getClassId(/* TODO 参数 */);  // ?getClassId@GR_Win32USPGraphics@@UAEIXZ
    virtual public /* 未知 */ getFontAscent(/* TODO 参数 */);  // ?getFontAscent@GR_Win32USPGraphics@@UAEIPAVGR_Font@@@Z
    virtual public /* 未知 */ getFontAscent(/* TODO 参数 */);  // ?getFontAscent@GR_Win32USPGraphics@@UAEIXZ
    virtual public /* 未知 */ getFontDescent(/* TODO 参数 */);  // ?getFontDescent@GR_Win32USPGraphics@@UAEIPAVGR_Font@@@Z
    virtual public /* 未知 */ getFontDescent(/* TODO 参数 */);  // ?getFontDescent@GR_Win32USPGraphics@@UAEIXZ
    virtual public /* 未知 */ getFontHeight(/* TODO 参数 */);  // ?getFontHeight@GR_Win32USPGraphics@@UAEIPAVGR_Font@@@Z
    virtual public /* 未知 */ getFontHeight(/* TODO 参数 */);  // ?getFontHeight@GR_Win32USPGraphics@@UAEIXZ
    virtual public /* 未知 */ getTextWidth(/* TODO 参数 */);  // ?getTextWidth@GR_Win32USPGraphics@@UAEHAAVGR_RenderInfo@@AAH
    virtual public /* 未知 */ getTextWidth(/* TODO 参数 */);  // ?getTextWidth@GR_Win32USPGraphics@@UAEHAAVGR_RenderInfo@@PAV
    public /* 未知 */ getUSPVersion(/* TODO 参数 */);  // ?getUSPVersion@GR_Win32USPGraphics@@SAPBDXZ
    virtual public const /* 未知 */ getVersion(/* TODO 参数 */);  // ?getVersion@GR_Win32USPGraphics@@UBEABVUT_VersionInfo@@XZ
    public /* 未知 */ graphicsAllocator(/* TODO 参数 */);  // ?graphicsAllocator@GR_Win32USPGraphics@@SAPAVGR_Graphics@@AA
    public /* 未知 */ graphicsDescriptor(/* TODO 参数 */);  // ?graphicsDescriptor@GR_Win32USPGraphics@@SAPBDXZ
    virtual public bool itemize(/* TODO 参数 */);  // ?itemize@GR_Win32USPGraphics@@UAE_NAAVUT_TextIterator@@AAVGR
    virtual public /* 未知 */ justify(/* TODO 参数 */);  // ?justify@GR_Win32USPGraphics@@UAEXAAVGR_RenderInfo@@@Z
    virtual public /* 未知 */ measureRenderedCharWidths(/* TODO 参数 */);  // ?measureRenderedCharWidths@GR_Win32USPGraphics@@UAEXAAVGR_Re
    virtual public bool nativeBreakInfoForRightEdge(/* TODO 参数 */);  // ?nativeBreakInfoForRightEdge@GR_Win32USPGraphics@@UAE_NXZ
    virtual public bool needsSpecialCaretPositioning(/* TODO 参数 */);  // ?needsSpecialCaretPositioning@GR_Win32USPGraphics@@UAE_NAAVG
    virtual public const /* 未知 */ positionToXY(/* TODO 参数 */);  // ?positionToXY@GR_Win32USPGraphics@@UBEXABVGR_RenderInfo@@AAH
    virtual public /* 未知 */ prepareToRenderChars(/* TODO 参数 */);  // ?prepareToRenderChars@GR_Win32USPGraphics@@UAEXAAVGR_RenderI
    virtual public /* 未知 */ renderChars(/* TODO 参数 */);  // ?renderChars@GR_Win32USPGraphics@@UAEXAAVGR_RenderInfo@@@Z
    virtual public /* 未知 */ resetJustification(/* TODO 参数 */);  // ?resetJustification@GR_Win32USPGraphics@@UAEHAAVGR_RenderInf
    public /* 未知 */ s_Version(/* TODO 参数 */);  // ?s_Version@GR_Win32USPGraphics@@0VUT_VersionInfo@@A
    public /* 未知 */ s_getClassId(/* TODO 参数 */);  // ?s_getClassId@GR_Win32USPGraphics@@SAIXZ
    public /* 未知 */ s_hUniscribe(/* TODO 参数 */);  // ?s_hUniscribe@GR_Win32USPGraphics@@0PAUHINSTANCE__@@A
    public /* 未知 */ s_iInstanceCount(/* TODO 参数 */);  // ?s_iInstanceCount@GR_Win32USPGraphics@@0IA
    public /* 未知 */ s_iMaxScript(/* TODO 参数 */);  // ?s_iMaxScript@GR_Win32USPGraphics@@0HA
    public /* 未知 */ s_ppScriptProperties(/* TODO 参数 */);  // ?s_ppScriptProperties@GR_Win32USPGraphics@@0PAPBU_SCRIPT_PRO
    public /* 未知 */ s_sDescription(/* TODO 参数 */);  // ?s_sDescription@GR_Win32USPGraphics@@0VUT_UTF8String@@A
    public /* 未知 */ s_sUSPVersion(/* TODO 参数 */);  // ?s_sUSPVersion@GR_Win32USPGraphics@@0VUT_UTF8String@@A
    virtual public /* 未知 */ setFont(/* TODO 参数 */);  // ?setFont@GR_Win32USPGraphics@@UAEXPBVGR_Font@@@Z
    virtual public /* 未知 */ setPrintDC(/* TODO 参数 */);  // ?setPrintDC@GR_Win32USPGraphics@@UAEXPAUHDC__@@@Z
    virtual public /* 未知 */ setZoomPercentage(/* TODO 参数 */);  // ?setZoomPercentage@GR_Win32USPGraphics@@UAEXI@Z
    virtual public bool shape(/* TODO 参数 */);  // ?shape@GR_Win32USPGraphics@@UAE_NAAVGR_ShapingInfo@@AAPAVGR_
};

/* ---- IE_Delimiter_Sniffer (4 方法) ---- */
class IE_Delimiter_Sniffer {
public:
    virtual public /* 未知 */ constructMerger(/* TODO 参数 */);  // ?constructMerger@IE_Delimiter_Sniffer@@UAEHPAPAVIE_MailMerge
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Delimiter_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public /* 未知 */ recognizeContents(/* TODO 参数 */);  // ?recognizeContents@IE_Delimiter_Sniffer@@UAEEPBDI@Z
    virtual public /* 未知 */ recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Delimiter_Sniffer@@UAEEPBD@Z
};

/* ---- IE_Exp (37 方法) ---- */
class IE_Exp {
public:
    public /* 未知 */ UW_constructExporter(/* TODO 参数 */);  // ?UW_constructExporter@IE_Exp@@SAHPAVPD_Document@@HPAPAV1@@Z
    public /* 未知 */ _abortFile(/* TODO 参数 */);  // ?_abortFile@IE_Exp@@MAEXXZ
    protected /* 未知 */ _cancelExport(/* TODO 参数 */);  // ?_cancelExport@IE_Exp@@IAEXXZ
    public /* 未知 */ _closeFile(/* TODO 参数 */);  // ?_closeFile@IE_Exp@@MAE_NXZ
    public /* 未知 */ _openFile(/* TODO 参数 */);  // ?_openFile@IE_Exp@@MAE_NPBD@Z
    public /* 未知 */ _writeBytes(/* TODO 参数 */);  // ?_writeBytes@IE_Exp@@MAEIPBEI@Z
    public /* 未知 */ _writeBytes(/* TODO 参数 */);  // ?_writeBytes@IE_Exp@@MAE_NPBE@Z
    public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp@@SAHPAVPD_Document@@PAPAV1@@Z
    public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp@@SAHPAVPD_Document@@PBDHPAPAV1@PAH
    virtual public /* 未知 */ copyToBuffer(/* TODO 参数 */);  // ?copyToBuffer@IE_Exp@@UAEHPAVPD_DocumentRange@@PAVUT_ByteBuf
    virtual public /* 未知 */ copyToBuffer(/* TODO 参数 */);  // ?copyToBuffer@IE_Exp@@UAEHPAVPD_DocumentRange@@PAVUT_ByteBuf
    public /* 未知 */ descriptionForFileType(/* TODO 参数 */);  // ?descriptionForFileType@IE_Exp@@SAPBDH@Z
    public /* 未知 */ enumerateDlgLabels(/* TODO 参数 */);  // ?enumerateDlgLabels@IE_Exp@@SA_NIPAPBD0PAH@Z
    public /* 未知 */ fileTypeForDescription(/* TODO 参数 */);  // ?fileTypeForDescription@IE_Exp@@SAHPBD@Z
    public /* 未知 */ fileTypeForSuffix(/* TODO 参数 */);  // ?fileTypeForSuffix@IE_Exp@@SAHPBD@Z
    public /* 未知 */ fileTypeForSuffixes(/* TODO 参数 */);  // ?fileTypeForSuffixes@IE_Exp@@SAHPBD@Z
    public /* 未知 */ getDoc(/* TODO 参数 */);  // ?getDoc@IE_Exp@@IBEPAVPD_Document@@XZ
    public /* 未知 */ getDocRange(/* TODO 参数 */);  // ?getDocRange@IE_Exp@@IBEPAVPD_DocumentRange@@XZ
    public /* 未知 */ getEIMode(/* TODO 参数 */);  // ?getEIMode@IE_Exp@@QAE?AW4_TExp_ImpMode@@XZ
    public /* 未知 */ getExporterCount(/* TODO 参数 */);  // ?getExporterCount@IE_Exp@@SAIXZ
    public const /* 未知 */ getFidelity(/* TODO 参数 */);  // ?getFidelity@IE_Exp@@QBEEXZ
    virtual public /* 未知 */ getFileName(/* TODO 参数 */);  // ?getFileName@IE_Exp@@UAEPADXZ
    public /* 未知 */ getProperty(/* TODO 参数 */);  // ?getProperty@IE_Exp@@QAEPBVUT_UTF8String@@PBD@Z
    public const bool isCopying(/* TODO 参数 */);  // ?isCopying@IE_Exp@@QBE_NXZ
    public /* 未知 */ registerExporter(/* TODO 参数 */);  // ?registerExporter@IE_Exp@@SAXPAVIE_ExpSniffer@@@Z
    virtual public /* 未知 */ rewindChar(/* TODO 参数 */);  // ?rewindChar@IE_Exp@@UAEDXZ
    public /* 未知 */ setByteBuffer(/* TODO 参数 */);  // ?setByteBuffer@IE_Exp@@QAEXPAVUT_ByteBuf@@@Z
    public /* 未知 */ setEIMode(/* TODO 参数 */);  // ?setEIMode@IE_Exp@@QAEXW4_TExp_ImpMode@@@Z
    public /* 未知 */ setProps(/* TODO 参数 */);  // ?setProps@IE_Exp@@QAEXPBD@Z
    public /* 未知 */ snifferForFileType(/* TODO 参数 */);  // ?snifferForFileType@IE_Exp@@SAPAVIE_ExpSniffer@@H@Z
    public /* 未知 */ suffixesForFileType(/* TODO 参数 */);  // ?suffixesForFileType@IE_Exp@@SAPBDH@Z
    public /* 未知 */ unregisterAllExporters(/* TODO 参数 */);  // ?unregisterAllExporters@IE_Exp@@SAXXZ
    public /* 未知 */ unregisterExporter(/* TODO 参数 */);  // ?unregisterExporter@IE_Exp@@SAXPAVIE_ExpSniffer@@@Z
    public /* 未知 */ write(/* TODO 参数 */);  // ?write@IE_Exp@@QAEXABVUT_String@@@Z
    virtual public /* 未知 */ write(/* TODO 参数 */);  // ?write@IE_Exp@@UAEXPBD@Z
    virtual public /* 未知 */ write(/* TODO 参数 */);  // ?write@IE_Exp@@UAEXPBDI@Z
    public /* 未知 */ writeFile(/* TODO 参数 */);  // ?writeFile@IE_Exp@@QAEHPBD@Z
};

/* ---- IE_ExpSniffer (6 方法) ---- */
class IE_ExpSniffer {
public:
    public const bool getCanCopy(/* TODO 参数 */);  // ?getCanCopy@IE_ExpSniffer@@QBE_NXZ
    public const /* 未知 */ getFileType(/* TODO 参数 */);  // ?getFileType@IE_ExpSniffer@@QBEHXZ
    public const /* 未知 */ name(/* TODO 参数 */);  // ?name@IE_ExpSniffer@@QBEABVUT_UTF8String@@XZ
    public /* 未知 */ setFileType(/* TODO 参数 */);  // ?setFileType@IE_ExpSniffer@@AAEXH@Z
    public bool supportsFileType(/* TODO 参数 */);  // ?supportsFileType@IE_ExpSniffer@@QAE_NH@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_ExpSniffer@@UAEEPBD@Z
};

/* ---- IE_Exp_AWT_Sniffer (3 方法) ---- */
class IE_Exp_AWT_Sniffer {
public:
    virtual public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp_AWT_Sniffer@@UAEHPAVPD_Document@@P
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Exp_AWT_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public bool recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Exp_AWT_Sniffer@@UAE_NPBD@Z
};

/* ---- IE_Exp_AbiWord_1 (1 方法) ---- */
class IE_Exp_AbiWord_1 {
public:
    public /* 未知 */ _writeDocument(/* TODO 参数 */);  // ?_writeDocument@IE_Exp_AbiWord_1@@MAEHXZ
};

/* ---- IE_Exp_AbiWord_1_Sniffer (4 方法) ---- */
class IE_Exp_AbiWord_1_Sniffer {
public:
    virtual public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp_AbiWord_1_Sniffer@@UAEHPAVPD_Docum
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Exp_AbiWord_1_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public bool recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Exp_AbiWord_1_Sniffer@@UAE_NPBD@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_Exp_AbiWord_1_Sniffer@@UAEEPBD@Z
};

/* ---- IE_Exp_EncodedText_Sniffer (3 方法) ---- */
class IE_Exp_EncodedText_Sniffer {
public:
    virtual public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp_EncodedText_Sniffer@@UAEHPAVPD_Doc
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Exp_EncodedText_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public bool recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Exp_EncodedText_Sniffer@@UAE_NPBD@Z
};

/* ---- IE_Exp_HTML (9 方法) ---- */
class IE_Exp_HTML {
public:
    public /* 未知 */ _buildStyleTree(/* TODO 参数 */);  // ?_buildStyleTree@IE_Exp_HTML@@AAEXXZ
    public /* 未知 */ _buildTOC(/* TODO 参数 */);  // ?_buildTOC@IE_Exp_HTML@@AAEXXZ
    public /* 未知 */ _openFile(/* TODO 参数 */);  // ?_openFile@IE_Exp_HTML@@MAE_NPBD@Z
    public /* 未知 */ _writeDocument(/* TODO 参数 */);  // ?_writeDocument@IE_Exp_HTML@@MAEHXZ
    virtual public /* 未知 */ _writeDocument(/* TODO 参数 */);  // ?_writeDocument@IE_Exp_HTML@@UAEH_N0@Z
    public /* 未知 */ set_HTML4(/* TODO 参数 */);  // ?set_HTML4@IE_Exp_HTML@@QAEX_N@Z
    public /* 未知 */ set_MHTML(/* TODO 参数 */);  // ?set_MHTML@IE_Exp_HTML@@QAEX_N@Z
    public /* 未知 */ set_PHTML(/* TODO 参数 */);  // ?set_PHTML@IE_Exp_HTML@@QAEX_N@Z
    public /* 未知 */ suppressDialog(/* TODO 参数 */);  // ?suppressDialog@IE_Exp_HTML@@QAEX_N@Z
};

/* ---- IE_Exp_HTML_Sniffer (3 方法) ---- */
class IE_Exp_HTML_Sniffer {
public:
    virtual public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp_HTML_Sniffer@@UAEHPAVPD_Document@@
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Exp_HTML_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public bool recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Exp_HTML_Sniffer@@UAE_NPBD@Z
};

/* ---- IE_Exp_MHTML_Sniffer (3 方法) ---- */
class IE_Exp_MHTML_Sniffer {
public:
    virtual public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp_MHTML_Sniffer@@UAEHPAVPD_Document@
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Exp_MHTML_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public bool recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Exp_MHTML_Sniffer@@UAE_NPBD@Z
};

/* ---- IE_Exp_MsWord_Hack_Sniffer (3 方法) ---- */
class IE_Exp_MsWord_Hack_Sniffer {
public:
    virtual public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp_MsWord_Hack_Sniffer@@UAEHPAVPD_Doc
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Exp_MsWord_Hack_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public bool recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Exp_MsWord_Hack_Sniffer@@UAE_NPBD@Z
};

/* ---- IE_Exp_RTF (58 方法) ---- */
class IE_Exp_RTF {
public:
    protected /* 未知 */ _addColor(/* TODO 参数 */);  // ?_addColor@IE_Exp_RTF@@IAEXPBD@Z
    protected /* 未知 */ _addFont(/* TODO 参数 */);  // ?_addFont@IE_Exp_RTF@@IAEXPBV_rtf_font_info@@@Z
    protected /* 未知 */ _clearStyles(/* TODO 参数 */);  // ?_clearStyles@IE_Exp_RTF@@IAEXXZ
    public /* 未知 */ _findColor(/* TODO 参数 */);  // ?_findColor@IE_Exp_RTF@@IBEHPBD@Z
    public /* 未知 */ _findFont(/* TODO 参数 */);  // ?_findFont@IE_Exp_RTF@@IBEHPBV_rtf_font_info@@@Z
    public /* 未知 */ _findFont(/* TODO 参数 */);  // ?_findFont@IE_Exp_RTF@@IBEHPBVs_RTF_AttrPropAdapter@@@Z
    protected /* 未知 */ _findOrAddColor(/* TODO 参数 */);  // ?_findOrAddColor@IE_Exp_RTF@@IAEHPBD@Z
    protected /* 未知 */ _generate_level_Text(/* TODO 参数 */);  // ?_generate_level_Text@IE_Exp_RTF@@IAEXPAVfl_AutoNum@@AAVUT_S
    protected /* 未知 */ _getStyleNumber(/* TODO 参数 */);  // ?_getStyleNumber@IE_Exp_RTF@@IAEIPBD@Z
    protected /* 未知 */ _getStyleNumber(/* TODO 参数 */);  // ?_getStyleNumber@IE_Exp_RTF@@IAEIPBVPD_Style@@@Z
    protected /* 未知 */ _getStyleProp(/* TODO 参数 */);  // ?_getStyleProp@IE_Exp_RTF@@IAEPBDPAVs_RTF_AttrPropAdapter_St
    protected /* 未知 */ _get_LeftRight_Side(/* TODO 参数 */);  // ?_get_LeftRight_Side@IE_Exp_RTF@@IAEXAAVUT_String@@0@Z
    protected /* 未知 */ _output_LevelText(/* TODO 参数 */);  // ?_output_LevelText@IE_Exp_RTF@@IAEXPAVfl_AutoNum@@II@Z
    protected /* 未知 */ _output_ListRTF(/* TODO 参数 */);  // ?_output_ListRTF@IE_Exp_RTF@@IAEXPAVfl_AutoNum@@I@Z
    protected /* 未知 */ _output_MultiLevelRTF(/* TODO 参数 */);  // ?_output_MultiLevelRTF@IE_Exp_RTF@@IAEXPAVie_exp_RTF_MsWord9
    protected /* 未知 */ _output_OveridesRTF(/* TODO 参数 */);  // ?_output_OveridesRTF@IE_Exp_RTF@@IAEXPAVie_exp_RTF_ListOveri
    protected /* 未知 */ _output_SimpleListRTF(/* TODO 参数 */);  // ?_output_SimpleListRTF@IE_Exp_RTF@@IAEXPAVie_exp_RTF_MsWord9
    protected /* 未知 */ _output_revision(/* TODO 参数 */);  // ?_output_revision@IE_Exp_RTF@@IAEXABVs_RTF_AttrPropAdapter@@
    protected /* 未知 */ _rtf_chardata(/* TODO 参数 */);  // ?_rtf_chardata@IE_Exp_RTF@@IAEXPBDI@Z
    protected /* 未知 */ _rtf_close_brace(/* TODO 参数 */);  // ?_rtf_close_brace@IE_Exp_RTF@@IAEXXZ
    protected /* 未知 */ _rtf_fontname(/* TODO 参数 */);  // ?_rtf_fontname@IE_Exp_RTF@@IAEXPBD@Z
    protected /* 未知 */ _rtf_keyword(/* TODO 参数 */);  // ?_rtf_keyword@IE_Exp_RTF@@IAEXPBD0@Z
    protected /* 未知 */ _rtf_keyword(/* TODO 参数 */);  // ?_rtf_keyword@IE_Exp_RTF@@IAEXPBD@Z
    protected /* 未知 */ _rtf_keyword(/* TODO 参数 */);  // ?_rtf_keyword@IE_Exp_RTF@@IAEXPBDH@Z
    protected /* 未知 */ _rtf_keyword_hex2(/* TODO 参数 */);  // ?_rtf_keyword_hex2@IE_Exp_RTF@@IAEXPBDH@Z
    protected /* 未知 */ _rtf_keyword_ifnotdefault(/* TODO 参数 */);  // ?_rtf_keyword_ifnotdefault@IE_Exp_RTF@@IAEXPBD0H@Z
    protected /* 未知 */ _rtf_keyword_ifnotdefault_twips(/* TODO 参数 */);  // ?_rtf_keyword_ifnotdefault_twips@IE_Exp_RTF@@IAEXPBD0H@Z
    protected /* 未知 */ _rtf_nl(/* TODO 参数 */);  // ?_rtf_nl@IE_Exp_RTF@@IAEXXZ
    protected /* 未知 */ _rtf_nonascii_hex2(/* TODO 参数 */);  // ?_rtf_nonascii_hex2@IE_Exp_RTF@@IAEXH@Z
    protected /* 未知 */ _rtf_nonascii_hex2(/* TODO 参数 */);  // ?_rtf_nonascii_hex2@IE_Exp_RTF@@IAEXHAAVUT_String@@@Z
    protected /* 未知 */ _rtf_open_brace(/* TODO 参数 */);  // ?_rtf_open_brace@IE_Exp_RTF@@IAEXXZ
    protected /* 未知 */ _rtf_pcdata(/* TODO 参数 */);  // ?_rtf_pcdata@IE_Exp_RTF@@IAEXAAVUT_UTF8String@@_NI@Z
    protected /* 未知 */ _rtf_pcdata(/* TODO 参数 */);  // ?_rtf_pcdata@IE_Exp_RTF@@IAEXPBD_NI@Z
    protected /* 未知 */ _rtf_semi(/* TODO 参数 */);  // ?_rtf_semi@IE_Exp_RTF@@IAEXXZ
    protected /* 未知 */ _selectStyles(/* TODO 参数 */);  // ?_selectStyles@IE_Exp_RTF@@IAEXXZ
    public /* 未知 */ _writeDocument(/* TODO 参数 */);  // ?_writeDocument@IE_Exp_RTF@@MAEHXZ
    protected /* 未知 */ _write_charfmt(/* TODO 参数 */);  // ?_write_charfmt@IE_Exp_RTF@@IAEXABVs_RTF_AttrPropAdapter@@@Z
    protected /* 未知 */ _write_listtable(/* TODO 参数 */);  // ?_write_listtable@IE_Exp_RTF@@IAEXXZ
    protected /* 未知 */ _write_parafmt(/* TODO 参数 */);  // ?_write_parafmt@IE_Exp_RTF@@IAEXPBVPP_AttrProp@@00AA_NPBXAAI
    protected /* 未知 */ _write_prop_ifnotdefault(/* TODO 参数 */);  // ?_write_prop_ifnotdefault@IE_Exp_RTF@@IAEXPBVPD_Style@@PBD1@
    protected /* 未知 */ _write_prop_ifyes(/* TODO 参数 */);  // ?_write_prop_ifyes@IE_Exp_RTF@@IAEXPBVPD_Style@@PBD1@Z
    protected bool _write_rtf_header(/* TODO 参数 */);  // ?_write_rtf_header@IE_Exp_RTF@@IAE_NXZ
    protected bool _write_rtf_trailer(/* TODO 参数 */);  // ?_write_rtf_trailer@IE_Exp_RTF@@IAE_NXZ
    protected /* 未知 */ _write_style_fmt(/* TODO 参数 */);  // ?_write_style_fmt@IE_Exp_RTF@@IAEXPBVPD_Style@@@Z
    protected /* 未知 */ _write_stylesheets(/* TODO 参数 */);  // ?_write_stylesheets@IE_Exp_RTF@@IAEXXZ
    protected /* 未知 */ _write_tabdef(/* TODO 参数 */);  // ?_write_tabdef@IE_Exp_RTF@@IAEXPBD@Z
    public /* 未知 */ exportHdrFtr(/* TODO 参数 */);  // ?exportHdrFtr@IE_Exp_RTF@@QAEXPBD00@Z
    public /* 未知 */ getMatchingOverideNum(/* TODO 参数 */);  // ?getMatchingOverideNum@IE_Exp_RTF@@QAEII@Z
    public const /* 未知 */ getMultiLevelCount(/* TODO 参数 */);  // ?getMultiLevelCount@IE_Exp_RTF@@QBEIXZ
    public const /* 未知 */ getNthMultiLevel(/* TODO 参数 */);  // ?getNthMultiLevel@IE_Exp_RTF@@QBEPAVie_exp_RTF_MsWord97ListM
    public const /* 未知 */ getNthOveride(/* TODO 参数 */);  // ?getNthOveride@IE_Exp_RTF@@QBEPAVie_exp_RTF_ListOveride@@I@Z
    public const /* 未知 */ getNthSimple(/* TODO 参数 */);  // ?getNthSimple@IE_Exp_RTF@@QBEPAVie_exp_RTF_MsWord97ListSimpl
    public const /* 未知 */ getOverideCount(/* TODO 参数 */);  // ?getOverideCount@IE_Exp_RTF@@QBEIXZ
    public const /* 未知 */ getSimpleListCount(/* TODO 参数 */);  // ?getSimpleListCount@IE_Exp_RTF@@QBEIXZ
    public /* 未知 */ isCharRTL(/* TODO 参数 */);  // ?isCharRTL@IE_Exp_RTF@@QAEJXZ
    public /* 未知 */ s_escapeString(/* TODO 参数 */);  // ?s_escapeString@IE_Exp_RTF@@CA_NAAVUT_UTF8String@@AAVUT_UCS4
    public /* 未知 */ s_escapeString(/* TODO 参数 */);  // ?s_escapeString@IE_Exp_RTF@@CA_NAAVUT_UTF8String@@PBDII@Z
    public /* 未知 */ setCharRTL(/* TODO 参数 */);  // ?setCharRTL@IE_Exp_RTF@@QAEXJ@Z
};

/* ---- IE_Exp_RTF_Sniffer (4 方法) ---- */
class IE_Exp_RTF_Sniffer {
public:
    virtual public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp_RTF_Sniffer@@UAEHPAVPD_Document@@P
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Exp_RTF_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public bool recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Exp_RTF_Sniffer@@UAE_NPBD@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_Exp_RTF_Sniffer@@UAEEPBD@Z
};

/* ---- IE_Exp_RTF_attic_Sniffer (3 方法) ---- */
class IE_Exp_RTF_attic_Sniffer {
public:
    virtual public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp_RTF_attic_Sniffer@@UAEHPAVPD_Docum
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Exp_RTF_attic_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public bool recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Exp_RTF_attic_Sniffer@@UAE_NPBD@Z
};

/* ---- IE_Exp_Text (5 方法) ---- */
class IE_Exp_Text {
public:
    public /* 未知 */ _constructListener(/* TODO 参数 */);  // ?_constructListener@IE_Exp_Text@@MAEPAVPL_Listener@@XZ
    protected bool _doEncodingDialog(/* TODO 参数 */);  // ?_doEncodingDialog@IE_Exp_Text@@IAE_NPBD@Z
    public /* 未知 */ _openFile(/* TODO 参数 */);  // ?_openFile@IE_Exp_Text@@MAE_NPBD@Z
    protected /* 未知 */ _setEncoding(/* TODO 参数 */);  // ?_setEncoding@IE_Exp_Text@@IAEXPBD@Z
    public /* 未知 */ _writeDocument(/* TODO 参数 */);  // ?_writeDocument@IE_Exp_Text@@MAEHXZ
};

/* ---- IE_Exp_Text_Sniffer (4 方法) ---- */
class IE_Exp_Text_Sniffer {
public:
    virtual public /* 未知 */ constructExporter(/* TODO 参数 */);  // ?constructExporter@IE_Exp_Text_Sniffer@@UAEHPAVPD_Document@@
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Exp_Text_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public bool recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Exp_Text_Sniffer@@UAE_NPBD@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_Exp_Text_Sniffer@@UAEEPBD@Z
};

/* ---- IE_FileInfo (5 方法) ---- */
class IE_FileInfo {
public:
    public const /* 未知 */ MIME_TypeOrPseudo(/* TODO 参数 */);  // ?MIME_TypeOrPseudo@IE_FileInfo@@QBEABVUT_UTF8String@@XZ
    public const /* 未知 */ PreferredExporter(/* TODO 参数 */);  // ?PreferredExporter@IE_FileInfo@@QBEABVUT_UTF8String@@XZ
    public const /* 未知 */ PreferredImporter(/* TODO 参数 */);  // ?PreferredImporter@IE_FileInfo@@QBEABVUT_UTF8String@@XZ
    public /* 未知 */ mapAlias(/* TODO 参数 */);  // ?mapAlias@IE_FileInfo@@SAPBDPBD@Z
    public /* 未知 */ setFileInfo(/* TODO 参数 */);  // ?setFileInfo@IE_FileInfo@@QAEXPBD00@Z
};

/* ---- IE_Imp (34 方法) ---- */
class IE_Imp {
public:
    public /* 未知 */ appendFmt(/* TODO 参数 */);  // ?appendFmt@IE_Imp@@MAE_NPAPBD@Z
    public /* 未知 */ appendFmt(/* TODO 参数 */);  // ?appendFmt@IE_Imp@@MAE_NPBV?$UT_GenericVector@PAD@@@Z
    public /* 未知 */ appendObject(/* TODO 参数 */);  // ?appendObject@IE_Imp@@MAE_NW4_PTObjectType@@PAPBD1@Z
    public /* 未知 */ appendSpan(/* TODO 参数 */);  // ?appendSpan@IE_Imp@@MAE_NPBII@Z
    public /* 未知 */ appendStrux(/* TODO 参数 */);  // ?appendStrux@IE_Imp@@MAE_NW4_PTStruxType@@PAPBD@Z
    public /* 未知 */ appendStruxFmt(/* TODO 参数 */);  // ?appendStruxFmt@IE_Imp@@MAE_NPAVpf_Frag_Strux@@PAPBD@Z
    public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_Imp@@SAHPAVPD_Document@@HPAPAV1@PAH@Z
    public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_Imp@@SAHPAVPD_Document@@PBDHPAPAV1@PAH
    public /* 未知 */ descriptionForFileType(/* TODO 参数 */);  // ?descriptionForFileType@IE_Imp@@SAPBDH@Z
    public /* 未知 */ enumerateDlgLabels(/* TODO 参数 */);  // ?enumerateDlgLabels@IE_Imp@@SA_NIPAPBD0PAH@Z
    public /* 未知 */ fileTypeForContents(/* TODO 参数 */);  // ?fileTypeForContents@IE_Imp@@SAHPBDI@Z
    public /* 未知 */ fileTypeForDescription(/* TODO 参数 */);  // ?fileTypeForDescription@IE_Imp@@SAHPBD@Z
    public /* 未知 */ fileTypeForSuffix(/* TODO 参数 */);  // ?fileTypeForSuffix@IE_Imp@@SAHPBD@Z
    public /* 未知 */ fileTypeForSuffixes(/* TODO 参数 */);  // ?fileTypeForSuffixes@IE_Imp@@SAHPBD@Z
    public const /* 未知 */ getDoc(/* TODO 参数 */);  // ?getDoc@IE_Imp@@QBEPAVPD_Document@@XZ
    public /* 未知 */ getDocPos(/* TODO 参数 */);  // ?getDocPos@IE_Imp@@IBEIXZ
    public const /* 未知 */ getFidelity(/* TODO 参数 */);  // ?getFidelity@IE_Imp@@QBEEXZ
    public /* 未知 */ getImporterCount(/* TODO 参数 */);  // ?getImporterCount@IE_Imp@@SAIXZ
    public const bool getLoadDocProps(/* TODO 参数 */);  // ?getLoadDocProps@IE_Imp@@QBE_NXZ
    public const bool getLoadStylesOnly(/* TODO 参数 */);  // ?getLoadStylesOnly@IE_Imp@@QBE_NXZ
    public /* 未知 */ getProperty(/* TODO 参数 */);  // ?getProperty@IE_Imp@@QAEPBVUT_UTF8String@@PBD@Z
    public /* 未知 */ isClipboard(/* TODO 参数 */);  // ?isClipboard@IE_Imp@@IBE_NXZ
    public const bool isPasting(/* TODO 参数 */);  // ?isPasting@IE_Imp@@QBE_NXZ
    virtual public bool pasteFromBuffer(/* TODO 参数 */);  // ?pasteFromBuffer@IE_Imp@@UAE_NPAVPD_DocumentRange@@PBEIPBD@Z
    public /* 未知 */ registerImporter(/* TODO 参数 */);  // ?registerImporter@IE_Imp@@SAXPAVIE_ImpSniffer@@@Z
    protected /* 未知 */ setClipboard(/* TODO 参数 */);  // ?setClipboard@IE_Imp@@IAEXI@Z
    public /* 未知 */ setLoadDocProps(/* TODO 参数 */);  // ?setLoadDocProps@IE_Imp@@QAEX_N@Z
    public /* 未知 */ setLoadStylesOnly(/* TODO 参数 */);  // ?setLoadStylesOnly@IE_Imp@@QAEX_N@Z
    public /* 未知 */ setProps(/* TODO 参数 */);  // ?setProps@IE_Imp@@QAEXPBD@Z
    public /* 未知 */ snifferForFileType(/* TODO 参数 */);  // ?snifferForFileType@IE_Imp@@SAPAVIE_ImpSniffer@@H@Z
    public /* 未知 */ suffixesForFileType(/* TODO 参数 */);  // ?suffixesForFileType@IE_Imp@@SAPBDH@Z
    virtual public bool supportsLoadStylesOnly(/* TODO 参数 */);  // ?supportsLoadStylesOnly@IE_Imp@@UAE_NXZ
    public /* 未知 */ unregisterAllImporters(/* TODO 参数 */);  // ?unregisterAllImporters@IE_Imp@@SAXXZ
    public /* 未知 */ unregisterImporter(/* TODO 参数 */);  // ?unregisterImporter@IE_Imp@@SAXPAVIE_ImpSniffer@@@Z
};

/* ---- IE_ImpGraphic (11 方法) ---- */
class IE_ImpGraphic {
public:
    public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_ImpGraphic@@SAHPBDHPAPAV1@@Z
    public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_ImpGraphic@@SAHPBVUT_ByteBuf@@HPAPAV1@
    public /* 未知 */ constructImporterWithDescription(/* TODO 参数 */);  // ?constructImporterWithDescription@IE_ImpGraphic@@SAHPBDPAPAV
    public /* 未知 */ enumerateDlgLabels(/* TODO 参数 */);  // ?enumerateDlgLabels@IE_ImpGraphic@@SA_NIPAPBD0PAH@Z
    public /* 未知 */ fileTypeForContents(/* TODO 参数 */);  // ?fileTypeForContents@IE_ImpGraphic@@SAHPBDI@Z
    public /* 未知 */ fileTypeForSuffix(/* TODO 参数 */);  // ?fileTypeForSuffix@IE_ImpGraphic@@SAHPBD@Z
    public /* 未知 */ getImporterCount(/* TODO 参数 */);  // ?getImporterCount@IE_ImpGraphic@@SAIXZ
    virtual public /* 未知 */ importGraphic(/* TODO 参数 */);  // ?importGraphic@IE_ImpGraphic@@UAEHPBDPAPAVFG_Graphic@@@Z
    public /* 未知 */ registerImporter(/* TODO 参数 */);  // ?registerImporter@IE_ImpGraphic@@SAXPAVIE_ImpGraphicSniffer@
    public /* 未知 */ unregisterAllImporters(/* TODO 参数 */);  // ?unregisterAllImporters@IE_ImpGraphic@@SAXXZ
    public /* 未知 */ unregisterImporter(/* TODO 参数 */);  // ?unregisterImporter@IE_ImpGraphic@@SAXPAVIE_ImpGraphicSniffe
};

/* ---- IE_ImpGraphicSniffer (3 方法) ---- */
class IE_ImpGraphicSniffer {
public:
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@IE_ImpGraphicSniffer@@QBEHXZ
    public /* 未知 */ setType(/* TODO 参数 */);  // ?setType@IE_ImpGraphicSniffer@@AAEXH@Z
    public bool supportsType(/* TODO 参数 */);  // ?supportsType@IE_ImpGraphicSniffer@@QAE_NH@Z
};

/* ---- IE_ImpSniffer (6 方法) ---- */
class IE_ImpSniffer {
public:
    public const bool getCanPaste(/* TODO 参数 */);  // ?getCanPaste@IE_ImpSniffer@@QBE_NXZ
    public const /* 未知 */ getFileType(/* TODO 参数 */);  // ?getFileType@IE_ImpSniffer@@QBEHXZ
    public const /* 未知 */ name(/* TODO 参数 */);  // ?name@IE_ImpSniffer@@QBEABVUT_UTF8String@@XZ
    public /* 未知 */ setFileType(/* TODO 参数 */);  // ?setFileType@IE_ImpSniffer@@AAEXH@Z
    public bool supportsFileType(/* TODO 参数 */);  // ?supportsFileType@IE_ImpSniffer@@QAE_NH@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_ImpSniffer@@UAEEPBD@Z
};

/* ---- IE_Imp_AbiWord_1 (10 方法) ---- */
class IE_Imp_AbiWord_1 {
public:
    protected bool _getDataItemEncoded(/* TODO 参数 */);  // ?_getDataItemEncoded@IE_Imp_AbiWord_1@@IAE_NPAPBD@Z
    protected /* 未知 */ _getDataItemMimeType(/* TODO 参数 */);  // ?_getDataItemMimeType@IE_Imp_AbiWord_1@@IAEPBDPAPBD@Z
    protected /* 未知 */ _getDataItemName(/* TODO 参数 */);  // ?_getDataItemName@IE_Imp_AbiWord_1@@IAEPBDPAPBD@Z
    protected bool _handleImage(/* TODO 参数 */);  // ?_handleImage@IE_Imp_AbiWord_1@@IAE_NPAPBD@Z
    protected bool _handleResource(/* TODO 参数 */);  // ?_handleResource@IE_Imp_AbiWord_1@@IAE_NPAPBD_N@Z
    virtual public /* 未知 */ endElement(/* TODO 参数 */);  // ?endElement@IE_Imp_AbiWord_1@@UAEXPBD@Z
    virtual public /* 未知 */ importFile(/* TODO 参数 */);  // ?importFile@IE_Imp_AbiWord_1@@UAEHPBD@Z
    virtual public /* 未知 */ importStream(/* TODO 参数 */);  // ?importStream@IE_Imp_AbiWord_1@@UAEHABUExp_ImpDataStruct@@@Z
    virtual public /* 未知 */ startElement(/* TODO 参数 */);  // ?startElement@IE_Imp_AbiWord_1@@UAEXPBDPAPBD@Z
    virtual public bool supportsLoadStylesOnly(/* TODO 参数 */);  // ?supportsLoadStylesOnly@IE_Imp_AbiWord_1@@UAE_NXZ
};

/* ---- IE_Imp_AbiWord_1_Sniffer (5 方法) ---- */
class IE_Imp_AbiWord_1_Sniffer {
public:
    virtual public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_Imp_AbiWord_1_Sniffer@@UAEHPAVPD_Docum
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Imp_AbiWord_1_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public /* 未知 */ recognizeContents(/* TODO 参数 */);  // ?recognizeContents@IE_Imp_AbiWord_1_Sniffer@@UAEEPBDI@Z
    virtual public /* 未知 */ recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Imp_AbiWord_1_Sniffer@@UAEEPBD@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_Imp_AbiWord_1_Sniffer@@UAEEPBD@Z
};

/* ---- IE_Imp_EncodedText_Sniffer (4 方法) ---- */
class IE_Imp_EncodedText_Sniffer {
public:
    virtual public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_Imp_EncodedText_Sniffer@@UAEHPAVPD_Doc
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Imp_EncodedText_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public /* 未知 */ recognizeContents(/* TODO 参数 */);  // ?recognizeContents@IE_Imp_EncodedText_Sniffer@@UAEEPBDI@Z
    virtual public /* 未知 */ recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Imp_EncodedText_Sniffer@@UAEEPBD@Z
};

/* ---- IE_Imp_GZipAbiWord (3 方法, 定制类) ---- */
class IE_Imp_GZipAbiWord {
public:
    virtual public /* 未知 */ closeFile(/* TODO 参数 */);  // ?closeFile@IE_Imp_GZipAbiWord@@UAEXXZ
    virtual public bool openFile(/* TODO 参数 */);  // ?openFile@IE_Imp_GZipAbiWord@@UAE_NPBD@Z
    virtual public /* 未知 */ readBytes(/* TODO 参数 */);  // ?readBytes@IE_Imp_GZipAbiWord@@UAEIPADI@Z
};

/* ---- IE_Imp_GZipAbiWord_Sniffer (5 方法) ---- */
class IE_Imp_GZipAbiWord_Sniffer {
public:
    virtual public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_Imp_GZipAbiWord_Sniffer@@UAEHPAVPD_Doc
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Imp_GZipAbiWord_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public /* 未知 */ recognizeContents(/* TODO 参数 */);  // ?recognizeContents@IE_Imp_GZipAbiWord_Sniffer@@UAEEPBDI@Z
    virtual public /* 未知 */ recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Imp_GZipAbiWord_Sniffer@@UAEEPBD@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_Imp_GZipAbiWord_Sniffer@@UAEEPBD@Z
};

/* ---- IE_Imp_MsWord_97 (64 方法) ---- */
class IE_Imp_MsWord_97 {
public:
    public /* 未知 */ _appendChar(/* TODO 参数 */);  // ?_appendChar@IE_Imp_MsWord_97@@AAEXI@Z
    public /* 未知 */ _appendFmt(/* TODO 参数 */);  // ?_appendFmt@IE_Imp_MsWord_97@@AAE_NPAPBD@Z
    public /* 未知 */ _appendObject(/* TODO 参数 */);  // ?_appendObject@IE_Imp_MsWord_97@@AAE_NW4_PTObjectType@@PAPBD
    public /* 未知 */ _appendObjectHdrFtr(/* TODO 参数 */);  // ?_appendObjectHdrFtr@IE_Imp_MsWord_97@@AAE_NW4_PTObjectType@
    public /* 未知 */ _appendSpan(/* TODO 参数 */);  // ?_appendSpan@IE_Imp_MsWord_97@@AAE_NPBII@Z
    public /* 未知 */ _appendSpanHdrFtr(/* TODO 参数 */);  // ?_appendSpanHdrFtr@IE_Imp_MsWord_97@@AAE_NPBII@Z
    public /* 未知 */ _appendStrux(/* TODO 参数 */);  // ?_appendStrux@IE_Imp_MsWord_97@@AAE_NW4_PTStruxType@@PAPBD@Z
    public /* 未知 */ _appendStruxHdrFtr(/* TODO 参数 */);  // ?_appendStruxHdrFtr@IE_Imp_MsWord_97@@AAE_NW4_PTStruxType@@P
    public /* 未知 */ _beginChar(/* TODO 参数 */);  // ?_beginChar@IE_Imp_MsWord_97@@AAEHPAU_wvParseStruct@@IPAXH@Z
    public /* 未知 */ _beginComment(/* TODO 参数 */);  // ?_beginComment@IE_Imp_MsWord_97@@AAEHPAU_wvParseStruct@@IPAX
    public /* 未知 */ _beginPara(/* TODO 参数 */);  // ?_beginPara@IE_Imp_MsWord_97@@AAEHPAU_wvParseStruct@@IPAXH@Z
    public /* 未知 */ _beginSect(/* TODO 参数 */);  // ?_beginSect@IE_Imp_MsWord_97@@AAEHPAU_wvParseStruct@@IPAXH@Z
    public /* 未知 */ _build_ColumnWidths(/* TODO 参数 */);  // ?_build_ColumnWidths@IE_Imp_MsWord_97@@AAE_NAAV?$UT_GenericV
    public /* 未知 */ _cell_close(/* TODO 参数 */);  // ?_cell_close@IE_Imp_MsWord_97@@AAEXXZ
    public /* 未知 */ _cell_open(/* TODO 参数 */);  // ?_cell_open@IE_Imp_MsWord_97@@AAEXPBU_wvParseStruct@@PBU_PAP
    public /* 未知 */ _charProc(/* TODO 参数 */);  // ?_charProc@IE_Imp_MsWord_97@@QAEHPAU_wvParseStruct@@GEG@Z
    public /* 未知 */ _docProc(/* TODO 参数 */);  // ?_docProc@IE_Imp_MsWord_97@@QAEHPAU_wvParseStruct@@I@Z
    public /* 未知 */ _eleProc(/* TODO 参数 */);  // ?_eleProc@IE_Imp_MsWord_97@@QAEHPAU_wvParseStruct@@IPAXH@Z
    public /* 未知 */ _endChar(/* TODO 参数 */);  // ?_endChar@IE_Imp_MsWord_97@@AAEHPAU_wvParseStruct@@IPAXH@Z
    public /* 未知 */ _endComment(/* TODO 参数 */);  // ?_endComment@IE_Imp_MsWord_97@@AAEHPAU_wvParseStruct@@IPAXH@
    public /* 未知 */ _endPara(/* TODO 参数 */);  // ?_endPara@IE_Imp_MsWord_97@@AAEHPAU_wvParseStruct@@IPAXH@Z
    public /* 未知 */ _endSect(/* TODO 参数 */);  // ?_endSect@IE_Imp_MsWord_97@@AAEHPAU_wvParseStruct@@IPAXH@Z
    public /* 未知 */ _ensureInBlock(/* TODO 参数 */);  // ?_ensureInBlock@IE_Imp_MsWord_97@@AAE_NXZ
    public /* 未知 */ _fieldProc(/* TODO 参数 */);  // ?_fieldProc@IE_Imp_MsWord_97@@AAEHPAU_wvParseStruct@@GEG@Z
    public /* 未知 */ _findNextENoteSection(/* TODO 参数 */);  // ?_findNextENoteSection@IE_Imp_MsWord_97@@AAE_NXZ
    public /* 未知 */ _findNextFNoteSection(/* TODO 参数 */);  // ?_findNextFNoteSection@IE_Imp_MsWord_97@@AAE_NXZ
    public /* 未知 */ _findNextTextboxSection(/* TODO 参数 */);  // ?_findNextTextboxSection@IE_Imp_MsWord_97@@AAE_NXZ
    public /* 未知 */ _flush(/* TODO 参数 */);  // ?_flush@IE_Imp_MsWord_97@@AAEXXZ
    public /* 未知 */ _generateCharProps(/* TODO 参数 */);  // ?_generateCharProps@IE_Imp_MsWord_97@@AAEXAAVUT_String@@PBU_
    public /* 未知 */ _generateParaProps(/* TODO 参数 */);  // ?_generateParaProps@IE_Imp_MsWord_97@@AAEXAAVUT_String@@PBU_
    public /* 未知 */ _getBookmarkName(/* TODO 参数 */);  // ?_getBookmarkName@IE_Imp_MsWord_97@@AAEPADPBU_wvParseStruct@
    public /* 未知 */ _handleBookmarks(/* TODO 参数 */);  // ?_handleBookmarks@IE_Imp_MsWord_97@@AAEHPBU_wvParseStruct@@@
    public /* 未知 */ _handleCommandField(/* TODO 参数 */);  // ?_handleCommandField@IE_Imp_MsWord_97@@AAE_NPAD@Z
    public /* 未知 */ _handleFieldEnd(/* TODO 参数 */);  // ?_handleFieldEnd@IE_Imp_MsWord_97@@AAE_NPADI@Z
    public /* 未知 */ _handleHeaders(/* TODO 参数 */);  // ?_handleHeaders@IE_Imp_MsWord_97@@AAEXPBU_wvParseStruct@@@Z
    public /* 未知 */ _handleHeadersText(/* TODO 参数 */);  // ?_handleHeadersText@IE_Imp_MsWord_97@@AAE_NI_N@Z
    public /* 未知 */ _handleImage(/* TODO 参数 */);  // ?_handleImage@IE_Imp_MsWord_97@@AAEHPAU_Blip@@JJJJJJ@Z
    public /* 未知 */ _handleNotes(/* TODO 参数 */);  // ?_handleNotes@IE_Imp_MsWord_97@@AAEXPBU_wvParseStruct@@@Z
    public /* 未知 */ _handleNotesText(/* TODO 参数 */);  // ?_handleNotesText@IE_Imp_MsWord_97@@AAE_NI@Z
    public /* 未知 */ _handlePositionedImage(/* TODO 参数 */);  // ?_handlePositionedImage@IE_Imp_MsWord_97@@AAEHPAU_Blip@@AAVU
    public /* 未知 */ _handleStyleSheet(/* TODO 参数 */);  // ?_handleStyleSheet@IE_Imp_MsWord_97@@AAEXPBU_wvParseStruct@@
    public /* 未知 */ _handleTextBoxes(/* TODO 参数 */);  // ?_handleTextBoxes@IE_Imp_MsWord_97@@AAEXPBU_wvParseStruct@@@
    public /* 未知 */ _handleTextboxesText(/* TODO 参数 */);  // ?_handleTextboxesText@IE_Imp_MsWord_97@@AAE_NI@Z
    public /* 未知 */ _ignorePosition(/* TODO 参数 */);  // ?_ignorePosition@IE_Imp_MsWord_97@@AAE_NI@Z
    public /* 未知 */ _insertBookmark(/* TODO 参数 */);  // ?_insertBookmark@IE_Imp_MsWord_97@@AAE_NPAUbookmark@@@Z
    public /* 未知 */ _insertBookmarkIfAppropriate(/* TODO 参数 */);  // ?_insertBookmarkIfAppropriate@IE_Imp_MsWord_97@@AAE_NI@Z
    public /* 未知 */ _insertEndnote(/* TODO 参数 */);  // ?_insertEndnote@IE_Imp_MsWord_97@@AAE_NPBUfootnote@@I@Z
    public /* 未知 */ _insertFootnote(/* TODO 参数 */);  // ?_insertFootnote@IE_Imp_MsWord_97@@AAE_NPBUfootnote@@I@Z
    public /* 未知 */ _insertHeaderSection(/* TODO 参数 */);  // ?_insertHeaderSection@IE_Imp_MsWord_97@@AAE_N_N@Z
    public /* 未知 */ _insertNoteIfAppropriate(/* TODO 参数 */);  // ?_insertNoteIfAppropriate@IE_Imp_MsWord_97@@AAE_NII@Z
    public /* 未知 */ _insertTOC(/* TODO 参数 */);  // ?_insertTOC@IE_Imp_MsWord_97@@AAE_NPAUfield@@@Z
    public /* 未知 */ _isTOCsupported(/* TODO 参数 */);  // ?_isTOCsupported@IE_Imp_MsWord_97@@AAE_NPAUfield@@@Z
    public /* 未知 */ _isVectorFull(/* TODO 参数 */);  // ?_isVectorFull@IE_Imp_MsWord_97@@AAE_NAAV?$UT_GenericVector@
    public /* 未知 */ _row_close(/* TODO 参数 */);  // ?_row_close@IE_Imp_MsWord_97@@AAEXXZ
    public /* 未知 */ _row_open(/* TODO 参数 */);  // ?_row_open@IE_Imp_MsWord_97@@AAEXPBU_wvParseStruct@@@Z
    public /* 未知 */ _shouldUseInsert(/* TODO 参数 */);  // ?_shouldUseInsert@IE_Imp_MsWord_97@@ABE_NXZ
    public /* 未知 */ _specCharProc(/* TODO 参数 */);  // ?_specCharProc@IE_Imp_MsWord_97@@QAEHPAU_wvParseStruct@@GPAU
    public /* 未知 */ _table_close(/* TODO 参数 */);  // ?_table_close@IE_Imp_MsWord_97@@AAEXPBU_wvParseStruct@@PBU_P
    public /* 未知 */ _table_open(/* TODO 参数 */);  // ?_table_open@IE_Imp_MsWord_97@@AAEXXZ
    public /* 未知 */ findMatchSpan(/* TODO 参数 */);  // ?findMatchSpan@IE_Imp_MsWord_97@@AAE_NHH@Z
    virtual public /* 未知 */ importFile(/* TODO 参数 */);  // ?importFile@IE_Imp_MsWord_97@@UAEHPBD@Z
    virtual public /* 未知 */ importStream(/* TODO 参数 */);  // ?importStream@IE_Imp_MsWord_97@@UAEHABUExp_ImpDataStruct@@@Z
    public /* 未知 */ setNumberVector(/* TODO 参数 */);  // ?setNumberVector@IE_Imp_MsWord_97@@AAEXAAV?$UT_GenericVector
    virtual public bool supportsLoadStylesOnly(/* TODO 参数 */);  // ?supportsLoadStylesOnly@IE_Imp_MsWord_97@@UAE_NXZ
};

/* ---- IE_Imp_MsWord_97_Sniffer (5 方法) ---- */
class IE_Imp_MsWord_97_Sniffer {
public:
    virtual public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_Imp_MsWord_97_Sniffer@@UAEHPAVPD_Docum
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Imp_MsWord_97_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public /* 未知 */ recognizeContents(/* TODO 参数 */);  // ?recognizeContents@IE_Imp_MsWord_97_Sniffer@@UAEEPBDI@Z
    virtual public /* 未知 */ recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Imp_MsWord_97_Sniffer@@UAEEPBD@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_Imp_MsWord_97_Sniffer@@UAEEPBD@Z
};

/* ---- IE_Imp_PasteListener (7 方法) ---- */
class IE_Imp_PasteListener {
public:
    virtual public bool change(/* TODO 参数 */);  // ?change@IE_Imp_PasteListener@@UAE_NPBXPBVPX_ChangeRecord@@@Z
    public /* 未知 */ getDoc(/* TODO 参数 */);  // ?getDoc@IE_Imp_PasteListener@@ABEPAVPD_Document@@XZ
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@IE_Imp_PasteListener@@UBE?AW4_PLListenerType@@XZ
    virtual public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@IE_Imp_PasteListener@@UAE_NPBXPBVPX_ChangeRecor
    virtual public bool populate(/* TODO 参数 */);  // ?populate@IE_Imp_PasteListener@@UAE_NPBXPBVPX_ChangeRecord@@
    virtual public bool populateStrux(/* TODO 参数 */);  // ?populateStrux@IE_Imp_PasteListener@@UAE_NPBXPBVPX_ChangeRec
    virtual public bool signal(/* TODO 参数 */);  // ?signal@IE_Imp_PasteListener@@UAE_NI@Z
};

/* ---- IE_Imp_RTF (146 方法) ---- */
class IE_Imp_RTF {
public:
    public /* 未知 */ AddChar(/* TODO 参数 */);  // ?AddChar@IE_Imp_RTF@@AAE_NI@Z
    public /* 未知 */ AddTabstop(/* TODO 参数 */);  // ?AddTabstop@IE_Imp_RTF@@AAE_NHW4eTabType@@W4eTabLeader@@@Z
    public /* 未知 */ AddTabstop(/* TODO 参数 */);  // ?AddTabstop@IE_Imp_RTF@@AAE_NHW4eTabType@@W4eTabLeader@@PAUR
    public /* 未知 */ ApplyCharacterAttributes(/* TODO 参数 */);  // ?ApplyCharacterAttributes@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ ApplyParagraphAttributes(/* TODO 参数 */);  // ?ApplyParagraphAttributes@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ ApplySectionAttributes(/* TODO 参数 */);  // ?ApplySectionAttributes@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ CloseTable(/* TODO 参数 */);  // ?CloseTable@IE_Imp_RTF@@QAEX_N@Z
    public /* 未知 */ FlushCellProps(/* TODO 参数 */);  // ?FlushCellProps@IE_Imp_RTF@@QAEXXZ
    public bool FlushStoredChars(/* TODO 参数 */);  // ?FlushStoredChars@IE_Imp_RTF@@QAE_N_N@Z
    public /* 未知 */ FlushTableProps(/* TODO 参数 */);  // ?FlushTableProps@IE_Imp_RTF@@QAEXXZ
    public /* 未知 */ GetNthTableBgColour(/* TODO 参数 */);  // ?GetNthTableBgColour@IE_Imp_RTF@@AAEHI@Z
    public /* 未知 */ GetNthTableColour(/* TODO 参数 */);  // ?GetNthTableColour@IE_Imp_RTF@@AAEII@Z
    public /* 未知 */ GetNthTableFont(/* TODO 参数 */);  // ?GetNthTableFont@IE_Imp_RTF@@AAEPAURTFFontTableItem@@I@Z
    public bool HandleAbiCell(/* TODO 参数 */);  // ?HandleAbiCell@IE_Imp_RTF@@QAE_NXZ
    public bool HandleAbiEmbed(/* TODO 参数 */);  // ?HandleAbiEmbed@IE_Imp_RTF@@QAE_NXZ
    public bool HandleAbiEndCell(/* TODO 参数 */);  // ?HandleAbiEndCell@IE_Imp_RTF@@QAE_NXZ
    public bool HandleAbiEndTable(/* TODO 参数 */);  // ?HandleAbiEndTable@IE_Imp_RTF@@QAE_NXZ
    public bool HandleAbiLists(/* TODO 参数 */);  // ?HandleAbiLists@IE_Imp_RTF@@QAE_NXZ
    public bool HandleAbiMathml(/* TODO 参数 */);  // ?HandleAbiMathml@IE_Imp_RTF@@QAE_NXZ
    public bool HandleAbiTable(/* TODO 参数 */);  // ?HandleAbiTable@IE_Imp_RTF@@QAE_NXZ
    public /* 未知 */ HandleBackgroundColour(/* TODO 参数 */);  // ?HandleBackgroundColour@IE_Imp_RTF@@AAE_NI@Z
    public /* 未知 */ HandleBold(/* TODO 参数 */);  // ?HandleBold@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ HandleBookmark(/* TODO 参数 */);  // ?HandleBookmark@IE_Imp_RTF@@AAE_NW4RTFBookmarkType@1@@Z
    public /* 未知 */ HandleBoolCharacterProp(/* TODO 参数 */);  // ?HandleBoolCharacterProp@IE_Imp_RTF@@AAE_N_NPA_N@Z
    public /* 未知 */ HandleBotline(/* TODO 参数 */);  // ?HandleBotline@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ HandleCell(/* TODO 参数 */);  // ?HandleCell@IE_Imp_RTF@@QAEXXZ
    public /* 未知 */ HandleCellX(/* TODO 参数 */);  // ?HandleCellX@IE_Imp_RTF@@QAEXH@Z
    public /* 未知 */ HandleColour(/* TODO 参数 */);  // ?HandleColour@IE_Imp_RTF@@AAE_NI@Z
    public /* 未知 */ HandleDeleted(/* TODO 参数 */);  // ?HandleDeleted@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ HandleFace(/* TODO 参数 */);  // ?HandleFace@IE_Imp_RTF@@AAE_NI@Z
    public /* 未知 */ HandleField(/* TODO 参数 */);  // ?HandleField@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ HandleFloatCharacterProp(/* TODO 参数 */);  // ?HandleFloatCharacterProp@IE_Imp_RTF@@AAE_NNPAN@Z
    public /* 未知 */ HandleFontSize(/* TODO 参数 */);  // ?HandleFontSize@IE_Imp_RTF@@AAE_NJ@Z
    public /* 未知 */ HandleHeaderFooter(/* TODO 参数 */);  // ?HandleHeaderFooter@IE_Imp_RTF@@AAE_NW4HdrFtrType@RTFHdrFtr@
    public /* 未知 */ HandleHidden(/* TODO 参数 */);  // ?HandleHidden@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ HandleInfoMetaData(/* TODO 参数 */);  // ?HandleInfoMetaData@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ HandleItalic(/* TODO 参数 */);  // ?HandleItalic@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ HandleListLevel(/* TODO 参数 */);  // ?HandleListLevel@IE_Imp_RTF@@AAE_NPAVRTF_msword97_list@@I@Z
    public /* 未知 */ HandleListTag(/* TODO 参数 */);  // ?HandleListTag@IE_Imp_RTF@@AAE_NJ@Z
    public bool HandleLists(/* TODO 参数 */);  // ?HandleLists@IE_Imp_RTF@@QAE_NAAU_rtfListTable@@@Z
    public /* 未知 */ HandleNote(/* TODO 参数 */);  // ?HandleNote@IE_Imp_RTF@@AAEXXZ
    public /* 未知 */ HandleNoteReference(/* TODO 参数 */);  // ?HandleNoteReference@IE_Imp_RTF@@AAEXXZ
    public /* 未知 */ HandleObject(/* TODO 参数 */);  // ?HandleObject@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ HandleOverline(/* TODO 参数 */);  // ?HandleOverline@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ HandlePCData(/* TODO 参数 */);  // ?HandlePCData@IE_Imp_RTF@@AAE_NAAVUT_UTF8String@@@Z
    public /* 未知 */ HandleParKeyword(/* TODO 参数 */);  // ?HandleParKeyword@IE_Imp_RTF@@AAE_NXZ
    public bool HandlePicture(/* TODO 参数 */);  // ?HandlePicture@IE_Imp_RTF@@QAE_NXZ
    public /* 未知 */ HandleRevisedText(/* TODO 参数 */);  // ?HandleRevisedText@IE_Imp_RTF@@AAE_NW4PP_RevisionType@@I@Z
    public /* 未知 */ HandleRevisedTextTimestamp(/* TODO 参数 */);  // ?HandleRevisedTextTimestamp@IE_Imp_RTF@@AAE_NI@Z
    public /* 未知 */ HandleRow(/* TODO 参数 */);  // ?HandleRow@IE_Imp_RTF@@QAEXXZ
    public /* 未知 */ HandleShape(/* TODO 参数 */);  // ?HandleShape@IE_Imp_RTF@@AAEXXZ
    public /* 未知 */ HandleShapePict(/* TODO 参数 */);  // ?HandleShapePict@IE_Imp_RTF@@AAEXXZ
    public /* 未知 */ HandleShapeText(/* TODO 参数 */);  // ?HandleShapeText@IE_Imp_RTF@@QAEXAAVRTFProps_FrameProps@@@Z
    public /* 未知 */ HandleStarKeyword(/* TODO 参数 */);  // ?HandleStarKeyword@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ HandleStrikeout(/* TODO 参数 */);  // ?HandleStrikeout@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ HandleStyleDefinition(/* TODO 参数 */);  // ?HandleStyleDefinition@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ HandleSubscript(/* TODO 参数 */);  // ?HandleSubscript@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ HandleSubscriptPosition(/* TODO 参数 */);  // ?HandleSubscriptPosition@IE_Imp_RTF@@AAE_NI@Z
    public /* 未知 */ HandleSuperscript(/* TODO 参数 */);  // ?HandleSuperscript@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ HandleSuperscriptPosition(/* TODO 参数 */);  // ?HandleSuperscriptPosition@IE_Imp_RTF@@AAE_NI@Z
    public /* 未知 */ HandleTableList(/* TODO 参数 */);  // ?HandleTableList@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ HandleTableListOverride(/* TODO 参数 */);  // ?HandleTableListOverride@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ HandleTopline(/* TODO 参数 */);  // ?HandleTopline@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ HandleU32CharacterProp(/* TODO 参数 */);  // ?HandleU32CharacterProp@IE_Imp_RTF@@AAE_NIPAI@Z
    public /* 未知 */ HandleUnderline(/* TODO 参数 */);  // ?HandleUnderline@IE_Imp_RTF@@AAE_N_N@Z
    public /* 未知 */ InsertImage(/* TODO 参数 */);  // ?InsertImage@IE_Imp_RTF@@AAE_NPBVUT_ByteBuf@@PBDABURTFProps_
    public /* 未知 */ KeywordToID(/* TODO 参数 */);  // ?KeywordToID@IE_Imp_RTF@@AAE?AW4RTF_KEYWORD_ID@@PBD@Z
    public /* 未知 */ LoadPictData(/* TODO 参数 */);  // ?LoadPictData@IE_Imp_RTF@@AAE_NW4PictFormat@1@PBDAAURTFProps
    public /* 未知 */ NextToken(/* TODO 参数 */);  // ?NextToken@IE_Imp_RTF@@AAE?AW4RTFTokenType@1@PAEPAHPA_NI_N@Z
    public /* 未知 */ OpenTable(/* TODO 参数 */);  // ?OpenTable@IE_Imp_RTF@@QAEX_N@Z
    public bool ParseChar(/* TODO 参数 */);  // ?ParseChar@IE_Imp_RTF@@QAE_NI_N@Z
    public /* 未知 */ ParseCharParaProps(/* TODO 参数 */);  // ?ParseCharParaProps@IE_Imp_RTF@@AAE_NPAEH_NPAVRTFProps_CharP
    public /* 未知 */ ParseRTFKeyword(/* TODO 参数 */);  // ?ParseRTFKeyword@IE_Imp_RTF@@AAE_NXZ
    public bool PopRTFState(/* TODO 参数 */);  // ?PopRTFState@IE_Imp_RTF@@QAE_NXZ
    public /* 未知 */ PostProcessAndValidatePanose(/* TODO 参数 */);  // ?PostProcessAndValidatePanose@IE_Imp_RTF@@AAE_NAAVUT_UTF8Str
    public bool PushRTFState(/* TODO 参数 */);  // ?PushRTFState@IE_Imp_RTF@@QAE_NXZ
    public /* 未知 */ ReadCharFromFile(/* TODO 参数 */);  // ?ReadCharFromFile@IE_Imp_RTF@@AAE_NPAE@Z
    public /* 未知 */ ReadCharFromFileWithCRLF(/* TODO 参数 */);  // ?ReadCharFromFileWithCRLF@IE_Imp_RTF@@AAE_NPAE@Z
    public /* 未知 */ ReadColourTable(/* TODO 参数 */);  // ?ReadColourTable@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ ReadFontTable(/* TODO 参数 */);  // ?ReadFontTable@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ ReadHexChar(/* TODO 参数 */);  // ?ReadHexChar@IE_Imp_RTF@@AAEIXZ
    public /* 未知 */ ReadKeyword(/* TODO 参数 */);  // ?ReadKeyword@IE_Imp_RTF@@AAE_NPAEPAHPA_NI@Z
    public /* 未知 */ ReadListOverrideTable(/* TODO 参数 */);  // ?ReadListOverrideTable@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ ReadListTable(/* TODO 参数 */);  // ?ReadListTable@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ ReadRevisionTable(/* TODO 参数 */);  // ?ReadRevisionTable@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ RegisterFont(/* TODO 参数 */);  // ?RegisterFont@IE_Imp_RTF@@AAE_NW4FontFamilyEnum@RTFFontTable
    public /* 未知 */ RemoveRowInfo(/* TODO 参数 */);  // ?RemoveRowInfo@IE_Imp_RTF@@QAEXXZ
    public bool ResetCellAttributes(/* TODO 参数 */);  // ?ResetCellAttributes@IE_Imp_RTF@@QAE_NXZ
    public /* 未知 */ ResetCharacterAttributes(/* TODO 参数 */);  // ?ResetCharacterAttributes@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ ResetParagraphAttributes(/* TODO 参数 */);  // ?ResetParagraphAttributes@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ ResetSectionAttributes(/* TODO 参数 */);  // ?ResetSectionAttributes@IE_Imp_RTF@@AAE_NXZ
    public bool ResetTableAttributes(/* TODO 参数 */);  // ?ResetTableAttributes@IE_Imp_RTF@@QAE_NXZ
    public /* 未知 */ SaveRowInfo(/* TODO 参数 */);  // ?SaveRowInfo@IE_Imp_RTF@@QAEXXZ
    public /* 未知 */ SetParaJustification(/* TODO 参数 */);  // ?SetParaJustification@IE_Imp_RTF@@AAE_NW4ParaJustification@R
    public /* 未知 */ SkipBackChar(/* TODO 参数 */);  // ?SkipBackChar@IE_Imp_RTF@@AAE_NE@Z
    public bool SkipCurrentGroup(/* TODO 参数 */);  // ?SkipCurrentGroup@IE_Imp_RTF@@QAE_N_N@Z
    public bool StandardKeywordParser(/* TODO 参数 */);  // ?StandardKeywordParser@IE_Imp_RTF@@QAE_NPAVIE_Imp_RTFGroupPa
    public /* 未知 */ StartNewPara(/* TODO 参数 */);  // ?StartNewPara@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ StartNewSection(/* TODO 参数 */);  // ?StartNewSection@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ StuffCurrentGroup(/* TODO 参数 */);  // ?StuffCurrentGroup@IE_Imp_RTF@@AAE_NAAVUT_ByteBuf@@@Z
    public /* 未知 */ TranslateKeyword(/* TODO 参数 */);  // ?TranslateKeyword@IE_Imp_RTF@@AAE_NPAEH_N@Z
    public bool TranslateKeywordID(/* TODO 参数 */);  // ?TranslateKeywordID@IE_Imp_RTF@@QAE_NW4RTF_KEYWORD_ID@@H_N@Z
    public /* 未知 */ _appendField(/* TODO 参数 */);  // ?_appendField@IE_Imp_RTF@@AAE_NPBDPAPBD@Z
    public /* 未知 */ _appendHdrFtr(/* TODO 参数 */);  // ?_appendHdrFtr@IE_Imp_RTF@@AAEXXZ
    public /* 未知 */ _appendSpan(/* TODO 参数 */);  // ?_appendSpan@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ _formRevisionAttr(/* TODO 参数 */);  // ?_formRevisionAttr@IE_Imp_RTF@@AAEXAAVUT_String@@0PBD@Z
    public /* 未知 */ _getTableListOverride(/* TODO 参数 */);  // ?_getTableListOverride@IE_Imp_RTF@@AAEPAVRTF_msword97_listOv
    public /* 未知 */ _initialKeywordSort(/* TODO 参数 */);  // ?_initialKeywordSort@IE_Imp_RTF@@CAXXZ
    public /* 未知 */ _insertSpan(/* TODO 参数 */);  // ?_insertSpan@IE_Imp_RTF@@AAE_NXZ
    public /* 未知 */ _isBidiDocument(/* TODO 参数 */);  // ?_isBidiDocument@IE_Imp_RTF@@AAEHXZ
    protected /* 未知 */ _parseFile(/* TODO 参数 */);  // ?_parseFile@IE_Imp_RTF@@IAEHPAU_iobuf@@@Z
    public /* 未知 */ _parseFldinstBlock(/* TODO 参数 */);  // ?_parseFldinstBlock@IE_Imp_RTF@@AAEPADAAVUT_ByteBuf@@PADAA_N
    protected /* 未知 */ _parseText(/* TODO 参数 */);  // ?_parseText@IE_Imp_RTF@@IAEHXZ
    public /* 未知 */ _setStringProperty(/* TODO 参数 */);  // ?_setStringProperty@IE_Imp_RTF@@AAEXAAVUT_String@@PBD1@Z
    protected /* 未知 */ _writeHeader(/* TODO 参数 */);  // ?_writeHeader@IE_Imp_RTF@@IAEHPAU_iobuf@@@Z
    public /* 未知 */ addFrame(/* TODO 参数 */);  // ?addFrame@IE_Imp_RTF@@QAEXAAVRTFProps_FrameProps@@@Z
    public bool bUseInsertNotAppend(/* TODO 参数 */);  // ?bUseInsertNotAppend@IE_Imp_RTF@@QAE_NXZ
    public /* 未知 */ buildAllProps(/* TODO 参数 */);  // ?buildAllProps@IE_Imp_RTF@@AAE_NAAVUT_String@@PAURTFProps_Pa
    public /* 未知 */ buildCharacterProps(/* TODO 参数 */);  // ?buildCharacterProps@IE_Imp_RTF@@AAE_NAAVUT_String@@@Z
    public /* 未知 */ clearImageName(/* TODO 参数 */);  // ?clearImageName@IE_Imp_RTF@@QAEXXZ
    public /* 未知 */ closePastedTableIfNeeded(/* TODO 参数 */);  // ?closePastedTableIfNeeded@IE_Imp_RTF@@QAEXXZ
    public /* 未知 */ digVal(/* TODO 参数 */);  // ?digVal@IE_Imp_RTF@@CA_NDAAHH@Z
    public /* 未知 */ getAbiList(/* TODO 参数 */);  // ?getAbiList@IE_Imp_RTF@@AAEPAU_rtfAbiListTable@1@I@Z
    public /* 未知 */ getCell(/* TODO 参数 */);  // ?getCell@IE_Imp_RTF@@QAEPAVie_imp_cell@@XZ
    public /* 未知 */ getCharsInsideBrace(/* TODO 参数 */);  // ?getCharsInsideBrace@IE_Imp_RTF@@AAEPADXZ
    public /* 未知 */ getPasteDepth(/* TODO 参数 */);  // ?getPasteDepth@IE_Imp_RTF@@QAEHXZ
    public /* 未知 */ getTable(/* TODO 参数 */);  // ?getTable@IE_Imp_RTF@@QAEPAVie_imp_table@@XZ
    public /* 未知 */ get_vecWord97ListsCount(/* TODO 参数 */);  // ?get_vecWord97ListsCount@IE_Imp_RTF@@QAEHXZ
    public /* 未知 */ get_vecWord97NthList(/* TODO 参数 */);  // ?get_vecWord97NthList@IE_Imp_RTF@@QAEPAVRTF_msword97_list@@H
    public /* 未知 */ hexVal(/* TODO 参数 */);  // ?hexVal@IE_Imp_RTF@@CA_NDAAH@Z
    virtual public /* 未知 */ importFile(/* TODO 参数 */);  // ?importFile@IE_Imp_RTF@@UAEHPBD@Z
    virtual public /* 未知 */ importStream(/* TODO 参数 */);  // ?importStream@IE_Imp_RTF@@UAEHABUExp_ImpDataStruct@@@Z
    public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@IE_Imp_RTF@@QAE_NW4_PTStruxType@@PAPBD1@Z
    public bool isBlockNeededForPasteTable(/* TODO 参数 */);  // ?isBlockNeededForPasteTable@IE_Imp_RTF@@QAE_NXZ
    public bool isFrameIn(/* TODO 参数 */);  // ?isFrameIn@IE_Imp_RTF@@QAE_NXZ
    public bool isPastedTableOpen(/* TODO 参数 */);  // ?isPastedTableOpen@IE_Imp_RTF@@QAE_NXZ
    public const bool isStruxImage(/* TODO 参数 */);  // ?isStruxImage@IE_Imp_RTF@@QBE_NXZ
    public const bool isWord97Lists(/* TODO 参数 */);  // ?isWord97Lists@IE_Imp_RTF@@QBE_NXZ
    public /* 未知 */ keywordSorted(/* TODO 参数 */);  // ?keywordSorted@IE_Imp_RTF@@0_NA
    public /* 未知 */ mapID(/* TODO 参数 */);  // ?mapID@IE_Imp_RTF@@QAEII@Z
    public /* 未知 */ mapParentID(/* TODO 参数 */);  // ?mapParentID@IE_Imp_RTF@@QAEII@Z
    public bool markPasteBlock(/* TODO 参数 */);  // ?markPasteBlock@IE_Imp_RTF@@QAE_NXZ
    virtual public bool pasteFromBuffer(/* TODO 参数 */);  // ?pasteFromBuffer@IE_Imp_RTF@@UAE_NPAVPD_DocumentRange@@PBEIP
    public /* 未知 */ setEncoding(/* TODO 参数 */);  // ?setEncoding@IE_Imp_RTF@@AAEXXZ
    public /* 未知 */ setStruxImage(/* TODO 参数 */);  // ?setStruxImage@IE_Imp_RTF@@QAEX_N@Z
    virtual public bool supportsLoadStylesOnly(/* TODO 参数 */);  // ?supportsLoadStylesOnly@IE_Imp_RTF@@UAE_NXZ
};

/* ---- IE_Imp_RTF_Sniffer (5 方法) ---- */
class IE_Imp_RTF_Sniffer {
public:
    virtual public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_Imp_RTF_Sniffer@@UAEHPAVPD_Document@@P
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Imp_RTF_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public /* 未知 */ recognizeContents(/* TODO 参数 */);  // ?recognizeContents@IE_Imp_RTF_Sniffer@@UAEEPBDI@Z
    virtual public /* 未知 */ recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Imp_RTF_Sniffer@@UAEEPBD@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_Imp_RTF_Sniffer@@UAEEPBD@Z
};

/* ---- IE_Imp_TableHelper (24 方法) ---- */
class IE_Imp_TableHelper {
public:
    public bool Block(/* TODO 参数 */);  // ?Block@IE_Imp_TableHelper@@QAE_NW4_PTStruxType@@PAPBD@Z
    public bool BlockFormat(/* TODO 参数 */);  // ?BlockFormat@IE_Imp_TableHelper@@QAE_NPAPBD@Z
    public bool Inline(/* TODO 参数 */);  // ?Inline@IE_Imp_TableHelper@@QAE_NPBIH@Z
    public bool InlineFormat(/* TODO 参数 */);  // ?InlineFormat@IE_Imp_TableHelper@@QAE_NPAPBD@Z
    public bool Object(/* TODO 参数 */);  // ?Object@IE_Imp_TableHelper@@QAE_NW4_PTObjectType@@PAPBD@Z
    public /* 未知 */ ToPFS(/* TODO 参数 */);  // ?ToPFS@IE_Imp_TableHelper@@QAEPAVpf_Frag_Strux@@PBX@Z
    public /* 未知 */ ToSDH(/* TODO 参数 */);  // ?ToSDH@IE_Imp_TableHelper@@QAEPBXPAVpf_Frag_Strux@@@Z
    public /* 未知 */ getCellAtRowCol(/* TODO 参数 */);  // ?getCellAtRowCol@IE_Imp_TableHelper@@QAEPAVCellHelper@@AAV?$
    public /* 未知 */ getDoc(/* TODO 参数 */);  // ?getDoc@IE_Imp_TableHelper@@ABEPAVPD_Document@@XZ
    public const /* 未知 */ getInsertionPoint(/* TODO 参数 */);  // ?getInsertionPoint@IE_Imp_TableHelper@@QBEPAVpf_Frag_Strux@@
    public /* 未知 */ padAllRowsWithCells(/* TODO 参数 */);  // ?padAllRowsWithCells@IE_Imp_TableHelper@@QAEXAAV?$UT_Generic
    public /* 未知 */ padRowWithCells(/* TODO 参数 */);  // ?padRowWithCells@IE_Imp_TableHelper@@QAEXAAV?$UT_GenericVect
    public bool setCaptionOff(/* TODO 参数 */);  // ?setCaptionOff@IE_Imp_TableHelper@@QAE_NXZ
    public bool setCaptionOn(/* TODO 参数 */);  // ?setCaptionOn@IE_Imp_TableHelper@@QAE_NXZ
    public bool tableEnd(/* TODO 参数 */);  // ?tableEnd@IE_Imp_TableHelper@@QAE_NXZ
    public bool tableStart(/* TODO 参数 */);  // ?tableStart@IE_Imp_TableHelper@@QAE_NXZ
    public bool tbodyStart(/* TODO 参数 */);  // ?tbodyStart@IE_Imp_TableHelper@@QAE_NPBD@Z
    public bool tdEnd(/* TODO 参数 */);  // ?tdEnd@IE_Imp_TableHelper@@QAE_NXZ
    public /* 未知 */ tdPending(/* TODO 参数 */);  // ?tdPending@IE_Imp_TableHelper@@AAE_NXZ
    public bool tdStart(/* TODO 参数 */);  // ?tdStart@IE_Imp_TableHelper@@QAE_NHHPBDPAVpf_Frag_Strux@@@Z
    public bool tfootStart(/* TODO 参数 */);  // ?tfootStart@IE_Imp_TableHelper@@QAE_NPBD@Z
    public bool theadStart(/* TODO 参数 */);  // ?theadStart@IE_Imp_TableHelper@@QAE_NPBD@Z
    public /* 未知 */ trEnd(/* TODO 参数 */);  // ?trEnd@IE_Imp_TableHelper@@AAE_NXZ
    public bool trStart(/* TODO 参数 */);  // ?trStart@IE_Imp_TableHelper@@QAE_NPBD@Z
};

/* ---- IE_Imp_TableHelperStack (19 方法) ---- */
class IE_Imp_TableHelperStack {
public:
    public bool Block(/* TODO 参数 */);  // ?Block@IE_Imp_TableHelperStack@@QAE_NW4_PTStruxType@@PAPBD@Z
    public bool BlockFormat(/* TODO 参数 */);  // ?BlockFormat@IE_Imp_TableHelperStack@@QAE_NPAPBD@Z
    public bool Inline(/* TODO 参数 */);  // ?Inline@IE_Imp_TableHelperStack@@QAE_NPBIH@Z
    public bool InlineFormat(/* TODO 参数 */);  // ?InlineFormat@IE_Imp_TableHelperStack@@QAE_NPAPBD@Z
    public bool Object(/* TODO 参数 */);  // ?Object@IE_Imp_TableHelperStack@@QAE_NW4_PTObjectType@@PAPBD
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@IE_Imp_TableHelperStack@@QAEXXZ
    public /* 未知 */ pop(/* TODO 参数 */);  // ?pop@IE_Imp_TableHelperStack@@AAE_NXZ
    public /* 未知 */ push(/* TODO 参数 */);  // ?push@IE_Imp_TableHelperStack@@AAE_NPBD@Z
    public bool setCaptionOff(/* TODO 参数 */);  // ?setCaptionOff@IE_Imp_TableHelperStack@@QAE_NXZ
    public bool setCaptionOn(/* TODO 参数 */);  // ?setCaptionOn@IE_Imp_TableHelperStack@@QAE_NXZ
    public bool tableEnd(/* TODO 参数 */);  // ?tableEnd@IE_Imp_TableHelperStack@@QAE_NXZ
    public bool tableStart(/* TODO 参数 */);  // ?tableStart@IE_Imp_TableHelperStack@@QAE_NPAVPD_Document@@PB
    public bool tbodyStart(/* TODO 参数 */);  // ?tbodyStart@IE_Imp_TableHelperStack@@QAE_NPBD@Z
    public bool tdEnd(/* TODO 参数 */);  // ?tdEnd@IE_Imp_TableHelperStack@@QAE_NXZ
    public bool tdStart(/* TODO 参数 */);  // ?tdStart@IE_Imp_TableHelperStack@@QAE_NHHPBD@Z
    public bool tfootStart(/* TODO 参数 */);  // ?tfootStart@IE_Imp_TableHelperStack@@QAE_NPBD@Z
    public bool theadStart(/* TODO 参数 */);  // ?theadStart@IE_Imp_TableHelperStack@@QAE_NPBD@Z
    public const /* 未知 */ top(/* TODO 参数 */);  // ?top@IE_Imp_TableHelperStack@@QBEPAVIE_Imp_TableHelper@@XZ
    public bool trStart(/* TODO 参数 */);  // ?trStart@IE_Imp_TableHelperStack@@QAE_NPBD@Z
};

/* ---- IE_Imp_Text (12 方法) ---- */
class IE_Imp_Text {
public:
    public /* 未知 */ _constructStream(/* TODO 参数 */);  // ?_constructStream@IE_Imp_Text@@MAEHAAPAVImportStream@@PAU_io
    protected bool _doEncodingDialog(/* TODO 参数 */);  // ?_doEncodingDialog@IE_Imp_Text@@IAE_NPBD@Z
    protected bool _insertBlock(/* TODO 参数 */);  // ?_insertBlock@IE_Imp_Text@@IAE_NXZ
    protected bool _insertSpan(/* TODO 参数 */);  // ?_insertSpan@IE_Imp_Text@@IAE_NAAVUT_GrowBuf@@@Z
    protected /* 未知 */ _parseStream(/* TODO 参数 */);  // ?_parseStream@IE_Imp_Text@@IAEHPAVImportStream@@@Z
    protected /* 未知 */ _recognizeEncoding(/* TODO 参数 */);  // ?_recognizeEncoding@IE_Imp_Text@@IAEHPAU_iobuf@@@Z
    protected /* 未知 */ _recognizeEncoding(/* TODO 参数 */);  // ?_recognizeEncoding@IE_Imp_Text@@IAEHPBDI@Z
    protected /* 未知 */ _setEncoding(/* TODO 参数 */);  // ?_setEncoding@IE_Imp_Text@@IAEXPBD@Z
    protected /* 未知 */ _writeHeader(/* TODO 参数 */);  // ?_writeHeader@IE_Imp_Text@@IAEHPAU_iobuf@@@Z
    virtual public /* 未知 */ importFile(/* TODO 参数 */);  // ?importFile@IE_Imp_Text@@UAEHPBD@Z
    virtual public /* 未知 */ importStream(/* TODO 参数 */);  // ?importStream@IE_Imp_Text@@UAEHABUExp_ImpDataStruct@@@Z
    virtual public bool pasteFromBuffer(/* TODO 参数 */);  // ?pasteFromBuffer@IE_Imp_Text@@UAE_NPAVPD_DocumentRange@@PBEI
};

/* ---- IE_Imp_Text_Sniffer (8 方法) ---- */
class IE_Imp_Text_Sniffer {
public:
    public /* 未知 */ _recognizeUCS2(/* TODO 参数 */);  // ?_recognizeUCS2@IE_Imp_Text_Sniffer@@KA?AW4UCS2_Endian@1@PBD
    public /* 未知 */ _recognizeUTF8(/* TODO 参数 */);  // ?_recognizeUTF8@IE_Imp_Text_Sniffer@@KA_NPBDI@Z
    virtual public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_Imp_Text_Sniffer@@UAEHPAVPD_Document@@
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Imp_Text_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public /* 未知 */ recognizeContents(/* TODO 参数 */);  // ?recognizeContents@IE_Imp_Text_Sniffer@@UAEEPBDI@Z
    public /* 未知 */ recognizeContentsType(/* TODO 参数 */);  // ?recognizeContentsType@IE_Imp_Text_Sniffer@@QAEPBDPBDI@Z
    virtual public /* 未知 */ recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Imp_Text_Sniffer@@UAEEPBD@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_Imp_Text_Sniffer@@UAEEPBD@Z
};

/* ---- IE_Imp_XHTML (18 方法) ---- */
class IE_Imp_XHTML {
public:
    virtual public bool appendFmt(/* TODO 参数 */);  // ?appendFmt@IE_Imp_XHTML@@UAE_NPAPBD@Z
    virtual public bool appendFmt(/* TODO 参数 */);  // ?appendFmt@IE_Imp_XHTML@@UAE_NPBV?$UT_GenericVector@PAD@@@Z
    virtual public bool appendObject(/* TODO 参数 */);  // ?appendObject@IE_Imp_XHTML@@UAE_NW4_PTObjectType@@PAPBD@Z
    virtual public bool appendSpan(/* TODO 参数 */);  // ?appendSpan@IE_Imp_XHTML@@UAE_NPBII@Z
    virtual public bool appendStrux(/* TODO 参数 */);  // ?appendStrux@IE_Imp_XHTML@@UAE_NW4_PTStruxType@@PAPBD@Z
    public /* 未知 */ bInTable(/* TODO 参数 */);  // ?bInTable@IE_Imp_XHTML@@AAE_NXZ
    virtual public /* 未知 */ charData(/* TODO 参数 */);  // ?charData@IE_Imp_XHTML@@UAEXPBDH@Z
    public /* 未知 */ childOfSection(/* TODO 参数 */);  // ?childOfSection@IE_Imp_XHTML@@AAE_NXZ
    virtual public /* 未知 */ endElement(/* TODO 参数 */);  // ?endElement@IE_Imp_XHTML@@UAEXPBD@Z
    public /* 未知 */ importDataURLImage(/* TODO 参数 */);  // ?importDataURLImage@IE_Imp_XHTML@@AAEPAVFG_Graphic@@PBD@Z
    virtual public /* 未知 */ importFile(/* TODO 参数 */);  // ?importFile@IE_Imp_XHTML@@UAEHPBD@Z
    public /* 未知 */ importImage(/* TODO 参数 */);  // ?importImage@IE_Imp_XHTML@@MAEPAVFG_Graphic@@PBD@Z
    public /* 未知 */ newBlock(/* TODO 参数 */);  // ?newBlock@IE_Imp_XHTML@@AAE_NPBD00@Z
    virtual public bool pasteFromBuffer(/* TODO 参数 */);  // ?pasteFromBuffer@IE_Imp_XHTML@@UAE_NPAVPD_DocumentRange@@PBE
    public /* 未知 */ pushInline(/* TODO 参数 */);  // ?pushInline@IE_Imp_XHTML@@AAE_NPBD@Z
    public /* 未知 */ requireBlock(/* TODO 参数 */);  // ?requireBlock@IE_Imp_XHTML@@AAE_NXZ
    public /* 未知 */ requireSection(/* TODO 参数 */);  // ?requireSection@IE_Imp_XHTML@@AAE_NXZ
    virtual public /* 未知 */ startElement(/* TODO 参数 */);  // ?startElement@IE_Imp_XHTML@@UAEXPBDPAPBD@Z
};

/* ---- IE_Imp_XHTML_Sniffer (5 方法) ---- */
class IE_Imp_XHTML_Sniffer {
public:
    virtual public /* 未知 */ constructImporter(/* TODO 参数 */);  // ?constructImporter@IE_Imp_XHTML_Sniffer@@UAEHPAVPD_Document@
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_Imp_XHTML_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public /* 未知 */ recognizeContents(/* TODO 参数 */);  // ?recognizeContents@IE_Imp_XHTML_Sniffer@@UAEEPBDI@Z
    virtual public /* 未知 */ recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_Imp_XHTML_Sniffer@@UAEEPBD@Z
    virtual public /* 未知 */ supportsMIME(/* TODO 参数 */);  // ?supportsMIME@IE_Imp_XHTML_Sniffer@@UAEEPBD@Z
};

/* ---- IE_Imp_XML (26 方法) ---- */
class IE_Imp_XML {
public:
    public /* 未知 */ _data_CharCount(/* TODO 参数 */);  // ?_data_CharCount@IE_Imp_XML@@IBEIXZ
    protected /* 未知 */ _data_NewBlock(/* TODO 参数 */);  // ?_data_NewBlock@IE_Imp_XML@@IAEXXZ
    public /* 未知 */ _getInlineDepth(/* TODO 参数 */);  // ?_getInlineDepth@IE_Imp_XML@@IBEIXZ
    protected /* 未知 */ _getXMLPropValue(/* TODO 参数 */);  // ?_getXMLPropValue@IE_Imp_XML@@IAEPBDPBDPAPBD@Z
    protected /* 未知 */ _mapNameToToken(/* TODO 参数 */);  // ?_mapNameToToken@IE_Imp_XML@@IAEHPBDPAUxmlToIdMapping@@H@Z
    protected /* 未知 */ _popInlineFmt(/* TODO 参数 */);  // ?_popInlineFmt@IE_Imp_XML@@IAEXXZ
    protected bool _pushInlineFmt(/* TODO 参数 */);  // ?_pushInlineFmt@IE_Imp_XML@@IAE_NPAPBD@Z
    virtual public bool appendFmt(/* TODO 参数 */);  // ?appendFmt@IE_Imp_XML@@UAE_NPAPBD@Z
    virtual public bool appendFmt(/* TODO 参数 */);  // ?appendFmt@IE_Imp_XML@@UAE_NPBV?$UT_GenericVector@PAD@@@Z
    virtual public bool appendObject(/* TODO 参数 */);  // ?appendObject@IE_Imp_XML@@UAE_NW4_PTObjectType@@PAPBD1@Z
    virtual public bool appendSpan(/* TODO 参数 */);  // ?appendSpan@IE_Imp_XML@@UAE_NPBII@Z
    virtual public bool appendStrux(/* TODO 参数 */);  // ?appendStrux@IE_Imp_XML@@UAE_NW4_PTStruxType@@PAPBD@Z
    virtual public bool appendStruxFmt(/* TODO 参数 */);  // ?appendStruxFmt@IE_Imp_XML@@UAE_NPAVpf_Frag_Strux@@PAPBD@Z
    virtual public /* 未知 */ charData(/* TODO 参数 */);  // ?charData@IE_Imp_XML@@UAEXPBDH@Z
    virtual public /* 未知 */ endElement(/* TODO 参数 */);  // ?endElement@IE_Imp_XML@@UAEXPBD@Z
    public /* 未知 */ getEiMode(/* TODO 参数 */);  // ?getEiMode@IE_Imp_XML@@QAE?AW4_TExp_ImpMode@@XZ
    public const /* 未知 */ getOperationCount(/* TODO 参数 */);  // ?getOperationCount@IE_Imp_XML@@QBEIXZ
    virtual public /* 未知 */ importFile(/* TODO 参数 */);  // ?importFile@IE_Imp_XML@@UAEHPBD@Z
    virtual public /* 未知 */ importStream(/* TODO 参数 */);  // ?importStream@IE_Imp_XML@@UAEHABUExp_ImpDataStruct@@@Z
    public /* 未知 */ incOperationCount(/* TODO 参数 */);  // ?incOperationCount@IE_Imp_XML@@QAEXXZ
    virtual public bool pasteFromBuffer(/* TODO 参数 */);  // ?pasteFromBuffer@IE_Imp_XML@@UAE_NPAVPD_DocumentRange@@PBEIP
    public /* 未知 */ replaceAttrib(/* TODO 参数 */);  // ?replaceAttrib@IE_Imp_XML@@AAEXAAV?$basic_string@DU?$char_tr
    protected /* 未知 */ setParser(/* TODO 参数 */);  // ?setParser@IE_Imp_XML@@IAEXPAVUT_XML@@@Z
    protected /* 未知 */ setReader(/* TODO 参数 */);  // ?setReader@IE_Imp_XML@@IAEXPAVReader@UT_XML@@@Z
    virtual public /* 未知 */ startElement(/* TODO 参数 */);  // ?startElement@IE_Imp_XML@@UAEXPBDPAPBD@Z
    protected /* 未知 */ stopParser(/* TODO 参数 */);  // ?stopParser@IE_Imp_XML@@IAEXXZ
};

/* ---- IE_MailMerge (17 方法) ---- */
class IE_MailMerge {
public:
    protected /* 未知 */ addMergePair(/* TODO 参数 */);  // ?addMergePair@IE_MailMerge@@IAEXABVUT_UTF8String@@0@Z
    public /* 未知 */ constructMerger(/* TODO 参数 */);  // ?constructMerger@IE_MailMerge@@SAHPBDHPAPAV1@PAH@Z
    public /* 未知 */ descriptionForFileType(/* TODO 参数 */);  // ?descriptionForFileType@IE_MailMerge@@SAPBDH@Z
    public /* 未知 */ enumerateDlgLabels(/* TODO 参数 */);  // ?enumerateDlgLabels@IE_MailMerge@@SA_NIPAPBD0PAH@Z
    public /* 未知 */ fileTypeForContents(/* TODO 参数 */);  // ?fileTypeForContents@IE_MailMerge@@SAHPBDI@Z
    public /* 未知 */ fileTypeForDescription(/* TODO 参数 */);  // ?fileTypeForDescription@IE_MailMerge@@SAHPBD@Z
    public /* 未知 */ fileTypeForSuffix(/* TODO 参数 */);  // ?fileTypeForSuffix@IE_MailMerge@@SAHPBD@Z
    public /* 未知 */ fileTypeForSuffixes(/* TODO 参数 */);  // ?fileTypeForSuffixes@IE_MailMerge@@SAHPBD@Z
    protected bool fireMergeSet(/* TODO 参数 */);  // ?fireMergeSet@IE_MailMerge@@IAE_NXZ
    public const /* 未知 */ getCurrentMapping(/* TODO 参数 */);  // ?getCurrentMapping@IE_MailMerge@@QBEABV?$UT_GenericStringMap
    public /* 未知 */ getMergerCount(/* TODO 参数 */);  // ?getMergerCount@IE_MailMerge@@SAIXZ
    public /* 未知 */ registerMerger(/* TODO 参数 */);  // ?registerMerger@IE_MailMerge@@SAXPAVIE_MergeSniffer@@@Z
    public /* 未知 */ setListener(/* TODO 参数 */);  // ?setListener@IE_MailMerge@@QAEXPAVIE_MailMerge_Listener@1@@Z
    public /* 未知 */ snifferForFileType(/* TODO 参数 */);  // ?snifferForFileType@IE_MailMerge@@SAPAVIE_MergeSniffer@@H@Z
    public /* 未知 */ suffixesForFileType(/* TODO 参数 */);  // ?suffixesForFileType@IE_MailMerge@@SAPBDH@Z
    public /* 未知 */ unregisterAllMergers(/* TODO 参数 */);  // ?unregisterAllMergers@IE_MailMerge@@SAXXZ
    public /* 未知 */ unregisterMerger(/* TODO 参数 */);  // ?unregisterMerger@IE_MailMerge@@SAXPAVIE_MergeSniffer@@@Z
};

/* ---- IE_MailMerge_Delimiter_Listener (5 方法) ---- */
class IE_MailMerge_Delimiter_Listener {
public:
    public /* 未知 */ defineItem(/* TODO 参数 */);  // ?defineItem@IE_MailMerge_Delimiter_Listener@@AAEXABVUT_ByteB
    public /* 未知 */ fire(/* TODO 参数 */);  // ?fire@IE_MailMerge_Delimiter_Listener@@AAE_NXZ
    virtual public /* 未知 */ getHeaders(/* TODO 参数 */);  // ?getHeaders@IE_MailMerge_Delimiter_Listener@@UAEHPBDAAV?$UT_
    public /* 未知 */ mergeFile(/* TODO 参数 */);  // ?mergeFile@IE_MailMerge_Delimiter_Listener@@QAEHPBD_N@Z
    virtual public /* 未知 */ mergeFile(/* TODO 参数 */);  // ?mergeFile@IE_MailMerge_Delimiter_Listener@@UAEHPBD@Z
};

/* ---- IE_MailMerge_XML_Listener (6 方法) ---- */
class IE_MailMerge_XML_Listener {
public:
    public /* 未知 */ addOrReplaceVecProp(/* TODO 参数 */);  // ?addOrReplaceVecProp@IE_MailMerge_XML_Listener@@AAEXABVUT_UT
    virtual public /* 未知 */ charData(/* TODO 参数 */);  // ?charData@IE_MailMerge_XML_Listener@@UAEXPBDH@Z
    virtual public /* 未知 */ endElement(/* TODO 参数 */);  // ?endElement@IE_MailMerge_XML_Listener@@UAEXPBD@Z
    virtual public /* 未知 */ getHeaders(/* TODO 参数 */);  // ?getHeaders@IE_MailMerge_XML_Listener@@UAEHPBDAAV?$UT_Generi
    virtual public /* 未知 */ mergeFile(/* TODO 参数 */);  // ?mergeFile@IE_MailMerge_XML_Listener@@UAEHPBD@Z
    virtual public /* 未知 */ startElement(/* TODO 参数 */);  // ?startElement@IE_MailMerge_XML_Listener@@UAEXPBDPAPBD@Z
};

/* ---- IE_MergeSniffer (3 方法) ---- */
class IE_MergeSniffer {
public:
    public const /* 未知 */ getFileType(/* TODO 参数 */);  // ?getFileType@IE_MergeSniffer@@QBEHXZ
    public /* 未知 */ setFileType(/* TODO 参数 */);  // ?setFileType@IE_MergeSniffer@@AAEXH@Z
    public bool supportsFileType(/* TODO 参数 */);  // ?supportsFileType@IE_MergeSniffer@@QAE_NH@Z
};

/* ---- IE_XMLMerge_Sniffer (4 方法) ---- */
class IE_XMLMerge_Sniffer {
public:
    virtual public /* 未知 */ constructMerger(/* TODO 参数 */);  // ?constructMerger@IE_XMLMerge_Sniffer@@UAEHPAPAVIE_MailMerge@
    virtual public bool getDlgLabels(/* TODO 参数 */);  // ?getDlgLabels@IE_XMLMerge_Sniffer@@UAE_NPAPBD0PAH@Z
    virtual public /* 未知 */ recognizeContents(/* TODO 参数 */);  // ?recognizeContents@IE_XMLMerge_Sniffer@@UAEEPBDI@Z
    virtual public /* 未知 */ recognizeSuffix(/* TODO 参数 */);  // ?recognizeSuffix@IE_XMLMerge_Sniffer@@UAEEPBD@Z
};

/* ---- ImportStream (8 方法) ---- */
class ImportStream {
public:
    public /* 未知 */ _get_eof(/* TODO 参数 */);  // ?_get_eof@ImportStream@@IBE_NXZ
    protected /* 未知 */ _lookAhead(/* TODO 参数 */);  // ?_lookAhead@ImportStream@@IAEXI@Z
    public /* 未知 */ _lookAhead(/* TODO 参数 */);  // ?_lookAhead@ImportStream@@IBEIXZ
    protected /* 未知 */ _set_eof(/* TODO 参数 */);  // ?_set_eof@ImportStream@@IAEX_N@Z
    public bool getChar(/* TODO 参数 */);  // ?getChar@ImportStream@@QAE_NAAI@Z
    public /* 未知 */ getRawChar(/* TODO 参数 */);  // ?getRawChar@ImportStream@@MAE_NAAI@Z
    public bool init(/* TODO 参数 */);  // ?init@ImportStream@@QAE_NPBD@Z
    public /* 未知 */ peekChar(/* TODO 参数 */);  // ?peekChar@ImportStream@@QAEIXZ
};

/* ---- ImportStreamClipboard (1 方法) ---- */
class ImportStreamClipboard {
public:
    public /* 未知 */ _getByte(/* TODO 参数 */);  // ?_getByte@ImportStreamClipboard@@MAE_NAAE@Z
};

/* ---- ImportStreamFile (1 方法) ---- */
class ImportStreamFile {
public:
    public /* 未知 */ _getByte(/* TODO 参数 */);  // ?_getByte@ImportStreamFile@@MAE_NAAE@Z
};

/* ---- PD_BuiltinStyle (1 方法) ---- */
class PD_BuiltinStyle {
public:
    virtual public const bool isUserDefined(/* TODO 参数 */);  // ?isUserDefined@PD_BuiltinStyle@@UBE_NXZ
};

/* ---- PD_DocIterator (13 方法) ---- */
class PD_DocIterator {
public:
    public /* 未知 */ _findFrag(/* TODO 参数 */);  // ?_findFrag@PD_DocIterator@@AAE_NXZ
    virtual public /* 未知 */ find(/* TODO 参数 */);  // ?find@PD_DocIterator@@UAEIAAVUT_TextIterator@@I_N@Z
    virtual public /* 未知 */ find(/* TODO 参数 */);  // ?find@PD_DocIterator@@UAEIPAII_N@Z
    virtual public /* 未知 */ getChar(/* TODO 参数 */);  // ?getChar@PD_DocIterator@@UAEIXZ
    public /* 未知 */ getFrag(/* TODO 参数 */);  // ?getFrag@PD_DocIterator@@QAEPBVpf_Frag@@XZ
    virtual public const /* 未知 */ getPosition(/* TODO 参数 */);  // ?getPosition@PD_DocIterator@@UBEIXZ
    virtual public const /* 未知 */ getStatus(/* TODO 参数 */);  // ?getStatus@PD_DocIterator@@UBE?AW4UTIterStatus@@XZ
    virtual public const /* 未知 */ getUpperLimit(/* TODO 参数 */);  // ?getUpperLimit@PD_DocIterator@@UBEIXZ
    virtual public /* 未知 */ makeCopy(/* TODO 参数 */);  // ?makeCopy@PD_DocIterator@@UAEPAVUT_TextIterator@@XZ
    public /* 未知 */ reset(/* TODO 参数 */);  // ?reset@PD_DocIterator@@QAEXIPBVpf_Frag@@@Z
    public /* 未知 */ reset(/* TODO 参数 */);  // ?reset@PD_DocIterator@@QAEXXZ
    virtual public /* 未知 */ setPosition(/* TODO 参数 */);  // ?setPosition@PD_DocIterator@@UAEXI@Z
    virtual public /* 未知 */ setUpperLimit(/* TODO 参数 */);  // ?setUpperLimit@PD_DocIterator@@UAEXI@Z
};

/* ---- PD_Document (261 方法) ---- */
class PD_Document {
public:
    public /* 未知 */ AddChangeParakey(/* TODO 参数 */);  // ?AddChangeParakey@PD_Document@@QAEXV?$basic_string@DU?$char_
    public /* 未知 */ AddDirtyParakey(/* TODO 参数 */);  // ?AddDirtyParakey@PD_Document@@QAEXV?$basic_string@DU?$char_t
    public /* 未知 */ ChildWndInfo_Clear(/* TODO 参数 */);  // ?ChildWndInfo_Clear@PD_Document@@QAEXXZ
    public /* 未知 */ ChildWndInfo_GetHandle(/* TODO 参数 */);  // ?ChildWndInfo_GetHandle@PD_Document@@QAEII_N@Z
    public /* 未知 */ ChildWndInfo_GetNextID(/* TODO 参数 */);  // ?ChildWndInfo_GetNextID@PD_Document@@QAEIXZ
    public bool ChildWndInfo_Register(/* TODO 参数 */);  // ?ChildWndInfo_Register@PD_Document@@QAE_NII@Z
    public bool ChildWndInfo_UnRegister(/* TODO 参数 */);  // ?ChildWndInfo_UnRegister@PD_Document@@QAE_NI_N@Z
    public /* 未知 */ GetCurrParaPathname(/* TODO 参数 */);  // ?GetCurrParaPathname@PD_Document@@QAE?AV?$basic_string@DU?$c
    public /* 未知 */ StopList(/* TODO 参数 */);  // ?StopList@PD_Document@@QAEXPBX@Z
    public /* 未知 */ UW_ParaInfoClear(/* TODO 参数 */);  // ?UW_ParaInfoClear@PD_Document@@QAEXXZ
    public /* 未知 */ _UW_saveToStream(/* TODO 参数 */);  // ?_UW_saveToStream@PD_Document@@MAEHHW4_TExp_ImpMode@@PAVUT_B
    protected bool _acceptRejectRevision(/* TODO 参数 */);  // ?_acceptRejectRevision@PD_Document@@IAE_N_NIIPBVPP_Revision@
    public /* 未知 */ _clearUndo(/* TODO 参数 */);  // ?_clearUndo@PD_Document@@MAEXXZ
    public /* 未知 */ _destroyDataItemData(/* TODO 参数 */);  // ?_destroyDataItemData@PD_Document@@QAEXXZ
    public /* 未知 */ _exportFindVisDirectionRunAtPos(/* TODO 参数 */);  // ?_exportFindVisDirectionRunAtPos@PD_Document@@AAE_NI@Z
    public /* 未知 */ _exportInitVisDirection(/* TODO 参数 */);  // ?_exportInitVisDirection@PD_Document@@AAE_NI@Z
    public /* 未知 */ _save(/* TODO 参数 */);  // ?_save@PD_Document@@MAEHXZ
    public /* 未知 */ _saveAs(/* TODO 参数 */);  // ?_saveAs@PD_Document@@MAEHPBDH0@Z
    public /* 未知 */ _saveAs(/* TODO 参数 */);  // ?_saveAs@PD_Document@@MAEHPBDH_N0@Z
    public /* 未知 */ _saveToStream(/* TODO 参数 */);  // ?_saveToStream@PD_Document@@MAEHW4_TExp_ImpMode@@PAVUT_ByteB
    protected /* 未知 */ _setClean(/* TODO 参数 */);  // ?_setClean@PD_Document@@IAEXXZ
    protected bool _syncFileTypes(/* TODO 参数 */);  // ?_syncFileTypes@PD_Document@@IAE_N_N@Z
    public /* 未知 */ _uwSavetostream(/* TODO 参数 */);  // ?_uwSavetostream@PD_Document@@MAEHHPAVUT_ByteBuf@@II_N@Z
    virtual public bool acceptAllRevisions(/* TODO 参数 */);  // ?acceptAllRevisions@PD_Document@@UAE_NXZ
    virtual public bool acceptRejectRevision(/* TODO 参数 */);  // ?acceptRejectRevision@PD_Document@@UAE_N_NIII@Z
    public /* 未知 */ addBookmark(/* TODO 参数 */);  // ?addBookmark@PD_Document@@QAEXPBD@Z
    public /* 未知 */ addList(/* TODO 参数 */);  // ?addList@PD_Document@@QAEXPAVfl_AutoNum@@@Z
    public bool addListener(/* TODO 参数 */);  // ?addListener@PD_Document@@QAE_NPAVPL_Listener@@PAI@Z
    public bool addStyleAttributes(/* TODO 参数 */);  // ?addStyleAttributes@PD_Document@@QAE_NPBDPAPBD@Z
    public bool addStyleProperties(/* TODO 参数 */);  // ?addStyleProperties@PD_Document@@QAE_NPBDPAPBD@Z
    public bool addStyleProperty(/* TODO 参数 */);  // ?addStyleProperty@PD_Document@@QAE_NPBD00@Z
    public bool add_additional(/* TODO 参数 */);  // ?add_additional@PD_Document@@QAE_NPAVstru_addition@@@Z
    public /* 未知 */ allowChangeInsPoint(/* TODO 参数 */);  // ?allowChangeInsPoint@PD_Document@@QAEXXZ
    public bool appendFmt(/* TODO 参数 */);  // ?appendFmt@PD_Document@@QAE_NPAPBD@Z
    public bool appendFmt(/* TODO 参数 */);  // ?appendFmt@PD_Document@@QAE_NPBV?$UT_GenericVector@PAD@@@Z
    public bool appendFmtMark(/* TODO 参数 */);  // ?appendFmtMark@PD_Document@@QAE_NXZ
    public bool appendLastStruxFmt(/* TODO 参数 */);  // ?appendLastStruxFmt@PD_Document@@QAE_NW4_PTStruxType@@PAPBD1
    public bool appendLastStruxFmt(/* TODO 参数 */);  // ?appendLastStruxFmt@PD_Document@@QAE_NW4_PTStruxType@@PAPBDP
    public bool appendList(/* TODO 参数 */);  // ?appendList@PD_Document@@QAE_NPAPBD@Z
    public bool appendObject(/* TODO 参数 */);  // ?appendObject@PD_Document@@QAE_NW4_PTObjectType@@PAPBD@Z
    public bool appendSpan(/* TODO 参数 */);  // ?appendSpan@PD_Document@@QAE_NPBII@Z
    public bool appendStrux(/* TODO 参数 */);  // ?appendStrux@PD_Document@@QAE_NW4_PTStruxType@@PAPBDPAPAVpf_
    public bool appendStruxFmt(/* TODO 参数 */);  // ?appendStruxFmt@PD_Document@@QAE_NPAVpf_Frag_Strux@@PAPBD@Z
    public bool appendStyle(/* TODO 参数 */);  // ?appendStyle@PD_Document@@QAE_NPAPBD@Z
    virtual public const bool areDocumentContentsEqual(/* TODO 参数 */);  // ?areDocumentContentsEqual@PD_Document@@UBE_NABVAD_Document@@
    virtual public const bool areDocumentFormatsEqual(/* TODO 参数 */);  // ?areDocumentFormatsEqual@PD_Document@@UBE_NABVAD_Document@@A
    virtual public const bool areDocumentStylesheetsEqual(/* TODO 参数 */);  // ?areDocumentStylesheetsEqual@PD_Document@@UBE_NABVAD_Documen
    public bool areListUpdatesAllowed(/* TODO 参数 */);  // ?areListUpdatesAllowed@PD_Document@@QAE_NXZ
    public const bool areStylesLocked(/* TODO 参数 */);  // ?areStylesLocked@PD_Document@@QBE_NXZ
    public /* 未知 */ beginUserAtomicGlob(/* TODO 参数 */);  // ?beginUserAtomicGlob@PD_Document@@QAEXXZ
    virtual public const bool canDo(/* TODO 参数 */);  // ?canDo@PD_Document@@UBE_N_N@Z
    public bool changeLastStruxFmtNoUndo(/* TODO 参数 */);  // ?changeLastStruxFmtNoUndo@PD_Document@@QAE_NIW4_PTStruxType@
    public bool changeLastStruxFmtNoUndo(/* TODO 参数 */);  // ?changeLastStruxFmtNoUndo@PD_Document@@QAE_NIW4_PTStruxType@
    public bool changeObjectFormatNoUpdate(/* TODO 参数 */);  // ?changeObjectFormatNoUpdate@PD_Document@@QAE_NW4_PTChangeFmt
    public bool changeSpanFmt(/* TODO 参数 */);  // ?changeSpanFmt@PD_Document@@QAE_NW4_PTChangeFmt@@IIPAPBD1_N@
    public bool changeStruxAttsNoUpdate(/* TODO 参数 */);  // ?changeStruxAttsNoUpdate@PD_Document@@QAE_NPBXPBD1@Z
    public bool changeStruxFmt(/* TODO 参数 */);  // ?changeStruxFmt@PD_Document@@QAE_NW4_PTChangeFmt@@IIPAPBD1@Z
    public bool changeStruxFmt(/* TODO 参数 */);  // ?changeStruxFmt@PD_Document@@QAE_NW4_PTChangeFmt@@IIPAPBD1W4
    public bool changeStruxFmtNoUndo(/* TODO 参数 */);  // ?changeStruxFmtNoUndo@PD_Document@@QAE_NW4_PTChangeFmt@@PBXP
    public bool changeStruxForLists(/* TODO 参数 */);  // ?changeStruxForLists@PD_Document@@QAE_NPBXPBD@Z
    public bool changeStruxFormatNoUpdate(/* TODO 参数 */);  // ?changeStruxFormatNoUpdate@PD_Document@@QAE_NW4_PTChangeFmt@
    public bool checkForSuspect(/* TODO 参数 */);  // ?checkForSuspect@PD_Document@@QAE_NXZ
    public /* 未知 */ clearDoingPaste(/* TODO 参数 */);  // ?clearDoingPaste@PD_Document@@QAEXXZ
    public /* 未知 */ clearIfAtFmtMark(/* TODO 参数 */);  // ?clearIfAtFmtMark@PD_Document@@QAEXI@Z
    public /* 未知 */ clearMailMergeMap(/* TODO 参数 */);  // ?clearMailMergeMap@PD_Document@@QAEXXZ
    public bool convertPercentToInches(/* TODO 参数 */);  // ?convertPercentToInches@PD_Document@@QAE_NPBDAAVUT_UTF8Strin
    virtual public bool createDataItem(/* TODO 参数 */);  // ?createDataItem@PD_Document@@UAE_NPBD_NPBVUT_ByteBuf@@PBXPAP
    public /* 未知 */ createRawDocument(/* TODO 参数 */);  // ?createRawDocument@PD_Document@@QAEHXZ
    public /* 未知 */ deferNotifications(/* TODO 参数 */);  // ?deferNotifications@PD_Document@@QAEXXZ
    public /* 未知 */ deleteHdrFtrStrux(/* TODO 参数 */);  // ?deleteHdrFtrStrux@PD_Document@@QAEXPBX@Z
    public /* 未知 */ deleteParaNodes(/* TODO 参数 */);  // ?deleteParaNodes@PD_Document@@QAEXV?$basic_string@DU?$char_t
    public /* 未知 */ deleteParaRelation(/* TODO 参数 */);  // ?deleteParaRelation@PD_Document@@QAEXV?$basic_string@DU?$cha
    public bool deleteSpan(/* TODO 参数 */);  // ?deleteSpan@PD_Document@@QAE_NIIPAVPP_AttrProp@@AAI_N@Z
    public bool deleteStruxNoUpdate(/* TODO 参数 */);  // ?deleteStruxNoUpdate@PD_Document@@QAE_NPBX@Z
    public const bool diffDocuments(/* TODO 参数 */);  // ?diffDocuments@PD_Document@@QBE_NABV1@AAV?$UT_GenericVector@
    public /* 未知 */ diffIntoRevisions(/* TODO 参数 */);  // ?diffIntoRevisions@PD_Document@@QAEXABV1@@Z
    public /* 未知 */ disableListUpdates(/* TODO 参数 */);  // ?disableListUpdates@PD_Document@@QAEXXZ
    public /* 未知 */ enableListUpdates(/* TODO 参数 */);  // ?enableListUpdates@PD_Document@@QAEXXZ
    public /* 未知 */ endUserAtomicGlob(/* TODO 参数 */);  // ?endUserAtomicGlob@PD_Document@@QAEXXZ
    public const bool enumDataItems(/* TODO 参数 */);  // ?enumDataItems@PD_Document@@QBE_NIPAPAXPAPBDPAPBVUT_ByteBuf@
    public bool enumLists(/* TODO 参数 */);  // ?enumLists@PD_Document@@QAE_NIPAPAVfl_AutoNum@@@Z
    public const bool enumStyles(/* TODO 参数 */);  // ?enumStyles@PD_Document@@QBE_NAAPAV?$UT_GenericVector@PAVPD_
    public const bool enumStyles(/* TODO 参数 */);  // ?enumStyles@PD_Document@@QBE_NIPAPBDPAPBVPD_Style@@@Z
    public const /* 未知 */ explodeRevisions(/* TODO 参数 */);  // ?explodeRevisions@PD_Document@@QBEPBVPP_AttrProp@@AAPAVPP_Re
    public bool exportGetVisDirectionAtPos(/* TODO 参数 */);  // ?exportGetVisDirectionAtPos@PD_Document@@QAE_NIAAJ@Z
    public /* 未知 */ findBookmark(/* TODO 参数 */);  // ?findBookmark@PD_Document@@QAEPAVpf_Frag@@PBD_NPAV2@@Z
    public const bool findFirstDifferenceInContent(/* TODO 参数 */);  // ?findFirstDifferenceInContent@PD_Document@@QBE_NAAIAAHABV1@@
    public /* 未知 */ findForwardStyleStrux(/* TODO 参数 */);  // ?findForwardStyleStrux@PD_Document@@QAEPBXPBDI@Z
    public /* 未知 */ findFragOfType(/* TODO 参数 */);  // ?findFragOfType@PD_Document@@QAEPAVpf_Frag@@W4_PFType@2@HPBV
    public /* 未知 */ findHdrFtrStrux(/* TODO 参数 */);  // ?findHdrFtrStrux@PD_Document@@QAEPBXPBD0@Z
    public /* 未知 */ findPreviousStyleStrux(/* TODO 参数 */);  // ?findPreviousStyleStrux@PD_Document@@QAEPBXPBDI@Z
    public const bool findWhereSimilarityResumes(/* TODO 参数 */);  // ?findWhereSimilarityResumes@PD_Document@@QBE_NAAIAAH0ABV1@@Z
    public /* 未知 */ findaddtion(/* TODO 参数 */);  // ?findaddtion@PD_Document@@QAEPAVstru_addition@@V?$basic_stri
    public /* 未知 */ finishRawCreation(/* TODO 参数 */);  // ?finishRawCreation@PD_Document@@QAEXXZ
    public bool fixListHierarchy(/* TODO 参数 */);  // ?fixListHierarchy@PD_Document@@QAE_NXZ
    public /* 未知 */ fixMissingXIDs(/* TODO 参数 */);  // ?fixMissingXIDs@PD_Document@@QAEXXZ
    virtual public /* 未知 */ forceDirty(/* TODO 参数 */);  // ?forceDirty@PD_Document@@UAEXXZ
    public /* 未知 */ getAPIFromSDH(/* TODO 参数 */);  // ?getAPIFromSDH@PD_Document@@QAEIPBX@Z
    public /* 未知 */ getAPIFromSOH(/* TODO 参数 */);  // ?getAPIFromSOH@PD_Document@@QAEIPBX@Z
    public /* 未知 */ getAllUsedStyles(/* TODO 参数 */);  // ?getAllUsedStyles@PD_Document@@QAEXPAV?$UT_GenericVector@PAV
    public const bool getAllowChangeInsPoint(/* TODO 参数 */);  // ?getAllowChangeInsPoint@PD_Document@@QBE_NXZ
    public /* 未知 */ getApp(/* TODO 参数 */);  // ?getApp@PD_Document@@QAEPAVXAP_App@@XZ
    public const /* 未知 */ getAttrProp(/* TODO 参数 */);  // ?getAttrProp@PD_Document@@QBEPBVPP_AttrProp@@XZ
    public const bool getAttrProp(/* TODO 参数 */);  // ?getAttrProp@PD_Document@@QBE_NIPAPBVPP_AttrProp@@@Z
    public const bool getAttrProp(/* TODO 参数 */);  // ?getAttrProp@PD_Document@@QBE_NIPAPBVPP_AttrProp@@PAPAVPP_Re
    public const /* 未知 */ getAttrPropIndex(/* TODO 参数 */);  // ?getAttrPropIndex@PD_Document@@QBEIXZ
    public bool getAttributeFromSDH(/* TODO 参数 */);  // ?getAttributeFromSDH@PD_Document@@QAE_NPBX_NIPBDPAPBD@Z
    public const bool getBlockBuf(/* TODO 参数 */);  // ?getBlockBuf@PD_Document@@QBE_NPBXPAVUT_GrowBuf@@@Z
    public /* 未知 */ getBookmark(/* TODO 参数 */);  // ?getBookmark@PD_Document@@QAEPAVpo_Bookmark@@PBXI@Z
    public const /* 未知 */ getBookmarkCount(/* TODO 参数 */);  // ?getBookmarkCount@PD_Document@@QBEIXZ
    public const bool getBounds(/* TODO 参数 */);  // ?getBounds@PD_Document@@QBE_N_NAAI@Z
    public /* 未知 */ getCellSDHFromRowCol(/* TODO 参数 */);  // ?getCellSDHFromRowCol@PD_Document@@QAEPBXPBX_NIHH@Z
    public bool getChindParaFragByPath(/* TODO 参数 */);  // ?getChindParaFragByPath@PD_Document@@QAE_NPBDHPAPAVpf_Frag@@
    public const bool getDataItemData(/* TODO 参数 */);  // ?getDataItemData@PD_Document@@QBE_NPAXPAPBDPAPBVUT_ByteBuf@@
    virtual public const bool getDataItemDataByName(/* TODO 参数 */);  // ?getDataItemDataByName@PD_Document@@UBE_NPBDPAPBVUT_ByteBuf@
    public /* 未知 */ getEmbeddedOffset(/* TODO 参数 */);  // ?getEmbeddedOffset@PD_Document@@QAEHPBXIAAPBX@Z
    public /* 未知 */ getEndCellStruxFromCellSDH(/* TODO 参数 */);  // ?getEndCellStruxFromCellSDH@PD_Document@@QAEPBXPBX@Z
    public /* 未知 */ getEndTableStruxFromTablePos(/* TODO 参数 */);  // ?getEndTableStruxFromTablePos@PD_Document@@QAEPBXI@Z
    public /* 未知 */ getEndTableStruxFromTableSDH(/* TODO 参数 */);  // ?getEndTableStruxFromTableSDH@PD_Document@@QAEPBXPBX@Z
    public bool getField(/* TODO 参数 */);  // ?getField@PD_Document@@QAE_NPBXIAAPAVfd_Field@@@Z
    public const /* 未知 */ getFragFromPosition(/* TODO 参数 */);  // ?getFragFromPosition@PD_Document@@QBEPAVpf_Frag@@I@Z
    public const /* 未知 */ getFragXIDforVersion(/* TODO 参数 */);  // ?getFragXIDforVersion@PD_Document@@QBEIPBVpf_Frag@@I@Z
    public const /* 未知 */ getLastFrag(/* TODO 参数 */);  // ?getLastFrag@PD_Document@@QBEPAVpf_Frag@@XZ
    public /* 未知 */ getLastOpenedType(/* TODO 参数 */);  // ?getLastOpenedType@PD_Document@@QAEIXZ
    virtual public const /* 未知 */ getLastSavedAsType(/* TODO 参数 */);  // ?getLastSavedAsType@PD_Document@@UBEIXZ
    public /* 未知 */ getLastSectionSDH(/* TODO 参数 */);  // ?getLastSectionSDH@PD_Document@@QAEPBXXZ
    public /* 未知 */ getLastStruxOfType(/* TODO 参数 */);  // ?getLastStruxOfType@PD_Document@@QAEPBXW4_PTStruxType@@@Z
    public const /* 未知 */ getListByID(/* TODO 参数 */);  // ?getListByID@PD_Document@@QBEPAVfl_AutoNum@@I@Z
    public const /* 未知 */ getListsCount(/* TODO 参数 */);  // ?getListsCount@PD_Document@@QBEIXZ
    public const /* 未知 */ getMailMergeField(/* TODO 参数 */);  // ?getMailMergeField@PD_Document@@QBE?AVUT_UTF8String@@ABVUT_S
    public const /* 未知 */ getMailMergeLink(/* TODO 参数 */);  // ?getMailMergeLink@PD_Document@@QBEABVUT_UTF8String@@XZ
    public const /* 未知 */ getMailMergeMap(/* TODO 参数 */);  // ?getMailMergeMap@PD_Document@@QBEABV?$UT_GenericStringMap@PA
    public /* 未知 */ getMetaData(/* TODO 参数 */);  // ?getMetaData@PD_Document@@QAEAAV?$UT_GenericStringMap@PAVUT_
    virtual public const bool getMetaDataProp(/* TODO 参数 */);  // ?getMetaDataProp@PD_Document@@UBE_NABVUT_String@@AAVUT_UTF8S
    public const /* 未知 */ getNewFtrHeight(/* TODO 参数 */);  // ?getNewFtrHeight@PD_Document@@QBEHXZ
    public const /* 未知 */ getNewHdrHeight(/* TODO 参数 */);  // ?getNewHdrHeight@PD_Document@@QBEHXZ
    public bool getNextStrux(/* TODO 参数 */);  // ?getNextStrux@PD_Document@@QAE_NPBXPAPBX@Z
    public bool getNextStruxOfType(/* TODO 参数 */);  // ?getNextStruxOfType@PD_Document@@QAE_NPBXW4_PTStruxType@@PAP
    public const /* 未知 */ getNthBookmark(/* TODO 参数 */);  // ?getNthBookmark@PD_Document@@QBEPBDI@Z
    public /* 未知 */ getNthFmtHandle(/* TODO 参数 */);  // ?getNthFmtHandle@PD_Document@@QAEPBXPBXI@Z
    public const /* 未知 */ getNthList(/* TODO 参数 */);  // ?getNthList@PD_Document@@QBEPAVfl_AutoNum@@I@Z
    public /* 未知 */ getParaFragByPath(/* TODO 参数 */);  // ?getParaFragByPath@PD_Document@@QAEHPBDPAPAVpf_Frag@@1@Z
    public const /* 未知 */ getPieceTable(/* TODO 参数 */);  // ?getPieceTable@PD_Document@@QBEPAVpt_PieceTable@@XZ
    public const /* 未知 */ getPointer(/* TODO 参数 */);  // ?getPointer@PD_Document@@QBEPBII@Z
    public /* 未知 */ getPrevNumberedHeadingStyle(/* TODO 参数 */);  // ?getPrevNumberedHeadingStyle@PD_Document@@QAEPBXPBX@Z
    public bool getPrevStruxOfType(/* TODO 参数 */);  // ?getPrevStruxOfType@PD_Document@@QAE_NPBXW4_PTStruxType@@PAP
    public bool getPropertyFromSDH(/* TODO 参数 */);  // ?getPropertyFromSDH@PD_Document@@QAE_NPBX_NIPBDPAPBD@Z
    public bool getRowsColsFromTableSDH(/* TODO 参数 */);  // ?getRowsColsFromTableSDH@PD_Document@@QAE_NPBX_NIPAH2@Z
    public const bool getSpanAttrProp(/* TODO 参数 */);  // ?getSpanAttrProp@PD_Document@@QBE_NPBXI_NPAPBVPP_AttrProp@@@
    public const bool getSpanAttrProp(/* TODO 参数 */);  // ?getSpanAttrProp@PD_Document@@QBE_NPBXI_NPAPBVPP_AttrProp@@P
    public const bool getStruxFromPosition(/* TODO 参数 */);  // ?getStruxFromPosition@PD_Document@@QBE_NIIPAPBX@Z
    public const bool getStruxOfTypeFromPosition(/* TODO 参数 */);  // ?getStruxOfTypeFromPosition@PD_Document@@QBE_NIIW4_PTStruxTy
    public const bool getStruxOfTypeFromPosition(/* TODO 参数 */);  // ?getStruxOfTypeFromPosition@PD_Document@@QBE_NIW4_PTStruxTyp
    public const /* 未知 */ getStruxPosition(/* TODO 参数 */);  // ?getStruxPosition@PD_Document@@QBEIPBX@Z
    public const /* 未知 */ getStruxType(/* TODO 参数 */);  // ?getStruxType@PD_Document@@QBE?AW4_PTStruxType@@PBX@Z
    public const bool getStyle(/* TODO 参数 */);  // ?getStyle@PD_Document@@QBE_NPBDPAPAVPD_Style@@@Z
    public /* 未知 */ getStyleCount(/* TODO 参数 */);  // ?getStyleCount@PD_Document@@QAEIXZ
    public /* 未知 */ getStyleFromSDH(/* TODO 参数 */);  // ?getStyleFromSDH@PD_Document@@QAEPAVPD_Style@@PBX@Z
    virtual public const /* 未知 */ getTopXID(/* TODO 参数 */);  // ?getTopXID@PD_Document@@UBEIXZ
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@PD_Document@@UBE?AW4AD_DOCUMENT_TYPE@@XZ
    public /* 未知 */ getUID(/* TODO 参数 */);  // ?getUID@PD_Document@@QAEIW4idType@UT_UniqueId@@@Z
    virtual public /* 未知 */ getXID(/* TODO 参数 */);  // ?getXID@PD_Document@@UAEIXZ
    public const bool hasListStopped(/* TODO 参数 */);  // ?hasListStopped@PD_Document@@QBE_NXZ
    virtual public /* 未知 */ importFile(/* TODO 参数 */);  // ?importFile@PD_Document@@UAEHPBDH_N10@Z
    virtual public /* 未知 */ importStyles(/* TODO 参数 */);  // ?importStyles@PD_Document@@UAEHPBDH_N@Z
    public bool insertFmtMark(/* TODO 参数 */);  // ?insertFmtMark@PD_Document@@QAE_NW4_PTChangeFmt@@IPAVPP_Attr
    public bool insertFmtMarkBeforeFrag(/* TODO 参数 */);  // ?insertFmtMarkBeforeFrag@PD_Document@@QAE_NPAVpf_Frag@@@Z
    public bool insertFmtMarkBeforeFrag(/* TODO 参数 */);  // ?insertFmtMarkBeforeFrag@PD_Document@@QAE_NPAVpf_Frag@@PAPBD
    public bool insertObject(/* TODO 参数 */);  // ?insertObject@PD_Document@@QAE_NIW4_PTObjectType@@PAPBD1@Z
    public bool insertObject(/* TODO 参数 */);  // ?insertObject@PD_Document@@QAE_NIW4_PTObjectType@@PAPBD1PAPA
    public bool insertObjectBeforeFrag(/* TODO 参数 */);  // ?insertObjectBeforeFrag@PD_Document@@QAE_NPAVpf_Frag@@W4_PTO
    public bool insertSpan(/* TODO 参数 */);  // ?insertSpan@PD_Document@@QAE_NIPBIIPAVPP_AttrProp@@@Z
    public bool insertSpanBeforeFrag(/* TODO 参数 */);  // ?insertSpanBeforeFrag@PD_Document@@QAE_NPAVpf_Frag@@PBII@Z
    public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@PD_Document@@QAE_NIW4_PTStruxType@@PAPAVpf_Frag
    public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@PD_Document@@QAE_NIW4_PTStruxType@@PAPBD1PAPAVp
    public bool insertStruxBeforeFrag(/* TODO 参数 */);  // ?insertStruxBeforeFrag@PD_Document@@QAE_NPAVpf_Frag@@W4_PTSt
    public bool insertStruxNoUpdateBefore(/* TODO 参数 */);  // ?insertStruxNoUpdateBefore@PD_Document@@QAE_NPBXW4_PTStruxTy
    public bool insertaddtion(/* TODO 参数 */);  // ?insertaddtion@PD_Document@@QAE_NV?$basic_string@DU?$char_tr
    public /* 未知 */ invalidateCache(/* TODO 参数 */);  // ?invalidateCache@PD_Document@@QAEXXZ
    public bool isBlockAtPos(/* TODO 参数 */);  // ?isBlockAtPos@PD_Document@@QAE_NI@Z
    public const bool isBookmarkRelativeLink(/* TODO 参数 */);  // ?isBookmarkRelativeLink@PD_Document@@QBE_NPBD@Z
    public const bool isBookmarkUnique(/* TODO 参数 */);  // ?isBookmarkUnique@PD_Document@@QBE_NPBD@Z
    public bool isCellAtPos(/* TODO 参数 */);  // ?isCellAtPos@PD_Document@@QAE_NI@Z
    virtual public const bool isDirty(/* TODO 参数 */);  // ?isDirty@PD_Document@@UBE_NXZ
    public bool isDoingPaste(/* TODO 参数 */);  // ?isDoingPaste@PD_Document@@QAE_NXZ
    public const bool isDoingTheDo(/* TODO 参数 */);  // ?isDoingTheDo@PD_Document@@QBE_NXZ
    public bool isDontImmediateLayout(/* TODO 参数 */);  // ?isDontImmediateLayout@PD_Document@@QAE_NXZ
    public bool isEndFootnoteAtPos(/* TODO 参数 */);  // ?isEndFootnoteAtPos@PD_Document@@QAE_NI@Z
    public bool isEndFrameAtPos(/* TODO 参数 */);  // ?isEndFrameAtPos@PD_Document@@QAE_NI@Z
    public bool isEndTableAtPos(/* TODO 参数 */);  // ?isEndTableAtPos@PD_Document@@QAE_NI@Z
    public bool isFootnoteAtPos(/* TODO 参数 */);  // ?isFootnoteAtPos@PD_Document@@QAE_NI@Z
    public bool isFrameAtPos(/* TODO 参数 */);  // ?isFrameAtPos@PD_Document@@QAE_NI@Z
    public bool isHdrFtrAtPos(/* TODO 参数 */);  // ?isHdrFtrAtPos@PD_Document@@QAE_NI@Z
    public bool isIdUnique(/* TODO 参数 */);  // ?isIdUnique@PD_Document@@QAE_NW4idType@UT_UniqueId@@I@Z
    public const bool isMarginChangeOnly(/* TODO 参数 */);  // ?isMarginChangeOnly@PD_Document@@QBE_NXZ
    public const bool isRedrawHappenning(/* TODO 参数 */);  // ?isRedrawHappenning@PD_Document@@QBE_NXZ
    public bool isSectionAtPos(/* TODO 参数 */);  // ?isSectionAtPos@PD_Document@@QAE_NI@Z
    public bool isStruxBeforeThis(/* TODO 参数 */);  // ?isStruxBeforeThis@PD_Document@@QAE_NPBXW4_PTStruxType@@@Z
    public bool isTOCAtPos(/* TODO 参数 */);  // ?isTOCAtPos@PD_Document@@QAE_NI@Z
    public bool isTableAtPos(/* TODO 参数 */);  // ?isTableAtPos@PD_Document@@QAE_NI@Z
    public const bool isVDNDinProgress(/* TODO 参数 */);  // ?isVDNDinProgress@PD_Document@@QBE_NXZ
    public /* 未知 */ listUpdate(/* TODO 参数 */);  // ?listUpdate@PD_Document@@QAEXPBX@Z
    public /* 未知 */ lockStyles(/* TODO 参数 */);  // ?lockStyles@PD_Document@@QAEX_N@Z
    public const bool mailMergeFieldExists(/* TODO 参数 */);  // ?mailMergeFieldExists@PD_Document@@QBE_NABVUT_String@@@Z
    public /* 未知 */ miniDump(/* TODO 参数 */);  // ?miniDump@PD_Document@@QAEXPBXH@Z
    virtual public /* 未知 */ newDocument(/* TODO 参数 */);  // ?newDocument@PD_Document@@UAEHXZ
    public const bool notifyListeners(/* TODO 参数 */);  // ?notifyListeners@PD_Document@@QBE_NPBVpf_Frag_Strux@@PAV2@PB
    public const bool notifyListeners(/* TODO 参数 */);  // ?notifyListeners@PD_Document@@QBE_NPBVpf_Frag_Strux@@PBVPX_C
    public /* 未知 */ notifyPieceTableChangeEnd(/* TODO 参数 */);  // ?notifyPieceTableChangeEnd@PD_Document@@QAEXXZ
    public /* 未知 */ notifyPieceTableChangeStart(/* TODO 参数 */);  // ?notifyPieceTableChangeStart@PD_Document@@QAEXXZ
    public /* 未知 */ paseaddtional(/* TODO 参数 */);  // ?paseaddtional@PD_Document@@QAEXV?$basic_string@DU?$char_tra
    public /* 未知 */ processDeferredNotifications(/* TODO 参数 */);  // ?processDeferredNotifications@PD_Document@@QAEXXZ
    public bool purgeFmtMarks(/* TODO 参数 */);  // ?purgeFmtMarks@PD_Document@@QAE_NXZ
    virtual public /* 未知 */ purgeRevisionTable(/* TODO 参数 */);  // ?purgeRevisionTable@PD_Document@@UAEX_N@Z
    virtual public /* 未知 */ readFromFile(/* TODO 参数 */);  // ?readFromFile@PD_Document@@UAEHPBDH0@Z
    virtual public /* 未知 */ readFromStream(/* TODO 参数 */);  // ?readFromStream@PD_Document@@UAEHHPAXPBD@Z
    virtual public bool redoCmd(/* TODO 参数 */);  // ?redoCmd@PD_Document@@UAE_NI@Z
    virtual public bool rejectAllHigherRevisions(/* TODO 参数 */);  // ?rejectAllHigherRevisions@PD_Document@@UAE_NI@Z
    public /* 未知 */ removeBookmark(/* TODO 参数 */);  // ?removeBookmark@PD_Document@@QAEXPBD@Z
    public /* 未知 */ removeList(/* TODO 参数 */);  // ?removeList@PD_Document@@QAEXPAVfl_AutoNum@@PBX@Z
    public bool removeListener(/* TODO 参数 */);  // ?removeListener@PD_Document@@QAE_NI@Z
    public bool removeStyle(/* TODO 参数 */);  // ?removeStyle@PD_Document@@QAE_NPBD@Z
    public bool repairDoc(/* TODO 参数 */);  // ?repairDoc@PD_Document@@QAE_NXZ
    virtual public bool replaceDataItem(/* TODO 参数 */);  // ?replaceDataItem@PD_Document@@UAE_NPBDPBVUT_ByteBuf@@@Z
    public bool setAllStyleAttributes(/* TODO 参数 */);  // ?setAllStyleAttributes@PD_Document@@QAE_NPBDPAPBD@Z
    public bool setAttrProp(/* TODO 参数 */);  // ?setAttrProp@PD_Document@@QAE_NPAPBD@Z
    public bool setAttributes(/* TODO 参数 */);  // ?setAttributes@PD_Document@@QAE_NPAPBD@Z
    virtual public /* 未知 */ setAutoRevisioning(/* TODO 参数 */);  // ?setAutoRevisioning@PD_Document@@UAEX_N@Z
    public bool setDataItemToken(/* TODO 参数 */);  // ?setDataItemToken@PD_Document@@QAE_NPAX0@Z
    public /* 未知 */ setDoingPaste(/* TODO 参数 */);  // ?setDoingPaste@PD_Document@@QAEXXZ
    public /* 未知 */ setDontChangeInsPoint(/* TODO 参数 */);  // ?setDontChangeInsPoint@PD_Document@@QAEXXZ
    public /* 未知 */ setDontImmediatelyLayout(/* TODO 参数 */);  // ?setDontImmediatelyLayout@PD_Document@@QAEX_N@Z
    public bool setElemInfo(/* TODO 参数 */);  // ?setElemInfo@PD_Document@@QAE_NPBD0@Z
    public /* 未知 */ setHasListStopped(/* TODO 参数 */);  // ?setHasListStopped@PD_Document@@QAEX_N@Z
    public /* 未知 */ setMailMergeField(/* TODO 参数 */);  // ?setMailMergeField@PD_Document@@QAEXABVUT_String@@ABVUT_UTF8
    public /* 未知 */ setMailMergeLink(/* TODO 参数 */);  // ?setMailMergeLink@PD_Document@@QAEXPBD@Z
    public /* 未知 */ setMarginChangeOnly(/* TODO 参数 */);  // ?setMarginChangeOnly@PD_Document@@QAEX_N@Z
    virtual public /* 未知 */ setMarkRevisions(/* TODO 参数 */);  // ?setMarkRevisions@PD_Document@@UAEX_N@Z
    public /* 未知 */ setMarkRevisionsNoNotify(/* TODO 参数 */);  // ?setMarkRevisionsNoNotify@PD_Document@@QAEX_N@Z
    virtual public /* 未知 */ setMetaDataProp(/* TODO 参数 */);  // ?setMetaDataProp@PD_Document@@UAEXABVUT_String@@ABVUT_UTF8St
    public bool setMinUID(/* TODO 参数 */);  // ?setMinUID@PD_Document@@QAE_NW4idType@UT_UniqueId@@I@Z
    public /* 未知 */ setNewFtrHeight(/* TODO 参数 */);  // ?setNewFtrHeight@PD_Document@@QAEXH@Z
    public /* 未知 */ setNewHdrHeight(/* TODO 参数 */);  // ?setNewHdrHeight@PD_Document@@QAEXH@Z
    public bool setPageSizeFromFile(/* TODO 参数 */);  // ?setPageSizeFromFile@PD_Document@@QAE_NPAPBD@Z
    public bool setProperties(/* TODO 参数 */);  // ?setProperties@PD_Document@@QAE_NPAPBD@Z
    public /* 未知 */ setRedrawHappenning(/* TODO 参数 */);  // ?setRedrawHappenning@PD_Document@@QAEX_N@Z
    public /* 未知 */ setVDNDinProgress(/* TODO 参数 */);  // ?setVDNDinProgress@PD_Document@@QAEX_N@Z
    public const bool signalListeners(/* TODO 参数 */);  // ?signalListeners@PD_Document@@QBE_NI@Z
    public bool tellListener(/* TODO 参数 */);  // ?tellListener@PD_Document@@QAE_NPAVPL_Listener@@@Z
    public bool tellListenerSubset(/* TODO 参数 */);  // ?tellListenerSubset@PD_Document@@QAE_NPAVPL_Listener@@PAVPD_
    public /* 未知 */ tellPTDoNotTweakPosition(/* TODO 参数 */);  // ?tellPTDoNotTweakPosition@PD_Document@@QAEX_N@Z
    virtual public bool undoCmd(/* TODO 参数 */);  // ?undoCmd@PD_Document@@UAE_NI@Z
    virtual public const /* 未知 */ undoCount(/* TODO 参数 */);  // ?undoCount@PD_Document@@UBEI_N@Z
    public /* 未知 */ updateAllLayoutsInDoc(/* TODO 参数 */);  // ?updateAllLayoutsInDoc@PD_Document@@QAEXPBX@Z
    public /* 未知 */ updateDirtyLists(/* TODO 参数 */);  // ?updateDirtyLists@PD_Document@@QAEXXZ
    public bool updateDocForStyleChange(/* TODO 参数 */);  // ?updateDocForStyleChange@PD_Document@@QAE_NPBD_N@Z
    public bool updateFields(/* TODO 参数 */);  // ?updateFields@PD_Document@@QAE_NXZ
    public /* 未知 */ uwDirtyParakeysClear(/* TODO 参数 */);  // ?uwDirtyParakeysClear@PD_Document@@QAEXXZ
    public /* 未知 */ uw_destroyaddtion(/* TODO 参数 */);  // ?uw_destroyaddtion@PD_Document@@QAEXXZ
    public const /* 未知 */ uwgetFragFromPosition(/* TODO 参数 */);  // ?uwgetFragFromPosition@PD_Document@@QBEPAVpf_Frag@@I@Z
    public bool verifySectionID(/* TODO 参数 */);  // ?verifySectionID@PD_Document@@QAE_NPBD@Z
};

/* ---- PD_DocumentRange (1 方法) ---- */
class PD_DocumentRange {
public:
    public /* 未知 */ set(/* TODO 参数 */);  // ?set@PD_DocumentRange@@QAEXPAVPD_Document@@II@Z
};

/* ---- PD_StruxIterator (12 方法) ---- */
class PD_StruxIterator {
public:
    public /* 未知 */ _findFrag(/* TODO 参数 */);  // ?_findFrag@PD_StruxIterator@@AAE_NXZ
    public /* 未知 */ _incrementPos(/* TODO 参数 */);  // ?_incrementPos@PD_StruxIterator@@AAE_NH@Z
    virtual public /* 未知 */ find(/* TODO 参数 */);  // ?find@PD_StruxIterator@@UAEIAAVUT_TextIterator@@I_N@Z
    virtual public /* 未知 */ find(/* TODO 参数 */);  // ?find@PD_StruxIterator@@UAEIPAII_N@Z
    virtual public /* 未知 */ getChar(/* TODO 参数 */);  // ?getChar@PD_StruxIterator@@UAEIXZ
    public /* 未知 */ getFrag(/* TODO 参数 */);  // ?getFrag@PD_StruxIterator@@QAEPBVpf_Frag@@XZ
    virtual public const /* 未知 */ getPosition(/* TODO 参数 */);  // ?getPosition@PD_StruxIterator@@UBEIXZ
    virtual public const /* 未知 */ getStatus(/* TODO 参数 */);  // ?getStatus@PD_StruxIterator@@UBE?AW4UTIterStatus@@XZ
    virtual public const /* 未知 */ getUpperLimit(/* TODO 参数 */);  // ?getUpperLimit@PD_StruxIterator@@UBEIXZ
    virtual public /* 未知 */ makeCopy(/* TODO 参数 */);  // ?makeCopy@PD_StruxIterator@@UAEPAVUT_TextIterator@@XZ
    virtual public /* 未知 */ setPosition(/* TODO 参数 */);  // ?setPosition@PD_StruxIterator@@UAEXI@Z
    virtual public /* 未知 */ setUpperLimit(/* TODO 参数 */);  // ?setUpperLimit@PD_StruxIterator@@UAEXI@Z
};

/* ---- PD_Style (27 方法) ---- */
class PD_Style {
public:
    protected bool _getAttributeExpand(/* TODO 参数 */);  // ?_getAttributeExpand@PD_Style@@IAE_NPBDAAPBDH@Z
    protected bool _getPropertyExpand(/* TODO 参数 */);  // ?_getPropertyExpand@PD_Style@@IAE_NPBDAAPBDH@Z
    public bool addAttributes(/* TODO 参数 */);  // ?addAttributes@PD_Style@@QAE_NPAPBD_N@Z
    public bool addProperties(/* TODO 参数 */);  // ?addProperties@PD_Style@@QAE_NPAPBD@Z
    public bool addProperty(/* TODO 参数 */);  // ?addProperty@PD_Style@@QAE_NPBD0@Z
    public bool getAllAttributes(/* TODO 参数 */);  // ?getAllAttributes@PD_Style@@QAE_NPAV?$UT_GenericVector@PBX@@
    public bool getAllProperties(/* TODO 参数 */);  // ?getAllProperties@PD_Style@@QAE_NPAV?$UT_GenericVector@PBX@@
    public const bool getAttribute(/* TODO 参数 */);  // ?getAttribute@PD_Style@@QBE_NPBDAAPBD@Z
    public const /* 未知 */ getAttributeCount(/* TODO 参数 */);  // ?getAttributeCount@PD_Style@@QBEIXZ
    public bool getAttributeExpand(/* TODO 参数 */);  // ?getAttributeExpand@PD_Style@@QAE_NPBDAAPBD@Z
    public /* 未知 */ getBasedOn(/* TODO 参数 */);  // ?getBasedOn@PD_Style@@QAEPAV1@XZ
    public /* 未知 */ getFollowedBy(/* TODO 参数 */);  // ?getFollowedBy@PD_Style@@QAEPAV1@XZ
    public const /* 未知 */ getIndexAP(/* TODO 参数 */);  // ?getIndexAP@PD_Style@@QBEIXZ
    public const /* 未知 */ getName(/* TODO 参数 */);  // ?getName@PD_Style@@QBEPBDXZ
    public const bool getNthAttribute(/* TODO 参数 */);  // ?getNthAttribute@PD_Style@@QBE_NHAAPBD0@Z
    public const bool getNthProperty(/* TODO 参数 */);  // ?getNthProperty@PD_Style@@QBE_NHAAPBD0@Z
    public const bool getProperty(/* TODO 参数 */);  // ?getProperty@PD_Style@@QBE_NPBDAAPBD@Z
    public const /* 未知 */ getPropertyCount(/* TODO 参数 */);  // ?getPropertyCount@PD_Style@@QBEIXZ
    public bool getPropertyExpand(/* TODO 参数 */);  // ?getPropertyExpand@PD_Style@@QAE_NPBDAAPBD@Z
    public const /* 未知 */ getPropertyType(/* TODO 参数 */);  // ?getPropertyType@PD_Style@@QBEPBVPP_PropertyType@@PBDW4tProp
    public const bool isCharStyle(/* TODO 参数 */);  // ?isCharStyle@PD_Style@@QBE_NXZ
    public bool isList(/* TODO 参数 */);  // ?isList@PD_Style@@QAE_NXZ
    public const bool isUsed(/* TODO 参数 */);  // ?isUsed@PD_Style@@QBE_NXZ
    virtual public const bool isUserDefined(/* TODO 参数 */);  // ?isUserDefined@PD_Style@@UBE_NXZ
    public bool setAllAttributes(/* TODO 参数 */);  // ?setAllAttributes@PD_Style@@QAE_NPAPBD@Z
    public bool setIndexAP(/* TODO 参数 */);  // ?setIndexAP@PD_Style@@QAE_NI@Z
    public /* 未知 */ used(/* TODO 参数 */);  // ?used@PD_Style@@QAEXH@Z
};

/* ---- PL_Listener (3 方法) ---- */
class PL_Listener {
public:
    virtual public /* 未知 */ deferNotifications(/* TODO 参数 */);  // ?deferNotifications@PL_Listener@@UAEXXZ
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@PL_Listener@@UBE?AW4_PLListenerType@@XZ
    virtual public /* 未知 */ processDeferredNotifications(/* TODO 参数 */);  // ?processDeferredNotifications@PL_Listener@@UAEXXZ
};

/* ---- PP_AttrProp (39 方法) ---- */
class PP_AttrProp {
public:
    protected /* 未知 */ _clearEmptyAttributes(/* TODO 参数 */);  // ?_clearEmptyAttributes@PP_AttrProp@@IAEXXZ
    protected /* 未知 */ _clearEmptyProperties(/* TODO 参数 */);  // ?_clearEmptyProperties@PP_AttrProp@@IAEXXZ
    protected /* 未知 */ _computeCheckSum(/* TODO 参数 */);  // ?_computeCheckSum@PP_AttrProp@@IAEXXZ
    public const bool areAlreadyPresent(/* TODO 参数 */);  // ?areAlreadyPresent@PP_AttrProp@@QBE_NPAPBD0@Z
    public const bool areAnyOfTheseNamesPresent(/* TODO 参数 */);  // ?areAnyOfTheseNamesPresent@PP_AttrProp@@QBE_NPAPBD0@Z
    public const /* 未知 */ cloneWithElimination(/* TODO 参数 */);  // ?cloneWithElimination@PP_AttrProp@@QBEPAV1@PAPBD0@Z
    public const /* 未知 */ cloneWithEliminationIfEqual(/* TODO 参数 */);  // ?cloneWithEliminationIfEqual@PP_AttrProp@@QBEPAV1@PAPBD0@Z
    public const /* 未知 */ cloneWithReplacements(/* TODO 参数 */);  // ?cloneWithReplacements@PP_AttrProp@@QBEPAV1@PAPBD0_N@Z
    public bool explodeStyle(/* TODO 参数 */);  // ?explodeStyle@PP_AttrProp@@QAE_NPBVPD_Document@@_N@Z
    public const bool getAttribute(/* TODO 参数 */);  // ?getAttribute@PP_AttrProp@@QBE_NPBDAAPBD@Z
    public const /* 未知 */ getAttributeCount(/* TODO 参数 */);  // ?getAttributeCount@PP_AttrProp@@QBEIXZ
    public const /* 未知 */ getAttributes(/* TODO 参数 */);  // ?getAttributes@PP_AttrProp@@QBEPAPBDXZ
    public const /* 未知 */ getCheckSum(/* TODO 参数 */);  // ?getCheckSum@PP_AttrProp@@QBEIXZ
    public /* 未知 */ getIndex(/* TODO 参数 */);  // ?getIndex@PP_AttrProp@@QAEIXZ
    public const bool getNthAttribute(/* TODO 参数 */);  // ?getNthAttribute@PP_AttrProp@@QBE_NHAAPBD0@Z
    public const bool getNthProperty(/* TODO 参数 */);  // ?getNthProperty@PP_AttrProp@@QBE_NHAAPBD0@Z
    public const /* 未知 */ getProperties(/* TODO 参数 */);  // ?getProperties@PP_AttrProp@@QBEPAPBDXZ
    public const bool getProperty(/* TODO 参数 */);  // ?getProperty@PP_AttrProp@@QBE_NPBDAAPBD@Z
    public const /* 未知 */ getPropertyCount(/* TODO 参数 */);  // ?getPropertyCount@PP_AttrProp@@QBEIXZ
    public const /* 未知 */ getPropertyType(/* TODO 参数 */);  // ?getPropertyType@PP_AttrProp@@QBEPBVPP_PropertyType@@PBDW4tP
    public const /* 未知 */ getRevisedIndex(/* TODO 参数 */);  // ?getRevisedIndex@PP_AttrProp@@QBEIXZ
    public const bool getRevisionHidden(/* TODO 参数 */);  // ?getRevisionHidden@PP_AttrProp@@QBE_NXZ
    public const /* 未知 */ getRevisionState(/* TODO 参数 */);  // ?getRevisionState@PP_AttrProp@@QBEAAVPP_RevisionState@@XZ
    public const bool hasAttributes(/* TODO 参数 */);  // ?hasAttributes@PP_AttrProp@@QBE_NXZ
    public const bool hasProperties(/* TODO 参数 */);  // ?hasProperties@PP_AttrProp@@QBE_NXZ
    public const bool isEquivalent(/* TODO 参数 */);  // ?isEquivalent@PP_AttrProp@@QBE_NPAPBD0@Z
    public const bool isEquivalent(/* TODO 参数 */);  // ?isEquivalent@PP_AttrProp@@QBE_NPBV1@@Z
    public const bool isExactMatch(/* TODO 参数 */);  // ?isExactMatch@PP_AttrProp@@QBE_NPBV1@@Z
    public /* 未知 */ markReadOnly(/* TODO 参数 */);  // ?markReadOnly@PP_AttrProp@@QAEXXZ
    public const /* 未知 */ miniDump(/* TODO 参数 */);  // ?miniDump@PP_AttrProp@@QBEXPBVPD_Document@@@Z
    public /* 未知 */ prune(/* TODO 参数 */);  // ?prune@PP_AttrProp@@QAEXXZ
    public bool setAttribute(/* TODO 参数 */);  // ?setAttribute@PP_AttrProp@@QAE_NPBD0@Z
    public bool setAttributes(/* TODO 参数 */);  // ?setAttributes@PP_AttrProp@@QAE_NPAPBD@Z
    public bool setAttributes(/* TODO 参数 */);  // ?setAttributes@PP_AttrProp@@QAE_NPBV?$UT_GenericVector@PAD@@
    public /* 未知 */ setIndex(/* TODO 参数 */);  // ?setIndex@PP_AttrProp@@QAEXI@Z
    public bool setProperties(/* TODO 参数 */);  // ?setProperties@PP_AttrProp@@QAE_NPAPBD@Z
    public bool setProperties(/* TODO 参数 */);  // ?setProperties@PP_AttrProp@@QAE_NPBV?$UT_GenericVector@PAD@@
    public bool setProperty(/* TODO 参数 */);  // ?setProperty@PP_AttrProp@@QAE_NPBD0@Z
    public const /* 未知 */ setRevisedIndex(/* TODO 参数 */);  // ?setRevisedIndex@PP_AttrProp@@QBEXII_N00@Z
};

/* ---- PP_Property (5 方法) ---- */
class PP_Property {
public:
    public const bool canInherit(/* TODO 参数 */);  // ?canInherit@PP_Property@@QBE_NXZ
    public const /* 未知 */ getInitial(/* TODO 参数 */);  // ?getInitial@PP_Property@@QBEPBDXZ
    public const /* 未知 */ getInitialType(/* TODO 参数 */);  // ?getInitialType@PP_Property@@QBEPBVPP_PropertyType@@W4tPrope
    public const /* 未知 */ getLevel(/* TODO 参数 */);  // ?getLevel@PP_Property@@QBEIXZ
    public const /* 未知 */ getName(/* TODO 参数 */);  // ?getName@PP_Property@@QBEPBDXZ
};

/* ---- PP_PropertyMap (13 方法) ---- */
class PP_PropertyMap {
public:
    public /* 未知 */ abi_property_lookup(/* TODO 参数 */);  // ?abi_property_lookup@PP_PropertyMap@@SA_NPBDAAW4AbiPropertyI
    public /* 未知 */ abi_property_name(/* TODO 参数 */);  // ?abi_property_name@PP_PropertyMap@@SAPBDW4AbiPropertyIndex@1
    public /* 未知 */ background_type(/* TODO 参数 */);  // ?background_type@PP_PropertyMap@@SA?AW4TypeBackground@1@PBD@
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@PP_PropertyMap@@QAEXXZ
    public /* 未知 */ color_type(/* TODO 参数 */);  // ?color_type@PP_PropertyMap@@SA?AW4TypeColor@1@PBD@Z
    public bool del(/* TODO 参数 */);  // ?del@PP_PropertyMap@@QAE_NW4AbiPropertyIndex@1@@Z
    public bool del(/* TODO 参数 */);  // ?del@PP_PropertyMap@@QAE_NW4AbiPropertyIndex@1@AAPAVUT_UTF8S
    public bool ins(/* TODO 参数 */);  // ?ins@PP_PropertyMap@@QAE_NW4AbiPropertyIndex@1@PAVUT_UTF8Str
    public bool ins(/* TODO 参数 */);  // ?ins@PP_PropertyMap@@QAE_NW4AbiPropertyIndex@1@PBD@Z
    public /* 未知 */ linestyle_for_CSS(/* TODO 参数 */);  // ?linestyle_for_CSS@PP_PropertyMap@@SAPBDPBD@Z
    public /* 未知 */ linestyle_type(/* TODO 参数 */);  // ?linestyle_type@PP_PropertyMap@@SA?AW4TypeLineStyle@1@PBD@Z
    public const /* 未知 */ map(/* TODO 参数 */);  // ?map@PP_PropertyMap@@QBEABVUT_IntStrMap@@XZ
    public /* 未知 */ thickness_type(/* TODO 参数 */);  // ?thickness_type@PP_PropertyMap@@SA?AW4TypeThickness@1@PBD@Z
};

/* ---- PP_PropertyType (1 方法) ---- */
class PP_PropertyType {
public:
    public /* 未知 */ createPropertyType(/* TODO 参数 */);  // ?createPropertyType@PP_PropertyType@@SAPAV1@W4tProperty_type
};

/* ---- PP_PropertyTypeBool (2 方法) ---- */
class PP_PropertyTypeBool {
public:
    public const bool getState(/* TODO 参数 */);  // ?getState@PP_PropertyTypeBool@@QBE_NXZ
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@PP_PropertyTypeBool@@UBE?AW4tProperty_type@@XZ
};

/* ---- PP_PropertyTypeColor (2 方法) ---- */
class PP_PropertyTypeColor {
public:
    public const /* 未知 */ getColor(/* TODO 参数 */);  // ?getColor@PP_PropertyTypeColor@@QBEABVUT_RGBColor@@XZ
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@PP_PropertyTypeColor@@UBE?AW4tProperty_type@@XZ
};

/* ---- PP_PropertyTypeInt (2 方法) ---- */
class PP_PropertyTypeInt {
public:
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@PP_PropertyTypeInt@@UBE?AW4tProperty_type@@XZ
    public const /* 未知 */ getValue(/* TODO 参数 */);  // ?getValue@PP_PropertyTypeInt@@QBEHXZ
};

/* ---- PP_PropertyTypeSize (3 方法) ---- */
class PP_PropertyTypeSize {
public:
    public const /* 未知 */ getDim(/* TODO 参数 */);  // ?getDim@PP_PropertyTypeSize@@QBE?AW4_ut_dimension@@XZ
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@PP_PropertyTypeSize@@UBE?AW4tProperty_type@@XZ
    public const /* 未知 */ getValue(/* TODO 参数 */);  // ?getValue@PP_PropertyTypeSize@@QBENXZ
};

/* ---- PP_RevisionState (1 方法) ---- */
class PP_RevisionState {
public:
    public const bool isEqual(/* TODO 参数 */);  // ?isEqual@PP_RevisionState@@QBE_NI_N0@Z
};

/* ---- PX_ChangeRecord (12 方法) ---- */
class PX_ChangeRecord {
public:
    public /* 未知 */ getCRNumber(/* TODO 参数 */);  // ?getCRNumber@PX_ChangeRecord@@QAEHXZ
    public const /* 未知 */ getDocUUID(/* TODO 参数 */);  // ?getDocUUID@PX_ChangeRecord@@QBEPBDXZ
    public const /* 未知 */ getIndexAP(/* TODO 参数 */);  // ?getIndexAP@PX_ChangeRecord@@QBEIXZ
    public const /* 未知 */ getMyUUID(/* TODO 参数 */);  // ?getMyUUID@PX_ChangeRecord@@QBEPBDXZ
    public const /* 未知 */ getParakey(/* TODO 参数 */);  // ?getParakey@PX_ChangeRecord@@QBE?AV?$basic_string@DU?$char_t
    public const bool getPersistance(/* TODO 参数 */);  // ?getPersistance@PX_ChangeRecord@@QBE_NXZ
    public const /* 未知 */ getPosition(/* TODO 参数 */);  // ?getPosition@PX_ChangeRecord@@QBEIXZ
    public const /* 未知 */ getRevType(/* TODO 参数 */);  // ?getRevType@PX_ChangeRecord@@QBE?AW4_PXType@1@XZ
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@PX_ChangeRecord@@QBE?AW4_PXType@1@XZ
    public const /* 未知 */ getXID(/* TODO 参数 */);  // ?getXID@PX_ChangeRecord@@QBEIXZ
    virtual public const /* 未知 */ reverse(/* TODO 参数 */);  // ?reverse@PX_ChangeRecord@@UBEPAV1@XZ
    public /* 未知 */ setPersistance(/* TODO 参数 */);  // ?setPersistance@PX_ChangeRecord@@QAEX_N@Z
};

/* ---- PX_ChangeRecord_FmtMark (2 方法) ---- */
class PX_ChangeRecord_FmtMark {
public:
    public const /* 未知 */ getBlockOffset(/* TODO 参数 */);  // ?getBlockOffset@PX_ChangeRecord_FmtMark@@QBEIXZ
    virtual public const /* 未知 */ reverse(/* TODO 参数 */);  // ?reverse@PX_ChangeRecord_FmtMark@@UBEPAVPX_ChangeRecord@@XZ
};

/* ---- PX_ChangeRecord_FmtMarkChange (3 方法) ---- */
class PX_ChangeRecord_FmtMarkChange {
public:
    public const /* 未知 */ getBlockOffset(/* TODO 参数 */);  // ?getBlockOffset@PX_ChangeRecord_FmtMarkChange@@QBEIXZ
    public const /* 未知 */ getOldIndexAP(/* TODO 参数 */);  // ?getOldIndexAP@PX_ChangeRecord_FmtMarkChange@@QBEIXZ
    virtual public const /* 未知 */ reverse(/* TODO 参数 */);  // ?reverse@PX_ChangeRecord_FmtMarkChange@@UBEPAVPX_ChangeRecor
};

/* ---- PX_ChangeRecord_Glob (3 方法) ---- */
class PX_ChangeRecord_Glob {
public:
    public const /* 未知 */ getFlags(/* TODO 参数 */);  // ?getFlags@PX_ChangeRecord_Glob@@QBEEXZ
    public const /* 未知 */ getRevFlags(/* TODO 参数 */);  // ?getRevFlags@PX_ChangeRecord_Glob@@QBEEXZ
    virtual public const /* 未知 */ reverse(/* TODO 参数 */);  // ?reverse@PX_ChangeRecord_Glob@@UBEPAVPX_ChangeRecord@@XZ
};

/* ---- PX_ChangeRecord_Object (6 方法) ---- */
class PX_ChangeRecord_Object {
public:
    public const /* 未知 */ getBlockOffset(/* TODO 参数 */);  // ?getBlockOffset@PX_ChangeRecord_Object@@QBEIXZ
    public const /* 未知 */ getField(/* TODO 参数 */);  // ?getField@PX_ChangeRecord_Object@@QBEPAVfd_Field@@XZ
    public const /* 未知 */ getObjectHandle(/* TODO 参数 */);  // ?getObjectHandle@PX_ChangeRecord_Object@@QBEPBXXZ
    public const /* 未知 */ getObjectType(/* TODO 参数 */);  // ?getObjectType@PX_ChangeRecord_Object@@QBE?AW4_PTObjectType@
    virtual public const /* 未知 */ reverse(/* TODO 参数 */);  // ?reverse@PX_ChangeRecord_Object@@UBEPAVPX_ChangeRecord@@XZ
    public const /* 未知 */ setObjectHandle(/* TODO 参数 */);  // ?setObjectHandle@PX_ChangeRecord_Object@@QBEXPAVpf_Frag_Obje
};

/* ---- PX_ChangeRecord_ObjectChange (5 方法) ---- */
class PX_ChangeRecord_ObjectChange {
public:
    public const /* 未知 */ getBlockOffset(/* TODO 参数 */);  // ?getBlockOffset@PX_ChangeRecord_ObjectChange@@QBEIXZ
    public const /* 未知 */ getObjectType(/* TODO 参数 */);  // ?getObjectType@PX_ChangeRecord_ObjectChange@@QBE?AW4_PTObjec
    public const /* 未知 */ getOldIndexAP(/* TODO 参数 */);  // ?getOldIndexAP@PX_ChangeRecord_ObjectChange@@QBEIXZ
    public const bool isRevisionDelete(/* TODO 参数 */);  // ?isRevisionDelete@PX_ChangeRecord_ObjectChange@@QBE_NXZ
    virtual public const /* 未知 */ reverse(/* TODO 参数 */);  // ?reverse@PX_ChangeRecord_ObjectChange@@UBEPAVPX_ChangeRecord
};

/* ---- PX_ChangeRecord_Span (6 方法) ---- */
class PX_ChangeRecord_Span {
public:
    public /* 未知 */ coalesce(/* TODO 参数 */);  // ?coalesce@PX_ChangeRecord_Span@@QAEXPBV1@@Z
    public const /* 未知 */ getBlockOffset(/* TODO 参数 */);  // ?getBlockOffset@PX_ChangeRecord_Span@@QBEIXZ
    public const /* 未知 */ getBufIndex(/* TODO 参数 */);  // ?getBufIndex@PX_ChangeRecord_Span@@QBEIXZ
    public const /* 未知 */ getField(/* TODO 参数 */);  // ?getField@PX_ChangeRecord_Span@@QBEPAVfd_Field@@XZ
    public const /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@PX_ChangeRecord_Span@@QBEIXZ
    virtual public const /* 未知 */ reverse(/* TODO 参数 */);  // ?reverse@PX_ChangeRecord_Span@@UBEPAVPX_ChangeRecord@@XZ
};

/* ---- PX_ChangeRecord_SpanChange (6 方法) ---- */
class PX_ChangeRecord_SpanChange {
public:
    public const /* 未知 */ getBlockOffset(/* TODO 参数 */);  // ?getBlockOffset@PX_ChangeRecord_SpanChange@@QBEIXZ
    public const /* 未知 */ getBufIndex(/* TODO 参数 */);  // ?getBufIndex@PX_ChangeRecord_SpanChange@@QBEIXZ
    public const /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@PX_ChangeRecord_SpanChange@@QBEIXZ
    public const /* 未知 */ getOldIndexAP(/* TODO 参数 */);  // ?getOldIndexAP@PX_ChangeRecord_SpanChange@@QBEIXZ
    public const bool isRevisionDelete(/* TODO 参数 */);  // ?isRevisionDelete@PX_ChangeRecord_SpanChange@@QBE_NXZ
    virtual public const /* 未知 */ reverse(/* TODO 参数 */);  // ?reverse@PX_ChangeRecord_SpanChange@@UBEPAVPX_ChangeRecord@@
};

/* ---- PX_ChangeRecord_Strux (2 方法) ---- */
class PX_ChangeRecord_Strux {
public:
    public const /* 未知 */ getStruxType(/* TODO 参数 */);  // ?getStruxType@PX_ChangeRecord_Strux@@QBE?AW4_PTStruxType@@XZ
    virtual public const /* 未知 */ reverse(/* TODO 参数 */);  // ?reverse@PX_ChangeRecord_Strux@@UBEPAVPX_ChangeRecord@@XZ
};

/* ---- PX_ChangeRecord_StruxChange (4 方法) ---- */
class PX_ChangeRecord_StruxChange {
public:
    public const /* 未知 */ getOldIndexAP(/* TODO 参数 */);  // ?getOldIndexAP@PX_ChangeRecord_StruxChange@@QBEIXZ
    public const /* 未知 */ getStruxType(/* TODO 参数 */);  // ?getStruxType@PX_ChangeRecord_StruxChange@@QBE?AW4_PTStruxTy
    public const bool isRevisionDelete(/* TODO 参数 */);  // ?isRevisionDelete@PX_ChangeRecord_StruxChange@@QBE_NXZ
    virtual public const /* 未知 */ reverse(/* TODO 参数 */);  // ?reverse@PX_ChangeRecord_StruxChange@@UBEPAVPX_ChangeRecord@
};

/* ---- RTFProps_FrameProps (2 方法) ---- */
class RTFProps_FrameProps {
public:
    public /* 未知 */ _setProperty(/* TODO 参数 */);  // ?_setProperty@RTFProps_FrameProps@@QAEXPBV?$UT_Pair@PAVUT_UT
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@RTFProps_FrameProps@@QAEXXZ
};

/* ---- RTFStateStore (1 方法) ---- */
class RTFStateStore {
public:
    public /* 未知 */ clone(/* TODO 参数 */);  // ?clone@RTFStateStore@@QAEPAU1@XZ
};

/* ---- RTF_msword97_level (3 方法) ---- */
class RTF_msword97_level {
public:
    public bool ParseLevelText(/* TODO 参数 */);  // ?ParseLevelText@RTF_msword97_level@@QAE_NABVUT_String@@0I@Z
    public /* 未知 */ buildAbiListProperties(/* TODO 参数 */);  // ?buildAbiListProperties@RTF_msword97_level@@QAEXPAPBD0000000
    public /* 未知 */ m_sPreviousLevel(/* TODO 参数 */);  // ?m_sPreviousLevel@RTF_msword97_level@@2IA
};

/* ---- RTF_msword97_listOverride (36 方法) ---- */
class RTF_msword97_listOverride {
public:
    public /* 未知 */ buildAbiListProperties(/* TODO 参数 */);  // ?buildAbiListProperties@RTF_msword97_listOverride@@QAEXPAPBD
    public /* 未知 */ getBgColourNumber(/* TODO 参数 */);  // ?getBgColourNumber@RTF_msword97_listOverride@@QAEII@Z
    public bool getBold(/* TODO 参数 */);  // ?getBold@RTF_msword97_listOverride@@QAE_NI@Z
    public /* 未知 */ getColourNumber(/* TODO 参数 */);  // ?getColourNumber@RTF_msword97_listOverride@@QAEII@Z
    public bool getDeleted(/* TODO 参数 */);  // ?getDeleted@RTF_msword97_listOverride@@QAE_NI@Z
    public /* 未知 */ getFontNumber(/* TODO 参数 */);  // ?getFontNumber@RTF_msword97_listOverride@@QAEII@Z
    public /* 未知 */ getFontSize(/* TODO 参数 */);  // ?getFontSize@RTF_msword97_listOverride@@QAENI@Z
    public bool getHasBgColour(/* TODO 参数 */);  // ?getHasBgColour@RTF_msword97_listOverride@@QAE_NI@Z
    public bool getHasColour(/* TODO 参数 */);  // ?getHasColour@RTF_msword97_listOverride@@QAE_NI@Z
    public bool getItalic(/* TODO 参数 */);  // ?getItalic@RTF_msword97_listOverride@@QAE_NI@Z
    public bool getStrikeout(/* TODO 参数 */);  // ?getStrikeout@RTF_msword97_listOverride@@QAE_NI@Z
    public bool getSubscript(/* TODO 参数 */);  // ?getSubscript@RTF_msword97_listOverride@@QAE_NI@Z
    public /* 未知 */ getSubscriptPos(/* TODO 参数 */);  // ?getSubscriptPos@RTF_msword97_listOverride@@QAENI@Z
    public bool getSuperscript(/* TODO 参数 */);  // ?getSuperscript@RTF_msword97_listOverride@@QAE_NI@Z
    public /* 未知 */ getSuperscriptPos(/* TODO 参数 */);  // ?getSuperscriptPos@RTF_msword97_listOverride@@QAENI@Z
    public /* 未知 */ getTabLeaderVect(/* TODO 参数 */);  // ?getTabLeaderVect@RTF_msword97_listOverride@@QAEPAV?$UT_Gene
    public /* 未知 */ getTabStopVect(/* TODO 参数 */);  // ?getTabStopVect@RTF_msword97_listOverride@@QAEPAV?$UT_Generi
    public /* 未知 */ getTabTypeVect(/* TODO 参数 */);  // ?getTabTypeVect@RTF_msword97_listOverride@@QAEPAV?$UT_Generi
    public bool getUnderline(/* TODO 参数 */);  // ?getUnderline@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isBgColourNumberChanged(/* TODO 参数 */);  // ?isBgColourNumberChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isBoldChanged(/* TODO 参数 */);  // ?isBoldChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isColourNumberChanged(/* TODO 参数 */);  // ?isColourNumberChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isDeletedChanged(/* TODO 参数 */);  // ?isDeletedChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isFontNumberChanged(/* TODO 参数 */);  // ?isFontNumberChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isFontSizeChanged(/* TODO 参数 */);  // ?isFontSizeChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isHasBgColourChanged(/* TODO 参数 */);  // ?isHasBgColourChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isHasColourChanged(/* TODO 参数 */);  // ?isHasColourChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isItalicChanged(/* TODO 参数 */);  // ?isItalicChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isStrikeoutChanged(/* TODO 参数 */);  // ?isStrikeoutChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isSubscriptChanged(/* TODO 参数 */);  // ?isSubscriptChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isSubscriptPosChanged(/* TODO 参数 */);  // ?isSubscriptPosChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isSuperscriptChanged(/* TODO 参数 */);  // ?isSuperscriptChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isSuperscriptPosChanged(/* TODO 参数 */);  // ?isSuperscriptPosChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isTab(/* TODO 参数 */);  // ?isTab@RTF_msword97_listOverride@@QAE_NI@Z
    public bool isUnderlineChanged(/* TODO 参数 */);  // ?isUnderlineChanged@RTF_msword97_listOverride@@QAE_NI@Z
    public bool setList(/* TODO 参数 */);  // ?setList@RTF_msword97_listOverride@@QAE_NXZ
};

/* ---- TOCEntry (11 方法) ---- */
class TOCEntry {
public:
    public /* 未知 */ calculateLabel(/* TODO 参数 */);  // ?calculateLabel@TOCEntry@@QAEXPAV1@@Z
    public bool doesInherit(/* TODO 参数 */);  // ?doesInherit@TOCEntry@@QAE_NXZ
    public /* 未知 */ getBlock(/* TODO 参数 */);  // ?getBlock@TOCEntry@@QAEPAVfl_BlockLayout@@XZ
    public /* 未知 */ getDispStyle(/* TODO 参数 */);  // ?getDispStyle@TOCEntry@@QAEAAVUT_UTF8String@@XZ
    public /* 未知 */ getFullLabel(/* TODO 参数 */);  // ?getFullLabel@TOCEntry@@QAE?AVUT_UTF8String@@XZ
    public /* 未知 */ getLevel(/* TODO 参数 */);  // ?getLevel@TOCEntry@@QAEHXZ
    public /* 未知 */ getNumLabel(/* TODO 参数 */);  // ?getNumLabel@TOCEntry@@QAEAAVUT_UTF8String@@XZ
    public /* 未知 */ getPosInList(/* TODO 参数 */);  // ?getPosInList@TOCEntry@@QAEHXZ
    public /* 未知 */ getPositionInDoc(/* TODO 参数 */);  // ?getPositionInDoc@TOCEntry@@QAEIXZ
    public const bool hasLabel(/* TODO 参数 */);  // ?hasLabel@TOCEntry@@QBE_NXZ
    public /* 未知 */ setPosInList(/* TODO 参数 */);  // ?setPosInList@TOCEntry@@QAEXH@Z
};

/* ---- Text_Listener (11 方法) ---- */
class Text_Listener {
public:
    protected /* 未知 */ _closeBlock(/* TODO 参数 */);  // ?_closeBlock@Text_Listener@@IAEXXZ
    protected /* 未知 */ _genBOM(/* TODO 参数 */);  // ?_genBOM@Text_Listener@@IAEXXZ
    protected /* 未知 */ _genLineBreak(/* TODO 参数 */);  // ?_genLineBreak@Text_Listener@@IAEXXZ
    protected /* 未知 */ _handleDirMarker(/* TODO 参数 */);  // ?_handleDirMarker@Text_Listener@@IAEXI@Z
    public /* 未知 */ _outputData(/* TODO 参数 */);  // ?_outputData@Text_Listener@@MAEXPBII@Z
    protected /* 未知 */ _wctomb(/* TODO 参数 */);  // ?_wctomb@Text_Listener@@IAEHPADAAHI@Z
    virtual public bool change(/* TODO 参数 */);  // ?change@Text_Listener@@UAE_NPBXPBVPX_ChangeRecord@@@Z
    virtual public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@Text_Listener@@UAE_NPBXPBVPX_ChangeRecord@@0IP6
    virtual public bool populate(/* TODO 参数 */);  // ?populate@Text_Listener@@UAE_NPBXPBVPX_ChangeRecord@@@Z
    virtual public bool populateStrux(/* TODO 参数 */);  // ?populateStrux@Text_Listener@@UAE_NPBXPBVPX_ChangeRecord@@PA
    virtual public bool signal(/* TODO 参数 */);  // ?signal@Text_Listener@@UAE_NI@Z
};

/* ---- UT_AbiObject (6 方法) ---- */
class UT_AbiObject {
public:
    public /* 未知 */ count(/* TODO 参数 */);  // ?count@UT_AbiObject@@QAEIXZ
    virtual public const bool equal(/* TODO 参数 */);  // ?equal@UT_AbiObject@@UBE_NPAV1@@Z
    virtual public const /* 未知 */ hashcode(/* TODO 参数 */);  // ?hashcode@UT_AbiObject@@UBEIXZ
    public /* 未知 */ ref(/* TODO 参数 */);  // ?ref@UT_AbiObject@@QAEIXZ
    public /* 未知 */ sink(/* TODO 参数 */);  // ?sink@UT_AbiObject@@QAEXXZ
    public /* 未知 */ unref(/* TODO 参数 */);  // ?unref@UT_AbiObject@@QAEIXZ
};

/* ---- UT_Bijection (8 方法) ---- */
class UT_Bijection {
public:
    public /* 未知 */ add(/* TODO 参数 */);  // ?add@UT_Bijection@@QAEXPBD0@Z
    public /* 未知 */ add(/* TODO 参数 */);  // ?add@UT_Bijection@@QAEXPBUpair_data@1@@Z
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_Bijection@@QAEXXZ
    public const /* 未知 */ lookupBySource(/* TODO 参数 */);  // ?lookupBySource@UT_Bijection@@QBEPBDPBD@Z
    public const /* 未知 */ lookupByTarget(/* TODO 参数 */);  // ?lookupByTarget@UT_Bijection@@QBEPBDPBD@Z
    public const /* 未知 */ nth1(/* TODO 参数 */);  // ?nth1@UT_Bijection@@QBEPBDI@Z
    public const /* 未知 */ nth2(/* TODO 参数 */);  // ?nth2@UT_Bijection@@QBEPBDI@Z
    public const /* 未知 */ size(/* TODO 参数 */);  // ?size@UT_Bijection@@QBEIXZ
};

/* ---- UT_ByteBuf (12 方法) ---- */
class UT_ByteBuf {
public:
    public /* 未知 */ _byteBuf(/* TODO 参数 */);  // ?_byteBuf@UT_ByteBuf@@AAE_NI@Z
    public bool append(/* TODO 参数 */);  // ?append@UT_ByteBuf@@QAE_NPBEI@Z
    public bool del(/* TODO 参数 */);  // ?del@UT_ByteBuf@@QAE_NII@Z
    public const /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@UT_ByteBuf@@QBEIXZ
    public const /* 未知 */ getPointer(/* TODO 参数 */);  // ?getPointer@UT_ByteBuf@@QBEPBEI@Z
    public bool ins(/* TODO 参数 */);  // ?ins@UT_ByteBuf@@QAE_NII@Z
    public bool ins(/* TODO 参数 */);  // ?ins@UT_ByteBuf@@QAE_NIPBEI@Z
    public bool insertFromFile(/* TODO 参数 */);  // ?insertFromFile@UT_ByteBuf@@QAE_NIPAU_iobuf@@@Z
    public bool insertFromFile(/* TODO 参数 */);  // ?insertFromFile@UT_ByteBuf@@QAE_NIPBD@Z
    public bool overwrite(/* TODO 参数 */);  // ?overwrite@UT_ByteBuf@@QAE_NIPAEI@Z
    public /* 未知 */ truncate(/* TODO 参数 */);  // ?truncate@UT_ByteBuf@@QAEXI@Z
    public const bool writeToFile(/* TODO 参数 */);  // ?writeToFile@UT_ByteBuf@@QBE_NPBD@Z
};

/* ---- UT_Encoding (8 方法) ---- */
class UT_Encoding {
public:
    public /* 未知 */ getCount(/* TODO 参数 */);  // ?getCount@UT_Encoding@@QAEIXZ
    public /* 未知 */ getEncodingFromDescription(/* TODO 参数 */);  // ?getEncodingFromDescription@UT_Encoding@@QAEPBDPBD@Z
    public /* 未知 */ getIdFromEncoding(/* TODO 参数 */);  // ?getIdFromEncoding@UT_Encoding@@QAEIPBD@Z
    public /* 未知 */ getIndxFromEncoding(/* TODO 参数 */);  // ?getIndxFromEncoding@UT_Encoding@@QAEIPBD@Z
    public /* 未知 */ getNthDescription(/* TODO 参数 */);  // ?getNthDescription@UT_Encoding@@QAEPBDI@Z
    public /* 未知 */ getNthEncoding(/* TODO 参数 */);  // ?getNthEncoding@UT_Encoding@@QAEPBDI@Z
    public /* 未知 */ s_Init(/* TODO 参数 */);  // ?s_Init@UT_Encoding@@0_NA
    public /* 未知 */ s_iCount(/* TODO 参数 */);  // ?s_iCount@UT_Encoding@@0IA
};

/* ---- UT_GenericUTF8Hash (14 方法) ---- */
class UT_GenericUTF8Hash {
public:
    protected /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_GenericUTF8Hash@@IAEX_N@Z
    public const /* 未知 */ count(/* TODO 参数 */);  // ?count@UT_GenericUTF8Hash@@QBEIXZ
    public /* 未知 */ del(/* TODO 参数 */);  // ?del@UT_GenericUTF8Hash@@MAE_NABVUT_UTF8String@@@Z
    public /* 未知 */ del(/* TODO 参数 */);  // ?del@UT_GenericUTF8Hash@@MAE_NABVUT_UTF8String@@AAPAVUT_Gene
    public /* 未知 */ del(/* TODO 参数 */);  // ?del@UT_GenericUTF8Hash@@MAE_NPBD@Z
    public /* 未知 */ del(/* TODO 参数 */);  // ?del@UT_GenericUTF8Hash@@MAE_NPBDAAPAVUT_GenericBase@@@Z
    public /* 未知 */ grow(/* TODO 参数 */);  // ?grow@UT_GenericUTF8Hash@@AAE_NXZ
    public /* 未知 */ ins(/* TODO 参数 */);  // ?ins@UT_GenericUTF8Hash@@MAE_NABVUT_UTF8String@@PAVUT_Generi
    public /* 未知 */ lookup(/* TODO 参数 */);  // ?lookup@UT_GenericUTF8Hash@@AAE_NABVUT_UTF8String@@AAI@Z
    public /* 未知 */ lookup(/* TODO 参数 */);  // ?lookup@UT_GenericUTF8Hash@@AAE_NPBDAAI@Z
    public /* 未知 */ lookup(/* TODO 参数 */);  // ?lookup@UT_GenericUTF8Hash@@AAE_NPBDIAAI@Z
    public /* 未知 */ lookup(/* TODO 参数 */);  // ?lookup@UT_GenericUTF8Hash@@MAEPBVUT_GenericBase@@ABVUT_UTF8
    public /* 未知 */ lookup(/* TODO 参数 */);  // ?lookup@UT_GenericUTF8Hash@@MAEPBVUT_GenericBase@@PBD@Z
    public /* 未知 */ pair(/* TODO 参数 */);  // ?pair@UT_GenericUTF8Hash@@MBE_NIAAPBVUT_UTF8String@@AAPBVUT_
};

/* ---- UT_GrowBuf (9 方法) ---- */
class UT_GrowBuf {
public:
    public /* 未知 */ _growBuf(/* TODO 参数 */);  // ?_growBuf@UT_GrowBuf@@AAE_NI@Z
    public bool append(/* TODO 参数 */);  // ?append@UT_GrowBuf@@QAE_NPBHI@Z
    public bool del(/* TODO 参数 */);  // ?del@UT_GrowBuf@@QAE_NII@Z
    public const /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@UT_GrowBuf@@QBEIXZ
    public const /* 未知 */ getPointer(/* TODO 参数 */);  // ?getPointer@UT_GrowBuf@@QBEPAHI@Z
    public bool ins(/* TODO 参数 */);  // ?ins@UT_GrowBuf@@QAE_NII@Z
    public bool ins(/* TODO 参数 */);  // ?ins@UT_GrowBuf@@QAE_NIPBHI@Z
    public bool overwrite(/* TODO 参数 */);  // ?overwrite@UT_GrowBuf@@QAE_NIPAHI@Z
    public /* 未知 */ truncate(/* TODO 参数 */);  // ?truncate@UT_GrowBuf@@QAEXI@Z
};

/* ---- UT_HashColor (6 方法) ---- */
class UT_HashColor {
public:
    public /* 未知 */ lookupNamedColor(/* TODO 参数 */);  // ?lookupNamedColor@UT_HashColor@@QAEPBDPBD@Z
    public /* 未知 */ rgb(/* TODO 参数 */);  // ?rgb@UT_HashColor@@QAE?BVUT_RGBColor@@XZ
    public /* 未知 */ setColor(/* TODO 参数 */);  // ?setColor@UT_HashColor@@QAEPBDABVUT_RGBColor@@@Z
    public /* 未知 */ setColor(/* TODO 参数 */);  // ?setColor@UT_HashColor@@QAEPBDEEE@Z
    public /* 未知 */ setColor(/* TODO 参数 */);  // ?setColor@UT_HashColor@@QAEPBDPBD@Z
    public /* 未知 */ setHashIfValid(/* TODO 参数 */);  // ?setHashIfValid@UT_HashColor@@QAEPBDPBD@Z
};

/* ---- UT_IntStrMap (9 方法) ---- */
class UT_IntStrMap {
public:
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_IntStrMap@@QAEXXZ
    public const /* 未知 */ count(/* TODO 参数 */);  // ?count@UT_IntStrMap@@QBEIXZ
    public bool del(/* TODO 参数 */);  // ?del@UT_IntStrMap@@QAE_NH@Z
    public bool del(/* TODO 参数 */);  // ?del@UT_IntStrMap@@QAE_NHAAPAVUT_UTF8String@@@Z
    public /* 未知 */ grow(/* TODO 参数 */);  // ?grow@UT_IntStrMap@@AAE_NXZ
    public bool ins(/* TODO 参数 */);  // ?ins@UT_IntStrMap@@QAE_NHPAVUT_UTF8String@@@Z
    public bool ins(/* TODO 参数 */);  // ?ins@UT_IntStrMap@@QAE_NHPBD@Z
    public /* 未知 */ lookup(/* TODO 参数 */);  // ?lookup@UT_IntStrMap@@AAE_NHAAI@Z
    public const bool pair(/* TODO 参数 */);  // ?pair@UT_IntStrMap@@QBE_NIAAHAAPBVUT_UTF8String@@@Z
};

/* ---- UT_Language (11 方法) ---- */
class UT_Language {
public:
    public /* 未知 */ getCodeFromCode(/* TODO 参数 */);  // ?getCodeFromCode@UT_Language@@QAEPBDPBD@Z
    public /* 未知 */ getCodeFromName(/* TODO 参数 */);  // ?getCodeFromName@UT_Language@@QAEPBDPBD@Z
    public /* 未知 */ getCount(/* TODO 参数 */);  // ?getCount@UT_Language@@QAEIXZ
    public /* 未知 */ getDirFromCode(/* TODO 参数 */);  // ?getDirFromCode@UT_Language@@QAE?AW4UT_LANGUAGE_DIR@@PBD@Z
    public /* 未知 */ getIdFromCode(/* TODO 参数 */);  // ?getIdFromCode@UT_Language@@QAEIPBD@Z
    public /* 未知 */ getIndxFromCode(/* TODO 参数 */);  // ?getIndxFromCode@UT_Language@@QAEIPBD@Z
    public /* 未知 */ getLangRecordFromCode(/* TODO 参数 */);  // ?getLangRecordFromCode@UT_Language@@QAEPBUUT_LangRecord@@PBD
    public /* 未知 */ getNthId(/* TODO 参数 */);  // ?getNthId@UT_Language@@QAE?BII@Z
    public /* 未知 */ getNthLangCode(/* TODO 参数 */);  // ?getNthLangCode@UT_Language@@QAEPBDI@Z
    public /* 未知 */ getNthLangName(/* TODO 参数 */);  // ?getNthLangName@UT_Language@@QAEPBDI@Z
    public /* 未知 */ s_Init(/* TODO 参数 */);  // ?s_Init@UT_Language@@0_NA
};

/* ---- UT_Map (8 方法, 定制类) ---- */
class UT_Map {
public:
    public /* 未知 */ begin(/* TODO 参数 */);  // ?begin@UT_Map@@QAE?AVIterator@UT_RBTree@@XZ
    public /* 未知 */ end(/* TODO 参数 */);  // ?end@UT_Map@@QAE?AVIterator@UT_RBTree@@XZ
    public /* 未知 */ erase(/* TODO 参数 */);  // ?erase@UT_Map@@QAEXAAVIterator@UT_RBTree@@@Z
    public /* 未知 */ erase(/* TODO 参数 */);  // ?erase@UT_Map@@QAEXPBX@Z
    public /* 未知 */ find(/* TODO 参数 */);  // ?find@UT_Map@@QAE?AVIterator@UT_RBTree@@PBX@Z
    public /* 未知 */ find_if(/* TODO 参数 */);  // ?find_if@UT_Map@@QAE?AVIterator@UT_RBTree@@PBXP6A_N00@Z@Z
    public bool insert(/* TODO 参数 */);  // ?insert@UT_Map@@QAE_NPBX0@Z
    public /* 未知 */ size(/* TODO 参数 */);  // ?size@UT_Map@@QAEIXZ
};

/* ---- UT_NumberMap (9 方法) ---- */
class UT_NumberMap {
public:
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_NumberMap@@QAEXXZ
    public const /* 未知 */ count(/* TODO 参数 */);  // ?count@UT_NumberMap@@QBEIXZ
    public bool del(/* TODO 参数 */);  // ?del@UT_NumberMap@@QAE_NPBD@Z
    public /* 未知 */ grow(/* TODO 参数 */);  // ?grow@UT_NumberMap@@AAE_NXZ
    public bool ins(/* TODO 参数 */);  // ?ins@UT_NumberMap@@QAE_NABVUT_UTF8String@@H@Z
    public /* 未知 */ lookup(/* TODO 参数 */);  // ?lookup@UT_NumberMap@@AAE_NABVUT_UTF8String@@AAI@Z
    public /* 未知 */ lookup(/* TODO 参数 */);  // ?lookup@UT_NumberMap@@AAE_NPBDAAI@Z
    public /* 未知 */ lookup(/* TODO 参数 */);  // ?lookup@UT_NumberMap@@AAE_NPBDIAAI@Z
    public const bool pair(/* TODO 参数 */);  // ?pair@UT_NumberMap@@QBE_NIAAPBVUT_UTF8String@@AAH@Z
};

/* ---- UT_NumberStack (5 方法) ---- */
class UT_NumberStack {
public:
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_NumberStack@@QAEXXZ
    public const /* 未知 */ getDepth(/* TODO 参数 */);  // ?getDepth@UT_NumberStack@@QBEIXZ
    public bool pop(/* TODO 参数 */);  // ?pop@UT_NumberStack@@QAE_NPAH@Z
    public bool push(/* TODO 参数 */);  // ?push@UT_NumberStack@@QAE_NH@Z
    public const bool viewTop(/* TODO 参数 */);  // ?viewTop@UT_NumberStack@@QBE_NAAH@Z
};

/* ---- UT_RBTree (22 方法, 定制类) ---- */
class UT_RBTree {
public:
    public /* 未知 */ _eraseFixup(/* TODO 参数 */);  // ?_eraseFixup@UT_RBTree@@AAEXPAUNode@1@@Z
    public /* 未知 */ _first(/* TODO 参数 */);  // ?_first@UT_RBTree@@AAEPAUNode@1@XZ
    public /* 未知 */ _first(/* TODO 参数 */);  // ?_first@UT_RBTree@@ABEPBUNode@1@XZ
    public /* 未知 */ _insertBST(/* TODO 参数 */);  // ?_insertBST@UT_RBTree@@AAEXPAUNode@1@@Z
    public /* 未知 */ _insertFixup(/* TODO 参数 */);  // ?_insertFixup@UT_RBTree@@AAEXPAUNode@1@@Z
    public /* 未知 */ _last(/* TODO 参数 */);  // ?_last@UT_RBTree@@AAEPAUNode@1@XZ
    public /* 未知 */ _last(/* TODO 参数 */);  // ?_last@UT_RBTree@@ABEPBUNode@1@XZ
    public /* 未知 */ _leftRotate(/* TODO 参数 */);  // ?_leftRotate@UT_RBTree@@AAEXPAUNode@1@@Z
    public /* 未知 */ _next(/* TODO 参数 */);  // ?_next@UT_RBTree@@AAEPAUNode@1@PAU21@@Z
    public /* 未知 */ _next(/* TODO 参数 */);  // ?_next@UT_RBTree@@ABEPBUNode@1@PBU21@@Z
    public /* 未知 */ _prev(/* TODO 参数 */);  // ?_prev@UT_RBTree@@AAEPAUNode@1@PAU21@@Z
    public /* 未知 */ _prev(/* TODO 参数 */);  // ?_prev@UT_RBTree@@ABEPBUNode@1@PBU21@@Z
    public /* 未知 */ _rightRotate(/* TODO 参数 */);  // ?_rightRotate@UT_RBTree@@AAEXPAUNode@1@@Z
    public /* 未知 */ begin(/* TODO 参数 */);  // ?begin@UT_RBTree@@QAE?AVIterator@1@XZ
    public /* 未知 */ end(/* TODO 参数 */);  // ?end@UT_RBTree@@QAE?AVIterator@1@XZ
    public /* 未知 */ erase(/* TODO 参数 */);  // ?erase@UT_RBTree@@QAEXAAVIterator@1@@Z
    public /* 未知 */ find(/* TODO 参数 */);  // ?find@UT_RBTree@@QAE?AVIterator@1@PBX@Z
    public /* 未知 */ find_if(/* TODO 参数 */);  // ?find_if@UT_RBTree@@QAE?AVIterator@1@PBXP6A_N00@Z@Z
    public /* 未知 */ getLeaf(/* TODO 参数 */);  // ?getLeaf@UT_RBTree@@CAPAUNode@1@XZ
    public bool insert(/* TODO 参数 */);  // ?insert@UT_RBTree@@QAE_NPBX@Z
    public /* 未知 */ s_delete_tree(/* TODO 参数 */);  // ?s_delete_tree@UT_RBTree@@CAXPAUNode@1@@Z
    public /* 未知 */ size(/* TODO 参数 */);  // ?size@UT_RBTree@@QAEIXZ
};

/* ---- UT_RGBColor (2 方法) ---- */
class UT_RGBColor {
public:
    public const bool isTransparent(/* TODO 参数 */);  // ?isTransparent@UT_RGBColor@@QBE_NXZ
    public bool setColor(/* TODO 参数 */);  // ?setColor@UT_RGBColor@@QAE_NPBD@Z
};

/* ---- UT_Rect (4 方法) ---- */
class UT_Rect {
public:
    public const bool containsPoint(/* TODO 参数 */);  // ?containsPoint@UT_Rect@@QBE_NHH@Z
    public const bool intersectsRect(/* TODO 参数 */);  // ?intersectsRect@UT_Rect@@QBE_NPBV1@@Z
    public /* 未知 */ set(/* TODO 参数 */);  // ?set@UT_Rect@@QAEXHHHH@Z
    public /* 未知 */ unionRect(/* TODO 参数 */);  // ?unionRect@UT_Rect@@QAEXPBV1@@Z
};

/* ---- UT_SVGMatrix (12 方法) ---- */
class UT_SVGMatrix {
public:
    public bool applyTransform(/* TODO 参数 */);  // ?applyTransform@UT_SVGMatrix@@QAE_NPAV1@PBD@Z
    public /* 未知 */ flipX(/* TODO 参数 */);  // ?flipX@UT_SVGMatrix@@QAE?AV1@XZ
    public /* 未知 */ flipY(/* TODO 参数 */);  // ?flipY@UT_SVGMatrix@@QAE?AV1@XZ
    public /* 未知 */ inverse(/* TODO 参数 */);  // ?inverse@UT_SVGMatrix@@QAE?AV1@XZ
    public /* 未知 */ multiply(/* TODO 参数 */);  // ?multiply@UT_SVGMatrix@@QAE?AV1@ABV1@@Z
    public /* 未知 */ rotate(/* TODO 参数 */);  // ?rotate@UT_SVGMatrix@@QAE?AV1@M@Z
    public /* 未知 */ rotateFromVector(/* TODO 参数 */);  // ?rotateFromVector@UT_SVGMatrix@@QAE?AV1@MM@Z
    public /* 未知 */ scale(/* TODO 参数 */);  // ?scale@UT_SVGMatrix@@QAE?AV1@M@Z
    public /* 未知 */ scaleNonUniform(/* TODO 参数 */);  // ?scaleNonUniform@UT_SVGMatrix@@QAE?AV1@MM@Z
    public /* 未知 */ skewX(/* TODO 参数 */);  // ?skewX@UT_SVGMatrix@@QAE?AV1@M@Z
    public /* 未知 */ skewY(/* TODO 参数 */);  // ?skewY@UT_SVGMatrix@@QAE?AV1@M@Z
    public /* 未知 */ translate(/* TODO 参数 */);  // ?translate@UT_SVGMatrix@@QAE?AV1@MM@Z
};

/* ---- UT_ScriptLibrary (14 方法) ---- */
class UT_ScriptLibrary {
public:
    public /* 未知 */ constructScript(/* TODO 参数 */);  // ?constructScript@UT_ScriptLibrary@@AAEHPBDHPAPAVUT_Script@@P
    public bool enumerateDlgLabels(/* TODO 参数 */);  // ?enumerateDlgLabels@UT_ScriptLibrary@@QAE_NIPAPBD0PAH@Z
    public /* 未知 */ errmsg(/* TODO 参数 */);  // ?errmsg@UT_ScriptLibrary@@AAEXABVUT_String@@@Z
    public const /* 未知 */ errmsg(/* TODO 参数 */);  // ?errmsg@UT_ScriptLibrary@@QBEABVUT_String@@XZ
    public /* 未知 */ execute(/* TODO 参数 */);  // ?execute@UT_ScriptLibrary@@QAEHPBDH@Z
    public const /* 未知 */ getNumScripts(/* TODO 参数 */);  // ?getNumScripts@UT_ScriptLibrary@@QBEIXZ
    public /* 未知 */ instance(/* TODO 参数 */);  // ?instance@UT_ScriptLibrary@@SAAAV1@XZ
    public /* 未知 */ mInstance(/* TODO 参数 */);  // ?mInstance@UT_ScriptLibrary@@0V1@A
    public /* 未知 */ registerScript(/* TODO 参数 */);  // ?registerScript@UT_ScriptLibrary@@QAEXPAVUT_ScriptSniffer@@@
    public /* 未知 */ suffixesForType(/* TODO 参数 */);  // ?suffixesForType@UT_ScriptLibrary@@AAEPBDH@Z
    public /* 未知 */ typeForContents(/* TODO 参数 */);  // ?typeForContents@UT_ScriptLibrary@@AAEHPBDI@Z
    public /* 未知 */ typeForSuffix(/* TODO 参数 */);  // ?typeForSuffix@UT_ScriptLibrary@@AAEHPBD@Z
    public /* 未知 */ unregisterAllScripts(/* TODO 参数 */);  // ?unregisterAllScripts@UT_ScriptLibrary@@QAEXXZ
    public /* 未知 */ unregisterScript(/* TODO 参数 */);  // ?unregisterScript@UT_ScriptLibrary@@QAEXPAVUT_ScriptSniffer@
};

/* ---- UT_ScriptSniffer (3 方法) ---- */
class UT_ScriptSniffer {
public:
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@UT_ScriptSniffer@@QBEHXZ
    public /* 未知 */ setType(/* TODO 参数 */);  // ?setType@UT_ScriptSniffer@@AAEXH@Z
    public bool supportsType(/* TODO 参数 */);  // ?supportsType@UT_ScriptSniffer@@QAE_NH@Z
};

/* ---- UT_Set (7 方法, 定制类) ---- */
class UT_Set {
public:
    public /* 未知 */ begin(/* TODO 参数 */);  // ?begin@UT_Set@@QAE?AVIterator@UT_RBTree@@XZ
    public /* 未知 */ end(/* TODO 参数 */);  // ?end@UT_Set@@QAE?AVIterator@UT_RBTree@@XZ
    public /* 未知 */ erase(/* TODO 参数 */);  // ?erase@UT_Set@@QAEXAAVIterator@UT_RBTree@@@Z
    public /* 未知 */ find(/* TODO 参数 */);  // ?find@UT_Set@@QAE?AVIterator@UT_RBTree@@PBX@Z
    public /* 未知 */ find_if(/* TODO 参数 */);  // ?find_if@UT_Set@@QAE?AVIterator@UT_RBTree@@PBXP6A_N00@Z@Z
    public bool insert(/* TODO 参数 */);  // ?insert@UT_Set@@QAE_NPBX@Z
    public /* 未知 */ size(/* TODO 参数 */);  // ?size@UT_Set@@QAEIXZ
};

/* ---- UT_Stack (5 方法) ---- */
class UT_Stack {
public:
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_Stack@@QAEXXZ
    public const /* 未知 */ getDepth(/* TODO 参数 */);  // ?getDepth@UT_Stack@@QBEIXZ
    public bool pop(/* TODO 参数 */);  // ?pop@UT_Stack@@QAE_NPAPAX@Z
    public bool push(/* TODO 参数 */);  // ?push@UT_Stack@@QAE_NPAX@Z
    public const bool viewTop(/* TODO 参数 */);  // ?viewTop@UT_Stack@@QBE_NPAPAX@Z
};

/* ---- UT_String (7 方法) ---- */
class UT_String {
public:
    public const /* 未知 */ c_str(/* TODO 参数 */);  // ?c_str@UT_String@@QBEPBDXZ
    public const /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_String@@QBEXXZ
    public const bool empty(/* TODO 参数 */);  // ?empty@UT_String@@QBE_NXZ
    public const /* 未知 */ length(/* TODO 参数 */);  // ?length@UT_String@@QBEIXZ
    public const /* 未知 */ size(/* TODO 参数 */);  // ?size@UT_String@@QBEIXZ
    public const /* 未知 */ substr(/* TODO 参数 */);  // ?substr@UT_String@@QBE?AV1@II@Z
    public /* 未知 */ swap(/* TODO 参数 */);  // ?swap@UT_String@@QAEXAAV1@@Z
};

/* ---- UT_Stringbuf (14 方法) ---- */
class UT_Stringbuf {
public:
    public /* 未知 */ append(/* TODO 参数 */);  // ?append@UT_Stringbuf@@QAEXABV1@@Z
    public /* 未知 */ append(/* TODO 参数 */);  // ?append@UT_Stringbuf@@QAEXPBDI@Z
    public /* 未知 */ assign(/* TODO 参数 */);  // ?assign@UT_Stringbuf@@QAEXPBDI@Z
    public const /* 未知 */ capacity(/* TODO 参数 */);  // ?capacity@UT_Stringbuf@@QBEIXZ
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_Stringbuf@@QAEXXZ
    public /* 未知 */ copy(/* TODO 参数 */);  // ?copy@UT_Stringbuf@@CAXPADPBDI@Z
    public /* 未知 */ data(/* TODO 参数 */);  // ?data@UT_Stringbuf@@QAEPADXZ
    public const /* 未知 */ data(/* TODO 参数 */);  // ?data@UT_Stringbuf@@QBEPBDXZ
    public const bool empty(/* TODO 参数 */);  // ?empty@UT_Stringbuf@@QBE_NXZ
    public /* 未知 */ grow_common(/* TODO 参数 */);  // ?grow_common@UT_Stringbuf@@AAEXI_N@Z
    public /* 未知 */ grow_copy(/* TODO 参数 */);  // ?grow_copy@UT_Stringbuf@@AAEXI@Z
    public /* 未知 */ grow_nocopy(/* TODO 参数 */);  // ?grow_nocopy@UT_Stringbuf@@AAEXI@Z
    public const /* 未知 */ size(/* TODO 参数 */);  // ?size@UT_Stringbuf@@QBEIXZ
    public /* 未知 */ swap(/* TODO 参数 */);  // ?swap@UT_Stringbuf@@QAEXAAV1@@Z
};

/* ---- UT_Timer (7 方法) ---- */
class UT_Timer {
public:
    public /* 未知 */ _getVecTimers(/* TODO 参数 */);  // ?_getVecTimers@UT_Timer@@KAAAV?$UT_GenericVector@PAVUT_Timer
    public /* 未知 */ findTimer(/* TODO 参数 */);  // ?findTimer@UT_Timer@@SAPAV1@I@Z
    public /* 未知 */ getIdentifier(/* TODO 参数 */);  // ?getIdentifier@UT_Timer@@QAEIXZ
    virtual public /* 未知 */ setCallback(/* TODO 参数 */);  // ?setCallback@UT_Timer@@UAEXP6AXPAVUT_Worker@@@Z@Z
    public /* 未知 */ setIdentifier(/* TODO 参数 */);  // ?setIdentifier@UT_Timer@@QAEXI@Z
    public /* 未知 */ setInstanceData(/* TODO 参数 */);  // ?setInstanceData@UT_Timer@@QAEXPAX@Z
    public /* 未知 */ static_constructor(/* TODO 参数 */);  // ?static_constructor@UT_Timer@@SAPAV1@P6AXPAVUT_Worker@@@ZPAX
};

/* ---- UT_UCS2_mbtowc (3 方法) ---- */
class UT_UCS2_mbtowc {
public:
    public /* 未知 */ initialize(/* TODO 参数 */);  // ?initialize@UT_UCS2_mbtowc@@QAEX_N@Z
    public /* 未知 */ mbtowc(/* TODO 参数 */);  // ?mbtowc@UT_UCS2_mbtowc@@QAEHAAGD@Z
    public /* 未知 */ setInCharset(/* TODO 参数 */);  // ?setInCharset@UT_UCS2_mbtowc@@QAEXPBD@Z
};

/* ---- UT_UCS4String (8 方法) ---- */
class UT_UCS4String {
public:
    public const /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_UCS4String@@QBEXXZ
    public const bool empty(/* TODO 参数 */);  // ?empty@UT_UCS4String@@QBE_NXZ
    public const /* 未知 */ length(/* TODO 参数 */);  // ?length@UT_UCS4String@@QBEIXZ
    public const /* 未知 */ size(/* TODO 参数 */);  // ?size@UT_UCS4String@@QBEIXZ
    public const /* 未知 */ substr(/* TODO 参数 */);  // ?substr@UT_UCS4String@@QBE?AV1@II@Z
    public /* 未知 */ swap(/* TODO 参数 */);  // ?swap@UT_UCS4String@@QAEXAAV1@@Z
    public const /* 未知 */ ucs4_str(/* TODO 参数 */);  // ?ucs4_str@UT_UCS4String@@QBEPBIXZ
    public /* 未知 */ utf8_str(/* TODO 参数 */);  // ?utf8_str@UT_UCS4String@@QAEPBDXZ
};

/* ---- UT_UCS4Stringbuf (18 方法) ---- */
class UT_UCS4Stringbuf {
public:
    public /* 未知 */ UCS4_to_UTF8(/* TODO 参数 */);  // ?UCS4_to_UTF8@UT_UCS4Stringbuf@@SA_NAAPADAAII@Z
    public /* 未知 */ UTF8_ByteLength(/* TODO 参数 */);  // ?UTF8_ByteLength@UT_UCS4Stringbuf@@SAHI@Z
    public /* 未知 */ UTF8_to_UCS4(/* TODO 参数 */);  // ?UTF8_to_UCS4@UT_UCS4Stringbuf@@SAIAAPBDAAI@Z
    public /* 未知 */ append(/* TODO 参数 */);  // ?append@UT_UCS4Stringbuf@@QAEXABV1@@Z
    public /* 未知 */ append(/* TODO 参数 */);  // ?append@UT_UCS4Stringbuf@@QAEXPBII@Z
    public /* 未知 */ assign(/* TODO 参数 */);  // ?assign@UT_UCS4Stringbuf@@QAEXPBII@Z
    public const /* 未知 */ capacity(/* TODO 参数 */);  // ?capacity@UT_UCS4Stringbuf@@QBEIXZ
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_UCS4Stringbuf@@QAEXXZ
    public /* 未知 */ copy(/* TODO 参数 */);  // ?copy@UT_UCS4Stringbuf@@CAXPAIPBII@Z
    public /* 未知 */ data(/* TODO 参数 */);  // ?data@UT_UCS4Stringbuf@@QAEPAIXZ
    public const /* 未知 */ data(/* TODO 参数 */);  // ?data@UT_UCS4Stringbuf@@QBEPBIXZ
    public const bool empty(/* TODO 参数 */);  // ?empty@UT_UCS4Stringbuf@@QBE_NXZ
    public /* 未知 */ grow_common(/* TODO 参数 */);  // ?grow_common@UT_UCS4Stringbuf@@AAEXI_N@Z
    public /* 未知 */ grow_copy(/* TODO 参数 */);  // ?grow_copy@UT_UCS4Stringbuf@@AAEXI@Z
    public /* 未知 */ grow_nocopy(/* TODO 参数 */);  // ?grow_nocopy@UT_UCS4Stringbuf@@AAEXI@Z
    public const /* 未知 */ size(/* TODO 参数 */);  // ?size@UT_UCS4Stringbuf@@QBEIXZ
    public /* 未知 */ swap(/* TODO 参数 */);  // ?swap@UT_UCS4Stringbuf@@QAEXAAV1@@Z
    public /* 未知 */ utf8_data(/* TODO 参数 */);  // ?utf8_data@UT_UCS4Stringbuf@@QAEPBDXZ
};

/* ---- UT_UCS4_mbtowc (3 方法) ---- */
class UT_UCS4_mbtowc {
public:
    public /* 未知 */ initialize(/* TODO 参数 */);  // ?initialize@UT_UCS4_mbtowc@@QAEX_N@Z
    public /* 未知 */ mbtowc(/* TODO 参数 */);  // ?mbtowc@UT_UCS4_mbtowc@@QAEHAAID@Z
    public /* 未知 */ setInCharset(/* TODO 参数 */);  // ?setInCharset@UT_UCS4_mbtowc@@QAEXPBD@Z
};

/* ---- UT_UTF8Hash (12 方法) ---- */
class UT_UTF8Hash {
public:
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_UTF8Hash@@QAEXXZ
    public bool del(/* TODO 参数 */);  // ?del@UT_UTF8Hash@@QAE_NABVUT_UTF8String@@AAPAV2@@Z
    public bool del(/* TODO 参数 */);  // ?del@UT_UTF8Hash@@QAE_NPBDAAPAVUT_UTF8String@@@Z
    virtual public bool del(/* TODO 参数 */);  // ?del@UT_UTF8Hash@@UAE_NABVUT_UTF8String@@@Z
    virtual public bool del(/* TODO 参数 */);  // ?del@UT_UTF8Hash@@UAE_NPBD@Z
    public bool ins(/* TODO 参数 */);  // ?ins@UT_UTF8Hash@@QAE_NABVUT_UTF8String@@0@Z
    public bool ins(/* TODO 参数 */);  // ?ins@UT_UTF8Hash@@QAE_NABVUT_UTF8String@@PAV2@@Z
    public bool ins(/* TODO 参数 */);  // ?ins@UT_UTF8Hash@@QAE_NPAPBD@Z
    public bool ins(/* TODO 参数 */);  // ?ins@UT_UTF8Hash@@QAE_NPBD0@Z
    public const bool pair(/* TODO 参数 */);  // ?pair@UT_UTF8Hash@@QBE_NIAAPBVUT_UTF8String@@0@Z
    public /* 未知 */ parse_attributes(/* TODO 参数 */);  // ?parse_attributes@UT_UTF8Hash@@QAEXPBD@Z
    public /* 未知 */ parse_properties(/* TODO 参数 */);  // ?parse_properties@UT_UTF8Hash@@QAEXPBD@Z
};

/* ---- UT_UTF8String (22 方法) ---- */
class UT_UTF8String {
public:
    virtual public const /* 未知 */ GenericBaseID(/* TODO 参数 */);  // ?GenericBaseID@UT_UTF8String@@UBEPBDXZ
    public /* 未知 */ append(/* TODO 参数 */);  // ?append@UT_UTF8String@@QAEXPBDI@Z
    public /* 未知 */ appendBuf(/* TODO 参数 */);  // ?appendBuf@UT_UTF8String@@QAEXABVUT_ByteBuf@@AAVUT_UCS4_mbto
    public /* 未知 */ appendUCS2(/* TODO 参数 */);  // ?appendUCS2@UT_UTF8String@@QAEXPBGI@Z
    public /* 未知 */ appendUCS4(/* TODO 参数 */);  // ?appendUCS4@UT_UTF8String@@QAEXPBII@Z
    public /* 未知 */ assign(/* TODO 参数 */);  // ?assign@UT_UTF8String@@QAEXPBDI@Z
    public const /* 未知 */ byteLength(/* TODO 参数 */);  // ?byteLength@UT_UTF8String@@QBEIXZ
    public const /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_UTF8String@@QBEXXZ
    public /* 未知 */ decodeURL(/* TODO 参数 */);  // ?decodeURL@UT_UTF8String@@QAEABV1@XZ
    public const /* 未知 */ dump(/* TODO 参数 */);  // ?dump@UT_UTF8String@@QBEXXZ
    public const bool empty(/* TODO 参数 */);  // ?empty@UT_UTF8String@@QBE_NXZ
    public /* 未知 */ escape(/* TODO 参数 */);  // ?escape@UT_UTF8String@@QAEABV1@ABV1@0@Z
    public /* 未知 */ escapeMIME(/* TODO 参数 */);  // ?escapeMIME@UT_UTF8String@@QAEABV1@XZ
    public /* 未知 */ escapeURL(/* TODO 参数 */);  // ?escapeURL@UT_UTF8String@@QAEABV1@XZ
    public /* 未知 */ escapeXML(/* TODO 参数 */);  // ?escapeXML@UT_UTF8String@@QAEABV1@XZ
    public const /* 未知 */ getIterator(/* TODO 参数 */);  // ?getIterator@UT_UTF8String@@QBE?AVUTF8Iterator@UT_UTF8String
    public const /* 未知 */ length(/* TODO 参数 */);  // ?length@UT_UTF8String@@QBEIXZ
    public /* 未知 */ lowerCase(/* TODO 参数 */);  // ?lowerCase@UT_UTF8String@@QAEABV1@XZ
    public const /* 未知 */ size(/* TODO 参数 */);  // ?size@UT_UTF8String@@QBEIXZ
    public const /* 未知 */ substr(/* TODO 参数 */);  // ?substr@UT_UTF8String@@QBE?AV1@II@Z
    public /* 未知 */ ucs4_str(/* TODO 参数 */);  // ?ucs4_str@UT_UTF8String@@QAE?AVUT_UCS4String@@XZ
    public const /* 未知 */ utf8_str(/* TODO 参数 */);  // ?utf8_str@UT_UTF8String@@QBEPBDXZ
};

/* ---- UT_UTF8Stringbuf (19 方法) ---- */
class UT_UTF8Stringbuf {
public:
    public /* 未知 */ append(/* TODO 参数 */);  // ?append@UT_UTF8Stringbuf@@QAEXABV1@@Z
    public /* 未知 */ append(/* TODO 参数 */);  // ?append@UT_UTF8Stringbuf@@QAEXPBDI@Z
    public /* 未知 */ appendUCS2(/* TODO 参数 */);  // ?appendUCS2@UT_UTF8Stringbuf@@QAEXPBGI@Z
    public /* 未知 */ appendUCS4(/* TODO 参数 */);  // ?appendUCS4@UT_UTF8Stringbuf@@QAEXPBII@Z
    public /* 未知 */ assign(/* TODO 参数 */);  // ?assign@UT_UTF8Stringbuf@@QAEXPBDI@Z
    public const /* 未知 */ byteLength(/* TODO 参数 */);  // ?byteLength@UT_UTF8Stringbuf@@QBEIXZ
    public /* 未知 */ charCode(/* TODO 参数 */);  // ?charCode@UT_UTF8Stringbuf@@SAIPBD@Z
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_UTF8Stringbuf@@QAEXXZ
    public const /* 未知 */ data(/* TODO 参数 */);  // ?data@UT_UTF8Stringbuf@@QBEPBDXZ
    public /* 未知 */ decodeURL(/* TODO 参数 */);  // ?decodeURL@UT_UTF8Stringbuf@@QAEXXZ
    public const bool empty(/* TODO 参数 */);  // ?empty@UT_UTF8Stringbuf@@QBE_NXZ
    public /* 未知 */ escape(/* TODO 参数 */);  // ?escape@UT_UTF8Stringbuf@@QAEXABVUT_UTF8String@@0@Z
    public /* 未知 */ escapeMIME(/* TODO 参数 */);  // ?escapeMIME@UT_UTF8Stringbuf@@QAEXXZ
    public /* 未知 */ escapeURL(/* TODO 参数 */);  // ?escapeURL@UT_UTF8Stringbuf@@QAEXXZ
    public /* 未知 */ escapeXML(/* TODO 参数 */);  // ?escapeXML@UT_UTF8Stringbuf@@QAEXXZ
    public /* 未知 */ grow(/* TODO 参数 */);  // ?grow@UT_UTF8Stringbuf@@AAE_NI@Z
    public /* 未知 */ insert(/* TODO 参数 */);  // ?insert@UT_UTF8Stringbuf@@AAEXAAPADPBDI@Z
    public /* 未知 */ lowerCase(/* TODO 参数 */);  // ?lowerCase@UT_UTF8Stringbuf@@QAEPAV1@XZ
    public const /* 未知 */ utf8Length(/* TODO 参数 */);  // ?utf8Length@UT_UTF8Stringbuf@@QBEIXZ
};

/* ---- UT_UUID (32 方法) ---- */
class UT_UUID {
public:
    public /* 未知 */ _getClock(/* TODO 参数 */);  // ?_getClock@UT_UUID@@ABE_NAAI0AAG@Z
    public /* 未知 */ _getRandomBytes(/* TODO 参数 */);  // ?_getRandomBytes@UT_UUID@@MBE_NPAXH@Z
    public /* 未知 */ _getTime(/* TODO 参数 */);  // ?_getTime@UT_UUID@@CAJABUuuid@@@Z
    public /* 未知 */ _getType(/* TODO 参数 */);  // ?_getType@UT_UUID@@CAHABUuuid@@@Z
    public /* 未知 */ _getVariant(/* TODO 参数 */);  // ?_getVariant@UT_UUID@@CA?AW4UT_UUIDVariant@@ABUuuid@@@Z
    public /* 未知 */ _makeUUID(/* TODO 参数 */);  // ?_makeUUID@UT_UUID@@AAE_NAAUuuid@@@Z
    public /* 未知 */ _parse(/* TODO 参数 */);  // ?_parse@UT_UUID@@ABE_NPBDAAUuuid@@@Z
    public /* 未知 */ _toString(/* TODO 参数 */);  // ?_toString@UT_UUID@@ABE_NABUuuid@@AAVUT_UTF8String@@@Z
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@UT_UUID@@QAEXXZ
    public /* 未知 */ getNull(/* TODO 参数 */);  // ?getNull@UT_UUID@@SAABV1@XZ
    public const /* 未知 */ getTime(/* TODO 参数 */);  // ?getTime@UT_UUID@@QBEJXZ
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@UT_UUID@@QBEHXZ
    public const /* 未知 */ getVariant(/* TODO 参数 */);  // ?getVariant@UT_UUID@@QBE?AW4UT_UUIDVariant@@XZ
    public const /* 未知 */ hash32(/* TODO 参数 */);  // ?hash32@UT_UUID@@QBEIXZ
    public const /* 未知 */ hash64(/* TODO 参数 */);  // ?hash64@UT_UUID@@QBE_JXZ
    public const bool isNull(/* TODO 参数 */);  // ?isNull@UT_UUID@@QBE_NXZ
    public const bool isOfSameAge(/* TODO 参数 */);  // ?isOfSameAge@UT_UUID@@QBE_NABV1@@Z
    public const bool isOlder(/* TODO 参数 */);  // ?isOlder@UT_UUID@@QBE_NABV1@@Z
    public const bool isValid(/* TODO 参数 */);  // ?isValid@UT_UUID@@QBE_NXZ
    public const bool isYounger(/* TODO 参数 */);  // ?isYounger@UT_UUID@@QBE_NABV1@@Z
    public bool makeUUID(/* TODO 参数 */);  // ?makeUUID@UT_UUID@@QAE_NAAVUT_UTF8String@@@Z
    public bool makeUUID(/* TODO 参数 */);  // ?makeUUID@UT_UUID@@QAE_NXZ
    public bool resetTime(/* TODO 参数 */);  // ?resetTime@UT_UUID@@QAE_NXZ
    public /* 未知 */ s_Null(/* TODO 参数 */);  // ?s_Null@UT_UUID@@0V1@A
    public /* 未知 */ s_bInitDone(/* TODO 参数 */);  // ?s_bInitDone@UT_UUID@@0_NA
    public /* 未知 */ s_node(/* TODO 参数 */);  // ?s_node@UT_UUID@@0PAEA
    public bool setUUID(/* TODO 参数 */);  // ?setUUID@UT_UUID@@QAE_NABUuuid@@@Z
    public bool setUUID(/* TODO 参数 */);  // ?setUUID@UT_UUID@@QAE_NABVUT_UTF8String@@@Z
    public bool setUUID(/* TODO 参数 */);  // ?setUUID@UT_UUID@@QAE_NPBD@Z
    public const bool toBinary(/* TODO 参数 */);  // ?toBinary@UT_UUID@@QBE_NAAUuuid@@@Z
    public const bool toString(/* TODO 参数 */);  // ?toString@UT_UUID@@QBE_NAAVUT_UTF8String@@@Z
    public /* 未知 */ toStringFromBinary(/* TODO 参数 */);  // ?toStringFromBinary@UT_UUID@@SA_NPADIABUuuid@@@Z
};

/* ---- UT_UUIDGenerator (7 方法) ---- */
class UT_UUIDGenerator {
public:
    virtual public /* 未知 */ createUUID(/* TODO 参数 */);  // ?createUUID@UT_UUIDGenerator@@UAEPAVUT_UUID@@ABUuuid@@@Z
    virtual public /* 未知 */ createUUID(/* TODO 参数 */);  // ?createUUID@UT_UUIDGenerator@@UAEPAVUT_UUID@@ABV2@@Z
    virtual public /* 未知 */ createUUID(/* TODO 参数 */);  // ?createUUID@UT_UUIDGenerator@@UAEPAVUT_UUID@@ABVUT_UTF8Strin
    virtual public /* 未知 */ createUUID(/* TODO 参数 */);  // ?createUUID@UT_UUIDGenerator@@UAEPAVUT_UUID@@PBD@Z
    virtual public /* 未知 */ createUUID(/* TODO 参数 */);  // ?createUUID@UT_UUIDGenerator@@UAEPAVUT_UUID@@XZ
    public /* 未知 */ getNewUUID32(/* TODO 参数 */);  // ?getNewUUID32@UT_UUIDGenerator@@QAEIXZ
    public /* 未知 */ getNewUUID64(/* TODO 参数 */);  // ?getNewUUID64@UT_UUIDGenerator@@QAE_JXZ
};

/* ---- UT_UniqueId (3 方法) ---- */
class UT_UniqueId {
public:
    public /* 未知 */ getUID(/* TODO 参数 */);  // ?getUID@UT_UniqueId@@QAEIW4idType@1@@Z
    public bool isIdUnique(/* TODO 参数 */);  // ?isIdUnique@UT_UniqueId@@QAE_NW4idType@1@I@Z
    public bool setMinId(/* TODO 参数 */);  // ?setMinId@UT_UniqueId@@QAE_NW4idType@1@I@Z
};

/* ---- UT_VersionInfo (6 方法) ---- */
class UT_VersionInfo {
public:
    public const /* 未知 */ getMajor(/* TODO 参数 */);  // ?getMajor@UT_VersionInfo@@QBEIXZ
    public const /* 未知 */ getMicro(/* TODO 参数 */);  // ?getMicro@UT_VersionInfo@@QBEIXZ
    public const /* 未知 */ getMinor(/* TODO 参数 */);  // ?getMinor@UT_VersionInfo@@QBEIXZ
    public const /* 未知 */ getNano(/* TODO 参数 */);  // ?getNano@UT_VersionInfo@@QBEIXZ
    public const /* 未知 */ getString(/* TODO 参数 */);  // ?getString@UT_VersionInfo@@QBEABVUT_UTF8String@@XZ
    public /* 未知 */ set(/* TODO 参数 */);  // ?set@UT_VersionInfo@@QAEXIIII@Z
};

/* ---- UT_Wctomb (4 方法) ---- */
class UT_Wctomb {
public:
    public /* 未知 */ initialize(/* TODO 参数 */);  // ?initialize@UT_Wctomb@@QAEXXZ
    public /* 未知 */ setOutCharset(/* TODO 参数 */);  // ?setOutCharset@UT_Wctomb@@QAEXPBD@Z
    public /* 未知 */ wctomb(/* TODO 参数 */);  // ?wctomb@UT_Wctomb@@QAEHPADAAHIH@Z
    public /* 未知 */ wctomb_or_fallback(/* TODO 参数 */);  // ?wctomb_or_fallback@UT_Wctomb@@QAEXPADAAHIH@Z
};

/* ---- UT_Win32Timer (13 方法) ---- */
class UT_Win32Timer {
public:
    public /* 未知 */ _compareIdentifiers(/* TODO 参数 */);  // ?_compareIdentifiers@UT_Win32Timer@@KAHPBX0@Z
    protected /* 未知 */ _createIdentifier(/* TODO 参数 */);  // ?_createIdentifier@UT_Win32Timer@@IAEIXZ
    protected /* 未知 */ _createWin32Identifier(/* TODO 参数 */);  // ?_createWin32Identifier@UT_Win32Timer@@IAEIXZ
    public /* 未知 */ findWin32Timer(/* TODO 参数 */);  // ?findWin32Timer@UT_Win32Timer@@SAPAV1@PAUHWND__@@I@Z
    public /* 未知 */ getHWnd(/* TODO 参数 */);  // ?getHWnd@UT_Win32Timer@@QAEPAUHWND__@@XZ
    public /* 未知 */ getWin32Identifier(/* TODO 参数 */);  // ?getWin32Identifier@UT_Win32Timer@@QAEIXZ
    public bool isActive(/* TODO 参数 */);  // ?isActive@UT_Win32Timer@@QAE_NXZ
    public /* 未知 */ pauseAllTimers(/* TODO 参数 */);  // ?pauseAllTimers@UT_Win32Timer@@SAX_N@Z
    public /* 未知 */ s_bPauseAllTimers(/* TODO 参数 */);  // ?s_bPauseAllTimers@UT_Win32Timer@@0_NA
    virtual public /* 未知 */ set(/* TODO 参数 */);  // ?set@UT_Win32Timer@@UAEHI@Z
    virtual public /* 未知 */ start(/* TODO 参数 */);  // ?start@UT_Win32Timer@@UAEXXZ
    virtual public /* 未知 */ stop(/* TODO 参数 */);  // ?stop@UT_Win32Timer@@UAEXXZ
    public /* 未知 */ timersPaused(/* TODO 参数 */);  // ?timersPaused@UT_Win32Timer@@SA_NXZ
};

/* ---- UT_Win32UUID (3 方法) ---- */
class UT_Win32UUID {
public:
    public /* 未知 */ _getRandomBytes(/* TODO 参数 */);  // ?_getRandomBytes@UT_Win32UUID@@MAE_NPAXH@Z
    public /* 未知 */ s_hProv(/* TODO 参数 */);  // ?s_hProv@UT_Win32UUID@@0KA
    public /* 未知 */ s_iInstCount(/* TODO 参数 */);  // ?s_iInstCount@UT_Win32UUID@@0HA
};

/* ---- UT_Win32UUIDGenerator (5 方法) ---- */
class UT_Win32UUIDGenerator {
public:
    virtual public /* 未知 */ createUUID(/* TODO 参数 */);  // ?createUUID@UT_Win32UUIDGenerator@@UAEPAVUT_UUID@@ABUuuid@@@
    virtual public /* 未知 */ createUUID(/* TODO 参数 */);  // ?createUUID@UT_Win32UUIDGenerator@@UAEPAVUT_UUID@@ABV2@@Z
    virtual public /* 未知 */ createUUID(/* TODO 参数 */);  // ?createUUID@UT_Win32UUIDGenerator@@UAEPAVUT_UUID@@ABVUT_UTF8
    virtual public /* 未知 */ createUUID(/* TODO 参数 */);  // ?createUUID@UT_Win32UUIDGenerator@@UAEPAVUT_UUID@@PBD@Z
    virtual public /* 未知 */ createUUID(/* TODO 参数 */);  // ?createUUID@UT_Win32UUIDGenerator@@UAEPAVUT_UUID@@XZ
};

/* ---- UT_Worker (5 方法) ---- */
class UT_Worker {
public:
    protected /* 未知 */ _setCallback(/* TODO 参数 */);  // ?_setCallback@UT_Worker@@IAEXP6AXPAV1@@Z@Z
    protected /* 未知 */ _setInstanceData(/* TODO 参数 */);  // ?_setInstanceData@UT_Worker@@IAEXPAX@Z
    virtual public /* 未知 */ fire(/* TODO 参数 */);  // ?fire@UT_Worker@@UAEXXZ
    public const /* 未知 */ getCallback(/* TODO 参数 */);  // ?getCallback@UT_Worker@@QBEP6AXPAV1@@ZXZ
    public const /* 未知 */ getInstanceData(/* TODO 参数 */);  // ?getInstanceData@UT_Worker@@QBEPAXXZ
};

/* ---- UT_WorkerFactory (1 方法) ---- */
class UT_WorkerFactory {
public:
    public /* 未知 */ static_constructor(/* TODO 参数 */);  // ?static_constructor@UT_WorkerFactory@@SAPAVUT_Worker@@P6AXPA
};

/* ---- UT_XML (26 方法) ---- */
class UT_XML {
public:
    public /* 未知 */ _cleanup(/* TODO 参数 */);  // ?_cleanup@UT_XML@@AAEXXZ
    public /* 未知 */ _init(/* TODO 参数 */);  // ?_init@UT_XML@@AAEXXZ
    public /* 未知 */ cdataSection(/* TODO 参数 */);  // ?cdataSection@UT_XML@@QAEX_N@Z
    public /* 未知 */ charData(/* TODO 参数 */);  // ?charData@UT_XML@@QAEXPBDH@Z
    public /* 未知 */ comment(/* TODO 参数 */);  // ?comment@UT_XML@@QAEXPBD@Z
    public /* 未知 */ defaultData(/* TODO 参数 */);  // ?defaultData@UT_XML@@QAEXPBDH@Z
    public /* 未知 */ endElement(/* TODO 参数 */);  // ?endElement@UT_XML@@QAEXPBD@Z
    public /* 未知 */ flush_all(/* TODO 参数 */);  // ?flush_all@UT_XML@@AAEXXZ
    public const /* 未知 */ getNumMinorErrors(/* TODO 参数 */);  // ?getNumMinorErrors@UT_XML@@QBEHXZ
    public const /* 未知 */ getNumRecoveredErrors(/* TODO 参数 */);  // ?getNumRecoveredErrors@UT_XML@@QBEHXZ
    public /* 未知 */ grow(/* TODO 参数 */);  // ?grow@UT_XML@@AAE_NAAPADAAI1I@Z
    public /* 未知 */ incMinorErrors(/* TODO 参数 */);  // ?incMinorErrors@UT_XML@@QAEXXZ
    public /* 未知 */ incRecoveredErrors(/* TODO 参数 */);  // ?incRecoveredErrors@UT_XML@@QAEXXZ
    public /* 未知 */ parse(/* TODO 参数 */);  // ?parse@UT_XML@@QAEHPBVUT_ByteBuf@@@Z
    virtual public /* 未知 */ parse(/* TODO 参数 */);  // ?parse@UT_XML@@UAEHPBD@Z
    virtual public /* 未知 */ parse(/* TODO 参数 */);  // ?parse@UT_XML@@UAEHPBDI@Z
    public /* 未知 */ processingInstruction(/* TODO 参数 */);  // ?processingInstruction@UT_XML@@QAEXPBD0@Z
    protected bool reset_all(/* TODO 参数 */);  // ?reset_all@UT_XML@@IAE_NXZ
    public /* 未知 */ setExpertListener(/* TODO 参数 */);  // ?setExpertListener@UT_XML@@QAEXPAVExpertListener@1@@Z
    public /* 未知 */ setListener(/* TODO 参数 */);  // ?setListener@UT_XML@@QAEXPAVListener@1@@Z
    public /* 未知 */ setNameSpace(/* TODO 参数 */);  // ?setNameSpace@UT_XML@@QAEXPBD@Z
    public /* 未知 */ setReader(/* TODO 参数 */);  // ?setReader@UT_XML@@QAEXPAVReader@1@@Z
    public bool sniff(/* TODO 参数 */);  // ?sniff@UT_XML@@QAE_NPBDI0@Z
    public bool sniff(/* TODO 参数 */);  // ?sniff@UT_XML@@QAE_NPBVUT_ByteBuf@@PBD@Z
    public /* 未知 */ startElement(/* TODO 参数 */);  // ?startElement@UT_XML@@QAEXPBDPAPBD@Z
    public /* 未知 */ stop(/* TODO 参数 */);  // ?stop@UT_XML@@QAEXXZ
};

/* ---- UT_svg (5 方法) ---- */
class UT_svg {
public:
    virtual public /* 未知 */ charData(/* TODO 参数 */);  // ?charData@UT_svg@@UAEXPBDH@Z
    virtual public /* 未知 */ endElement(/* TODO 参数 */);  // ?endElement@UT_svg@@UAEXPBD@Z
    public /* 未知 */ getAttribute(/* TODO 参数 */);  // ?getAttribute@UT_svg@@QAEPBDPBDPAPBD@Z
    public bool parse(/* TODO 参数 */);  // ?parse@UT_svg@@QAE_NPBVUT_ByteBuf@@@Z
    virtual public /* 未知 */ startElement(/* TODO 参数 */);  // ?startElement@UT_svg@@UAEXPBDPAPBD@Z
};

/* ---- XAP_App (109 方法) ---- */
class XAP_App {
public:
    public /* 未知 */ UWSetErrInfo(/* TODO 参数 */);  // ?UWSetErrInfo@XAP_App@@QAEXPBD@Z
    public /* 未知 */ _findNearestFont(/* TODO 参数 */);  // ?_findNearestFont@XAP_App@@MAEPBDPBD00000@Z
    public /* 未知 */ _getKbdLanguage(/* TODO 参数 */);  // ?_getKbdLanguage@XAP_App@@MAEPBDXZ
    protected /* 未知 */ _setUUIDGenerator(/* TODO 参数 */);  // ?_setUUIDGenerator@XAP_App@@IAEXPAVUT_UUIDGenerator@@@Z
    public bool addListener(/* TODO 参数 */);  // ?addListener@XAP_App@@QAE_NPAVAV_Listener@@PAI@Z
    public bool addWordToDict(/* TODO 参数 */);  // ?addWordToDict@XAP_App@@QAE_NPBII@Z
    public const bool areToolbarsCustomizable(/* TODO 参数 */);  // ?areToolbarsCustomizable@XAP_App@@QBE_NXZ
    public const bool areToolbarsCustomized(/* TODO 参数 */);  // ?areToolbarsCustomized@XAP_App@@QBE_NXZ
    public bool clearDebugBool(/* TODO 参数 */);  // ?clearDebugBool@XAP_App@@QAE_NXZ
    public /* 未知 */ clearIdTable(/* TODO 参数 */);  // ?clearIdTable@XAP_App@@QAEXXZ
    public /* 未知 */ clearLastFocussedFrame(/* TODO 参数 */);  // ?clearLastFocussedFrame@XAP_App@@QAEXXZ
    public /* 未知 */ closeModelessDlgs(/* TODO 参数 */);  // ?closeModelessDlgs@XAP_App@@QAEXXZ
    public /* 未知 */ enumerateDocuments(/* TODO 参数 */);  // ?enumerateDocuments@XAP_App@@QAEXAAV?$UT_GenericVector@PBX@@
    public /* 未知 */ enumerateFrames(/* TODO 参数 */);  // ?enumerateFrames@XAP_App@@QAEXAAV?$UT_GenericVector@PBX@@@Z
    virtual public bool findAbiSuiteAppFile(/* TODO 参数 */);  // ?findAbiSuiteAppFile@XAP_App@@UAE_NAAVUT_String@@PBD1@Z
    virtual public bool findAbiSuiteLibFile(/* TODO 参数 */);  // ?findAbiSuiteLibFile@XAP_App@@UAE_NAAVUT_String@@PBD1@Z
    public /* 未知 */ findFrame(/* TODO 参数 */);  // ?findFrame@XAP_App@@QAEHPAVXAP_Frame@@@Z
    public /* 未知 */ findFrame(/* TODO 参数 */);  // ?findFrame@XAP_App@@QAEHPBD@Z
    public /* 未知 */ findNearestFont(/* TODO 参数 */);  // ?findNearestFont@XAP_App@@SAPBDPBD00000@Z
    public const /* 未知 */ findValidFrame(/* TODO 参数 */);  // ?findValidFrame@XAP_App@@QBEPAVXAP_Frame@@XZ
    virtual public bool forgetClones(/* TODO 参数 */);  // ?forgetClones@XAP_App@@UAE_NPAVXAP_Frame@@@Z
    virtual public bool forgetFrame(/* TODO 参数 */);  // ?forgetFrame@XAP_App@@UAE_NPAVXAP_Frame@@@Z
    public /* 未知 */ forgetModelessId(/* TODO 参数 */);  // ?forgetModelessId@XAP_App@@QAEXH@Z
    virtual public const /* 未知 */ getAbiSuiteLibDir(/* TODO 参数 */);  // ?getAbiSuiteLibDir@XAP_App@@UBEPBDXZ
    public /* 未知 */ getApp(/* TODO 参数 */);  // ?getApp@XAP_App@@SAPAV1@XZ
    public const /* 未知 */ getApplicationName(/* TODO 参数 */);  // ?getApplicationName@XAP_App@@QBEPBDXZ
    public const /* 未知 */ getApplicationTitleForTitleBar(/* TODO 参数 */);  // ?getApplicationTitleForTitleBar@XAP_App@@QBEPBDXZ
    public const /* 未知 */ getArgs(/* TODO 参数 */);  // ?getArgs@XAP_App@@QBEPAVXAP_Args@@XZ
    public /* 未知 */ getBindingMap(/* TODO 参数 */);  // ?getBindingMap@XAP_App@@QAEPAVEV_EditBindingMap@@PBD@Z
    public /* 未知 */ getBuildCompileDate(/* TODO 参数 */);  // ?getBuildCompileDate@XAP_App@@SAPBDXZ
    public /* 未知 */ getBuildCompileTime(/* TODO 参数 */);  // ?getBuildCompileTime@XAP_App@@SAPBDXZ
    public /* 未知 */ getBuildId(/* TODO 参数 */);  // ?getBuildId@XAP_App@@SAPBDXZ
    public /* 未知 */ getBuildOptions(/* TODO 参数 */);  // ?getBuildOptions@XAP_App@@SAPBDXZ
    public /* 未知 */ getBuildTarget(/* TODO 参数 */);  // ?getBuildTarget@XAP_App@@SAPBDXZ
    public /* 未知 */ getBuildVersion(/* TODO 参数 */);  // ?getBuildVersion@XAP_App@@SAPBDXZ
    virtual public bool getClones(/* TODO 参数 */);  // ?getClones@XAP_App@@UAE_NPAV?$UT_GenericVector@PAVXAP_Frame@
    virtual public /* 未知 */ getDefaultGeometry(/* TODO 参数 */);  // ?getDefaultGeometry@XAP_App@@UAEXAAI00@Z
    public const /* 未知 */ getEditEventMapper(/* TODO 参数 */);  // ?getEditEventMapper@XAP_App@@QBEPAVEV_EditEventMapper@@XZ
    public const /* 未知 */ getEditMethodContainer(/* TODO 参数 */);  // ?getEditMethodContainer@XAP_App@@QBEPAVEV_EditMethodContaine
    public /* 未知 */ getEmbeddableManager(/* TODO 参数 */);  // ?getEmbeddableManager@XAP_App@@QAEPAVGR_EmbedManager@@PAVGR_
    public const /* 未知 */ getEncodingManager(/* TODO 参数 */);  // ?getEncodingManager@XAP_App@@QBEPBVXAP_EncodingManager@@XZ
    public const /* 未知 */ getFrame(/* TODO 参数 */);  // ?getFrame@XAP_App@@QBEPAVXAP_Frame@@I@Z
    public const /* 未知 */ getFrameCount(/* TODO 参数 */);  // ?getFrameCount@XAP_App@@QBEIXZ
    virtual public bool getGeometry(/* TODO 参数 */);  // ?getGeometry@XAP_App@@UAE_NPAH0PAI11@Z
    public const /* 未知 */ getGraphicsFactory(/* TODO 参数 */);  // ?getGraphicsFactory@XAP_App@@QBEPAVGR_GraphicsFactory@@XZ
    public /* 未知 */ getImpl(/* TODO 参数 */);  // ?getImpl@XAP_App@@QAEPAVXAP_AppImpl@@XZ
    public const /* 未知 */ getInputMode(/* TODO 参数 */);  // ?getInputMode@XAP_App@@QBEPBDXZ
    public const /* 未知 */ getKbdLanguage(/* TODO 参数 */);  // ?getKbdLanguage@XAP_App@@QBEPBUUT_LangRecord@@XZ
    public /* 未知 */ getLastError(/* TODO 参数 */);  // ?getLastError@XAP_App@@QAEPADXZ
    public const /* 未知 */ getLastFocussedFrame(/* TODO 参数 */);  // ?getLastFocussedFrame@XAP_App@@QBEPAVXAP_Frame@@XZ
    public /* 未知 */ getMenuActionSet(/* TODO 参数 */);  // ?getMenuActionSet@XAP_App@@QAEPAVEV_Menu_ActionSet@@XZ
    public const /* 未知 */ getMenuActionSet(/* TODO 参数 */);  // ?getMenuActionSet@XAP_App@@QBEPBVEV_Menu_ActionSet@@XZ
    public const /* 未知 */ getMenuFactory(/* TODO 参数 */);  // ?getMenuFactory@XAP_App@@QBEPAVXAP_Menu_Factory@@XZ
    public /* 未知 */ getModelessDialog(/* TODO 参数 */);  // ?getModelessDialog@XAP_App@@QAEPAVXAP_Dialog_Modeless@@H@Z
    public /* 未知 */ getPlugin(/* TODO 参数 */);  // ?getPlugin@XAP_App@@QAEPAVXAP_Module@@PBD@Z
    public const /* 未知 */ getPrefs(/* TODO 参数 */);  // ?getPrefs@XAP_App@@QBEPAVXAP_Prefs@@XZ
    public const bool getPrefsValue(/* TODO 参数 */);  // ?getPrefsValue@XAP_App@@QBE_NABVUT_String@@AAV2@@Z
    public const bool getPrefsValue(/* TODO 参数 */);  // ?getPrefsValue@XAP_App@@QBE_NPBDPAPBD@Z
    public const bool getPrefsValueBool(/* TODO 参数 */);  // ?getPrefsValueBool@XAP_App@@QBE_NPBDPA_N@Z
    public /* 未知 */ getToolbarActionSet(/* TODO 参数 */);  // ?getToolbarActionSet@XAP_App@@QAEPAVEV_Toolbar_ActionSet@@XZ
    public const /* 未知 */ getToolbarActionSet(/* TODO 参数 */);  // ?getToolbarActionSet@XAP_App@@QBEPBVEV_Toolbar_ActionSet@@XZ
    public const /* 未知 */ getToolbarFactory(/* TODO 参数 */);  // ?getToolbarFactory@XAP_App@@QBEPAVXAP_Toolbar_Factory@@XZ
    public const /* 未知 */ getUUIDGenerator(/* TODO 参数 */);  // ?getUUIDGenerator@XAP_App@@QBEPAVUT_UUIDGenerator@@XZ
    virtual public /* 未知 */ getViewSelection(/* TODO 参数 */);  // ?getViewSelection@XAP_App@@UAEPAVAV_View@@XZ
    virtual public bool initialize(/* TODO 参数 */);  // ?initialize@XAP_App@@UAE_NPBD0@Z
    public const bool isBonoboRunning(/* TODO 参数 */);  // ?isBonoboRunning@XAP_App@@QBE_NXZ
    public bool isDebug(/* TODO 参数 */);  // ?isDebug@XAP_App@@QAE_NXZ
    public bool isModelessRunning(/* TODO 参数 */);  // ?isModelessRunning@XAP_App@@QAE_NH@Z
    public bool isSmoothScrollingEnabled(/* TODO 参数 */);  // ?isSmoothScrollingEnabled@XAP_App@@QAE_NXZ
    public const bool isWordInDict(/* TODO 参数 */);  // ?isWordInDict@XAP_App@@QBE_NPBII@Z
    public /* 未知 */ localizeHelpUrl(/* TODO 参数 */);  // ?localizeHelpUrl@XAP_App@@QAE?AVUT_String@@PBD00@Z
    public /* 未知 */ m_pApp(/* TODO 参数 */);  // ?m_pApp@XAP_App@@1PAV1@A
    public const /* 未知 */ newGraphics(/* TODO 参数 */);  // ?newGraphics@XAP_App@@QBEPAVGR_Graphics@@AAVGR_AllocInfo@@@Z
    public const /* 未知 */ newGraphics(/* TODO 参数 */);  // ?newGraphics@XAP_App@@QBEPAVGR_Graphics@@IAAVGR_AllocInfo@@@
    virtual public /* 未知 */ notifyFrameCountChange(/* TODO 参数 */);  // ?notifyFrameCountChange@XAP_App@@UAEXXZ
    virtual public bool notifyListeners(/* TODO 参数 */);  // ?notifyListeners@XAP_App@@UAE_NPAVAV_View@@IPAX@Z
    public /* 未知 */ notifyModelessDlgsCloseFrame(/* TODO 参数 */);  // ?notifyModelessDlgsCloseFrame@XAP_App@@QAEXPAVXAP_Frame@@@Z
    public /* 未知 */ notifyModelessDlgsOfActiveFrame(/* TODO 参数 */);  // ?notifyModelessDlgsOfActiveFrame@XAP_App@@QAEXPAVXAP_Frame@@
    public bool openHelpURL(/* TODO 参数 */);  // ?openHelpURL@XAP_App@@QAE_NPBD@Z
    public bool openURL(/* TODO 参数 */);  // ?openURL@XAP_App@@QAE_NPBD@Z
    virtual public /* 未知 */ parseAndSetGeometry(/* TODO 参数 */);  // ?parseAndSetGeometry@XAP_App@@UAEXPBD@Z
    virtual public /* 未知 */ rebuildMenus(/* TODO 参数 */);  // ?rebuildMenus@XAP_App@@UAEXXZ
    public /* 未知 */ registerEmbeddable(/* TODO 参数 */);  // ?registerEmbeddable@XAP_App@@QAEIPAVGR_EmbedManager@@@Z
    public /* 未知 */ rememberFocussedFrame(/* TODO 参数 */);  // ?rememberFocussedFrame@XAP_App@@QAEXPAX@Z
    virtual public bool rememberFrame(/* TODO 参数 */);  // ?rememberFrame@XAP_App@@UAE_NPAVXAP_Frame@@0@Z
    public /* 未知 */ rememberModelessId(/* TODO 参数 */);  // ?rememberModelessId@XAP_App@@QAEXHPAVXAP_Dialog_Modeless@@@Z
    public bool removeListener(/* TODO 参数 */);  // ?removeListener@XAP_App@@QAE_NI@Z
    public /* 未知 */ resetToolbarsToDefault(/* TODO 参数 */);  // ?resetToolbarsToDefault@XAP_App@@QAEXXZ
    public /* 未知 */ s_szBuild_CompileDate(/* TODO 参数 */);  // ?s_szBuild_CompileDate@XAP_App@@2PBDB
    public /* 未知 */ s_szBuild_CompileTime(/* TODO 参数 */);  // ?s_szBuild_CompileTime@XAP_App@@2PBDB
    public /* 未知 */ s_szBuild_ID(/* TODO 参数 */);  // ?s_szBuild_ID@XAP_App@@2PBDB
    public /* 未知 */ s_szBuild_Options(/* TODO 参数 */);  // ?s_szBuild_Options@XAP_App@@2PBDB
    public /* 未知 */ s_szBuild_Target(/* TODO 参数 */);  // ?s_szBuild_Target@XAP_App@@2PBDB
    public /* 未知 */ s_szBuild_Version(/* TODO 参数 */);  // ?s_szBuild_Version@XAP_App@@2PBDB
    public const /* 未知 */ safefindFrame(/* TODO 参数 */);  // ?safefindFrame@XAP_App@@QBEHPAVXAP_Frame@@@Z
    public /* 未知 */ setBonoboRunning(/* TODO 参数 */);  // ?setBonoboRunning@XAP_App@@QAEXXZ
    public bool setDebugBool(/* TODO 参数 */);  // ?setDebugBool@XAP_App@@QAE_NXZ
    public /* 未知 */ setDefaultGraphicsId(/* TODO 参数 */);  // ?setDefaultGraphicsId@XAP_App@@QAEXI@Z
    public /* 未知 */ setEnableSmoothScrolling(/* TODO 参数 */);  // ?setEnableSmoothScrolling@XAP_App@@QAEX_N@Z
    virtual public bool setGeometry(/* TODO 参数 */);  // ?setGeometry@XAP_App@@UAE_NHHIII@Z
    virtual public /* 未知 */ setInputMode(/* TODO 参数 */);  // ?setInputMode@XAP_App@@UAEHPBD@Z
    public /* 未知 */ setKbdLanguage(/* TODO 参数 */);  // ?setKbdLanguage@XAP_App@@QAEXPBD@Z
    public /* 未知 */ setToolbarsCustomizable(/* TODO 参数 */);  // ?setToolbarsCustomizable@XAP_App@@QAEX_N@Z
    public /* 未知 */ setToolbarsCustomized(/* TODO 参数 */);  // ?setToolbarsCustomized@XAP_App@@QAEX_N@Z
    virtual public /* 未知 */ setViewSelection(/* TODO 参数 */);  // ?setViewSelection@XAP_App@@UAEXPAVAV_View@@@Z
    public /* 未知 */ suggestWord(/* TODO 参数 */);  // ?suggestWord@XAP_App@@QAEXPAV?$UT_GenericVector@PAI@@PBII@Z
    virtual public const /* 未知 */ theOSHasBidiSupport(/* TODO 参数 */);  // ?theOSHasBidiSupport@XAP_App@@UBE?AW4BidiSupportType@1@XZ
    public bool unRegisterEmbeddable(/* TODO 参数 */);  // ?unRegisterEmbeddable@XAP_App@@QAE_NI@Z
    public bool updateClones(/* TODO 参数 */);  // ?updateClones@XAP_App@@QAE_NPAVXAP_Frame@@@Z
};

/* ---- XAP_Dialog (10 方法) ---- */
class XAP_Dialog {
public:
    public /* 未知 */ constructDialog(/* TODO 参数 */);  // ?constructDialog@XAP_Dialog@@MAEXXZ
    public const /* 未知 */ getApp(/* TODO 参数 */);  // ?getApp@XAP_Dialog@@QBEPAVXAP_App@@XZ
    public const /* 未知 */ getDialogId(/* TODO 参数 */);  // ?getDialogId@XAP_Dialog@@QBEHXZ
    public const /* 未知 */ getHelpUrl(/* TODO 参数 */);  // ?getHelpUrl@XAP_Dialog@@QBEABVUT_String@@XZ
    public /* 未知 */ getWidget(/* TODO 参数 */);  // ?getWidget@XAP_Dialog@@MAEPAVXAP_Widget@@H@Z
    public /* 未知 */ getWidgetValueInt(/* TODO 参数 */);  // ?getWidgetValueInt@XAP_Dialog@@QAEHH@Z
    public /* 未知 */ localizeDialog(/* TODO 参数 */);  // ?localizeDialog@XAP_Dialog@@MAEXXZ
    public /* 未知 */ setWidgetLabel(/* TODO 参数 */);  // ?setWidgetLabel@XAP_Dialog@@QAEXHABVUT_UTF8String@@@Z
    public /* 未知 */ setWidgetValueInt(/* TODO 参数 */);  // ?setWidgetValueInt@XAP_Dialog@@QAEXHH@Z
    virtual public /* 未知 */ updateDialogData(/* TODO 参数 */);  // ?updateDialogData@XAP_Dialog@@UAEXXZ
};

/* ---- XAP_DialogFactory (5 方法) ---- */
class XAP_DialogFactory {
public:
    public /* 未知 */ _findDialogInTable(/* TODO 参数 */);  // ?_findDialogInTable@XAP_DialogFactory@@IBE_NHPAI@Z
    public const /* 未知 */ getApp(/* TODO 参数 */);  // ?getApp@XAP_DialogFactory@@QBEPAVXAP_App@@XZ
    public /* 未知 */ justMakeTheDialog(/* TODO 参数 */);  // ?justMakeTheDialog@XAP_DialogFactory@@QAEPAVXAP_Dialog@@H@Z
    public /* 未知 */ releaseDialog(/* TODO 参数 */);  // ?releaseDialog@XAP_DialogFactory@@QAEXPAVXAP_Dialog@@@Z
    public /* 未知 */ requestDialog(/* TODO 参数 */);  // ?requestDialog@XAP_DialogFactory@@QAEPAVXAP_Dialog@@H@Z
};

/* ---- XAP_Dialog_AppPersistent (3 方法) ---- */
class XAP_Dialog_AppPersistent {
public:
    public /* 未知 */ s_getPersistence(/* TODO 参数 */);  // ?s_getPersistence@XAP_Dialog_AppPersistent@@SA?AW4_XAP_Dialo
    virtual public /* 未知 */ useEnd(/* TODO 参数 */);  // ?useEnd@XAP_Dialog_AppPersistent@@UAEXXZ
    virtual public /* 未知 */ useStart(/* TODO 参数 */);  // ?useStart@XAP_Dialog_AppPersistent@@UAEXXZ
};

/* ---- XAP_Dialog_FileOpenSaveAs (9 方法) ---- */
class XAP_Dialog_FileOpenSaveAs {
public:
    public const /* 未知 */ getAnswer(/* TODO 参数 */);  // ?getAnswer@XAP_Dialog_FileOpenSaveAs@@QBE?AW4tAnswer@1@XZ
    public const /* 未知 */ getFileType(/* TODO 参数 */);  // ?getFileType@XAP_Dialog_FileOpenSaveAs@@QBEHXZ
    public const /* 未知 */ getPathname(/* TODO 参数 */);  // ?getPathname@XAP_Dialog_FileOpenSaveAs@@QBEPBDXZ
    public /* 未知 */ setCurrentPathname(/* TODO 参数 */);  // ?setCurrentPathname@XAP_Dialog_FileOpenSaveAs@@QAEXPBD@Z
    public /* 未知 */ setDefaultFileType(/* TODO 参数 */);  // ?setDefaultFileType@XAP_Dialog_FileOpenSaveAs@@QAEXH@Z
    public /* 未知 */ setFileTypeList(/* TODO 参数 */);  // ?setFileTypeList@XAP_Dialog_FileOpenSaveAs@@QAEXPAPBD0PBH@Z
    public /* 未知 */ setSuggestFilename(/* TODO 参数 */);  // ?setSuggestFilename@XAP_Dialog_FileOpenSaveAs@@QAEX_N@Z
    virtual public /* 未知 */ useEnd(/* TODO 参数 */);  // ?useEnd@XAP_Dialog_FileOpenSaveAs@@UAEXXZ
    virtual public /* 未知 */ useStart(/* TODO 参数 */);  // ?useStart@XAP_Dialog_FileOpenSaveAs@@UAEXXZ
};

/* ---- XAP_Dialog_FramePersistent (3 方法) ---- */
class XAP_Dialog_FramePersistent {
public:
    public /* 未知 */ s_getPersistence(/* TODO 参数 */);  // ?s_getPersistence@XAP_Dialog_FramePersistent@@SA?AW4_XAP_Dia
    virtual public /* 未知 */ useEnd(/* TODO 参数 */);  // ?useEnd@XAP_Dialog_FramePersistent@@UAEXXZ
    virtual public /* 未知 */ useStart(/* TODO 参数 */);  // ?useStart@XAP_Dialog_FramePersistent@@UAEXXZ
};

/* ---- XAP_Dialog_Language (11 方法) ---- */
class XAP_Dialog_Language {
public:
    protected /* 未知 */ _setLanguage(/* TODO 参数 */);  // ?_setLanguage@XAP_Dialog_Language@@IAEXPBD@Z
    public const /* 未知 */ getAnswer(/* TODO 参数 */);  // ?getAnswer@XAP_Dialog_Language@@QBE?AW4tAnswer@1@XZ
    public /* 未知 */ getAvailableDictionaries(/* TODO 参数 */);  // ?getAvailableDictionaries@XAP_Dialog_Language@@QAEPAV?$UT_Ge
    public const bool getChangedLangProperty(/* TODO 参数 */);  // ?getChangedLangProperty@XAP_Dialog_Language@@QBE_NPAPBD@Z
    public /* 未知 */ getDocDefaultLangCheckboxLabel(/* TODO 参数 */);  // ?getDocDefaultLangCheckboxLabel@XAP_Dialog_Language@@QAEXAAV
    public /* 未知 */ getDocDefaultLangDescription(/* TODO 参数 */);  // ?getDocDefaultLangDescription@XAP_Dialog_Language@@QAEXAAVUT
    public const bool getSpellCheck(/* TODO 参数 */);  // ?getSpellCheck@XAP_Dialog_Language@@QBE_NXZ
    public const bool isMakeDocumentDefault(/* TODO 参数 */);  // ?isMakeDocumentDefault@XAP_Dialog_Language@@QBE_NXZ
    public /* 未知 */ setDocumentLanguage(/* TODO 参数 */);  // ?setDocumentLanguage@XAP_Dialog_Language@@QAEXPBD@Z
    public /* 未知 */ setLanguageProperty(/* TODO 参数 */);  // ?setLanguageProperty@XAP_Dialog_Language@@QAEXPBD@Z
    public /* 未知 */ setMakeDocumentDefault(/* TODO 参数 */);  // ?setMakeDocumentDefault@XAP_Dialog_Language@@QAEX_N@Z
};

/* ---- XAP_Dialog_Modeless (12 方法) ---- */
class XAP_Dialog_Modeless {
public:
    public /* 未知 */ BuildWindowName(/* TODO 参数 */);  // ?BuildWindowName@XAP_Dialog_Modeless@@QAEXPAD0I@Z
    public const /* 未知 */ getActiveFrame(/* TODO 参数 */);  // ?getActiveFrame@XAP_Dialog_Modeless@@QBEPAVXAP_Frame@@XZ
    public bool isRunning(/* TODO 参数 */);  // ?isRunning@XAP_Dialog_Modeless@@QAE_NXZ
    public /* 未知 */ modeless_cleanup(/* TODO 参数 */);  // ?modeless_cleanup@XAP_Dialog_Modeless@@QAEXXZ
    virtual public /* 未知 */ notifyActiveFrame(/* TODO 参数 */);  // ?notifyActiveFrame@XAP_Dialog_Modeless@@UAEXPAVXAP_Frame@@@Z
    virtual public /* 未知 */ notifyCloseFrame(/* TODO 参数 */);  // ?notifyCloseFrame@XAP_Dialog_Modeless@@UAEXPAVXAP_Frame@@@Z
    virtual public /* 未知 */ pGetWindowHandle(/* TODO 参数 */);  // ?pGetWindowHandle@XAP_Dialog_Modeless@@UAEPAXXZ
    virtual public /* 未知 */ runModal(/* TODO 参数 */);  // ?runModal@XAP_Dialog_Modeless@@UAEXPAVXAP_Frame@@@Z
    public /* 未知 */ s_getPersistence(/* TODO 参数 */);  // ?s_getPersistence@XAP_Dialog_Modeless@@SA?AW4_XAP_Dialog_Typ
    virtual public /* 未知 */ setActiveFrame(/* TODO 参数 */);  // ?setActiveFrame@XAP_Dialog_Modeless@@UAEXPAVXAP_Frame@@@Z
    virtual public /* 未知 */ useEnd(/* TODO 参数 */);  // ?useEnd@XAP_Dialog_Modeless@@UAEXXZ
    virtual public /* 未知 */ useStart(/* TODO 参数 */);  // ?useStart@XAP_Dialog_Modeless@@UAEXXZ
};

/* ---- XAP_Dialog_NonPersistent (1 方法) ---- */
class XAP_Dialog_NonPersistent {
public:
    public /* 未知 */ s_getPersistence(/* TODO 参数 */);  // ?s_getPersistence@XAP_Dialog_NonPersistent@@SA?AW4_XAP_Dialo
};

/* ---- XAP_Dialog_Persistent (2 方法) ---- */
class XAP_Dialog_Persistent {
public:
    virtual public /* 未知 */ useEnd(/* TODO 参数 */);  // ?useEnd@XAP_Dialog_Persistent@@UAEXXZ
    virtual public /* 未知 */ useStart(/* TODO 参数 */);  // ?useStart@XAP_Dialog_Persistent@@UAEXXZ
};

/* ---- XAP_Dictionary (15 方法) ---- */
class XAP_Dictionary {
public:
    protected /* 未知 */ _abortFile(/* TODO 参数 */);  // ?_abortFile@XAP_Dictionary@@IAEXXZ
    protected bool _closeFile(/* TODO 参数 */);  // ?_closeFile@XAP_Dictionary@@IAE_NXZ
    protected bool _openFile(/* TODO 参数 */);  // ?_openFile@XAP_Dictionary@@IAE_NPBD@Z
    protected /* 未知 */ _outputUTF8(/* TODO 参数 */);  // ?_outputUTF8@XAP_Dictionary@@IAEXPBII@Z
    protected bool _parseUTF8(/* TODO 参数 */);  // ?_parseUTF8@XAP_Dictionary@@IAE_NXZ
    protected /* 未知 */ _writeBytes(/* TODO 参数 */);  // ?_writeBytes@XAP_Dictionary@@IAEIPBEI@Z
    protected bool _writeBytes(/* TODO 参数 */);  // ?_writeBytes@XAP_Dictionary@@IAE_NPBE@Z
    public bool addWord(/* TODO 参数 */);  // ?addWord@XAP_Dictionary@@QAE_NPBD@Z
    public bool addWord(/* TODO 参数 */);  // ?addWord@XAP_Dictionary@@QAE_NPBII@Z
    public /* 未知 */ countCommonChars(/* TODO 参数 */);  // ?countCommonChars@XAP_Dictionary@@QAEIPAI0@Z
    public const /* 未知 */ getShortName(/* TODO 参数 */);  // ?getShortName@XAP_Dictionary@@QBEPBDXZ
    public const bool isWord(/* TODO 参数 */);  // ?isWord@XAP_Dictionary@@QBE_NPBII@Z
    public bool load(/* TODO 参数 */);  // ?load@XAP_Dictionary@@QAE_NXZ
    public bool save(/* TODO 参数 */);  // ?save@XAP_Dictionary@@QAE_NXZ
    public /* 未知 */ suggestWord(/* TODO 参数 */);  // ?suggestWord@XAP_Dictionary@@QAEXPAV?$UT_GenericVector@PAI@@
};

/* ---- XAP_EncodingManager (48 方法) ---- */
class XAP_EncodingManager {
public:
    virtual public const /* 未知 */ CodepageFromCharset(/* TODO 参数 */);  // ?CodepageFromCharset@XAP_EncodingManager@@UBEPBDPAD@Z
    public /* 未知 */ Delete_instance(/* TODO 参数 */);  // ?Delete_instance@XAP_EncodingManager@@QAEXXZ
    public const /* 未知 */ UToNative(/* TODO 参数 */);  // ?UToNative@XAP_EncodingManager@@QBEII@Z
    public const /* 未知 */ UToWindows(/* TODO 参数 */);  // ?UToWindows@XAP_EncodingManager@@QBEII@Z
    virtual public const /* 未知 */ WindowsCharsetName(/* TODO 参数 */);  // ?WindowsCharsetName@XAP_EncodingManager@@UBEPBDXZ
    public const /* 未知 */ WindowsToU(/* TODO 参数 */);  // ?WindowsToU@XAP_EncodingManager@@QBEII@Z
    public /* 未知 */ XAP_XML_UnknownEncodingHandler(/* TODO 参数 */);  // ?XAP_XML_UnknownEncodingHandler@XAP_EncodingManager@@SAHPAXP
    public /* 未知 */ _instance(/* TODO 参数 */);  // ?_instance@XAP_EncodingManager@@0PAV1@A
    virtual public const /* 未知 */ approximate(/* TODO 参数 */);  // ?approximate@XAP_EncodingManager@@UBEIPADII@Z
    virtual public const bool canBreakBetween(/* TODO 参数 */);  // ?canBreakBetween@XAP_EncodingManager@@UBE_NQBI@Z
    virtual public const /* 未知 */ charsetFromCodepage(/* TODO 参数 */);  // ?charsetFromCodepage@XAP_EncodingManager@@UBEPBDH@Z
    virtual public const bool cjk_locale(/* TODO 参数 */);  // ?cjk_locale@XAP_EncodingManager@@UBE_NXZ
    protected /* 未知 */ describe(/* TODO 参数 */);  // ?describe@XAP_EncodingManager@@IAEXXZ
    virtual public const /* 未知 */ fallbackChar(/* TODO 参数 */);  // ?fallbackChar@XAP_EncodingManager@@UBEDI@Z
    public /* 未知 */ findLangInfo(/* TODO 参数 */);  // ?findLangInfo@XAP_EncodingManager@@SAPBUXAP_LangInfo@@PBDW4f
    public /* 未知 */ fontsizes_mapping(/* TODO 参数 */);  // ?fontsizes_mapping@XAP_EncodingManager@@2VUT_Bijection@@A
    virtual public const /* 未知 */ getLanguageISOName(/* TODO 参数 */);  // ?getLanguageISOName@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getLanguageISOTerritory(/* TODO 参数 */);  // ?getLanguageISOTerritory@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getNative8BitEncodingName(/* TODO 参数 */);  // ?getNative8BitEncodingName@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getNativeEncodingName(/* TODO 参数 */);  // ?getNativeEncodingName@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getNativeNonUnicodeEncodingName(/* TODO 参数 */);  // ?getNativeNonUnicodeEncodingName@XAP_EncodingManager@@UBEPBD
    virtual public const /* 未知 */ getNativeSystemEncodingName(/* TODO 参数 */);  // ?getNativeSystemEncodingName@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getNativeUnicodeEncodingName(/* TODO 参数 */);  // ?getNativeUnicodeEncodingName@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getTexPrologue(/* TODO 参数 */);  // ?getTexPrologue@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getUCS2BEName(/* TODO 参数 */);  // ?getUCS2BEName@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getUCS2LEName(/* TODO 参数 */);  // ?getUCS2LEName@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getUCS4BEName(/* TODO 参数 */);  // ?getUCS4BEName@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getUCS4LEName(/* TODO 参数 */);  // ?getUCS4LEName@XAP_EncodingManager@@UBEPBDXZ
    virtual public const /* 未知 */ getWinCharsetCode(/* TODO 参数 */);  // ?getWinCharsetCode@XAP_EncodingManager@@UBEIXZ
    virtual public const /* 未知 */ getWinLanguageCode(/* TODO 参数 */);  // ?getWinLanguageCode@XAP_EncodingManager@@UBEIXZ
    public /* 未知 */ get_instance(/* TODO 参数 */);  // ?get_instance@XAP_EncodingManager@@SAPAV1@XZ
    virtual public /* 未知 */ initialize(/* TODO 参数 */);  // ?initialize@XAP_EncodingManager@@UAEXXZ
    virtual public const bool isUnicodeLocale(/* TODO 参数 */);  // ?isUnicodeLocale@XAP_EncodingManager@@UBE_NXZ
    virtual public const bool is_cjk_letter(/* TODO 参数 */);  // ?is_cjk_letter@XAP_EncodingManager@@UBE_NI@Z
    public /* 未知 */ langinfo(/* TODO 参数 */);  // ?langinfo@XAP_EncodingManager@@2QBUXAP_LangInfo@@B
    public const /* 未知 */ nativeToU(/* TODO 参数 */);  // ?nativeToU@XAP_EncodingManager@@QBEII@Z
    virtual public const bool noncjk_letters(/* TODO 参数 */);  // ?noncjk_letters@XAP_EncodingManager@@UBE_NPBIH@Z
    virtual public /* 未知 */ placeholder(/* TODO 参数 */);  // ?placeholder@XAP_EncodingManager@@UAEXXZ
    virtual public const bool single_case(/* TODO 参数 */);  // ?single_case@XAP_EncodingManager@@UBE_NXZ
    public const /* 未知 */ strToNative(/* TODO 参数 */);  // ?strToNative@XAP_EncodingManager@@QBEPBDPBD0PADH_N2@Z
    public const /* 未知 */ strToNative(/* TODO 参数 */);  // ?strToNative@XAP_EncodingManager@@QBEPBDPBD0_N1@Z
    public /* 未知 */ swap_stou(/* TODO 参数 */);  // ?swap_stou@XAP_EncodingManager@@2_NA
    public /* 未知 */ swap_utos(/* TODO 参数 */);  // ?swap_utos@XAP_EncodingManager@@2_NA
    virtual public const /* 未知 */ try_UToLatin1(/* TODO 参数 */);  // ?try_UToLatin1@XAP_EncodingManager@@UBEII@Z
    virtual public const /* 未知 */ try_UToNative(/* TODO 参数 */);  // ?try_UToNative@XAP_EncodingManager@@UBEII@Z
    virtual public const /* 未知 */ try_UToWindows(/* TODO 参数 */);  // ?try_UToWindows@XAP_EncodingManager@@UBEII@Z
    virtual public const /* 未知 */ try_WindowsToU(/* TODO 参数 */);  // ?try_WindowsToU@XAP_EncodingManager@@UBEII@Z
    virtual public const /* 未知 */ try_nativeToU(/* TODO 参数 */);  // ?try_nativeToU@XAP_EncodingManager@@UBEII@Z
};

/* ---- XAP_Frame (75 方法) ---- */
class XAP_Frame {
public:
    public /* 未知 */ _createAutoSaveTimer(/* TODO 参数 */);  // ?_createAutoSaveTimer@XAP_Frame@@AAEXXZ
    public /* 未知 */ _getNextUntitledNumber(/* TODO 参数 */);  // ?_getNextUntitledNumber@XAP_Frame@@KAHXZ
    virtual public /* 未知 */ _newToolbar(/* TODO 参数 */);  // ?_newToolbar@XAP_Frame@@UAEPAVEV_Toolbar@@PAVXAP_App@@PAV1@P
    public /* 未知 */ backup(/* TODO 参数 */);  // ?backup@XAP_Frame@@QAEHPBDH@Z
    public bool close(/* TODO 参数 */);  // ?close@XAP_Frame@@QAE_NXZ
    public /* 未知 */ createMessageBox(/* TODO 参数 */);  // ?createMessageBox@XAP_Frame@@QAAPAVXAP_Dialog_MessageBox@@IW
    public /* 未知 */ dragBegin(/* TODO 参数 */);  // ?dragBegin@XAP_Frame@@QAEXHPAVEV_Toolbar@@@Z
    public /* 未知 */ dragDropToIcon(/* TODO 参数 */);  // ?dragDropToIcon@XAP_Frame@@QAEXHHPAVEV_Toolbar@@0@Z
    public /* 未知 */ dragDropToTB(/* TODO 参数 */);  // ?dragDropToTB@XAP_Frame@@QAEXHPAVEV_Toolbar@@0@Z
    public /* 未知 */ dragEnd(/* TODO 参数 */);  // ?dragEnd@XAP_Frame@@QAEXH@Z
    public /* 未知 */ findToolbarNr(/* TODO 参数 */);  // ?findToolbarNr@XAP_Frame@@QAEHPAVEV_Toolbar@@@Z
    public const /* 未知 */ getApp(/* TODO 参数 */);  // ?getApp@XAP_Frame@@QBEPAVXAP_App@@XZ
    public /* 未知 */ getAutoSavePeriod(/* TODO 参数 */);  // ?getAutoSavePeriod@XAP_Frame@@QAEHXZ
    virtual public bool getBarVisibility(/* TODO 参数 */);  // ?getBarVisibility@XAP_Frame@@UAE_NI@Z
    public const /* 未知 */ getColorSelBackground(/* TODO 参数 */);  // ?getColorSelBackground@XAP_Frame@@QBE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getColorSelForeground(/* TODO 参数 */);  // ?getColorSelForeground@XAP_Frame@@QBE?AVUT_RGBColor@@XZ
    public const /* 未知 */ getCurrentDoc(/* TODO 参数 */);  // ?getCurrentDoc@XAP_Frame@@QBEPAVAD_Document@@XZ
    public const /* 未知 */ getCurrentView(/* TODO 参数 */);  // ?getCurrentView@XAP_Frame@@QBEPAVAV_View@@XZ
    virtual public /* 未知 */ getDialogFactory(/* TODO 参数 */);  // ?getDialogFactory@XAP_Frame@@UAEPAVXAP_DialogFactory@@XZ
    public const /* 未知 */ getFilename(/* TODO 参数 */);  // ?getFilename@XAP_Frame@@QBEPBDXZ
    public const /* 未知 */ getFrameData(/* TODO 参数 */);  // ?getFrameData@XAP_Frame@@QBEPAXXZ
    public const /* 未知 */ getFrameImpl(/* TODO 参数 */);  // ?getFrameImpl@XAP_Frame@@QBEPAVXAP_FrameImpl@@XZ
    public /* 未知 */ getFrameMode(/* TODO 参数 */);  // ?getFrameMode@XAP_Frame@@QAE?AW4_FrameModes@@XZ
    public /* 未知 */ getKeyboard(/* TODO 参数 */);  // ?getKeyboard@XAP_Frame@@QAEPAVEV_Keyboard@@XZ
    virtual public /* 未知 */ getMainMenu(/* TODO 参数 */);  // ?getMainMenu@XAP_Frame@@UAEPAVEV_Menu@@XZ
    public /* 未知 */ getMouse(/* TODO 参数 */);  // ?getMouse@XAP_Frame@@QAEPAVEV_Mouse@@XZ
    public const /* 未知 */ getNonDecoratedTitle(/* TODO 参数 */);  // ?getNonDecoratedTitle@XAP_Frame@@QBEPBDXZ
    public const /* 未知 */ getTimeSinceSave(/* TODO 参数 */);  // ?getTimeSinceSave@XAP_Frame@@QBEIXZ
    public const /* 未知 */ getTitle(/* TODO 参数 */);  // ?getTitle@XAP_Frame@@QBEPBDH@Z
    public /* 未知 */ getToolbar(/* TODO 参数 */);  // ?getToolbar@XAP_Frame@@QAEPAVEV_Toolbar@@I@Z
    public const /* 未知 */ getViewKey(/* TODO 参数 */);  // ?getViewKey@XAP_Frame@@QBEPBDXZ
    public const /* 未知 */ getViewNumber(/* TODO 参数 */);  // ?getViewNumber@XAP_Frame@@QBEIXZ
    virtual public /* 未知 */ getZoomPercentage(/* TODO 参数 */);  // ?getZoomPercentage@XAP_Frame@@UAEIXZ
    public /* 未知 */ getZoomType(/* TODO 参数 */);  // ?getZoomType@XAP_Frame@@QAE?AW4tZoomType@1@XZ
    virtual public bool initialize(/* TODO 参数 */);  // ?initialize@XAP_Frame@@UAE_NPBD000000000@Z
    public bool isBackupRunning(/* TODO 参数 */);  // ?isBackupRunning@XAP_Frame@@QAE_NXZ
    public const bool isDirty(/* TODO 参数 */);  // ?isDirty@XAP_Frame@@QBE_NXZ
    public const bool isFrameLocked(/* TODO 参数 */);  // ?isFrameLocked@XAP_Frame@@QBE_NXZ
    public const /* 未知 */ isMenuBarShown(/* TODO 参数 */);  // ?isMenuBarShown@XAP_Frame@@QBE?B_NXZ
    public const /* 未知 */ isStatusBarShown(/* TODO 参数 */);  // ?isStatusBarShown@XAP_Frame@@QBE?B_NXZ
    public /* 未知 */ makeBackupName(/* TODO 参数 */);  // ?makeBackupName@XAP_Frame@@QAE?AVUT_String@@PBD@Z
    public const /* 未知 */ nullUpdate(/* TODO 参数 */);  // ?nullUpdate@XAP_Frame@@QBEXXZ
    virtual public /* 未知 */ queue_resize(/* TODO 参数 */);  // ?queue_resize@XAP_Frame@@UAEXXZ
    public /* 未知 */ quickZoom(/* TODO 参数 */);  // ?quickZoom@XAP_Frame@@QAEXXZ
    public bool raise(/* TODO 参数 */);  // ?raise@XAP_Frame@@QAE_NXZ
    public /* 未知 */ rebuildAllToolbars(/* TODO 参数 */);  // ?rebuildAllToolbars@XAP_Frame@@QAEXXZ
    virtual public /* 未知 */ rebuildMenus(/* TODO 参数 */);  // ?rebuildMenus@XAP_Frame@@UAEXXZ
    public /* 未知 */ refillToolbarsInFrameData(/* TODO 参数 */);  // ?refillToolbarsInFrameData@XAP_Frame@@QAEXXZ
    public bool repopulateCombos(/* TODO 参数 */);  // ?repopulateCombos@XAP_Frame@@QAE_NXZ
    public bool runModalContextMenu(/* TODO 参数 */);  // ?runModalContextMenu@XAP_Frame@@QAE_NPAVAV_View@@PBDHH@Z
    public /* 未知 */ s_iUntitled(/* TODO 参数 */);  // ?s_iUntitled@XAP_Frame@@0HA
    public /* 未知 */ setAutoSaveFile(/* TODO 参数 */);  // ?setAutoSaveFile@XAP_Frame@@QAEX_N@Z
    public /* 未知 */ setAutoSaveFileExt(/* TODO 参数 */);  // ?setAutoSaveFileExt@XAP_Frame@@QAEXABVUT_String@@@Z
    public /* 未知 */ setAutoSaveFilePeriod(/* TODO 参数 */);  // ?setAutoSaveFilePeriod@XAP_Frame@@QAEXH@Z
    public /* 未知 */ setCursor(/* TODO 参数 */);  // ?setCursor@XAP_Frame@@QAEXW4Cursor@GR_Graphics@@@Z
    public /* 未知 */ setDoc(/* TODO 参数 */);  // ?setDoc@XAP_Frame@@QAEXPAVAD_Document@@@Z
    public /* 未知 */ setFrameLocked(/* TODO 参数 */);  // ?setFrameLocked@XAP_Frame@@QAEX_N@Z
    public /* 未知 */ setFrameMode(/* TODO 参数 */);  // ?setFrameMode@XAP_Frame@@QAEXW4_FrameModes@@@Z
    public /* 未知 */ setFullScreen(/* TODO 参数 */);  // ?setFullScreen@XAP_Frame@@QAEX_N@Z
    virtual public /* 未知 */ setMenuBarShown(/* TODO 参数 */);  // ?setMenuBarShown@XAP_Frame@@UAEX_N@Z
    virtual public /* 未知 */ setStatusBarShown(/* TODO 参数 */);  // ?setStatusBarShown@XAP_Frame@@UAEX_N@Z
    public /* 未知 */ setView(/* TODO 参数 */);  // ?setView@XAP_Frame@@QAEXPAVAV_View@@@Z
    public /* 未知 */ setViewNumber(/* TODO 参数 */);  // ?setViewNumber@XAP_Frame@@QAEXI@Z
    virtual public /* 未知 */ setZoomPercentage(/* TODO 参数 */);  // ?setZoomPercentage@XAP_Frame@@UAEXI@Z
    public /* 未知 */ setZoomType(/* TODO 参数 */);  // ?setZoomType@XAP_Frame@@QAEXW4tZoomType@1@@Z
    public bool show(/* TODO 参数 */);  // ?show@XAP_Frame@@QAE_NXZ
    public /* 未知 */ showMessageBox(/* TODO 参数 */);  // ?showMessageBox@XAP_Frame@@QAE?AW4tAnswer@XAP_Dialog_Message
    public /* 未知 */ showMessageBox(/* TODO 参数 */);  // ?showMessageBox@XAP_Frame@@QAE?AW4tAnswer@XAP_Dialog_Message
    public /* 未知 */ showMessageBox(/* TODO 参数 */);  // ?showMessageBox@XAP_Frame@@QAE?AW4tAnswer@XAP_Dialog_Message
    public /* 未知 */ showMessageBox(/* TODO 参数 */);  // ?showMessageBox@XAP_Frame@@QAE?AW4tAnswer@XAP_Dialog_Message
    virtual public /* 未知 */ toggleBar(/* TODO 参数 */);  // ?toggleBar@XAP_Frame@@UAEXI_N@Z
    virtual public /* 未知 */ toggleRuler(/* TODO 参数 */);  // ?toggleRuler@XAP_Frame@@UAEX_N@Z
    virtual public /* 未知 */ toggleStatusBar(/* TODO 参数 */);  // ?toggleStatusBar@XAP_Frame@@UAEX_N@Z
    public bool updateTitle(/* TODO 参数 */);  // ?updateTitle@XAP_Frame@@QAE_NXZ
    public /* 未知 */ updateZoom(/* TODO 参数 */);  // ?updateZoom@XAP_Frame@@QAEXXZ
};

/* ---- XAP_FrameImpl (9 方法) ---- */
class XAP_FrameImpl {
public:
    public /* 未知 */ _createToolbars(/* TODO 参数 */);  // ?_createToolbars@XAP_FrameImpl@@MAEXXZ
    public const /* 未知 */ _getToolbars(/* TODO 参数 */);  // ?_getToolbars@XAP_FrameImpl@@QBEABV?$UT_GenericVector@PAVEV_
    protected /* 未知 */ _startViewAutoUpdater(/* TODO 参数 */);  // ?_startViewAutoUpdater@XAP_FrameImpl@@IAEXXZ
    public /* 未知 */ _updateTitle(/* TODO 参数 */);  // ?_updateTitle@XAP_FrameImpl@@MAE_NXZ
    public /* 未知 */ getColorSelBackground(/* TODO 参数 */);  // ?getColorSelBackground@XAP_FrameImpl@@MBE?AVUT_RGBColor@@XZ
    public /* 未知 */ getColorSelForeground(/* TODO 参数 */);  // ?getColorSelForeground@XAP_FrameImpl@@MBE?AVUT_RGBColor@@XZ
    public /* 未知 */ getFrame(/* TODO 参数 */);  // ?getFrame@XAP_FrameImpl@@QAEPAVXAP_Frame@@XZ
    virtual public /* 未知 */ notifyViewChanged(/* TODO 参数 */);  // ?notifyViewChanged@XAP_FrameImpl@@UAEXPAVAV_View@@@Z
    public /* 未知 */ viewAutoUpdater(/* TODO 参数 */);  // ?viewAutoUpdater@XAP_FrameImpl@@KAXPAVUT_Worker@@@Z
};

/* ---- XAP_InputModes (5 方法) ---- */
class XAP_InputModes {
public:
    public bool createInputMode(/* TODO 参数 */);  // ?createInputMode@XAP_InputModes@@QAE_NPBDPAVEV_EditBindingMa
    public const /* 未知 */ getCurrentMap(/* TODO 参数 */);  // ?getCurrentMap@XAP_InputModes@@QBEPAVEV_EditEventMapper@@XZ
    public const /* 未知 */ getCurrentMapName(/* TODO 参数 */);  // ?getCurrentMapName@XAP_InputModes@@QBEPBDXZ
    public const /* 未知 */ getMapByName(/* TODO 参数 */);  // ?getMapByName@XAP_InputModes@@QBEPAVEV_EditEventMapper@@PBD@
    public bool setCurrentMap(/* TODO 参数 */);  // ?setCurrentMap@XAP_InputModes@@QAE_NPBD@Z
};

/* ---- XAP_Menu_Factory (15 方法) ---- */
class XAP_Menu_Factory {
public:
    public /* 未知 */ CreateMenuLabelSet(/* TODO 参数 */);  // ?CreateMenuLabelSet@XAP_Menu_Factory@@QAEPAVEV_Menu_LabelSet
    public /* 未知 */ CreateMenuLayout(/* TODO 参数 */);  // ?CreateMenuLayout@XAP_Menu_Factory@@QAEPAVEV_Menu_Layout@@PB
    public /* 未知 */ FindContextMenu(/* TODO 参数 */);  // ?FindContextMenu@XAP_Menu_Factory@@QAEPBDI@Z
    public /* 未知 */ GetMenuLabelSetLanguageCount(/* TODO 参数 */);  // ?GetMenuLabelSetLanguageCount@XAP_Menu_Factory@@QAEIXZ
    public /* 未知 */ GetNthMenuLabelLanguageName(/* TODO 参数 */);  // ?GetNthMenuLabelLanguageName@XAP_Menu_Factory@@QAEPBDI@Z
    public bool addNewLabel(/* TODO 参数 */);  // ?addNewLabel@XAP_Menu_Factory@@QAE_NPBDH00@Z
    public /* 未知 */ addNewMenuAfter(/* TODO 参数 */);  // ?addNewMenuAfter@XAP_Menu_Factory@@QAEHPBD00W4_ev_Menu_Layou
    public /* 未知 */ addNewMenuBefore(/* TODO 参数 */);  // ?addNewMenuBefore@XAP_Menu_Factory@@QAEHPBD00W4_ev_Menu_Layo
    public bool buildBuiltInMenuLabelSet(/* TODO 参数 */);  // ?buildBuiltInMenuLabelSet@XAP_Menu_Factory@@QAE_NAAPAVEV_Men
    public bool buildMenuLabelSet(/* TODO 参数 */);  // ?buildMenuLabelSet@XAP_Menu_Factory@@QAE_NPBD@Z
    public /* 未知 */ getNewID(/* TODO 参数 */);  // ?getNewID@XAP_Menu_Factory@@QAEHXZ
    public bool removeLabel(/* TODO 参数 */);  // ?removeLabel@XAP_Menu_Factory@@QAE_NPBDH@Z
    public /* 未知 */ removeMenuItem(/* TODO 参数 */);  // ?removeMenuItem@XAP_Menu_Factory@@QAEHPBD00@Z
    public /* 未知 */ resetLabelsToDefault(/* TODO 参数 */);  // ?resetLabelsToDefault@XAP_Menu_Factory@@QAEXXZ
    public /* 未知 */ resetMenusToDefault(/* TODO 参数 */);  // ?resetMenusToDefault@XAP_Menu_Factory@@QAEXXZ
};

/* ---- XAP_Module (9 方法) ---- */
class XAP_Module {
public:
    public const /* 未知 */ getCreator(/* TODO 参数 */);  // ?getCreator@XAP_Module@@QBEPAVXAP_ModuleManager@@XZ
    public const /* 未知 */ getModuleInfo(/* TODO 参数 */);  // ?getModuleInfo@XAP_Module@@QBEPBUXAP_ModuleInfo@@XZ
    public /* 未知 */ registerThySelf(/* TODO 参数 */);  // ?registerThySelf@XAP_Module@@AAE_NXZ
    public bool registered(/* TODO 参数 */);  // ?registered@XAP_Module@@QAE_NXZ
    public /* 未知 */ setCreator(/* TODO 参数 */);  // ?setCreator@XAP_Module@@AAEXPAVXAP_ModuleManager@@@Z
    public /* 未知 */ setLoaded(/* TODO 参数 */);  // ?setLoaded@XAP_Module@@AAEX_N@Z
    public bool setSymbols(/* TODO 参数 */);  // ?setSymbols@XAP_Module@@QAE_NP6AHPAUXAP_ModuleInfo@@@Z1P6AHI
    public /* 未知 */ supportsAbiVersion(/* TODO 参数 */);  // ?supportsAbiVersion@XAP_Module@@AAE_NIII@Z
    public /* 未知 */ unregisterThySelf(/* TODO 参数 */);  // ?unregisterThySelf@XAP_Module@@AAE_NXZ
};

/* ---- XAP_ModuleManager (7 方法) ---- */
class XAP_ModuleManager {
public:
    public const /* 未知 */ enumModules(/* TODO 参数 */);  // ?enumModules@XAP_ModuleManager@@QBEPBV?$UT_GenericVector@PAV
    public /* 未知 */ instance(/* TODO 参数 */);  // ?instance@XAP_ModuleManager@@SAAAV1@XZ
    public bool loadModule(/* TODO 参数 */);  // ?loadModule@XAP_ModuleManager@@QAE_NPBD@Z
    public bool loadPreloaded(/* TODO 参数 */);  // ?loadPreloaded@XAP_ModuleManager@@QAE_NP6AHPAUXAP_ModuleInfo
    public /* 未知 */ unloadAllPlugins(/* TODO 参数 */);  // ?unloadAllPlugins@XAP_ModuleManager@@QAEXXZ
    public /* 未知 */ unloadModule(/* TODO 参数 */);  // ?unloadModule@XAP_ModuleManager@@AAEXH@Z
    public /* 未知 */ unloadModule(/* TODO 参数 */);  // ?unloadModule@XAP_ModuleManager@@QAEXPAVXAP_Module@@@Z
};

/* ---- XAP_Prefs (40 方法) ---- */
class XAP_Prefs {
public:
    public /* 未知 */ _getNthScheme(/* TODO 参数 */);  // ?_getNthScheme@XAP_Prefs@@IBEPAVXAP_PrefsScheme@@IABV?$UT_Ge
    public /* 未知 */ _markPrefChange(/* TODO 参数 */);  // ?_markPrefChange@XAP_Prefs@@QAEXPBD@Z
    protected /* 未知 */ _pruneRecent(/* TODO 参数 */);  // ?_pruneRecent@XAP_Prefs@@IAEXXZ
    protected /* 未知 */ _sendPrefsSignal(/* TODO 参数 */);  // ?_sendPrefsSignal@XAP_Prefs@@IAEXPAV?$UT_GenericStringMap@PB
    public /* 未知 */ _startElement_SystemDefaultFile(/* TODO 参数 */);  // ?_startElement_SystemDefaultFile@XAP_Prefs@@AAEXPBDPAPBD@Z
    public /* 未知 */ addListener(/* TODO 参数 */);  // ?addListener@XAP_Prefs@@QAEXP6AXPAVXAP_App@@PAV1@PAV?$UT_Gen
    public bool addPluginScheme(/* TODO 参数 */);  // ?addPluginScheme@XAP_Prefs@@QAE_NPAVXAP_PrefsScheme@@@Z
    public /* 未知 */ addRecent(/* TODO 参数 */);  // ?addRecent@XAP_Prefs@@QAEXPBD@Z
    public bool addScheme(/* TODO 参数 */);  // ?addScheme@XAP_Prefs@@QAE_NPAVXAP_PrefsScheme@@@Z
    virtual public /* 未知 */ charData(/* TODO 参数 */);  // ?charData@XAP_Prefs@@UAEXPBDH@Z
    public /* 未知 */ endBlockChange(/* TODO 参数 */);  // ?endBlockChange@XAP_Prefs@@QAEXXZ
    virtual public /* 未知 */ endElement(/* TODO 参数 */);  // ?endElement@XAP_Prefs@@UAEXPBD@Z
    public const bool getAutoSavePrefs(/* TODO 参数 */);  // ?getAutoSavePrefs@XAP_Prefs@@QBE_NXZ
    public /* 未知 */ getCurrentScheme(/* TODO 参数 */);  // ?getCurrentScheme@XAP_Prefs@@QAEPAVXAP_PrefsScheme@@_N@Z
    public bool getGeometry(/* TODO 参数 */);  // ?getGeometry@XAP_Prefs@@QAE_NPAH0PAI11@Z
    public const /* 未知 */ getMaxRecent(/* TODO 参数 */);  // ?getMaxRecent@XAP_Prefs@@QBEIXZ
    public const /* 未知 */ getNthPluginScheme(/* TODO 参数 */);  // ?getNthPluginScheme@XAP_Prefs@@QBEPAVXAP_PrefsScheme@@I@Z
    public const /* 未知 */ getNthScheme(/* TODO 参数 */);  // ?getNthScheme@XAP_Prefs@@QBEPAVXAP_PrefsScheme@@I@Z
    public const /* 未知 */ getPluginScheme(/* TODO 参数 */);  // ?getPluginScheme@XAP_Prefs@@QBEPAVXAP_PrefsScheme@@PBD@Z
    public const bool getPrefsValue(/* TODO 参数 */);  // ?getPrefsValue@XAP_Prefs@@QBE_NABVUT_String@@AAV2@@Z
    public const bool getPrefsValue(/* TODO 参数 */);  // ?getPrefsValue@XAP_Prefs@@QBE_NPBDPAPBD@Z
    public const bool getPrefsValueBool(/* TODO 参数 */);  // ?getPrefsValueBool@XAP_Prefs@@QBE_NPBDPA_N@Z
    public const /* 未知 */ getRecent(/* TODO 参数 */);  // ?getRecent@XAP_Prefs@@QBEPBDI@Z
    public const /* 未知 */ getRecentCount(/* TODO 参数 */);  // ?getRecentCount@XAP_Prefs@@QBEIXZ
    public const /* 未知 */ getScheme(/* TODO 参数 */);  // ?getScheme@XAP_Prefs@@QBEPAVXAP_PrefsScheme@@PBD@Z
    public const bool getUseEnvLocale(/* TODO 参数 */);  // ?getUseEnvLocale@XAP_Prefs@@QBE_NXZ
    public bool loadPrefsFile(/* TODO 参数 */);  // ?loadPrefsFile@XAP_Prefs@@QAE_NXZ
    public bool loadSystemDefaultPrefsFile(/* TODO 参数 */);  // ?loadSystemDefaultPrefsFile@XAP_Prefs@@QAE_NPBD@Z
    public /* 未知 */ log(/* TODO 参数 */);  // ?log@XAP_Prefs@@QAEXPBD0W4XAPPrefsLog_Level@@@Z
    public /* 未知 */ removeListener(/* TODO 参数 */);  // ?removeListener@XAP_Prefs@@QAEXP6AXPAVXAP_App@@PAV1@PAV?$UT_
    public /* 未知 */ removeRecent(/* TODO 参数 */);  // ?removeRecent@XAP_Prefs@@QAEXI@Z
    public bool savePrefsFile(/* TODO 参数 */);  // ?savePrefsFile@XAP_Prefs@@QAE_NXZ
    public /* 未知 */ setAutoSavePrefs(/* TODO 参数 */);  // ?setAutoSavePrefs@XAP_Prefs@@QAEX_N@Z
    public bool setCurrentScheme(/* TODO 参数 */);  // ?setCurrentScheme@XAP_Prefs@@QAE_NPBD@Z
    public bool setGeometry(/* TODO 参数 */);  // ?setGeometry@XAP_Prefs@@QAE_NHHIII@Z
    public /* 未知 */ setIgnoreNextRecent(/* TODO 参数 */);  // ?setIgnoreNextRecent@XAP_Prefs@@QAEXXZ
    public /* 未知 */ setMaxRecent(/* TODO 参数 */);  // ?setMaxRecent@XAP_Prefs@@QAEXI@Z
    public /* 未知 */ setUseEnvLocale(/* TODO 参数 */);  // ?setUseEnvLocale@XAP_Prefs@@QAEX_N@Z
    public /* 未知 */ startBlockChange(/* TODO 参数 */);  // ?startBlockChange@XAP_Prefs@@QAEXXZ
    virtual public /* 未知 */ startElement(/* TODO 参数 */);  // ?startElement@XAP_Prefs@@UAEXPBDPAPBD@Z
};

/* ---- XAP_PrefsScheme (9 方法) ---- */
class XAP_PrefsScheme {
public:
    public const bool getNthValue(/* TODO 参数 */);  // ?getNthValue@XAP_PrefsScheme@@QBE_NIPAPBD0@Z
    public const /* 未知 */ getSchemeName(/* TODO 参数 */);  // ?getSchemeName@XAP_PrefsScheme@@QBEPBDXZ
    public /* 未知 */ getTickCount(/* TODO 参数 */);  // ?getTickCount@XAP_PrefsScheme@@QAEIXZ
    public const bool getValue(/* TODO 参数 */);  // ?getValue@XAP_PrefsScheme@@QBE_NABVUT_String@@AAV2@@Z
    public const bool getValue(/* TODO 参数 */);  // ?getValue@XAP_PrefsScheme@@QBE_NPBDPAPBD@Z
    public const bool getValueBool(/* TODO 参数 */);  // ?getValueBool@XAP_PrefsScheme@@QBE_NPBDPA_N@Z
    public bool setSchemeName(/* TODO 参数 */);  // ?setSchemeName@XAP_PrefsScheme@@QAE_NPBD@Z
    public bool setValue(/* TODO 参数 */);  // ?setValue@XAP_PrefsScheme@@QAE_NPBD0@Z
    public bool setValueBool(/* TODO 参数 */);  // ?setValueBool@XAP_PrefsScheme@@QAE_NPBD_N@Z
};

/* ---- XAP_Preview (4 方法) ---- */
class XAP_Preview {
public:
    public const /* 未知 */ getWindowHeight(/* TODO 参数 */);  // ?getWindowHeight@XAP_Preview@@QBEHXZ
    public const /* 未知 */ getWindowWidth(/* TODO 参数 */);  // ?getWindowWidth@XAP_Preview@@QBEHXZ
    virtual public /* 未知 */ onLeftButtonDown(/* TODO 参数 */);  // ?onLeftButtonDown@XAP_Preview@@UAEXHH@Z
    public /* 未知 */ setWindowSize(/* TODO 参数 */);  // ?setWindowSize@XAP_Preview@@QAEXHH@Z
};

/* ---- XAP_TabbedDialog_NonPersistent (2 方法) ---- */
class XAP_TabbedDialog_NonPersistent {
public:
    virtual public /* 未知 */ getInitialPageNum(/* TODO 参数 */);  // ?getInitialPageNum@XAP_TabbedDialog_NonPersistent@@UAEHXZ
    virtual public /* 未知 */ setInitialPageNum(/* TODO 参数 */);  // ?setInitialPageNum@XAP_TabbedDialog_NonPersistent@@UAEXH@Z
};

/* ---- XAP_Toolbar_Factory (14 方法) ---- */
class XAP_Toolbar_Factory {
public:
    public /* 未知 */ CreateToolbarLayout(/* TODO 参数 */);  // ?CreateToolbarLayout@XAP_Toolbar_Factory@@QAEPAVEV_Toolbar_L
    public /* 未知 */ DuplicateToolbarLayout(/* TODO 参数 */);  // ?DuplicateToolbarLayout@XAP_Toolbar_Factory@@QAEPAVEV_Toolba
    public bool addIconAfter(/* TODO 参数 */);  // ?addIconAfter@XAP_Toolbar_Factory@@QAE_NPBDHH@Z
    public bool addIconAtEnd(/* TODO 参数 */);  // ?addIconAtEnd@XAP_Toolbar_Factory@@QAE_NPBDH@Z
    public bool addIconBefore(/* TODO 参数 */);  // ?addIconBefore@XAP_Toolbar_Factory@@QAE_NPBDHH@Z
    public const /* 未知 */ countToolbars(/* TODO 参数 */);  // ?countToolbars@XAP_Toolbar_Factory@@QBEIXZ
    public /* 未知 */ getToolbarNames(/* TODO 参数 */);  // ?getToolbarNames@XAP_Toolbar_Factory@@QAEABV?$UT_GenericVect
    public const /* 未知 */ prefKeyForToolbar(/* TODO 参数 */);  // ?prefKeyForToolbar@XAP_Toolbar_Factory@@QBEPBDI@Z
    public bool removeIcon(/* TODO 参数 */);  // ?removeIcon@XAP_Toolbar_Factory@@QAE_NPBDH@Z
    public bool resetAllToolbarsToDefault(/* TODO 参数 */);  // ?resetAllToolbarsToDefault@XAP_Toolbar_Factory@@QAE_NXZ
    public bool resetToolbarToDefault(/* TODO 参数 */);  // ?resetToolbarToDefault@XAP_Toolbar_Factory@@QAE_NPBD@Z
    public /* 未知 */ restoreToolbarLayout(/* TODO 参数 */);  // ?restoreToolbarLayout@XAP_Toolbar_Factory@@QAEXPAVEV_Toolbar
    public bool restoreToolbarsFromCurrentScheme(/* TODO 参数 */);  // ?restoreToolbarsFromCurrentScheme@XAP_Toolbar_Factory@@QAE_N
    public bool saveToolbarsInCurrentScheme(/* TODO 参数 */);  // ?saveToolbarsInCurrentScheme@XAP_Toolbar_Factory@@QAE_NXZ
};

/* ---- XAP_Toolbar_Factory_vec (10 方法) ---- */
class XAP_Toolbar_Factory_vec {
public:
    public /* 未知 */ add_lt(/* TODO 参数 */);  // ?add_lt@XAP_Toolbar_Factory_vec@@QAEXPAUXAP_Toolbar_Factory_
    public /* 未知 */ getLabelStringID(/* TODO 参数 */);  // ?getLabelStringID@XAP_Toolbar_Factory_vec@@QAEIXZ
    public /* 未知 */ getNrEntries(/* TODO 参数 */);  // ?getNrEntries@XAP_Toolbar_Factory_vec@@QAEIXZ
    public /* 未知 */ getNth_lt(/* TODO 参数 */);  // ?getNth_lt@XAP_Toolbar_Factory_vec@@QAEPAUXAP_Toolbar_Factor
    public /* 未知 */ getPrefKey(/* TODO 参数 */);  // ?getPrefKey@XAP_Toolbar_Factory_vec@@QAEPBDXZ
    public /* 未知 */ getToolbarName(/* TODO 参数 */);  // ?getToolbarName@XAP_Toolbar_Factory_vec@@QAEPBDXZ
    public /* 未知 */ insertItemAfter(/* TODO 参数 */);  // ?insertItemAfter@XAP_Toolbar_Factory_vec@@QAEXPAXH@Z
    public /* 未知 */ insertItemBefore(/* TODO 参数 */);  // ?insertItemBefore@XAP_Toolbar_Factory_vec@@QAEXPAXH@Z
    public /* 未知 */ insertLastItem(/* TODO 参数 */);  // ?insertLastItem@XAP_Toolbar_Factory_vec@@QAEXPAX@Z
    public bool removeToolbarId(/* TODO 参数 */);  // ?removeToolbarId@XAP_Toolbar_Factory_vec@@QAE_NH@Z
};

/* ---- XAP_Win32DropTarget (8 方法) ---- */
class XAP_Win32DropTarget {
public:
    public /* 未知 */ AddRef(/* TODO 参数 */);  // ?AddRef@XAP_Win32DropTarget@@UAGKXZ
    public /* 未知 */ DragEnter(/* TODO 参数 */);  // ?DragEnter@XAP_Win32DropTarget@@UAGJPAUIDataObject@@KU_POINT
    public /* 未知 */ DragLeave(/* TODO 参数 */);  // ?DragLeave@XAP_Win32DropTarget@@UAGJXZ
    public /* 未知 */ DragOver(/* TODO 参数 */);  // ?DragOver@XAP_Win32DropTarget@@UAGJKU_POINTL@@PAK@Z
    public /* 未知 */ Drop(/* TODO 参数 */);  // ?Drop@XAP_Win32DropTarget@@UAGJPAUIDataObject@@KU_POINTL@@PA
    public /* 未知 */ QueryInterface(/* TODO 参数 */);  // ?QueryInterface@XAP_Win32DropTarget@@UAGJABU_GUID@@PAPAX@Z
    public /* 未知 */ Release(/* TODO 参数 */);  // ?Release@XAP_Win32DropTarget@@UAGKXZ
    public /* 未知 */ setFrame(/* TODO 参数 */);  // ?setFrame@XAP_Win32DropTarget@@QAEXPAVXAP_Frame@@@Z
};

/* ---- XAP_Win32FrameImpl (35 方法) ---- */
class XAP_Win32FrameImpl {
public:
    public /* 未知 */ KeyupTreatTAB(/* TODO 参数 */);  // ?KeyupTreatTAB@XAP_Win32FrameImpl@@2HA
    public /* 未知 */ RegDocHdlNum(/* TODO 参数 */);  // ?RegDocHdlNum@XAP_Win32FrameImpl@@2HA
    public /* 未知 */ RegFrameHdlNum(/* TODO 参数 */);  // ?RegFrameHdlNum@XAP_Win32FrameImpl@@2HA
    public /* 未知 */ _FrameWndProc(/* TODO 参数 */);  // ?_FrameWndProc@XAP_Win32FrameImpl@@KGJPAUHWND__@@IIJ@Z
    public /* 未知 */ _RegisterClass(/* TODO 参数 */);  // ?_RegisterClass@XAP_Win32FrameImpl@@KA_NPAVXAP_Win32App@@@Z
    public /* 未知 */ _close(/* TODO 参数 */);  // ?_close@XAP_Win32FrameImpl@@MAE_NXZ
    protected /* 未知 */ _createTopLevelWindow(/* TODO 参数 */);  // ?_createTopLevelWindow@XAP_Win32FrameImpl@@IAEXXZ
    protected /* 未知 */ _getBarHeight(/* TODO 参数 */);  // ?_getBarHeight@XAP_Win32FrameImpl@@IAEIXZ
    public /* 未知 */ _getDialogFactory(/* TODO 参数 */);  // ?_getDialogFactory@XAP_Win32FrameImpl@@MAEPAVXAP_DialogFacto
    protected /* 未知 */ _getHwndContainer(/* TODO 参数 */);  // ?_getHwndContainer@XAP_Win32FrameImpl@@IAEPAUHWND__@@XZ
    protected /* 未知 */ _getHwndRebar(/* TODO 参数 */);  // ?_getHwndRebar@XAP_Win32FrameImpl@@IAEPAUHWND__@@XZ
    protected /* 未知 */ _getHwndStatusBar(/* TODO 参数 */);  // ?_getHwndStatusBar@XAP_Win32FrameImpl@@IAEPAUHWND__@@XZ
    public /* 未知 */ _getMainMenu(/* TODO 参数 */);  // ?_getMainMenu@XAP_Win32FrameImpl@@MAEPAVEV_Menu@@XZ
    protected /* 未知 */ _getSizeHeight(/* TODO 参数 */);  // ?_getSizeHeight@XAP_Win32FrameImpl@@IAEIXZ
    protected /* 未知 */ _getSizeWidth(/* TODO 参数 */);  // ?_getSizeWidth@XAP_Win32FrameImpl@@IAEIXZ
    public /* 未知 */ _getTopLevelWindow(/* TODO 参数 */);  // ?_getTopLevelWindow@XAP_Win32FrameImpl@@MBEPAUHWND__@@XZ
    public /* 未知 */ _initialize(/* TODO 参数 */);  // ?_initialize@XAP_Win32FrameImpl@@MAEXXZ
    public /* 未知 */ _newToolbar(/* TODO 参数 */);  // ?_newToolbar@XAP_Win32FrameImpl@@MAEPAVEV_Toolbar@@PAVXAP_Ap
    public /* 未知 */ _nullUpdate(/* TODO 参数 */);  // ?_nullUpdate@XAP_Win32FrameImpl@@MBEXXZ
    public /* 未知 */ _queue_resize(/* TODO 参数 */);  // ?_queue_resize@XAP_Win32FrameImpl@@MAEXXZ
    public /* 未知 */ _raise(/* TODO 参数 */);  // ?_raise@XAP_Win32FrameImpl@@MAE_NXZ
    public /* 未知 */ _runModalContextMenu(/* TODO 参数 */);  // ?_runModalContextMenu@XAP_Win32FrameImpl@@MAE_NPAVAV_View@@P
    protected /* 未知 */ _setBarHeight(/* TODO 参数 */);  // ?_setBarHeight@XAP_Win32FrameImpl@@IAEXI@Z
    public /* 未知 */ _setCursor(/* TODO 参数 */);  // ?_setCursor@XAP_Win32FrameImpl@@MAEXW4Cursor@GR_Graphics@@@Z
    public /* 未知 */ _setFullScreen(/* TODO 参数 */);  // ?_setFullScreen@XAP_Win32FrameImpl@@MAEX_N@Z
    protected /* 未知 */ _setHwndContainer(/* TODO 参数 */);  // ?_setHwndContainer@XAP_Win32FrameImpl@@IAEXPAUHWND__@@@Z
    protected /* 未知 */ _setHwndRebar(/* TODO 参数 */);  // ?_setHwndRebar@XAP_Win32FrameImpl@@IAEXPAUHWND__@@@Z
    protected /* 未知 */ _setHwndStatusBar(/* TODO 参数 */);  // ?_setHwndStatusBar@XAP_Win32FrameImpl@@IAEXPAUHWND__@@@Z
    public /* 未知 */ _show(/* TODO 参数 */);  // ?_show@XAP_Win32FrameImpl@@MAE_NXZ
    public /* 未知 */ _updateTitle(/* TODO 参数 */);  // ?_updateTitle@XAP_Win32FrameImpl@@MAE_NXZ
    public /* 未知 */ getColorSelBackground(/* TODO 参数 */);  // ?getColorSelBackground@XAP_Win32FrameImpl@@MBE?AVUT_RGBColor
    public /* 未知 */ getColorSelForeground(/* TODO 参数 */);  // ?getColorSelForeground@XAP_Win32FrameImpl@@MBE?AVUT_RGBColor
    public const /* 未知 */ getToolbarWindow(/* TODO 参数 */);  // ?getToolbarWindow@XAP_Win32FrameImpl@@QBEPAUHWND__@@XZ
    public const /* 未知 */ getTopLevelWindow(/* TODO 参数 */);  // ?getTopLevelWindow@XAP_Win32FrameImpl@@QBEPAUHWND__@@XZ
    public /* 未知 */ managerHdl(/* TODO 参数 */);  // ?managerHdl@XAP_Win32FrameImpl@@2PAUHWND__@@A
};

/* ---- _PageHdrFtrShadowPair (4 方法) ---- */
class _PageHdrFtrShadowPair {
public:
    public const /* 未知 */ getPage(/* TODO 参数 */);  // ?getPage@_PageHdrFtrShadowPair@@QBEPAVfp_Page@@XZ
    public const /* 未知 */ getShadow(/* TODO 参数 */);  // ?getShadow@_PageHdrFtrShadowPair@@QBEPAVfl_HdrFtrShadow@@XZ
    public /* 未知 */ setPage(/* TODO 参数 */);  // ?setPage@_PageHdrFtrShadowPair@@QAEXPAVfp_Page@@@Z
    public /* 未知 */ setShadow(/* TODO 参数 */);  // ?setShadow@_PageHdrFtrShadowPair@@QAEXPAVfl_HdrFtrShadow@@@Z
};

/* ---- _rtf_font_info (8 方法) ---- */
class _rtf_font_info {
public:
    public const bool _is_same(/* TODO 参数 */);  // ?_is_same@_rtf_font_info@@QBE_NABV1@@Z
    public const /* 未知 */ getFontCharset(/* TODO 参数 */);  // ?getFontCharset@_rtf_font_info@@QBEHXZ
    public const /* 未知 */ getFontFamily(/* TODO 参数 */);  // ?getFontFamily@_rtf_font_info@@QBEPBDXZ
    public const /* 未知 */ getFontName(/* TODO 参数 */);  // ?getFontName@_rtf_font_info@@QBEPBDXZ
    public const /* 未知 */ getFontPitch(/* TODO 参数 */);  // ?getFontPitch@_rtf_font_info@@QBEHXZ
    public bool init(/* TODO 参数 */);  // ?init@_rtf_font_info@@QAE_NABVs_RTF_AttrPropAdapter@@_N@Z
    public bool init(/* TODO 参数 */);  // ?init@_rtf_font_info@@QAE_NPBD@Z
    public const bool isTrueType(/* TODO 参数 */);  // ?isTrueType@_rtf_font_info@@QBE_NXZ
};

/* ---- auto_iconv (1 方法) ---- */
class auto_iconv {
public:
    public /* 未知 */ getHandle(/* TODO 参数 */);  // ?getHandle@auto_iconv@@QAEPAXXZ
};

/* ---- fb_Alignment_center (4 方法) ---- */
class fb_Alignment_center {
public:
    virtual public /* 未知 */ eraseLineFromRun(/* TODO 参数 */);  // ?eraseLineFromRun@fb_Alignment_center@@UAEXPAVfp_Line@@I@Z
    virtual public /* 未知 */ getStartPosition(/* TODO 参数 */);  // ?getStartPosition@fb_Alignment_center@@UAEHXZ
    virtual public /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fb_Alignment_center@@UAE?AW4FB_AlignmentType@@XZ
    virtual public /* 未知 */ initialize(/* TODO 参数 */);  // ?initialize@fb_Alignment_center@@UAEXPAVfp_Line@@@Z
};

/* ---- fb_Alignment_justify (4 方法) ---- */
class fb_Alignment_justify {
public:
    virtual public /* 未知 */ eraseLineFromRun(/* TODO 参数 */);  // ?eraseLineFromRun@fb_Alignment_justify@@UAEXPAVfp_Line@@I@Z
    virtual public /* 未知 */ getStartPosition(/* TODO 参数 */);  // ?getStartPosition@fb_Alignment_justify@@UAEHXZ
    virtual public /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fb_Alignment_justify@@UAE?AW4FB_AlignmentType@@XZ
    virtual public /* 未知 */ initialize(/* TODO 参数 */);  // ?initialize@fb_Alignment_justify@@UAEXPAVfp_Line@@@Z
};

/* ---- fb_Alignment_left (4 方法) ---- */
class fb_Alignment_left {
public:
    virtual public /* 未知 */ eraseLineFromRun(/* TODO 参数 */);  // ?eraseLineFromRun@fb_Alignment_left@@UAEXPAVfp_Line@@I@Z
    virtual public /* 未知 */ getStartPosition(/* TODO 参数 */);  // ?getStartPosition@fb_Alignment_left@@UAEHXZ
    virtual public /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fb_Alignment_left@@UAE?AW4FB_AlignmentType@@XZ
    virtual public /* 未知 */ initialize(/* TODO 参数 */);  // ?initialize@fb_Alignment_left@@UAEXPAVfp_Line@@@Z
};

/* ---- fb_Alignment_right (4 方法) ---- */
class fb_Alignment_right {
public:
    virtual public /* 未知 */ eraseLineFromRun(/* TODO 参数 */);  // ?eraseLineFromRun@fb_Alignment_right@@UAEXPAVfp_Line@@I@Z
    virtual public /* 未知 */ getStartPosition(/* TODO 参数 */);  // ?getStartPosition@fb_Alignment_right@@UAEHXZ
    virtual public /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fb_Alignment_right@@UAE?AW4FB_AlignmentType@@XZ
    virtual public /* 未知 */ initialize(/* TODO 参数 */);  // ?initialize@fb_Alignment_right@@UAEXPAVfp_Line@@@Z
};

/* ---- fb_ColumnBreaker (10 方法) ---- */
class fb_ColumnBreaker {
public:
    public /* 未知 */ _breakCON(/* TODO 参数 */);  // ?_breakCON@fb_ColumnBreaker@@AAE_NAAPAVfp_Container@@0HHH@Z
    public /* 未知 */ _breakTOC(/* TODO 参数 */);  // ?_breakTOC@fb_ColumnBreaker@@AAE_NAAPAVfp_Container@@0HHH@Z
    public /* 未知 */ _breakTable(/* TODO 参数 */);  // ?_breakTable@fb_ColumnBreaker@@AAE_NAAPAVfp_Container@@0HHH@
    public /* 未知 */ _getLastWantedVBreak(/* TODO 参数 */);  // ?_getLastWantedVBreak@fb_ColumnBreaker@@AAEHPAVfp_Container@
    public /* 未知 */ _getNext(/* TODO 参数 */);  // ?_getNext@fb_ColumnBreaker@@AAEPAVfp_Container@@PAV2@@Z
    public /* 未知 */ _isThisBroken(/* TODO 参数 */);  // ?_isThisBroken@fb_ColumnBreaker@@AAE_NPAVfp_Container@@@Z
    public /* 未知 */ _setLastWantedVBreak(/* TODO 参数 */);  // ?_setLastWantedVBreak@fb_ColumnBreaker@@AAEXPAVfp_Container@
    public /* 未知 */ breakSection(/* TODO 参数 */);  // ?breakSection@fb_ColumnBreaker@@QAEHPAVfl_DocSectionLayout@@
    public /* 未知 */ getStartPage(/* TODO 参数 */);  // ?getStartPage@fb_ColumnBreaker@@QAEPAVfp_Page@@XZ
    public /* 未知 */ setStartPage(/* TODO 参数 */);  // ?setStartPage@fb_ColumnBreaker@@QAEXPAVfp_Page@@@Z
};

/* ---- fb_LineBreaker (7 方法) ---- */
class fb_LineBreaker {
public:
    public /* 未知 */ RefreshTextRuns(/* TODO 参数 */);  // ?RefreshTextRuns@fb_LineBreaker@@QAEXPAVfp_Line@@H@Z
    protected /* 未知 */ _breakTheLineAtLastRunToKeep(/* TODO 参数 */);  // ?_breakTheLineAtLastRunToKeep@fb_LineBreaker@@IAEXPAVfp_Line
    protected /* 未知 */ _moveBackToFirstNonBlankData(/* TODO 参数 */);  // ?_moveBackToFirstNonBlankData@fb_LineBreaker@@IAEHPAVfp_Run@
    protected bool _splitAtNextNonBlank(/* TODO 参数 */);  // ?_splitAtNextNonBlank@fb_LineBreaker@@IAE_NPAVfp_Run@@@Z
    protected bool _splitAtOrBeforeThisRun(/* TODO 参数 */);  // ?_splitAtOrBeforeThisRun@fb_LineBreaker@@IAE_NPAVfp_Run@@H@Z
    protected /* 未知 */ _splitRunAt(/* TODO 参数 */);  // ?_splitRunAt@fb_LineBreaker@@IAEXPAVfp_Run@@AAUfp_RunSplitIn
    public /* 未知 */ breakParagraph(/* TODO 参数 */);  // ?breakParagraph@fb_LineBreaker@@QAEHPAVfl_BlockLayout@@PAVfp
};

/* ---- fd_Field (10 方法) ---- */
class fd_Field {
public:
    protected bool _deleteSpan(/* TODO 参数 */);  // ?_deleteSpan@fd_Field@@IAE_NXZ
    protected /* 未知 */ _throwChangeRec(/* TODO 参数 */);  // ?_throwChangeRec@fd_Field@@IAEXI@Z
    public /* 未知 */ getBlock(/* TODO 参数 */);  // ?getBlock@fd_Field@@QAEPAVfl_BlockLayout@@XZ
    public const /* 未知 */ getFieldType(/* TODO 参数 */);  // ?getFieldType@fd_Field@@QBE?AW4_FieldType@1@XZ
    public const /* 未知 */ getParameter(/* TODO 参数 */);  // ?getParameter@fd_Field@@QBEPBDXZ
    public const /* 未知 */ getValue(/* TODO 参数 */);  // ?getValue@fd_Field@@QBEPADXZ
    public /* 未知 */ setBlock(/* TODO 参数 */);  // ?setBlock@fd_Field@@QAEXPAVfl_BlockLayout@@@Z
    public /* 未知 */ setValue(/* TODO 参数 */);  // ?setValue@fd_Field@@QAEXPBD@Z
    public bool update(/* TODO 参数 */);  // ?update@fd_Field@@QAE_NXZ
    public bool updateFragobject(/* TODO 参数 */);  // ?updateFragobject@fd_Field@@QAE_NPBD0@Z
};

/* ---- fg_FillType (18 方法) ---- */
class fg_FillType {
public:
    public /* 未知 */ Fill(/* TODO 参数 */);  // ?Fill@fg_FillType@@QAEXPAVGR_Graphics@@AAH1HHHH@Z
    public /* 未知 */ _regenerateImage(/* TODO 参数 */);  // ?_regenerateImage@fg_FillType@@AAEXPAVGR_Graphics@@@Z
    public /* 未知 */ getColor(/* TODO 参数 */);  // ?getColor@fg_FillType@@QAEPAVUT_RGBColor@@XZ
    public const /* 未知 */ getFillType(/* TODO 参数 */);  // ?getFillType@fg_FillType@@QBE?AW4FG_Fill_Type@@XZ
    public const /* 未知 */ getParent(/* TODO 参数 */);  // ?getParent@fg_FillType@@QBEPAV1@XZ
    public /* 未知 */ markTransparentForPrint(/* TODO 参数 */);  // ?markTransparentForPrint@fg_FillType@@QAEXXZ
    public /* 未知 */ setColor(/* TODO 参数 */);  // ?setColor@fg_FillType@@QAEXAAVUT_RGBColor@@@Z
    public /* 未知 */ setColor(/* TODO 参数 */);  // ?setColor@fg_FillType@@QAEXPBD@Z
    public /* 未知 */ setDocLayout(/* TODO 参数 */);  // ?setDocLayout@fg_FillType@@QAEXPAVFL_DocLayout@@@Z
    public /* 未知 */ setHeight(/* TODO 参数 */);  // ?setHeight@fg_FillType@@QAEXPAVGR_Graphics@@H@Z
    public /* 未知 */ setImage(/* TODO 参数 */);  // ?setImage@fg_FillType@@QAEXPAVFG_Graphic@@PAVGR_Image@@PAVGR
    public /* 未知 */ setImagePointer(/* TODO 参数 */);  // ?setImagePointer@fg_FillType@@QAEXPAPAVFG_Graphic@@PAPAVGR_I
    public /* 未知 */ setParent(/* TODO 参数 */);  // ?setParent@fg_FillType@@QAEXPAV1@@Z
    public /* 未知 */ setTransColor(/* TODO 参数 */);  // ?setTransColor@fg_FillType@@QAEXAAVUT_RGBColor@@@Z
    public /* 未知 */ setTransColor(/* TODO 参数 */);  // ?setTransColor@fg_FillType@@QAEXPBD@Z
    public /* 未知 */ setTransparent(/* TODO 参数 */);  // ?setTransparent@fg_FillType@@QAEXXZ
    public /* 未知 */ setWidth(/* TODO 参数 */);  // ?setWidth@fg_FillType@@QAEXPAVGR_Graphics@@H@Z
    public /* 未知 */ setWidthHeight(/* TODO 参数 */);  // ?setWidthHeight@fg_FillType@@QAEXPAVGR_Graphics@@HH_N@Z
};

/* ---- fl_AutoNum (57 方法) ---- */
class fl_AutoNum {
public:
    public /* 未知 */ _getLabelstr(/* TODO 参数 */);  // ?_getLabelstr@fl_AutoNum@@IBEXQAIPAIIPBX@Z
    protected /* 未知 */ _getLevelValue(/* TODO 参数 */);  // ?_getLevelValue@fl_AutoNum@@IAEIPAV1@@Z
    protected /* 未知 */ _setParent(/* TODO 参数 */);  // ?_setParent@fl_AutoNum@@IAEXPAV1@@Z
    protected /* 未知 */ _setParentID(/* TODO 参数 */);  // ?_setParentID@fl_AutoNum@@IAEXI@Z
    protected /* 未知 */ _updateItems(/* TODO 参数 */);  // ?_updateItems@fl_AutoNum@@IAEXIPBX@Z
    public /* 未知 */ addItem(/* TODO 参数 */);  // ?addItem@fl_AutoNum@@QAEXPBX@Z
    public bool checkReference(/* TODO 参数 */);  // ?checkReference@fl_AutoNum@@QAE_NPAV1@@Z
    public /* 未知 */ dec2ascii(/* TODO 参数 */);  // ?dec2ascii@fl_AutoNum@@SAPADHI@Z
    public /* 未知 */ dec2hebrew(/* TODO 参数 */);  // ?dec2hebrew@fl_AutoNum@@SAXQAIPAIH@Z
    public /* 未知 */ dec2roman(/* TODO 参数 */);  // ?dec2roman@fl_AutoNum@@SAPADH_N@Z
    public bool doesItemHaveLabel(/* TODO 参数 */);  // ?doesItemHaveLabel@fl_AutoNum@@QAE_NPAVfl_BlockLayout@@@Z
    public /* 未知 */ findAndSetParentItem(/* TODO 参数 */);  // ?findAndSetParentItem@fl_AutoNum@@QAEXXZ
    public /* 未知 */ fixHierarchy(/* TODO 参数 */);  // ?fixHierarchy@fl_AutoNum@@QAEXXZ
    public /* 未知 */ fixListOrder(/* TODO 参数 */);  // ?fixListOrder@fl_AutoNum@@QAEXXZ
    public /* 未知 */ getActiveParent(/* TODO 参数 */);  // ?getActiveParent@fl_AutoNum@@QAEPAV1@XZ
    public /* 未知 */ getAttributes(/* TODO 参数 */);  // ?getAttributes@fl_AutoNum@@QAEPAPBDXZ
    public /* 未知 */ getAutoNumFromSdh(/* TODO 参数 */);  // ?getAutoNumFromSdh@fl_AutoNum@@QAEPAV1@PBX@Z
    public const /* 未知 */ getAutoNumFromSdh(/* TODO 参数 */);  // ?getAutoNumFromSdh@fl_AutoNum@@QBEPBV1@PBX@Z
    public const /* 未知 */ getDecimal(/* TODO 参数 */);  // ?getDecimal@fl_AutoNum@@QBEPBDXZ
    public const /* 未知 */ getDelim(/* TODO 参数 */);  // ?getDelim@fl_AutoNum@@QBEPBDXZ
    public const /* 未知 */ getFirstItem(/* TODO 参数 */);  // ?getFirstItem@fl_AutoNum@@QBEPBXXZ
    public const /* 未知 */ getID(/* TODO 参数 */);  // ?getID@fl_AutoNum@@QBEIXZ
    public const /* 未知 */ getLabel(/* TODO 参数 */);  // ?getLabel@fl_AutoNum@@QBEPBIPBX@Z
    public /* 未知 */ getLastItem(/* TODO 参数 */);  // ?getLastItem@fl_AutoNum@@QAEPBXXZ
    public /* 未知 */ getLastItemInHeiracy(/* TODO 参数 */);  // ?getLastItemInHeiracy@fl_AutoNum@@QAEPBXXZ
    public const /* 未知 */ getLevel(/* TODO 参数 */);  // ?getLevel@fl_AutoNum@@QBEIXZ
    public /* 未知 */ getNthBlock(/* TODO 参数 */);  // ?getNthBlock@fl_AutoNum@@QAEPBXI@Z
    public const /* 未知 */ getNumLabels(/* TODO 参数 */);  // ?getNumLabels@fl_AutoNum@@QBEIXZ
    public const /* 未知 */ getParent(/* TODO 参数 */);  // ?getParent@fl_AutoNum@@QBEPAV1@XZ
    public const /* 未知 */ getParentID(/* TODO 参数 */);  // ?getParentID@fl_AutoNum@@QBEIXZ
    public const /* 未知 */ getParentItem(/* TODO 参数 */);  // ?getParentItem@fl_AutoNum@@QBEPBXXZ
    public const /* 未知 */ getPositionInList(/* TODO 参数 */);  // ?getPositionInList@fl_AutoNum@@QBEHPBXI@Z
    public /* 未知 */ getPrevInList(/* TODO 参数 */);  // ?getPrevInList@fl_AutoNum@@QAEPBXPBX@Z
    public const /* 未知 */ getStartValue(/* TODO 参数 */);  // ?getStartValue@fl_AutoNum@@QBEGXZ
    public const /* 未知 */ getStartValue32(/* TODO 参数 */);  // ?getStartValue32@fl_AutoNum@@QBEIXZ
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fl_AutoNum@@QBE?AW4FL_ListType@@XZ
    public const /* 未知 */ getValue(/* TODO 参数 */);  // ?getValue@fl_AutoNum@@QBEIPBX@Z
    public /* 未知 */ insertFirstItem(/* TODO 参数 */);  // ?insertFirstItem@fl_AutoNum@@QAEXPBX0I_N@Z
    public /* 未知 */ insertItem(/* TODO 参数 */);  // ?insertItem@fl_AutoNum@@QAEXPBX0_N@Z
    public bool isContainedByList(/* TODO 参数 */);  // ?isContainedByList@fl_AutoNum@@QAE_NPBX@Z
    public const bool isDirty(/* TODO 参数 */);  // ?isDirty@fl_AutoNum@@QBE_NXZ
    public /* 未知 */ isEmpty(/* TODO 参数 */);  // ?isEmpty@fl_AutoNum@@QAE?B_NXZ
    public bool isIDSomeWhere(/* TODO 参数 */);  // ?isIDSomeWhere@fl_AutoNum@@QAE_NI@Z
    public const /* 未知 */ isItem(/* TODO 参数 */);  // ?isItem@fl_AutoNum@@QBE?B_NPBX@Z
    public bool isLastOnLevel(/* TODO 参数 */);  // ?isLastOnLevel@fl_AutoNum@@QAE_NPBX@Z
    public bool isUpdating(/* TODO 参数 */);  // ?isUpdating@fl_AutoNum@@QAE_NXZ
    public /* 未知 */ markAsDirty(/* TODO 参数 */);  // ?markAsDirty@fl_AutoNum@@QAEXXZ
    public /* 未知 */ prependItem(/* TODO 参数 */);  // ?prependItem@fl_AutoNum@@QAEXPBX0_N@Z
    public /* 未知 */ removeItem(/* TODO 参数 */);  // ?removeItem@fl_AutoNum@@QAEXPBX@Z
    public /* 未知 */ setAsciiOffset(/* TODO 参数 */);  // ?setAsciiOffset@fl_AutoNum@@QAEXI@Z
    public /* 未知 */ setDecimal(/* TODO 参数 */);  // ?setDecimal@fl_AutoNum@@QAEXPBD@Z
    public /* 未知 */ setDelim(/* TODO 参数 */);  // ?setDelim@fl_AutoNum@@QAEXPBD@Z
    public /* 未知 */ setLevel(/* TODO 参数 */);  // ?setLevel@fl_AutoNum@@QAEXI@Z
    public /* 未知 */ setListType(/* TODO 参数 */);  // ?setListType@fl_AutoNum@@QAEXW4FL_ListType@@@Z
    public /* 未知 */ setParentItem(/* TODO 参数 */);  // ?setParentItem@fl_AutoNum@@QAEXPBX@Z
    public /* 未知 */ setStartValue(/* TODO 参数 */);  // ?setStartValue@fl_AutoNum@@QAEXI@Z
    public /* 未知 */ update(/* TODO 参数 */);  // ?update@fl_AutoNum@@QAEXI@Z
};

/* ---- fl_BlockLayout (190 方法) ---- */
class fl_BlockLayout {
public:
    public /* 未知 */ StartList(/* TODO 参数 */);  // ?StartList@fl_BlockLayout@@QAEXPBDPBX@Z
    public /* 未知 */ StartList(/* TODO 参数 */);  // ?StartList@fl_BlockLayout@@QAEXW4FL_ListType@@IPBD11MMII@Z
    public /* 未知 */ StopListInBlock(/* TODO 参数 */);  // ?StopListInBlock@fl_BlockLayout@@QAEXXZ
    protected /* 未知 */ _addBlockToPrevList(/* TODO 参数 */);  // ?_addBlockToPrevList@fl_BlockLayout@@IAEXPAV1@I@Z
    protected /* 未知 */ _assertRunListIntegrity(/* TODO 参数 */);  // ?_assertRunListIntegrity@fl_BlockLayout@@IAEXXZ
    protected /* 未知 */ _breakLineAfterRun(/* TODO 参数 */);  // ?_breakLineAfterRun@fl_BlockLayout@@IAEXPAVfp_Run@@@Z
    public /* 未知 */ _canContainPoint(/* TODO 参数 */);  // ?_canContainPoint@fl_BlockLayout@@EBE_NXZ
    protected bool _checkMultiWord(/* TODO 参数 */);  // ?_checkMultiWord@fl_BlockLayout@@IAE_NHH_N@Z
    protected /* 未知 */ _createListLabel(/* TODO 参数 */);  // ?_createListLabel@fl_BlockLayout@@IAEXXZ
    protected bool _delete(/* TODO 参数 */);  // ?_delete@fl_BlockLayout@@IAE_NII@Z
    protected bool _deleteFmtMark(/* TODO 参数 */);  // ?_deleteFmtMark@fl_BlockLayout@@IAE_NI@Z
    protected /* 未知 */ _deleteListLabel(/* TODO 参数 */);  // ?_deleteListLabel@fl_BlockLayout@@IAEXXZ
    protected bool _doCheckWord(/* TODO 参数 */);  // ?_doCheckWord@fl_BlockLayout@@IAE_NPAVfl_PartOfBlock@@PBIH_N
    protected bool _doInsertBookmarkRun(/* TODO 参数 */);  // ?_doInsertBookmarkRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertDirectionMarkerRun(/* TODO 参数 */);  // ?_doInsertDirectionMarkerRun@fl_BlockLayout@@IAE_NII@Z
    protected bool _doInsertEmbedRun(/* TODO 参数 */);  // ?_doInsertEmbedRun@fl_BlockLayout@@IAE_NIIPBX@Z
    protected bool _doInsertFieldEndRun(/* TODO 参数 */);  // ?_doInsertFieldEndRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertFieldRun(/* TODO 参数 */);  // ?_doInsertFieldRun@fl_BlockLayout@@IAE_NIPBVPX_ChangeRecord_
    protected bool _doInsertFieldStartRun(/* TODO 参数 */);  // ?_doInsertFieldStartRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertFieldTOCRun(/* TODO 参数 */);  // ?_doInsertFieldTOCRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertForcedColumnBreakRun(/* TODO 参数 */);  // ?_doInsertForcedColumnBreakRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertForcedLineBreakRun(/* TODO 参数 */);  // ?_doInsertForcedLineBreakRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertForcedPageBreakRun(/* TODO 参数 */);  // ?_doInsertForcedPageBreakRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertHyperlinkRun(/* TODO 参数 */);  // ?_doInsertHyperlinkRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertImageRun(/* TODO 参数 */);  // ?_doInsertImageRun@fl_BlockLayout@@IAE_NIPAVFG_Graphic@@PBX@
    protected bool _doInsertMathRun(/* TODO 参数 */);  // ?_doInsertMathRun@fl_BlockLayout@@IAE_NIIPBX@Z
    protected bool _doInsertRun(/* TODO 参数 */);  // ?_doInsertRun@fl_BlockLayout@@IAE_NPAVfp_Run@@@Z
    protected bool _doInsertTOCHeadingRun(/* TODO 参数 */);  // ?_doInsertTOCHeadingRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertTOCListLabelRun(/* TODO 参数 */);  // ?_doInsertTOCListLabelRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertTOCListTabRun(/* TODO 参数 */);  // ?_doInsertTOCListTabRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertTOCTabRun(/* TODO 参数 */);  // ?_doInsertTOCTabRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertTabRun(/* TODO 参数 */);  // ?_doInsertTabRun@fl_BlockLayout@@IAE_NI@Z
    protected bool _doInsertTextSpan(/* TODO 参数 */);  // ?_doInsertTextSpan@fl_BlockLayout@@IAE_NII@Z
    protected /* 未知 */ _getSpellChecker(/* TODO 参数 */);  // ?_getSpellChecker@fl_BlockLayout@@IAEPAVSpellChecker@@I@Z
    protected /* 未知 */ _insertEndOfParagraphRun(/* TODO 参数 */);  // ?_insertEndOfParagraphRun@fl_BlockLayout@@IAEXXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fl_BlockLayout@@MAEXPBVPP_AttrProp@@@Z
    protected /* 未知 */ _mergeRuns(/* TODO 参数 */);  // ?_mergeRuns@fl_BlockLayout@@IAEXPAVfp_Run@@0@Z
    protected /* 未知 */ _prependBlockToPrevList(/* TODO 参数 */);  // ?_prependBlockToPrevList@fl_BlockLayout@@IAEXPAV1@@Z
    protected /* 未知 */ _purgeEndOfParagraphRun(/* TODO 参数 */);  // ?_purgeEndOfParagraphRun@fl_BlockLayout@@IAEXXZ
    protected /* 未知 */ _purgeLine(/* TODO 参数 */);  // ?_purgeLine@fl_BlockLayout@@IAEXPAVfp_Line@@@Z
    protected /* 未知 */ _recalcPendingWord(/* TODO 参数 */);  // ?_recalcPendingWord@fl_BlockLayout@@IAEXIH@Z
    protected /* 未知 */ _removeAllEmptyLines(/* TODO 参数 */);  // ?_removeAllEmptyLines@fl_BlockLayout@@IAEXXZ
    protected /* 未知 */ _removeLine(/* TODO 参数 */);  // ?_removeLine@fl_BlockLayout@@IAEXPAVfp_Line@@_N1@Z
    protected bool _spellCheckWord(/* TODO 参数 */);  // ?_spellCheckWord@fl_BlockLayout@@IAE_NPBIII@Z
    protected /* 未知 */ _stuffAllRunsOnALine(/* TODO 参数 */);  // ?_stuffAllRunsOnALine@fl_BlockLayout@@IAEXXZ
    protected bool _truncateLayout(/* TODO 参数 */);  // ?_truncateLayout@fl_BlockLayout@@IAE_NPAVfp_Run@@@Z
    public /* 未知 */ addBackgroundCheckReason(/* TODO 参数 */);  // ?addBackgroundCheckReason@fl_BlockLayout@@QAEXI@Z
    virtual public /* 未知 */ appendTextToBuf(/* TODO 参数 */);  // ?appendTextToBuf@fl_BlockLayout@@UAEXAAVUT_GrowBuf@@@Z
    public /* 未知 */ appendUTF8String(/* TODO 参数 */);  // ?appendUTF8String@fl_BlockLayout@@QAEXAAVUT_UTF8String@@@Z
    public bool checkSpelling(/* TODO 参数 */);  // ?checkSpelling@fl_BlockLayout@@QAE_NXZ
    public bool checkWord(/* TODO 参数 */);  // ?checkWord@fl_BlockLayout@@QAE_NPAVfl_PartOfBlock@@@Z
    public /* 未知 */ clearHdrFtr(/* TODO 参数 */);  // ?clearHdrFtr@fl_BlockLayout@@QAEXXZ
    public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fl_BlockLayout@@QAEXPAVGR_Graphics@@@Z
    public /* 未知 */ coalesceRuns(/* TODO 参数 */);  // ?coalesceRuns@fl_BlockLayout@@QAEXXZ
    virtual public /* 未知 */ collapse(/* TODO 参数 */);  // ?collapse@fl_BlockLayout@@UAEXXZ
    public /* 未知 */ debugFlashing(/* TODO 参数 */);  // ?debugFlashing@fl_BlockLayout@@QAEXXZ
    public /* 未知 */ decodeListType(/* TODO 参数 */);  // ?decodeListType@fl_BlockLayout@@QAE?AW4FL_ListType@@PAD@Z
    public /* 未知 */ deleteListLabel(/* TODO 参数 */);  // ?deleteListLabel@fl_BlockLayout@@QAEXXZ
    public bool doclistener_changeFmtMark(/* TODO 参数 */);  // ?doclistener_changeFmtMark@fl_BlockLayout@@QAE_NPBVPX_Change
    public bool doclistener_changeObject(/* TODO 参数 */);  // ?doclistener_changeObject@fl_BlockLayout@@QAE_NPBVPX_ChangeR
    public bool doclistener_changeSpan(/* TODO 参数 */);  // ?doclistener_changeSpan@fl_BlockLayout@@QAE_NPBVPX_ChangeRec
    public bool doclistener_changeStrux(/* TODO 参数 */);  // ?doclistener_changeStrux@fl_BlockLayout@@QAE_NPBVPX_ChangeRe
    public bool doclistener_deleteFmtMark(/* TODO 参数 */);  // ?doclistener_deleteFmtMark@fl_BlockLayout@@QAE_NPBVPX_Change
    public bool doclistener_deleteObject(/* TODO 参数 */);  // ?doclistener_deleteObject@fl_BlockLayout@@QAE_NPBVPX_ChangeR
    public bool doclistener_deleteSpan(/* TODO 参数 */);  // ?doclistener_deleteSpan@fl_BlockLayout@@QAE_NPBVPX_ChangeRec
    public bool doclistener_deleteStrux(/* TODO 参数 */);  // ?doclistener_deleteStrux@fl_BlockLayout@@QAE_NPBVPX_ChangeRe
    public bool doclistener_insertBlock(/* TODO 参数 */);  // ?doclistener_insertBlock@fl_BlockLayout@@QAE_NPBVPX_ChangeRe
    public bool doclistener_insertFirstBlock(/* TODO 参数 */);  // ?doclistener_insertFirstBlock@fl_BlockLayout@@QAE_NPBVPX_Cha
    public bool doclistener_insertFmtMark(/* TODO 参数 */);  // ?doclistener_insertFmtMark@fl_BlockLayout@@QAE_NPBVPX_Change
    public /* 未知 */ doclistener_insertFrame(/* TODO 参数 */);  // ?doclistener_insertFrame@fl_BlockLayout@@QAEPAVfl_SectionLay
    public bool doclistener_insertObject(/* TODO 参数 */);  // ?doclistener_insertObject@fl_BlockLayout@@QAE_NPBVPX_ChangeR
    public bool doclistener_insertSection(/* TODO 参数 */);  // ?doclistener_insertSection@fl_BlockLayout@@QAE_NPBVPX_Change
    public bool doclistener_insertSpan(/* TODO 参数 */);  // ?doclistener_insertSpan@fl_BlockLayout@@QAE_NPBVPX_ChangeRec
    public /* 未知 */ doclistener_insertTable(/* TODO 参数 */);  // ?doclistener_insertTable@fl_BlockLayout@@QAEPAVfl_SectionLay
    public bool doclistener_populateObject(/* TODO 参数 */);  // ?doclistener_populateObject@fl_BlockLayout@@QAE_NIPBVPX_Chan
    public bool doclistener_populateSpan(/* TODO 参数 */);  // ?doclistener_populateSpan@fl_BlockLayout@@QAE_NPBVPX_ChangeR
    public /* 未知 */ drawGrammarSquiggles(/* TODO 参数 */);  // ?drawGrammarSquiggles@fl_BlockLayout@@QAEXXZ
    public /* 未知 */ findGrammarSquigglesForRun(/* TODO 参数 */);  // ?findGrammarSquigglesForRun@fl_BlockLayout@@QAEXPAVfp_Run@@@
    public /* 未知 */ findLineInBlock(/* TODO 参数 */);  // ?findLineInBlock@fl_BlockLayout@@QAEHPAVfp_Line@@@Z
    public /* 未知 */ findLineWithFootnotePID(/* TODO 参数 */);  // ?findLineWithFootnotePID@fl_BlockLayout@@QAEPAVfp_Line@@I@Z
    public /* 未知 */ findNextLineInDocument(/* TODO 参数 */);  // ?findNextLineInDocument@fl_BlockLayout@@QAEPAVfp_Line@@PAV2@
    public bool findNextTabStop(/* TODO 参数 */);  // ?findNextTabStop@fl_BlockLayout@@QAE_NHHAAHAAW4eTabType@@AAW
    public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fl_BlockLayout@@QAEPAVfp_Run@@I_NAAH1111AA_
    public /* 未知 */ findPrevLineInDocument(/* TODO 参数 */);  // ?findPrevLineInDocument@fl_BlockLayout@@QAEPAVfp_Line@@PAV2@
    public bool findPrevTabStop(/* TODO 参数 */);  // ?findPrevTabStop@fl_BlockLayout@@QAE_NHHAAHAAW4eTabType@@AAW
    public const /* 未知 */ findRunAtOffset(/* TODO 参数 */);  // ?findRunAtOffset@fl_BlockLayout@@QBEPAVfp_Run@@I@Z
    public /* 未知 */ findSpellSquigglesForRun(/* TODO 参数 */);  // ?findSpellSquigglesForRun@fl_BlockLayout@@QAEXPAVfp_Run@@@Z
    public /* 未知 */ forceSectionBreak(/* TODO 参数 */);  // ?forceSectionBreak@fl_BlockLayout@@QAEXXZ
    virtual public /* 未知 */ format(/* TODO 参数 */);  // ?format@fl_BlockLayout@@UAEXXZ
    public /* 未知 */ formatAll(/* TODO 参数 */);  // ?formatAll@fl_BlockLayout@@QAEXXZ
    public /* 未知 */ formatWrappedFromHere(/* TODO 参数 */);  // ?formatWrappedFromHere@fl_BlockLayout@@QAEXPAVfp_Line@@PAVfp
    public const /* 未知 */ getAccumHeight(/* TODO 参数 */);  // ?getAccumHeight@fl_BlockLayout@@QBEHXZ
    public const /* 未知 */ getAlignment(/* TODO 参数 */);  // ?getAlignment@fl_BlockLayout@@QBEPAVfb_Alignment@@XZ
    public const bool getBlockBuf(/* TODO 参数 */);  // ?getBlockBuf@fl_BlockLayout@@QBE_NPAVUT_GrowBuf@@@Z
    public const /* 未知 */ getBottomMargin(/* TODO 参数 */);  // ?getBottomMargin@fl_BlockLayout@@QBEHXZ
    public const /* 未知 */ getDefaultTabInterval(/* TODO 参数 */);  // ?getDefaultTabInterval@fl_BlockLayout@@QBEHXZ
    virtual public const /* 未知 */ getDocLayout(/* TODO 参数 */);  // ?getDocLayout@fl_BlockLayout@@UBEPAVFL_DocLayout@@XZ
    public const /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fl_BlockLayout@@QBEPAVfl_DocSectionLayo
    public const /* 未知 */ getDominantDirection(/* TODO 参数 */);  // ?getDominantDirection@fl_BlockLayout@@QBEJXZ
    public /* 未知 */ getEmbeddedOffset(/* TODO 参数 */);  // ?getEmbeddedOffset@fl_BlockLayout@@QAEHHAAPAVfl_ContainerLay
    public /* 未知 */ getEnclosingBlock(/* TODO 参数 */);  // ?getEnclosingBlock@fl_BlockLayout@@QAEPAV1@XZ
    virtual public const /* 未知 */ getFirstRun(/* TODO 参数 */);  // ?getFirstRun@fl_BlockLayout@@UBEPAVfp_Run@@XZ
    public /* 未知 */ getFormatFromListType(/* TODO 参数 */);  // ?getFormatFromListType@fl_BlockLayout@@QAEPADW4FL_ListType@@
    public const /* 未知 */ getGrammarSquiggles(/* TODO 参数 */);  // ?getGrammarSquiggles@fl_BlockLayout@@QBEPAVfl_GrammarSquiggl
    public /* 未知 */ getHeightOfBlock(/* TODO 参数 */);  // ?getHeightOfBlock@fl_BlockLayout@@QAEHXZ
    public const /* 未知 */ getLastRun(/* TODO 参数 */);  // ?getLastRun@fl_BlockLayout@@QBEPAVfp_Run@@XZ
    public const /* 未知 */ getLeftMargin(/* TODO 参数 */);  // ?getLeftMargin@fl_BlockLayout@@QBEHXZ
    public /* 未知 */ getLeftRightForWrapping(/* TODO 参数 */);  // ?getLeftRightForWrapping@fl_BlockLayout@@QAEXHHAAH00@Z
    public /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@fl_BlockLayout@@QAEHXZ
    public /* 未知 */ getLevel(/* TODO 参数 */);  // ?getLevel@fl_BlockLayout@@QAEIXZ
    public const /* 未知 */ getLineSpacing(/* TODO 参数 */);  // ?getLineSpacing@fl_BlockLayout@@QBEXAANAAW4_eSpacingPolicy@1
    public /* 未知 */ getListAttributesVector(/* TODO 参数 */);  // ?getListAttributesVector@fl_BlockLayout@@QAEXPAV?$UT_Generic
    public /* 未知 */ getListLabel(/* TODO 参数 */);  // ?getListLabel@fl_BlockLayout@@QAEPAIXZ
    public /* 未知 */ getListPropertyVector(/* TODO 参数 */);  // ?getListPropertyVector@fl_BlockLayout@@QAEXPAV?$UT_GenericVe
    public /* 未知 */ getListStyleString(/* TODO 参数 */);  // ?getListStyleString@fl_BlockLayout@@QAEPADW4FL_ListType@@@Z
    public /* 未知 */ getListType(/* TODO 参数 */);  // ?getListType@fl_BlockLayout@@QAE?AW4FL_ListType@@XZ
    public /* 未知 */ getListTypeFromStyle(/* TODO 参数 */);  // ?getListTypeFromStyle@fl_BlockLayout@@QAE?AW4FL_ListType@@PB
    public /* 未知 */ getMaxNonBreakableRun(/* TODO 参数 */);  // ?getMaxNonBreakableRun@fl_BlockLayout@@QAEHXZ
    public /* 未知 */ getMinWrapWidth(/* TODO 参数 */);  // ?getMinWrapWidth@fl_BlockLayout@@QAEHXZ
    virtual public /* 未知 */ getNewContainer(/* TODO 参数 */);  // ?getNewContainer@fl_BlockLayout@@UAEPAVfp_Container@@PAV2@@Z
    public /* 未知 */ getNextList(/* TODO 参数 */);  // ?getNextList@fl_BlockLayout@@QAEPAV1@I@Z
    public bool getNextTableElement(/* TODO 参数 */);  // ?getNextTableElement@fl_BlockLayout@@QAE_NPAVUT_GrowBuf@@IAA
    public /* 未知 */ getNextWrappedLine(/* TODO 参数 */);  // ?getNextWrappedLine@fl_BlockLayout@@QAEPAVfp_Line@@HHPAVfp_P
    public /* 未知 */ getParentItem(/* TODO 参数 */);  // ?getParentItem@fl_BlockLayout@@QAEPAV1@XZ
    virtual public const /* 未知 */ getPosition(/* TODO 参数 */);  // ?getPosition@fl_BlockLayout@@UBEI_N@Z
    public /* 未知 */ getPreviousList(/* TODO 参数 */);  // ?getPreviousList@fl_BlockLayout@@QAEPAV1@I@Z
    public /* 未知 */ getPreviousList(/* TODO 参数 */);  // ?getPreviousList@fl_BlockLayout@@QAEPAV1@XZ
    public /* 未知 */ getPreviousListOfSameMargin(/* TODO 参数 */);  // ?getPreviousListOfSameMargin@fl_BlockLayout@@QAEPAV1@XZ
    public const bool getProp_KeepTogether(/* TODO 参数 */);  // ?getProp_KeepTogether@fl_BlockLayout@@QBE_NXZ
    public const bool getProp_KeepWithNext(/* TODO 参数 */);  // ?getProp_KeepWithNext@fl_BlockLayout@@QBE_NXZ
    public const /* 未知 */ getProp_Orphans(/* TODO 参数 */);  // ?getProp_Orphans@fl_BlockLayout@@QBEIXZ
    public const /* 未知 */ getProp_Widows(/* TODO 参数 */);  // ?getProp_Widows@fl_BlockLayout@@QBEIXZ
    public const /* 未知 */ getProperty(/* TODO 参数 */);  // ?getProperty@fl_BlockLayout@@QBEPBDPBD_N@Z
    public const /* 未知 */ getPropertyType(/* TODO 参数 */);  // ?getPropertyType@fl_BlockLayout@@QBEPBVPP_PropertyType@@PBDW
    public const /* 未知 */ getRightMargin(/* TODO 参数 */);  // ?getRightMargin@fl_BlockLayout@@QBEHXZ
    virtual public const /* 未知 */ getSectionLayout(/* TODO 参数 */);  // ?getSectionLayout@fl_BlockLayout@@UBEPAVfl_SectionLayout@@XZ
    public const /* 未知 */ getSpellSquiggles(/* TODO 参数 */);  // ?getSpellSquiggles@fl_BlockLayout@@QBEPAVfl_SpellSquiggles@@
    public /* 未知 */ getStyle(/* TODO 参数 */);  // ?getStyle@fl_BlockLayout@@QAEXAAVUT_UTF8String@@@Z
    public /* 未知 */ getTOCNumType(/* TODO 参数 */);  // ?getTOCNumType@fl_BlockLayout@@QAE?AW4_FootnoteType@@XZ
    public /* 未知 */ getTOCTabLeader(/* TODO 参数 */);  // ?getTOCTabLeader@fl_BlockLayout@@QAE?AW4eTabLeader@@H@Z
    public /* 未知 */ getTOCTabPosition(/* TODO 参数 */);  // ?getTOCTabPosition@fl_BlockLayout@@QAEHH@Z
    public const /* 未知 */ getTabsCount(/* TODO 参数 */);  // ?getTabsCount@fl_BlockLayout@@QBEHXZ
    public const /* 未知 */ getTextIndent(/* TODO 参数 */);  // ?getTextIndent@fl_BlockLayout@@QBEHXZ
    public const /* 未知 */ getTopMargin(/* TODO 参数 */);  // ?getTopMargin@fl_BlockLayout@@QBEHXZ
    public const /* 未知 */ getView(/* TODO 参数 */);  // ?getView@fl_BlockLayout@@QBEPAVFV_View@@XZ
    public bool getXYOffsetToLine(/* TODO 参数 */);  // ?getXYOffsetToLine@fl_BlockLayout@@QAE_NAAH0PAVfp_Line@@@Z
    public const bool hasBackgroundCheckReason(/* TODO 参数 */);  // ?hasBackgroundCheckReason@fl_BlockLayout@@QBE_NI@Z
    public bool hasUpdatableField(/* TODO 参数 */);  // ?hasUpdatableField@fl_BlockLayout@@QAE_NXZ
    virtual public const bool isCollapsed(/* TODO 参数 */);  // ?isCollapsed@fl_BlockLayout@@UBE_NXZ
    public const bool isContainedByTOC(/* TODO 参数 */);  // ?isContainedByTOC@fl_BlockLayout@@QBE_NXZ
    public bool isEmbeddedType(/* TODO 参数 */);  // ?isEmbeddedType@fl_BlockLayout@@QAE_NXZ
    public bool isFirstInList(/* TODO 参数 */);  // ?isFirstInList@fl_BlockLayout@@QAE_NXZ
    public bool isHdrFtr(/* TODO 参数 */);  // ?isHdrFtr@fl_BlockLayout@@QAE_NXZ
    public bool isLastRunInBlock(/* TODO 参数 */);  // ?isLastRunInBlock@fl_BlockLayout@@QAE_NPAVfp_Run@@@Z
    public const bool isListItem(/* TODO 参数 */);  // ?isListItem@fl_BlockLayout@@QBE_NXZ
    public bool isListLabelInBlock(/* TODO 参数 */);  // ?isListLabelInBlock@fl_BlockLayout@@QAE_NXZ
    public bool isNotTOCable(/* TODO 参数 */);  // ?isNotTOCable@fl_BlockLayout@@QAE_NXZ
    public bool isSentenceSeparator(/* TODO 参数 */);  // ?isSentenceSeparator@fl_BlockLayout@@QAE_NII@Z
    public bool isWordDelimiter(/* TODO 参数 */);  // ?isWordDelimiter@fl_BlockLayout@@QAE_NIIII@Z
    virtual public /* 未知 */ listUpdate(/* TODO 参数 */);  // ?listUpdate@fl_BlockLayout@@UAEXXZ
    virtual public /* 未知 */ markAllRunsDirty(/* TODO 参数 */);  // ?markAllRunsDirty@fl_BlockLayout@@UAEXXZ
    virtual public const bool needsRedraw(/* TODO 参数 */);  // ?needsRedraw@fl_BlockLayout@@UBE_NXZ
    virtual public const bool needsReformat(/* TODO 参数 */);  // ?needsReformat@fl_BlockLayout@@UBE_NXZ
    public /* 未知 */ prependList(/* TODO 参数 */);  // ?prependList@fl_BlockLayout@@QAEXPAV1@@Z
    public /* 未知 */ purgeLayout(/* TODO 参数 */);  // ?purgeLayout@fl_BlockLayout@@QAEXXZ
    virtual public bool recalculateFields(/* TODO 参数 */);  // ?recalculateFields@fl_BlockLayout@@UAE_NI@Z
    public /* 未知 */ recheckIgnoredWords(/* TODO 参数 */);  // ?recheckIgnoredWords@fl_BlockLayout@@QAEXXZ
    virtual public /* 未知 */ redrawUpdate(/* TODO 参数 */);  // ?redrawUpdate@fl_BlockLayout@@UAEXXZ
    public /* 未知 */ remItemFromList(/* TODO 参数 */);  // ?remItemFromList@fl_BlockLayout@@QAEXXZ
    public /* 未知 */ removeBackgroundCheckReason(/* TODO 参数 */);  // ?removeBackgroundCheckReason@fl_BlockLayout@@QAEXI@Z
    public /* 未知 */ resumeList(/* TODO 参数 */);  // ?resumeList@fl_BlockLayout@@QAEXPAV1@@Z
    public /* 未知 */ s_EnumTabStops(/* TODO 参数 */);  // ?s_EnumTabStops@fl_BlockLayout@@SA_NPAXIPAVfl_TabStop@@@Z
    public /* 未知 */ setAccumHeight(/* TODO 参数 */);  // ?setAccumHeight@fl_BlockLayout@@QAEXH@Z
    public /* 未知 */ setDominantDirection(/* TODO 参数 */);  // ?setDominantDirection@fl_BlockLayout@@QAEXJ@Z
    public /* 未知 */ setFirstRun(/* TODO 参数 */);  // ?setFirstRun@fl_BlockLayout@@QAEXPAVfp_Run@@@Z
    public bool setFramesOnPage(/* TODO 参数 */);  // ?setFramesOnPage@fl_BlockLayout@@QAE_NPAVfp_Line@@@Z
    public /* 未知 */ setHdrFtr(/* TODO 参数 */);  // ?setHdrFtr@fl_BlockLayout@@QAEXXZ
    virtual public /* 未知 */ setNeedsRedraw(/* TODO 参数 */);  // ?setNeedsRedraw@fl_BlockLayout@@UAEXXZ
    virtual public /* 未知 */ setNeedsReformat(/* TODO 参数 */);  // ?setNeedsReformat@fl_BlockLayout@@UAEXPAVfl_ContainerLayout@
    public /* 未知 */ setPrevListLabel(/* TODO 参数 */);  // ?setPrevListLabel@fl_BlockLayout@@QAEX_N@Z
    public /* 未知 */ setSectionLayout(/* TODO 参数 */);  // ?setSectionLayout@fl_BlockLayout@@QAEXPAVfl_SectionLayout@@@
    public /* 未知 */ setStarting(/* TODO 参数 */);  // ?setStarting@fl_BlockLayout@@QAEX_N@Z
    public /* 未知 */ setStopping(/* TODO 参数 */);  // ?setStopping@fl_BlockLayout@@QAEX_N@Z
    public /* 未知 */ setStyleInTOC(/* TODO 参数 */);  // ?setStyleInTOC@fl_BlockLayout@@QAEX_N@Z
    public /* 未知 */ setUpdatableField(/* TODO 参数 */);  // ?setUpdatableField@fl_BlockLayout@@QAEX_N@Z
    public /* 未知 */ shuffleEmbeddedIfNeeded(/* TODO 参数 */);  // ?shuffleEmbeddedIfNeeded@fl_BlockLayout@@QAEXPAV1@I@Z
    public /* 未知 */ transferListFlags(/* TODO 参数 */);  // ?transferListFlags@fl_BlockLayout@@QAEXXZ
    public /* 未知 */ updateEnclosingBlockIfNeeded(/* TODO 参数 */);  // ?updateEnclosingBlockIfNeeded@fl_BlockLayout@@QAEXXZ
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@fl_BlockLayout@@UAEX_N@Z
    public /* 未知 */ updateOffsets(/* TODO 参数 */);  // ?updateOffsets@fl_BlockLayout@@QAEXIIH@Z
};

/* ---- fl_BlockSpellIterator (10 方法) ---- */
class fl_BlockSpellIterator {
public:
    public /* 未知 */ _ignoreFirstWordCharacter(/* TODO 参数 */);  // ?_ignoreFirstWordCharacter@fl_BlockSpellIterator@@ABE_NI@Z
    public /* 未知 */ _ignoreLastWordCharacter(/* TODO 参数 */);  // ?_ignoreLastWordCharacter@fl_BlockSpellIterator@@ABE_NI@Z
    public /* 未知 */ getBlockLength(/* TODO 参数 */);  // ?getBlockLength@fl_BlockSpellIterator@@QAEHXZ
    public /* 未知 */ getCurrentWord(/* TODO 参数 */);  // ?getCurrentWord@fl_BlockSpellIterator@@QAEPBIAAH@Z
    public /* 未知 */ getPostWord(/* TODO 参数 */);  // ?getPostWord@fl_BlockSpellIterator@@QAEPBIAAH@Z
    public /* 未知 */ getPreWord(/* TODO 参数 */);  // ?getPreWord@fl_BlockSpellIterator@@QAEPBIAAH@Z
    public bool nextWordForSpellChecking(/* TODO 参数 */);  // ?nextWordForSpellChecking@fl_BlockSpellIterator@@QAE_NAAPBIA
    public /* 未知 */ revertToPreviousWord(/* TODO 参数 */);  // ?revertToPreviousWord@fl_BlockSpellIterator@@QAEXXZ
    public /* 未知 */ updateBlock(/* TODO 参数 */);  // ?updateBlock@fl_BlockSpellIterator@@QAEXXZ
    public /* 未知 */ updateSentenceBoundaries(/* TODO 参数 */);  // ?updateSentenceBoundaries@fl_BlockSpellIterator@@QAEXXZ
};

/* ---- fl_CellLayout (37 方法) ---- */
class fl_CellLayout {
public:
    public /* 未知 */ _localCollapse(/* TODO 参数 */);  // ?_localCollapse@fl_CellLayout@@AAEXXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fl_CellLayout@@MAEXPBVPP_AttrProp@@@Z
    public /* 未知 */ _purgeLayout(/* TODO 参数 */);  // ?_purgeLayout@fl_CellLayout@@MAEXXZ
    public /* 未知 */ _updateCell(/* TODO 参数 */);  // ?_updateCell@fl_CellLayout@@AAEXXZ
    virtual public bool bl_doclistener_insertCell(/* TODO 参数 */);  // ?bl_doclistener_insertCell@fl_CellLayout@@UAE_NPAVfl_Contain
    virtual public bool bl_doclistener_insertEndCell(/* TODO 参数 */);  // ?bl_doclistener_insertEndCell@fl_CellLayout@@UAE_NPAVfl_Cont
    public /* 未知 */ checkAndAdjustCellSize(/* TODO 参数 */);  // ?checkAndAdjustCellSize@fl_CellLayout@@QAEXXZ
    virtual public /* 未知 */ collapse(/* TODO 参数 */);  // ?collapse@fl_CellLayout@@UAEXXZ
    public /* 未知 */ createCellContainer(/* TODO 参数 */);  // ?createCellContainer@fl_CellLayout@@QAEXXZ
    public /* 未知 */ decNumNestedTables(/* TODO 参数 */);  // ?decNumNestedTables@fl_CellLayout@@QAEXXZ
    virtual public bool doclistener_changeStrux(/* TODO 参数 */);  // ?doclistener_changeStrux@fl_CellLayout@@UAE_NPBVPX_ChangeRec
    virtual public bool doclistener_deleteStrux(/* TODO 参数 */);  // ?doclistener_deleteStrux@fl_CellLayout@@UAE_NPBVPX_ChangeRec
    virtual public /* 未知 */ format(/* TODO 参数 */);  // ?format@fl_CellLayout@@UAEXXZ
    public const /* 未知 */ getBottomAttach(/* TODO 参数 */);  // ?getBottomAttach@fl_CellLayout@@QBEHXZ
    public const /* 未知 */ getBottomOffset(/* TODO 参数 */);  // ?getBottomOffset@fl_CellLayout@@QBEHXZ
    public const /* 未知 */ getCellHeight(/* TODO 参数 */);  // ?getCellHeight@fl_CellLayout@@QBEHXZ
    public const /* 未知 */ getCellWidth(/* TODO 参数 */);  // ?getCellWidth@fl_CellLayout@@QBEHXZ
    public const /* 未知 */ getLeftAttach(/* TODO 参数 */);  // ?getLeftAttach@fl_CellLayout@@QBEHXZ
    public const /* 未知 */ getLeftOffset(/* TODO 参数 */);  // ?getLeftOffset@fl_CellLayout@@QBEHXZ
    public /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@fl_CellLayout@@QAEIXZ
    virtual public /* 未知 */ getNewContainer(/* TODO 参数 */);  // ?getNewContainer@fl_CellLayout@@UAEPAVfp_Container@@PAV2@@Z
    public const /* 未知 */ getNumNestedTables(/* TODO 参数 */);  // ?getNumNestedTables@fl_CellLayout@@QBEHXZ
    public const /* 未知 */ getRightAttach(/* TODO 参数 */);  // ?getRightAttach@fl_CellLayout@@QBEHXZ
    public const /* 未知 */ getRightOffset(/* TODO 参数 */);  // ?getRightOffset@fl_CellLayout@@QBEHXZ
    virtual public const /* 未知 */ getSectionLayout(/* TODO 参数 */);  // ?getSectionLayout@fl_CellLayout@@UBEPAVfl_SectionLayout@@XZ
    public const /* 未知 */ getTopAttach(/* TODO 参数 */);  // ?getTopAttach@fl_CellLayout@@QBEHXZ
    public const /* 未知 */ getTopOffset(/* TODO 参数 */);  // ?getTopOffset@fl_CellLayout@@QBEHXZ
    public /* 未知 */ incNumNestedTables(/* TODO 参数 */);  // ?incNumNestedTables@fl_CellLayout@@QAEXXZ
    public bool isCellSelected(/* TODO 参数 */);  // ?isCellSelected@fl_CellLayout@@QAE_NXZ
    public const bool isDoingFormat(/* TODO 参数 */);  // ?isDoingFormat@fl_CellLayout@@QBE_NXZ
    public const bool isLayedOut(/* TODO 参数 */);  // ?isLayedOut@fl_CellLayout@@QBE_NXZ
    virtual public /* 未知 */ markAllRunsDirty(/* TODO 参数 */);  // ?markAllRunsDirty@fl_CellLayout@@UAEXXZ
    virtual public const bool needsReformat(/* TODO 参数 */);  // ?needsReformat@fl_CellLayout@@UBE_NXZ
    virtual public bool recalculateFields(/* TODO 参数 */);  // ?recalculateFields@fl_CellLayout@@UAE_NI@Z
    virtual public /* 未知 */ redrawUpdate(/* TODO 参数 */);  // ?redrawUpdate@fl_CellLayout@@UAEXXZ
    public /* 未知 */ setCellContainerProperties(/* TODO 参数 */);  // ?setCellContainerProperties@fl_CellLayout@@QAEXPAVfp_CellCon
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@fl_CellLayout@@UAEX_N@Z
};

/* ---- fl_ContainerLayout (49 方法) ---- */
class fl_ContainerLayout {
public:
    public /* 未知 */ _canContainPoint(/* TODO 参数 */);  // ?_canContainPoint@fl_ContainerLayout@@EBE_NXZ
    public /* 未知 */ _insertFirst(/* TODO 参数 */);  // ?_insertFirst@fl_ContainerLayout@@AAEXPAV1@@Z
    protected /* 未知 */ _insertIntoList(/* TODO 参数 */);  // ?_insertIntoList@fl_ContainerLayout@@IAEXPAV1@@Z
    public /* 未知 */ add(/* TODO 参数 */);  // ?add@fl_ContainerLayout@@QAEXPAV1@@Z
    public /* 未知 */ addFrame(/* TODO 参数 */);  // ?addFrame@fl_ContainerLayout@@QAEXPAVfl_FrameLayout@@@Z
    public /* 未知 */ append(/* TODO 参数 */);  // ?append@fl_ContainerLayout@@QAEPAV1@PBXIW4_fl_ContainerType@
    virtual public /* 未知 */ appendTextToBuf(/* TODO 参数 */);  // ?appendTextToBuf@fl_ContainerLayout@@UAEXAAVUT_GrowBuf@@@Z
    public const bool canContainPoint(/* TODO 参数 */);  // ?canContainPoint@fl_ContainerLayout@@QBE_NXZ
    public const /* 未知 */ getAP(/* TODO 参数 */);  // ?getAP@fl_ContainerLayout@@QBE?AW4FPVisibility@@AAPBVPP_Attr
    public const /* 未知 */ getAttribute(/* TODO 参数 */);  // ?getAttribute@fl_ContainerLayout@@QBEPBDPBD@Z
    public /* 未知 */ getContainerString(/* TODO 参数 */);  // ?getContainerString@fl_ContainerLayout@@QAEPBDXZ
    public const /* 未知 */ getContainerType(/* TODO 参数 */);  // ?getContainerType@fl_ContainerLayout@@QBE?AW4_fl_ContainerTy
    virtual public const /* 未知 */ getDocLayout(/* TODO 参数 */);  // ?getDocLayout@fl_ContainerLayout@@UBEPAVFL_DocLayout@@XZ
    virtual public /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fl_ContainerLayout@@UAEPAVfl_DocSection
    virtual public const /* 未知 */ getFirstContainer(/* TODO 参数 */);  // ?getFirstContainer@fl_ContainerLayout@@UBEPAVfp_Container@@X
    public const /* 未知 */ getFirstLayout(/* TODO 参数 */);  // ?getFirstLayout@fl_ContainerLayout@@QBEPAV1@XZ
    virtual public const /* 未知 */ getFirstRun(/* TODO 参数 */);  // ?getFirstRun@fl_ContainerLayout@@UBEPAVfp_Run@@XZ
    public /* 未知 */ getFoldedID(/* TODO 参数 */);  // ?getFoldedID@fl_ContainerLayout@@QAEIXZ
    public /* 未知 */ getFoldedLevel(/* TODO 参数 */);  // ?getFoldedLevel@fl_ContainerLayout@@QAEHXZ
    public /* 未知 */ getHdrFtrLayout(/* TODO 参数 */);  // ?getHdrFtrLayout@fl_ContainerLayout@@QAEPAVfl_HdrFtrSectionL
    virtual public const /* 未知 */ getHdrFtrSectionLayout(/* TODO 参数 */);  // ?getHdrFtrSectionLayout@fl_ContainerLayout@@UBEPAVfl_HdrFtrS
    virtual public const /* 未知 */ getLastContainer(/* TODO 参数 */);  // ?getLastContainer@fl_ContainerLayout@@UBEPAVfp_Container@@XZ
    public const /* 未知 */ getLastLayout(/* TODO 参数 */);  // ?getLastLayout@fl_ContainerLayout@@QBEPAV1@XZ
    public /* 未知 */ getLevelInList(/* TODO 参数 */);  // ?getLevelInList@fl_ContainerLayout@@QAEHXZ
    public const /* 未知 */ getNext(/* TODO 参数 */);  // ?getNext@fl_ContainerLayout@@QBEPAV1@XZ
    public const /* 未知 */ getNextBlockInDocument(/* TODO 参数 */);  // ?getNextBlockInDocument@fl_ContainerLayout@@QBEPAVfl_BlockLa
    public const /* 未知 */ getNthFrameContainer(/* TODO 参数 */);  // ?getNthFrameContainer@fl_ContainerLayout@@QBEPAVfp_FrameCont
    public const /* 未知 */ getNthFrameLayout(/* TODO 参数 */);  // ?getNthFrameLayout@fl_ContainerLayout@@QBEPAVfl_FrameLayout@
    public const /* 未知 */ getNumFrames(/* TODO 参数 */);  // ?getNumFrames@fl_ContainerLayout@@QBEHXZ
    virtual public const /* 未知 */ getPosition(/* TODO 参数 */);  // ?getPosition@fl_ContainerLayout@@UBEI_N@Z
    public const /* 未知 */ getPrev(/* TODO 参数 */);  // ?getPrev@fl_ContainerLayout@@QBEPAV1@XZ
    public const /* 未知 */ getPrevBlockInDocument(/* TODO 参数 */);  // ?getPrevBlockInDocument@fl_ContainerLayout@@QBEPAVfl_BlockLa
    public const /* 未知 */ getSpanAP(/* TODO 参数 */);  // ?getSpanAP@fl_ContainerLayout@@QBEXI_NAAPBVPP_AttrProp@@@Z
    public /* 未知 */ insert(/* TODO 参数 */);  // ?insert@fl_ContainerLayout@@QAEPAV1@PBXPAV1@IW4_fl_Container
    public const /* 未知 */ isHidden(/* TODO 参数 */);  // ?isHidden@fl_ContainerLayout@@QBE?AW4FPVisibility@@XZ
    public const bool isOnScreen(/* TODO 参数 */);  // ?isOnScreen@fl_ContainerLayout@@QBE_NXZ
    public /* 未知 */ lookupFoldedLevel(/* TODO 参数 */);  // ?lookupFoldedLevel@fl_ContainerLayout@@QAEXXZ
    public /* 未知 */ lookupProperties(/* TODO 参数 */);  // ?lookupProperties@fl_ContainerLayout@@QAEXXZ
    public const /* 未知 */ myContainingLayout(/* TODO 参数 */);  // ?myContainingLayout@fl_ContainerLayout@@QBEPAV1@XZ
    public /* 未知 */ remove(/* TODO 参数 */);  // ?remove@fl_ContainerLayout@@QAEXPAV1@@Z
    public /* 未知 */ removeFrame(/* TODO 参数 */);  // ?removeFrame@fl_ContainerLayout@@QAEXPAVfl_FrameLayout@@@Z
    public /* 未知 */ setContainingLayout(/* TODO 参数 */);  // ?setContainingLayout@fl_ContainerLayout@@QAEXPAV1@@Z
    virtual public /* 未知 */ setFirstContainer(/* TODO 参数 */);  // ?setFirstContainer@fl_ContainerLayout@@UAEXPAVfp_Container@@
    public /* 未知 */ setFirstLayout(/* TODO 参数 */);  // ?setFirstLayout@fl_ContainerLayout@@QAEXPAV1@@Z
    virtual public /* 未知 */ setLastContainer(/* TODO 参数 */);  // ?setLastContainer@fl_ContainerLayout@@UAEXPAVfp_Container@@@
    public /* 未知 */ setLastLayout(/* TODO 参数 */);  // ?setLastLayout@fl_ContainerLayout@@QAEXPAV1@@Z
    public /* 未知 */ setNext(/* TODO 参数 */);  // ?setNext@fl_ContainerLayout@@QAEXPAV1@@Z
    public /* 未知 */ setPrev(/* TODO 参数 */);  // ?setPrev@fl_ContainerLayout@@QAEXPAV1@@Z
    public /* 未知 */ setVisibility(/* TODO 参数 */);  // ?setVisibility@fl_ContainerLayout@@QAEXW4FPVisibility@@@Z
};

/* ---- fl_DocListener (14 方法) ---- */
class fl_DocListener {
public:
    virtual public bool change(/* TODO 参数 */);  // ?change@fl_DocListener@@UAE_NPBXPBVPX_ChangeRecord@@@Z
    virtual public /* 未知 */ deferNotifications(/* TODO 参数 */);  // ?deferNotifications@fl_DocListener@@UAEXXZ
    public const /* 未知 */ getLayout(/* TODO 参数 */);  // ?getLayout@fl_DocListener@@QBEPBVFL_DocLayout@@XZ
    public /* 未知 */ getTopContainerLayout(/* TODO 参数 */);  // ?getTopContainerLayout@fl_DocListener@@AAEPAVfl_ContainerLay
    virtual public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fl_DocListener@@UBE?AW4_PLListenerType@@XZ
    public bool holdTableLayout(/* TODO 参数 */);  // ?holdTableLayout@fl_DocListener@@QAE_NXZ
    virtual public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@fl_DocListener@@UAE_NPBXPBVPX_ChangeRecord@@0IP
    public /* 未知 */ popContainerLayout(/* TODO 参数 */);  // ?popContainerLayout@fl_DocListener@@AAEPAVfl_ContainerLayout
    virtual public bool populate(/* TODO 参数 */);  // ?populate@fl_DocListener@@UAE_NPBXPBVPX_ChangeRecord@@@Z
    virtual public bool populateStrux(/* TODO 参数 */);  // ?populateStrux@fl_DocListener@@UAE_NPBXPBVPX_ChangeRecord@@P
    virtual public /* 未知 */ processDeferredNotifications(/* TODO 参数 */);  // ?processDeferredNotifications@fl_DocListener@@UAEXXZ
    public /* 未知 */ pushContainerLayout(/* TODO 参数 */);  // ?pushContainerLayout@fl_DocListener@@AAEXPAVfl_ContainerLayo
    public /* 未知 */ setHoldTableLayout(/* TODO 参数 */);  // ?setHoldTableLayout@fl_DocListener@@QAEX_N@Z
    virtual public bool signal(/* TODO 参数 */);  // ?signal@fl_DocListener@@UAE_NI@Z
};

/* ---- fl_DocSectionLayout (78 方法) ---- */
class fl_DocSectionLayout {
public:
    public /* 未知 */ _HdrFtrChangeCallback(/* TODO 参数 */);  // ?_HdrFtrChangeCallback@fl_DocSectionLayout@@SAXPAVUT_Worker@
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fl_DocSectionLayout@@EAEXPBVPP_AttrProp@@
    public /* 未知 */ addOwnedPage(/* TODO 参数 */);  // ?addOwnedPage@fl_DocSectionLayout@@QAEXPAVfp_Page@@@Z
    public /* 未知 */ addValidPages(/* TODO 参数 */);  // ?addValidPages@fl_DocSectionLayout@@QAEXXZ
    public const bool arePageNumbersRestarted(/* TODO 参数 */);  // ?arePageNumbersRestarted@fl_DocSectionLayout@@QBE_NXZ
    virtual public bool bl_doclistener_insertFootnote(/* TODO 参数 */);  // ?bl_doclistener_insertFootnote@fl_DocSectionLayout@@UAE_NPAV
    public /* 未知 */ checkAndAdjustColumnGap(/* TODO 参数 */);  // ?checkAndAdjustColumnGap@fl_DocSectionLayout@@QAEXH@Z
    public /* 未知 */ checkAndRemovePages(/* TODO 参数 */);  // ?checkAndRemovePages@fl_DocSectionLayout@@QAEXXZ
    public /* 未知 */ clearRebuild(/* TODO 参数 */);  // ?clearRebuild@fl_DocSectionLayout@@QAEXXZ
    virtual public /* 未知 */ collapse(/* TODO 参数 */);  // ?collapse@fl_DocSectionLayout@@UAEXXZ
    public /* 未知 */ completeBreakSection(/* TODO 参数 */);  // ?completeBreakSection@fl_DocSectionLayout@@QAEXXZ
    public /* 未知 */ deleteBrokenTablesFromHere(/* TODO 参数 */);  // ?deleteBrokenTablesFromHere@fl_DocSectionLayout@@QAEXPAVfl_C
    public /* 未知 */ deleteEmptyColumns(/* TODO 参数 */);  // ?deleteEmptyColumns@fl_DocSectionLayout@@QAEXXZ
    public /* 未知 */ deleteOwnedPage(/* TODO 参数 */);  // ?deleteOwnedPage@fl_DocSectionLayout@@QAEXPAVfp_Page@@_N@Z
    public /* 未知 */ doMarginChangeOnly(/* TODO 参数 */);  // ?doMarginChangeOnly@fl_DocSectionLayout@@QAEXXZ
    virtual public bool doclistener_changeStrux(/* TODO 参数 */);  // ?doclistener_changeStrux@fl_DocSectionLayout@@UAE_NPBVPX_Cha
    public bool doclistener_deleteStrux(/* TODO 参数 */);  // ?doclistener_deleteStrux@fl_DocSectionLayout@@QAE_NPBVPX_Cha
    virtual public /* 未知 */ format(/* TODO 参数 */);  // ?format@fl_DocSectionLayout@@UAEXXZ
    public /* 未知 */ formatAllHdrFtr(/* TODO 参数 */);  // ?formatAllHdrFtr@fl_DocSectionLayout@@QAEXXZ
    public /* 未知 */ getActualColumnHeight(/* TODO 参数 */);  // ?getActualColumnHeight@fl_DocSectionLayout@@QAEHXZ
    public /* 未知 */ getActualColumnWidth(/* TODO 参数 */);  // ?getActualColumnWidth@fl_DocSectionLayout@@QAEHXZ
    public const /* 未知 */ getBottomMargin(/* TODO 参数 */);  // ?getBottomMargin@fl_DocSectionLayout@@QBEHXZ
    public const /* 未知 */ getColumnGap(/* TODO 参数 */);  // ?getColumnGap@fl_DocSectionLayout@@QBEHXZ
    public const bool getColumnLineBetween(/* TODO 参数 */);  // ?getColumnLineBetween@fl_DocSectionLayout@@QBE_NXZ
    public const /* 未知 */ getColumnOrder(/* TODO 参数 */);  // ?getColumnOrder@fl_DocSectionLayout@@QBEIXZ
    virtual public const /* 未知 */ getFirstContainer(/* TODO 参数 */);  // ?getFirstContainer@fl_DocSectionLayout@@UBEPAVfp_Container@@
    public /* 未知 */ getFirstEndnoteContainer(/* TODO 参数 */);  // ?getFirstEndnoteContainer@fl_DocSectionLayout@@QAEPAVfp_Cont
    public /* 未知 */ getFooter(/* TODO 参数 */);  // ?getFooter@fl_DocSectionLayout@@QAEPAVfl_HdrFtrSectionLayout
    public /* 未知 */ getFooterEven(/* TODO 参数 */);  // ?getFooterEven@fl_DocSectionLayout@@QAEPAVfl_HdrFtrSectionLa
    public /* 未知 */ getFooterFirst(/* TODO 参数 */);  // ?getFooterFirst@fl_DocSectionLayout@@QAEPAVfl_HdrFtrSectionL
    public /* 未知 */ getFooterLast(/* TODO 参数 */);  // ?getFooterLast@fl_DocSectionLayout@@QAEPAVfl_HdrFtrSectionLa
    public const /* 未知 */ getFooterMargin(/* TODO 参数 */);  // ?getFooterMargin@fl_DocSectionLayout@@QBEHXZ
    public /* 未知 */ getFootnoteLayout(/* TODO 参数 */);  // ?getFootnoteLayout@fl_DocSectionLayout@@QAEPAVfl_FootnoteLay
    public const /* 未知 */ getFootnoteLineThickness(/* TODO 参数 */);  // ?getFootnoteLineThickness@fl_DocSectionLayout@@QBEIXZ
    public const /* 未知 */ getFootnoteYoff(/* TODO 参数 */);  // ?getFootnoteYoff@fl_DocSectionLayout@@QBEIXZ
    public /* 未知 */ getHeader(/* TODO 参数 */);  // ?getHeader@fl_DocSectionLayout@@QAEPAVfl_HdrFtrSectionLayout
    public /* 未知 */ getHeaderEven(/* TODO 参数 */);  // ?getHeaderEven@fl_DocSectionLayout@@QAEPAVfl_HdrFtrSectionLa
    public /* 未知 */ getHeaderFirst(/* TODO 参数 */);  // ?getHeaderFirst@fl_DocSectionLayout@@QAEPAVfl_HdrFtrSectionL
    public /* 未知 */ getHeaderLast(/* TODO 参数 */);  // ?getHeaderLast@fl_DocSectionLayout@@QAEPAVfl_HdrFtrSectionLa
    public const /* 未知 */ getHeaderMargin(/* TODO 参数 */);  // ?getHeaderMargin@fl_DocSectionLayout@@QBEHXZ
    virtual public const /* 未知 */ getLastContainer(/* TODO 参数 */);  // ?getLastContainer@fl_DocSectionLayout@@UBEPAVfp_Container@@X
    public /* 未知 */ getLastEndnoteContainer(/* TODO 参数 */);  // ?getLastEndnoteContainer@fl_DocSectionLayout@@QAEPAVfp_Conta
    public /* 未知 */ getLeftMargin(/* TODO 参数 */);  // ?getLeftMargin@fl_DocSectionLayout@@QAEHPAVfp_Page@@@Z
    public const /* 未知 */ getMaxSectionColumnHeight(/* TODO 参数 */);  // ?getMaxSectionColumnHeight@fl_DocSectionLayout@@QBEHXZ
    virtual public /* 未知 */ getNewContainer(/* TODO 参数 */);  // ?getNewContainer@fl_DocSectionLayout@@UAEPAVfp_Container@@PA
    public const /* 未知 */ getNextDocSection(/* TODO 参数 */);  // ?getNextDocSection@fl_DocSectionLayout@@QBEPAV1@XZ
    public const /* 未知 */ getNumColumns(/* TODO 参数 */);  // ?getNumColumns@fl_DocSectionLayout@@QBEIXZ
    public const /* 未知 */ getOddLeftMargin(/* TODO 参数 */);  // ?getOddLeftMargin@fl_DocSectionLayout@@QBEHXZ
    public const /* 未知 */ getOddRightMargin(/* TODO 参数 */);  // ?getOddRightMargin@fl_DocSectionLayout@@QBEHXZ
    public const /* 未知 */ getPrevDocSection(/* TODO 参数 */);  // ?getPrevDocSection@fl_DocSectionLayout@@QBEPAV1@XZ
    public const /* 未知 */ getRestartedPageNumber(/* TODO 参数 */);  // ?getRestartedPageNumber@fl_DocSectionLayout@@QBEHXZ
    public /* 未知 */ getRightMargin(/* TODO 参数 */);  // ?getRightMargin@fl_DocSectionLayout@@QAEHPAVfp_Page@@@Z
    virtual public const /* 未知 */ getSectionLayout(/* TODO 参数 */);  // ?getSectionLayout@fl_DocSectionLayout@@UBEPAVfl_SectionLayou
    public const /* 未知 */ getSpaceAfter(/* TODO 参数 */);  // ?getSpaceAfter@fl_DocSectionLayout@@QBEHXZ
    public const /* 未知 */ getTopMargin(/* TODO 参数 */);  // ?getTopMargin@fl_DocSectionLayout@@QBEHXZ
    public /* 未知 */ getVecOfHdrFtrs(/* TODO 参数 */);  // ?getVecOfHdrFtrs@fl_DocSectionLayout@@QAEXPAV?$UT_GenericVec
    public /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@fl_DocSectionLayout@@QAEHXZ
    public const bool isCollapsing(/* TODO 参数 */);  // ?isCollapsing@fl_DocSectionLayout@@QBE_NXZ
    public bool isThisPageValid(/* TODO 参数 */);  // ?isThisPageValid@fl_DocSectionLayout@@QAE_NW4_HdrFtrType@@PA
    virtual public /* 未知 */ markAllRunsDirty(/* TODO 参数 */);  // ?markAllRunsDirty@fl_DocSectionLayout@@UAEXXZ
    public /* 未知 */ markForRebuild(/* TODO 参数 */);  // ?markForRebuild@fl_DocSectionLayout@@QAEXXZ
    public /* 未知 */ markForReformat(/* TODO 参数 */);  // ?markForReformat@fl_DocSectionLayout@@QAEXXZ
    public const bool needsReFormat(/* TODO 参数 */);  // ?needsReFormat@fl_DocSectionLayout@@QBE_NXZ
    public const bool needsRebuild(/* TODO 参数 */);  // ?needsRebuild@fl_DocSectionLayout@@QBE_NXZ
    public const bool needsSectionBreak(/* TODO 参数 */);  // ?needsSectionBreak@fl_DocSectionLayout@@QBE_NXZ
    public /* 未知 */ prependOwnedFooterPage(/* TODO 参数 */);  // ?prependOwnedFooterPage@fl_DocSectionLayout@@QAEXPAVfp_Page@
    public /* 未知 */ prependOwnedHeaderPage(/* TODO 参数 */);  // ?prependOwnedHeaderPage@fl_DocSectionLayout@@QAEXPAVfp_Page@
    virtual public /* 未知 */ redrawUpdate(/* TODO 参数 */);  // ?redrawUpdate@fl_DocSectionLayout@@UAEXXZ
    virtual public /* 未知 */ setFirstContainer(/* TODO 参数 */);  // ?setFirstContainer@fl_DocSectionLayout@@UAEXPAVfp_Container@
    public /* 未知 */ setFirstEndnoteContainer(/* TODO 参数 */);  // ?setFirstEndnoteContainer@fl_DocSectionLayout@@QAEXPAVfp_End
    public /* 未知 */ setHdrFtr(/* TODO 参数 */);  // ?setHdrFtr@fl_DocSectionLayout@@QAEXW4_HdrFtrType@@PAVfl_Hdr
    public bool setHdrFtrHeightChange(/* TODO 参数 */);  // ?setHdrFtrHeightChange@fl_DocSectionLayout@@QAE_N_NH@Z
    virtual public /* 未知 */ setLastContainer(/* TODO 参数 */);  // ?setLastContainer@fl_DocSectionLayout@@UAEXPAVfp_Container@@
    public /* 未知 */ setLastEndnoteContainer(/* TODO 参数 */);  // ?setLastEndnoteContainer@fl_DocSectionLayout@@QAEXPAVfp_Endn
    public /* 未知 */ setNeedsSectionBreak(/* TODO 参数 */);  // ?setNeedsSectionBreak@fl_DocSectionLayout@@QAEX_NPAVfp_Page@
    public /* 未知 */ setPaperColor(/* TODO 参数 */);  // ?setPaperColor@fl_DocSectionLayout@@QAEXXZ
    public /* 未知 */ updateDocSection(/* TODO 参数 */);  // ?updateDocSection@fl_DocSectionLayout@@QAEXXZ
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@fl_DocSectionLayout@@UAEX_N@Z
};

/* ---- fl_EmbedLayout (20 方法) ---- */
class fl_EmbedLayout {
public:
    public /* 未知 */ _purgeLayout(/* TODO 参数 */);  // ?_purgeLayout@fl_EmbedLayout@@MAEXXZ
    virtual public bool bl_doclistener_insertEndEmbed(/* TODO 参数 */);  // ?bl_doclistener_insertEndEmbed@fl_EmbedLayout@@UAE_NPAVfl_Co
    virtual public bool doclistener_changeStrux(/* TODO 参数 */);  // ?doclistener_changeStrux@fl_EmbedLayout@@UAE_NPBVPX_ChangeRe
    virtual public bool doclistener_deleteEndEmbed(/* TODO 参数 */);  // ?doclistener_deleteEndEmbed@fl_EmbedLayout@@UAE_NPBVPX_Chang
    virtual public bool doclistener_deleteStrux(/* TODO 参数 */);  // ?doclistener_deleteStrux@fl_EmbedLayout@@UAE_NPBVPX_ChangeRe
    public /* 未知 */ getDocPosition(/* TODO 参数 */);  // ?getDocPosition@fl_EmbedLayout@@QAEIXZ
    public const /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fl_EmbedLayout@@QBEPAVfl_DocSectionLayo
    public /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@fl_EmbedLayout@@QAEIXZ
    public const /* 未知 */ getOldSize(/* TODO 参数 */);  // ?getOldSize@fl_EmbedLayout@@QBEHXZ
    virtual public const /* 未知 */ getSectionLayout(/* TODO 参数 */);  // ?getSectionLayout@fl_EmbedLayout@@UBEPAVfl_SectionLayout@@XZ
    public const bool isEndFootnoteIn(/* TODO 参数 */);  // ?isEndFootnoteIn@fl_EmbedLayout@@QBE_NXZ
    virtual public /* 未知 */ markAllRunsDirty(/* TODO 参数 */);  // ?markAllRunsDirty@fl_EmbedLayout@@UAEXXZ
    virtual public bool recalculateFields(/* TODO 参数 */);  // ?recalculateFields@fl_EmbedLayout@@UAE_NI@Z
    virtual public /* 未知 */ redrawUpdate(/* TODO 参数 */);  // ?redrawUpdate@fl_EmbedLayout@@UAEXXZ
    public /* 未知 */ setDocSectionLayout(/* TODO 参数 */);  // ?setDocSectionLayout@fl_EmbedLayout@@QAEXPAVfl_DocSectionLay
    public /* 未知 */ setFootnoteEndIn(/* TODO 参数 */);  // ?setFootnoteEndIn@fl_EmbedLayout@@QAEXXZ
    virtual public /* 未知 */ setNeedsReformat(/* TODO 参数 */);  // ?setNeedsReformat@fl_EmbedLayout@@UAEXPAVfl_ContainerLayout@
    public /* 未知 */ setOldSize(/* TODO 参数 */);  // ?setOldSize@fl_EmbedLayout@@QAEXH@Z
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@fl_EmbedLayout@@UAEXXZ
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@fl_EmbedLayout@@UAEX_N@Z
};

/* ---- fl_EndnoteLayout (8 方法) ---- */
class fl_EndnoteLayout {
public:
    public /* 未知 */ _createEndnoteContainer(/* TODO 参数 */);  // ?_createEndnoteContainer@fl_EndnoteLayout@@AAEXXZ
    public /* 未知 */ _insertEndnoteContainer(/* TODO 参数 */);  // ?_insertEndnoteContainer@fl_EndnoteLayout@@AAEXPAVfp_Contain
    public /* 未知 */ _localCollapse(/* TODO 参数 */);  // ?_localCollapse@fl_EndnoteLayout@@AAEXXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fl_EndnoteLayout@@MAEXPBVPP_AttrProp@@@Z
    virtual public /* 未知 */ collapse(/* TODO 参数 */);  // ?collapse@fl_EndnoteLayout@@UAEXXZ
    virtual public /* 未知 */ format(/* TODO 参数 */);  // ?format@fl_EndnoteLayout@@UAEXXZ
    public const /* 未知 */ getEndnotePID(/* TODO 参数 */);  // ?getEndnotePID@fl_EndnoteLayout@@QBEIXZ
    virtual public /* 未知 */ getNewContainer(/* TODO 参数 */);  // ?getNewContainer@fl_EndnoteLayout@@UAEPAVfp_Container@@PAV2@
};

/* ---- fl_FootnoteLayout (8 方法) ---- */
class fl_FootnoteLayout {
public:
    public /* 未知 */ _createFootnoteContainer(/* TODO 参数 */);  // ?_createFootnoteContainer@fl_FootnoteLayout@@AAEXXZ
    public /* 未知 */ _insertFootnoteContainer(/* TODO 参数 */);  // ?_insertFootnoteContainer@fl_FootnoteLayout@@AAEXPAVfp_Conta
    public /* 未知 */ _localCollapse(/* TODO 参数 */);  // ?_localCollapse@fl_FootnoteLayout@@AAEXXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fl_FootnoteLayout@@MAEXPBVPP_AttrProp@@@Z
    virtual public /* 未知 */ collapse(/* TODO 参数 */);  // ?collapse@fl_FootnoteLayout@@UAEXXZ
    virtual public /* 未知 */ format(/* TODO 参数 */);  // ?format@fl_FootnoteLayout@@UAEXXZ
    public const /* 未知 */ getFootnotePID(/* TODO 参数 */);  // ?getFootnotePID@fl_FootnoteLayout@@QBEIXZ
    virtual public /* 未知 */ getNewContainer(/* TODO 参数 */);  // ?getNewContainer@fl_FootnoteLayout@@UAEPAVfp_Container@@PAV2
};

/* ---- fl_FrameLayout (42 方法) ---- */
class fl_FrameLayout {
public:
    public /* 未知 */ _createFrameContainer(/* TODO 参数 */);  // ?_createFrameContainer@fl_FrameLayout@@AAEXXZ
    public /* 未知 */ _insertFrameContainer(/* TODO 参数 */);  // ?_insertFrameContainer@fl_FrameLayout@@AAEXPAVfp_Container@@
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fl_FrameLayout@@EAEXPBVPP_AttrProp@@@Z
    public /* 未知 */ _purgeLayout(/* TODO 参数 */);  // ?_purgeLayout@fl_FrameLayout@@AAEXXZ
    virtual public bool bl_doclistener_insertEndFrame(/* TODO 参数 */);  // ?bl_doclistener_insertEndFrame@fl_FrameLayout@@UAE_NPAVfl_Co
    virtual public /* 未知 */ collapse(/* TODO 参数 */);  // ?collapse@fl_FrameLayout@@UAEXXZ
    virtual public bool doclistener_changeStrux(/* TODO 参数 */);  // ?doclistener_changeStrux@fl_FrameLayout@@UAE_NPBVPX_ChangeRe
    virtual public bool doclistener_deleteEndFrame(/* TODO 参数 */);  // ?doclistener_deleteEndFrame@fl_FrameLayout@@UAE_NPBVPX_Chang
    virtual public bool doclistener_deleteStrux(/* TODO 参数 */);  // ?doclistener_deleteStrux@fl_FrameLayout@@UAE_NPBVPX_ChangeRe
    virtual public /* 未知 */ format(/* TODO 参数 */);  // ?format@fl_FrameLayout@@UAEXXZ
    public const /* 未知 */ getBoundingSpace(/* TODO 参数 */);  // ?getBoundingSpace@fl_FrameLayout@@QBEHXZ
    public /* 未知 */ getDocPosition(/* TODO 参数 */);  // ?getDocPosition@fl_FrameLayout@@QAEIXZ
    public const /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fl_FrameLayout@@QBEPAVfl_DocSectionLayo
    public const /* 未知 */ getFrameHeight(/* TODO 参数 */);  // ?getFrameHeight@fl_FrameLayout@@QBEHXZ
    public const /* 未知 */ getFramePositionTo(/* TODO 参数 */);  // ?getFramePositionTo@fl_FrameLayout@@QBE?AW4FL_FrameFormatMod
    public const /* 未知 */ getFrameType(/* TODO 参数 */);  // ?getFrameType@fl_FrameLayout@@QBE?AW4FL_FrameType@@XZ
    public const /* 未知 */ getFrameWidth(/* TODO 参数 */);  // ?getFrameWidth@fl_FrameLayout@@QBEHXZ
    public const /* 未知 */ getFrameWrapMode(/* TODO 参数 */);  // ?getFrameWrapMode@fl_FrameLayout@@QBE?AW4FL_FrameWrapMode@@X
    public const /* 未知 */ getFrameXColpos(/* TODO 参数 */);  // ?getFrameXColpos@fl_FrameLayout@@QBEHXZ
    public const /* 未知 */ getFrameXPagepos(/* TODO 参数 */);  // ?getFrameXPagepos@fl_FrameLayout@@QBEHXZ
    public const /* 未知 */ getFrameXpos(/* TODO 参数 */);  // ?getFrameXpos@fl_FrameLayout@@QBEHXZ
    public const /* 未知 */ getFrameYColpos(/* TODO 参数 */);  // ?getFrameYColpos@fl_FrameLayout@@QBEHXZ
    public const /* 未知 */ getFrameYPagepos(/* TODO 参数 */);  // ?getFrameYPagepos@fl_FrameLayout@@QBEHXZ
    public const /* 未知 */ getFrameYpos(/* TODO 参数 */);  // ?getFrameYpos@fl_FrameLayout@@QBEHXZ
    public /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@fl_FrameLayout@@QAEIXZ
    virtual public /* 未知 */ getNewContainer(/* TODO 参数 */);  // ?getNewContainer@fl_FrameLayout@@UAEPAVfp_Container@@PAV2@@Z
    virtual public const /* 未知 */ getSectionLayout(/* TODO 参数 */);  // ?getSectionLayout@fl_FrameLayout@@UBEPAVfl_SectionLayout@@XZ
    public bool insertBlockAfter(/* TODO 参数 */);  // ?insertBlockAfter@fl_FrameLayout@@QAE_NPAVfl_ContainerLayout
    public const bool isEndFrameIn(/* TODO 参数 */);  // ?isEndFrameIn@fl_FrameLayout@@QBE_NXZ
    public bool isTightWrap(/* TODO 参数 */);  // ?isTightWrap@fl_FrameLayout@@QAE_NXZ
    public /* 未知 */ localCollapse(/* TODO 参数 */);  // ?localCollapse@fl_FrameLayout@@QAEXXZ
    virtual public /* 未知 */ markAllRunsDirty(/* TODO 参数 */);  // ?markAllRunsDirty@fl_FrameLayout@@UAEXXZ
    public /* 未知 */ miniFormat(/* TODO 参数 */);  // ?miniFormat@fl_FrameLayout@@QAEXXZ
    virtual public bool recalculateFields(/* TODO 参数 */);  // ?recalculateFields@fl_FrameLayout@@UAE_NI@Z
    virtual public /* 未知 */ redrawUpdate(/* TODO 参数 */);  // ?redrawUpdate@fl_FrameLayout@@UAEXXZ
    public /* 未知 */ setContainerProperties(/* TODO 参数 */);  // ?setContainerProperties@fl_FrameLayout@@QAEXXZ
    public /* 未知 */ setFrameHeight(/* TODO 参数 */);  // ?setFrameHeight@fl_FrameLayout@@QAEXH@Z
    public /* 未知 */ setFrameWidth(/* TODO 参数 */);  // ?setFrameWidth@fl_FrameLayout@@QAEXH@Z
    public /* 未知 */ setFrameXpos(/* TODO 参数 */);  // ?setFrameXpos@fl_FrameLayout@@QAEXH@Z
    public /* 未知 */ setFrameYpos(/* TODO 参数 */);  // ?setFrameYpos@fl_FrameLayout@@QAEXH@Z
    virtual public /* 未知 */ setNeedsReformat(/* TODO 参数 */);  // ?setNeedsReformat@fl_FrameLayout@@UAEXPAVfl_ContainerLayout@
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@fl_FrameLayout@@UAEX_N@Z
};

/* ---- fl_HdrFtrSectionLayout (56 方法) ---- */
class fl_HdrFtrSectionLayout {
public:
    public /* 未知 */ _findShadow(/* TODO 参数 */);  // ?_findShadow@fl_HdrFtrSectionLayout@@AAEHPAVfp_Page@@@Z
    public /* 未知 */ _localCollapse(/* TODO 参数 */);  // ?_localCollapse@fl_HdrFtrSectionLayout@@AAEXXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fl_HdrFtrSectionLayout@@EAEXPBVPP_AttrPro
    public /* 未知 */ addPage(/* TODO 参数 */);  // ?addPage@fl_HdrFtrSectionLayout@@QAEXPAVfp_Page@@@Z
    public /* 未知 */ addValidPages(/* TODO 参数 */);  // ?addValidPages@fl_HdrFtrSectionLayout@@QAEXXZ
    virtual public bool bl_doclistener_changeFmtMark(/* TODO 参数 */);  // ?bl_doclistener_changeFmtMark@fl_HdrFtrSectionLayout@@UAE_NP
    virtual public bool bl_doclistener_changeObject(/* TODO 参数 */);  // ?bl_doclistener_changeObject@fl_HdrFtrSectionLayout@@UAE_NPA
    virtual public bool bl_doclistener_changeSpan(/* TODO 参数 */);  // ?bl_doclistener_changeSpan@fl_HdrFtrSectionLayout@@UAE_NPAVf
    virtual public bool bl_doclistener_changeStrux(/* TODO 参数 */);  // ?bl_doclistener_changeStrux@fl_HdrFtrSectionLayout@@UAE_NPAV
    public bool bl_doclistener_deleteCellStrux(/* TODO 参数 */);  // ?bl_doclistener_deleteCellStrux@fl_HdrFtrSectionLayout@@QAE_
    virtual public bool bl_doclistener_deleteFmtMark(/* TODO 参数 */);  // ?bl_doclistener_deleteFmtMark@fl_HdrFtrSectionLayout@@UAE_NP
    virtual public bool bl_doclistener_deleteObject(/* TODO 参数 */);  // ?bl_doclistener_deleteObject@fl_HdrFtrSectionLayout@@UAE_NPA
    virtual public bool bl_doclistener_deleteSpan(/* TODO 参数 */);  // ?bl_doclistener_deleteSpan@fl_HdrFtrSectionLayout@@UAE_NPAVf
    virtual public bool bl_doclistener_deleteStrux(/* TODO 参数 */);  // ?bl_doclistener_deleteStrux@fl_HdrFtrSectionLayout@@UAE_NPAV
    public bool bl_doclistener_deleteTableStrux(/* TODO 参数 */);  // ?bl_doclistener_deleteTableStrux@fl_HdrFtrSectionLayout@@QAE
    virtual public bool bl_doclistener_insertBlock(/* TODO 参数 */);  // ?bl_doclistener_insertBlock@fl_HdrFtrSectionLayout@@UAE_NPAV
    public bool bl_doclistener_insertCell(/* TODO 参数 */);  // ?bl_doclistener_insertCell@fl_HdrFtrSectionLayout@@QAE_NPAVf
    public bool bl_doclistener_insertEndTable(/* TODO 参数 */);  // ?bl_doclistener_insertEndTable@fl_HdrFtrSectionLayout@@QAE_N
    public bool bl_doclistener_insertFirstBlock(/* TODO 参数 */);  // ?bl_doclistener_insertFirstBlock@fl_HdrFtrSectionLayout@@QAE
    virtual public bool bl_doclistener_insertFmtMark(/* TODO 参数 */);  // ?bl_doclistener_insertFmtMark@fl_HdrFtrSectionLayout@@UAE_NP
    virtual public bool bl_doclistener_insertObject(/* TODO 参数 */);  // ?bl_doclistener_insertObject@fl_HdrFtrSectionLayout@@UAE_NPA
    virtual public bool bl_doclistener_insertSection(/* TODO 参数 */);  // ?bl_doclistener_insertSection@fl_HdrFtrSectionLayout@@UAE_NP
    virtual public bool bl_doclistener_insertSpan(/* TODO 参数 */);  // ?bl_doclistener_insertSpan@fl_HdrFtrSectionLayout@@UAE_NPAVf
    virtual public /* 未知 */ bl_doclistener_insertTable(/* TODO 参数 */);  // ?bl_doclistener_insertTable@fl_HdrFtrSectionLayout@@UAEPAVfl
    virtual public /* 未知 */ bl_doclistener_insertTable(/* TODO 参数 */);  // ?bl_doclistener_insertTable@fl_HdrFtrSectionLayout@@UAEPAVfl
    virtual public bool bl_doclistener_populateObject(/* TODO 参数 */);  // ?bl_doclistener_populateObject@fl_HdrFtrSectionLayout@@UAE_N
    virtual public bool bl_doclistener_populateSpan(/* TODO 参数 */);  // ?bl_doclistener_populateSpan@fl_HdrFtrSectionLayout@@UAE_NPA
    public /* 未知 */ changeIntoHdrFtrSection(/* TODO 参数 */);  // ?changeIntoHdrFtrSection@fl_HdrFtrSectionLayout@@QAEXPAVfl_D
    public /* 未知 */ checkAndAdjustCellSize(/* TODO 参数 */);  // ?checkAndAdjustCellSize@fl_HdrFtrSectionLayout@@QAEXPAVfl_Co
    public /* 未知 */ checkAndRemovePages(/* TODO 参数 */);  // ?checkAndRemovePages@fl_HdrFtrSectionLayout@@QAEXXZ
    public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fl_HdrFtrSectionLayout@@QAEXXZ
    virtual public /* 未知 */ collapse(/* TODO 参数 */);  // ?collapse@fl_HdrFtrSectionLayout@@UAEXXZ
    public /* 未知 */ collapseBlock(/* TODO 参数 */);  // ?collapseBlock@fl_HdrFtrSectionLayout@@QAEXPAVfl_ContainerLa
    public /* 未知 */ deletePage(/* TODO 参数 */);  // ?deletePage@fl_HdrFtrSectionLayout@@QAEXPAVfp_Page@@@Z
    virtual public bool doclistener_changeStrux(/* TODO 参数 */);  // ?doclistener_changeStrux@fl_HdrFtrSectionLayout@@UAE_NPBVPX_
    public bool doclistener_deleteStrux(/* TODO 参数 */);  // ?doclistener_deleteStrux@fl_HdrFtrSectionLayout@@QAE_NPBVPX_
    public /* 未知 */ findMatchingContainer(/* TODO 参数 */);  // ?findMatchingContainer@fl_HdrFtrSectionLayout@@QAEPAVfl_Cont
    public /* 未知 */ findShadow(/* TODO 参数 */);  // ?findShadow@fl_HdrFtrSectionLayout@@QAEPAVfl_HdrFtrShadow@@P
    virtual public /* 未知 */ format(/* TODO 参数 */);  // ?format@fl_HdrFtrSectionLayout@@UAEXXZ
    public const /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fl_HdrFtrSectionLayout@@QBEPAVfl_DocSec
    virtual public const /* 未知 */ getFirstContainer(/* TODO 参数 */);  // ?getFirstContainer@fl_HdrFtrSectionLayout@@UBEPAVfp_Containe
    public /* 未知 */ getFirstShadow(/* TODO 参数 */);  // ?getFirstShadow@fl_HdrFtrSectionLayout@@QAEPAVfl_HdrFtrShado
    public const /* 未知 */ getHFType(/* TODO 参数 */);  // ?getHFType@fl_HdrFtrSectionLayout@@QBE?AW4_HdrFtrType@@XZ
    virtual public const /* 未知 */ getLastContainer(/* TODO 参数 */);  // ?getLastContainer@fl_HdrFtrSectionLayout@@UBEPAVfp_Container
    virtual public /* 未知 */ getNewContainer(/* TODO 参数 */);  // ?getNewContainer@fl_HdrFtrSectionLayout@@UAEPAVfp_Container@
    virtual public const /* 未知 */ getSectionLayout(/* TODO 参数 */);  // ?getSectionLayout@fl_HdrFtrSectionLayout@@UBEPAVfl_SectionLa
    public bool isPageHere(/* TODO 参数 */);  // ?isPageHere@fl_HdrFtrSectionLayout@@QAE_NPAVfp_Page@@@Z
    public bool isPointInHere(/* TODO 参数 */);  // ?isPointInHere@fl_HdrFtrSectionLayout@@QAE_NI@Z
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fl_HdrFtrSectionLayout@@QAEXXZ
    public /* 未知 */ localFormat(/* TODO 参数 */);  // ?localFormat@fl_HdrFtrSectionLayout@@QAEXXZ
    virtual public /* 未知 */ markAllRunsDirty(/* TODO 参数 */);  // ?markAllRunsDirty@fl_HdrFtrSectionLayout@@UAEXXZ
    virtual public bool recalculateFields(/* TODO 参数 */);  // ?recalculateFields@fl_HdrFtrSectionLayout@@UAE_NI@Z
    virtual public /* 未知 */ redrawUpdate(/* TODO 参数 */);  // ?redrawUpdate@fl_HdrFtrSectionLayout@@UAEXXZ
    public /* 未知 */ setDocSectionLayout(/* TODO 参数 */);  // ?setDocSectionLayout@fl_HdrFtrSectionLayout@@QAEXPAVfl_DocSe
    public /* 未知 */ setHdrFtr(/* TODO 参数 */);  // ?setHdrFtr@fl_HdrFtrSectionLayout@@QAEXW4_HdrFtrType@@@Z
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@fl_HdrFtrSectionLayout@@UAEX_N@Z
};

/* ---- fl_HdrFtrShadow (17 方法) ---- */
class fl_HdrFtrShadow {
public:
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fl_HdrFtrShadow@@EAEXPBVPP_AttrProp@@@Z
    public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fl_HdrFtrShadow@@QAEXXZ
    virtual public /* 未知 */ collapse(/* TODO 参数 */);  // ?collapse@fl_HdrFtrShadow@@UAEXXZ
    virtual public bool doclistener_changeStrux(/* TODO 参数 */);  // ?doclistener_changeStrux@fl_HdrFtrShadow@@UAE_NPBVPX_ChangeR
    public /* 未知 */ findBlockAtPosition(/* TODO 参数 */);  // ?findBlockAtPosition@fl_HdrFtrShadow@@QAEPAVfl_ContainerLayo
    public /* 未知 */ findMatchingContainer(/* TODO 参数 */);  // ?findMatchingContainer@fl_HdrFtrShadow@@QAEPAVfl_ContainerLa
    virtual public /* 未知 */ format(/* TODO 参数 */);  // ?format@fl_HdrFtrShadow@@UAEXXZ
    virtual public const /* 未知 */ getFirstContainer(/* TODO 参数 */);  // ?getFirstContainer@fl_HdrFtrShadow@@UBEPAVfp_Container@@XZ
    virtual public const /* 未知 */ getHdrFtrSectionLayout(/* TODO 参数 */);  // ?getHdrFtrSectionLayout@fl_HdrFtrShadow@@UBEPAVfl_HdrFtrSect
    virtual public const /* 未知 */ getLastContainer(/* TODO 参数 */);  // ?getLastContainer@fl_HdrFtrShadow@@UBEPAVfp_Container@@XZ
    virtual public /* 未知 */ getNewContainer(/* TODO 参数 */);  // ?getNewContainer@fl_HdrFtrShadow@@UAEPAVfp_Container@@PAV2@@
    public /* 未知 */ getPage(/* TODO 参数 */);  // ?getPage@fl_HdrFtrShadow@@QAEPAVfp_Page@@XZ
    virtual public const /* 未知 */ getSectionLayout(/* TODO 参数 */);  // ?getSectionLayout@fl_HdrFtrShadow@@UBEPAVfl_SectionLayout@@X
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fl_HdrFtrShadow@@QAEXXZ
    virtual public /* 未知 */ markAllRunsDirty(/* TODO 参数 */);  // ?markAllRunsDirty@fl_HdrFtrShadow@@UAEXXZ
    virtual public /* 未知 */ redrawUpdate(/* TODO 参数 */);  // ?redrawUpdate@fl_HdrFtrShadow@@UAEXXZ
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@fl_HdrFtrShadow@@UAEX_N@Z
};

/* ---- fl_Layout (13 方法) ---- */
class fl_Layout {
public:
    public const bool getAttrProp(/* TODO 参数 */);  // ?getAttrProp@fl_Layout@@QBE_NPAPBVPP_AttrProp@@PAPAVPP_Revis
    public const /* 未知 */ getAttrPropIndex(/* TODO 参数 */);  // ?getAttrPropIndex@fl_Layout@@QBEIXZ
    public const /* 未知 */ getAutoNum(/* TODO 参数 */);  // ?getAutoNum@fl_Layout@@QBEPAVfl_AutoNum@@XZ
    public /* 未知 */ getBookmark(/* TODO 参数 */);  // ?getBookmark@fl_Layout@@QAEPAVpo_Bookmark@@I@Z
    public const /* 未知 */ getDocument(/* TODO 参数 */);  // ?getDocument@fl_Layout@@QBEPAVPD_Document@@XZ
    public bool getField(/* TODO 参数 */);  // ?getField@fl_Layout@@QAE_NIAAPAVfd_Field@@@Z
    public const bool getSpanAttrProp(/* TODO 参数 */);  // ?getSpanAttrProp@fl_Layout@@QBE_NI_NPAPBVPP_AttrProp@@PAPAVP
    public const /* 未知 */ getStruxDocHandle(/* TODO 参数 */);  // ?getStruxDocHandle@fl_Layout@@QBEPBXXZ
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fl_Layout@@QBE?AW4_PTStruxType@@XZ
    virtual public /* 未知 */ listUpdate(/* TODO 参数 */);  // ?listUpdate@fl_Layout@@UAEXXZ
    public /* 未知 */ setAttrPropIndex(/* TODO 参数 */);  // ?setAttrPropIndex@fl_Layout@@QAEXI@Z
    public /* 未知 */ setAutoNum(/* TODO 参数 */);  // ?setAutoNum@fl_Layout@@QAEXPAVfl_AutoNum@@@Z
    public /* 未知 */ setType(/* TODO 参数 */);  // ?setType@fl_Layout@@QAEXW4_PTStruxType@@@Z
};

/* ---- fl_PartOfBlock (11 方法) ---- */
class fl_PartOfBlock {
public:
    public const bool doesTouch(/* TODO 参数 */);  // ?doesTouch@fl_PartOfBlock@@QBE_NHH@Z
    public /* 未知 */ getGrammarMessage(/* TODO 参数 */);  // ?getGrammarMessage@fl_PartOfBlock@@QAEXAAVUT_UTF8String@@@Z
    public const bool getIsIgnored(/* TODO 参数 */);  // ?getIsIgnored@fl_PartOfBlock@@QBE_NXZ
    public const /* 未知 */ getOffset(/* TODO 参数 */);  // ?getOffset@fl_PartOfBlock@@QBEHXZ
    public const /* 未知 */ getPTLength(/* TODO 参数 */);  // ?getPTLength@fl_PartOfBlock@@QBEHXZ
    public bool isInvisible(/* TODO 参数 */);  // ?isInvisible@fl_PartOfBlock@@QAE_NXZ
    public /* 未知 */ setGrammarMessage(/* TODO 参数 */);  // ?setGrammarMessage@fl_PartOfBlock@@QAEXAAVUT_UTF8String@@@Z
    public /* 未知 */ setInvisible(/* TODO 参数 */);  // ?setInvisible@fl_PartOfBlock@@QAEXXZ
    public /* 未知 */ setIsIgnored(/* TODO 参数 */);  // ?setIsIgnored@fl_PartOfBlock@@QAEX_N@Z
    public /* 未知 */ setOffset(/* TODO 参数 */);  // ?setOffset@fl_PartOfBlock@@QAEXH@Z
    public /* 未知 */ setPTLength(/* TODO 参数 */);  // ?setPTLength@fl_PartOfBlock@@QAEXH@Z
};

/* ---- fl_SectionLayout (36 方法) ---- */
class fl_SectionLayout {
public:
    protected /* 未知 */ _purgeLayout(/* TODO 参数 */);  // ?_purgeLayout@fl_SectionLayout@@IAEXXZ
    virtual public bool bl_doclistener_changeFmtMark(/* TODO 参数 */);  // ?bl_doclistener_changeFmtMark@fl_SectionLayout@@UAE_NPAVfl_C
    virtual public bool bl_doclistener_changeObject(/* TODO 参数 */);  // ?bl_doclistener_changeObject@fl_SectionLayout@@UAE_NPAVfl_Co
    virtual public bool bl_doclistener_changeSpan(/* TODO 参数 */);  // ?bl_doclistener_changeSpan@fl_SectionLayout@@UAE_NPAVfl_Cont
    virtual public bool bl_doclistener_changeStrux(/* TODO 参数 */);  // ?bl_doclistener_changeStrux@fl_SectionLayout@@UAE_NPAVfl_Con
    virtual public bool bl_doclistener_deleteFmtMark(/* TODO 参数 */);  // ?bl_doclistener_deleteFmtMark@fl_SectionLayout@@UAE_NPAVfl_C
    virtual public bool bl_doclistener_deleteObject(/* TODO 参数 */);  // ?bl_doclistener_deleteObject@fl_SectionLayout@@UAE_NPAVfl_Co
    virtual public bool bl_doclistener_deleteSpan(/* TODO 参数 */);  // ?bl_doclistener_deleteSpan@fl_SectionLayout@@UAE_NPAVfl_Cont
    virtual public bool bl_doclistener_deleteStrux(/* TODO 参数 */);  // ?bl_doclistener_deleteStrux@fl_SectionLayout@@UAE_NPAVfl_Con
    virtual public bool bl_doclistener_insertBlock(/* TODO 参数 */);  // ?bl_doclistener_insertBlock@fl_SectionLayout@@UAE_NPAVfl_Con
    virtual public bool bl_doclistener_insertFmtMark(/* TODO 参数 */);  // ?bl_doclistener_insertFmtMark@fl_SectionLayout@@UAE_NPAVfl_C
    virtual public /* 未知 */ bl_doclistener_insertFrame(/* TODO 参数 */);  // ?bl_doclistener_insertFrame@fl_SectionLayout@@UAEPAV1@PAVfl_
    virtual public bool bl_doclistener_insertObject(/* TODO 参数 */);  // ?bl_doclistener_insertObject@fl_SectionLayout@@UAE_NPAVfl_Co
    virtual public bool bl_doclistener_insertSection(/* TODO 参数 */);  // ?bl_doclistener_insertSection@fl_SectionLayout@@UAE_NPAVfl_C
    virtual public bool bl_doclistener_insertSpan(/* TODO 参数 */);  // ?bl_doclistener_insertSpan@fl_SectionLayout@@UAE_NPAVfl_Cont
    virtual public /* 未知 */ bl_doclistener_insertTable(/* TODO 参数 */);  // ?bl_doclistener_insertTable@fl_SectionLayout@@UAEPAV1@PAVfl_
    virtual public /* 未知 */ bl_doclistener_insertTable(/* TODO 参数 */);  // ?bl_doclistener_insertTable@fl_SectionLayout@@UAEPAV1@W4_Sec
    virtual public bool bl_doclistener_populateObject(/* TODO 参数 */);  // ?bl_doclistener_populateObject@fl_SectionLayout@@UAE_NPAVfl_
    virtual public bool bl_doclistener_populateSpan(/* TODO 参数 */);  // ?bl_doclistener_populateSpan@fl_SectionLayout@@UAE_NPAVfl_Co
    public /* 未知 */ checkAndAdjustCellSize(/* TODO 参数 */);  // ?checkAndAdjustCellSize@fl_SectionLayout@@QAEXXZ
    virtual public /* 未知 */ checkGraphicTick(/* TODO 参数 */);  // ?checkGraphicTick@fl_SectionLayout@@UAEXPAVGR_Graphics@@@Z
    virtual public /* 未知 */ clearNeedsRedraw(/* TODO 参数 */);  // ?clearNeedsRedraw@fl_SectionLayout@@UAEXXZ
    public /* 未知 */ getBackgroundImage(/* TODO 参数 */);  // ?getBackgroundImage@fl_SectionLayout@@QAEPAVGR_Image@@XZ
    virtual public const /* 未知 */ getDocLayout(/* TODO 参数 */);  // ?getDocLayout@fl_SectionLayout@@UBEPAVFL_DocLayout@@XZ
    public const /* 未知 */ getFirstBlock(/* TODO 参数 */);  // ?getFirstBlock@fl_SectionLayout@@QBEPAVfl_BlockLayout@@XZ
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fl_SectionLayout@@QBE?AW4_SectionType@@XZ
    virtual public const bool isCollapsed(/* TODO 参数 */);  // ?isCollapsed@fl_SectionLayout@@UBE_NXZ
    virtual public /* 未知 */ markAllRunsDirty(/* TODO 参数 */);  // ?markAllRunsDirty@fl_SectionLayout@@UAEXXZ
    virtual public const bool needsRedraw(/* TODO 参数 */);  // ?needsRedraw@fl_SectionLayout@@UBE_NXZ
    virtual public const bool needsReformat(/* TODO 参数 */);  // ?needsReformat@fl_SectionLayout@@UBE_NXZ
    virtual public bool recalculateFields(/* TODO 参数 */);  // ?recalculateFields@fl_SectionLayout@@UAE_NI@Z
    virtual public /* 未知 */ removeFromUpdate(/* TODO 参数 */);  // ?removeFromUpdate@fl_SectionLayout@@UAEXPAVfl_ContainerLayou
    virtual public /* 未知 */ setImageHeight(/* TODO 参数 */);  // ?setImageHeight@fl_SectionLayout@@UAEXH@Z
    virtual public /* 未知 */ setImageWidth(/* TODO 参数 */);  // ?setImageWidth@fl_SectionLayout@@UAEXH@Z
    virtual public /* 未知 */ setNeedsRedraw(/* TODO 参数 */);  // ?setNeedsRedraw@fl_SectionLayout@@UAEXXZ
    virtual public /* 未知 */ setNeedsReformat(/* TODO 参数 */);  // ?setNeedsReformat@fl_SectionLayout@@UAEXPAVfl_ContainerLayou
};

/* ---- fl_ShadowListener (5 方法) ---- */
class fl_ShadowListener {
public:
    virtual public bool change(/* TODO 参数 */);  // ?change@fl_ShadowListener@@UAE_NPBXPBVPX_ChangeRecord@@@Z
    virtual public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@fl_ShadowListener@@UAE_NPBXPBVPX_ChangeRecord@@
    virtual public bool populate(/* TODO 参数 */);  // ?populate@fl_ShadowListener@@UAE_NPBXPBVPX_ChangeRecord@@@Z
    virtual public bool populateStrux(/* TODO 参数 */);  // ?populateStrux@fl_ShadowListener@@UAE_NPBXPBVPX_ChangeRecord
    virtual public bool signal(/* TODO 参数 */);  // ?signal@fl_ShadowListener@@UAE_NI@Z
};

/* ---- fl_Squiggles (22 方法) ---- */
class fl_Squiggles {
public:
    public /* 未知 */ _deleteAtOffset(/* TODO 参数 */);  // ?_deleteAtOffset@fl_Squiggles@@AAE_NH@Z
    public /* 未知 */ _deleteNth(/* TODO 参数 */);  // ?_deleteNth@fl_Squiggles@@AAEXH@Z
    public /* 未知 */ _find(/* TODO 参数 */);  // ?_find@fl_Squiggles@@ABEHH@Z
    public /* 未知 */ _findFirstAfter(/* TODO 参数 */);  // ?_findFirstAfter@fl_Squiggles@@ABE_NHAAH@Z
    public /* 未知 */ _getCount(/* TODO 参数 */);  // ?_getCount@fl_Squiggles@@ABEHXZ
    public /* 未知 */ _move(/* TODO 参数 */);  // ?_move@fl_Squiggles@@AAEXHHPAVfl_BlockLayout@@@Z
    public /* 未知 */ _purge(/* TODO 参数 */);  // ?_purge@fl_Squiggles@@AAEXXZ
    public /* 未知 */ add(/* TODO 参数 */);  // ?add@fl_Squiggles@@QAEXPAVfl_PartOfBlock@@@Z
    public /* 未知 */ clear(/* TODO 参数 */);  // ?clear@fl_Squiggles@@QAEXPAVfl_PartOfBlock@@@Z
    public bool deleteAll(/* TODO 参数 */);  // ?deleteAll@fl_Squiggles@@QAE_NXZ
    public const bool findRange(/* TODO 参数 */);  // ?findRange@fl_Squiggles@@QBE_NHHAAH0_N@Z
    public const /* 未知 */ get(/* TODO 参数 */);  // ?get@fl_Squiggles@@QBEPAVfl_PartOfBlock@@H@Z
    public const /* 未知 */ getNth(/* TODO 参数 */);  // ?getNth@fl_Squiggles@@QBEPAVfl_PartOfBlock@@H@Z
    public const /* 未知 */ getSquiggleType(/* TODO 参数 */);  // ?getSquiggleType@fl_Squiggles@@QBE?AW4FL_SQUIGGLE_TYPE@@XZ
    public /* 未知 */ join(/* TODO 参数 */);  // ?join@fl_Squiggles@@QAEXHPAVfl_BlockLayout@@@Z
    public /* 未知 */ markForRedraw(/* TODO 参数 */);  // ?markForRedraw@fl_Squiggles@@QAEXPAVfl_PartOfBlock@@@Z
    public bool recheckIgnoredWords(/* TODO 参数 */);  // ?recheckIgnoredWords@fl_Squiggles@@QAE_NPBI@Z
    public /* 未知 */ split(/* TODO 参数 */);  // ?split@fl_Squiggles@@QAEXHPAVfl_BlockLayout@@@Z
    public /* 未知 */ textDeleted(/* TODO 参数 */);  // ?textDeleted@fl_Squiggles@@QAEXHH@Z
    public /* 未知 */ textInserted(/* TODO 参数 */);  // ?textInserted@fl_Squiggles@@QAEXHH@Z
    public /* 未知 */ textRevised(/* TODO 参数 */);  // ?textRevised@fl_Squiggles@@QAEXHH@Z
    public /* 未知 */ updatePOBs(/* TODO 参数 */);  // ?updatePOBs@fl_Squiggles@@QAEXHH@Z
};

/* ---- fl_TOCLayout (48 方法) ---- */
class fl_TOCLayout {
public:
    public /* 未知 */ _addBlockInVec(/* TODO 参数 */);  // ?_addBlockInVec@fl_TOCLayout@@AAEXPAVfl_BlockLayout@@AAVUT_U
    public /* 未知 */ _calculateLabels(/* TODO 参数 */);  // ?_calculateLabels@fl_TOCLayout@@AAEXXZ
    public /* 未知 */ _createAndFillTOCEntry(/* TODO 参数 */);  // ?_createAndFillTOCEntry@fl_TOCLayout@@AAEXIIPAVfl_BlockLayou
    public /* 未知 */ _createTOCContainer(/* TODO 参数 */);  // ?_createTOCContainer@fl_TOCLayout@@AAEXXZ
    public /* 未知 */ _getStartValue(/* TODO 参数 */);  // ?_getStartValue@fl_TOCLayout@@AAEHPAVTOCEntry@@@Z
    public /* 未知 */ _insertTOCContainer(/* TODO 参数 */);  // ?_insertTOCContainer@fl_TOCLayout@@AAEXPAVfp_TOCContainer@@@
    public /* 未知 */ _isStyleInTOC(/* TODO 参数 */);  // ?_isStyleInTOC@fl_TOCLayout@@AAE_NAAVUT_UTF8String@@0@Z
    public /* 未知 */ _localCollapse(/* TODO 参数 */);  // ?_localCollapse@fl_TOCLayout@@AAEXXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fl_TOCLayout@@EAEXPBVPP_AttrProp@@@Z
    public /* 未知 */ _purgeLayout(/* TODO 参数 */);  // ?_purgeLayout@fl_TOCLayout@@EAEXXZ
    public /* 未知 */ _removeBlockInVec(/* TODO 参数 */);  // ?_removeBlockInVec@fl_TOCLayout@@AAEXPAVfl_BlockLayout@@_N@Z
    public bool addBlock(/* TODO 参数 */);  // ?addBlock@fl_TOCLayout@@QAE_NPAVfl_BlockLayout@@_N@Z
    virtual public bool bl_doclistener_insertEndTOC(/* TODO 参数 */);  // ?bl_doclistener_insertEndTOC@fl_TOCLayout@@UAE_NPAVfl_Contai
    virtual public /* 未知 */ collapse(/* TODO 参数 */);  // ?collapse@fl_TOCLayout@@UAEXXZ
    public /* 未知 */ createNewEntry(/* TODO 参数 */);  // ?createNewEntry@fl_TOCLayout@@QAEPAVTOCEntry@@PAVfl_BlockLay
    virtual public bool doclistener_changeStrux(/* TODO 参数 */);  // ?doclistener_changeStrux@fl_TOCLayout@@UAE_NPBVPX_ChangeReco
    virtual public bool doclistener_deleteEndTOC(/* TODO 参数 */);  // ?doclistener_deleteEndTOC@fl_TOCLayout@@UAE_NPBVPX_ChangeRec
    virtual public bool doclistener_deleteStrux(/* TODO 参数 */);  // ?doclistener_deleteStrux@fl_TOCLayout@@UAE_NPBVPX_ChangeReco
    public /* 未知 */ findMatchingBlock(/* TODO 参数 */);  // ?findMatchingBlock@fl_TOCLayout@@QAEPAVfl_BlockLayout@@PAV2@
    virtual public /* 未知 */ format(/* TODO 参数 */);  // ?format@fl_TOCLayout@@UAEXXZ
    public const /* 未知 */ getCurrentLevel(/* TODO 参数 */);  // ?getCurrentLevel@fl_TOCLayout@@QBEHXZ
    public /* 未知 */ getDocPosition(/* TODO 参数 */);  // ?getDocPosition@fl_TOCLayout@@QAEIXZ
    public const /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fl_TOCLayout@@QBEPAVfl_DocSectionLayout
    public /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@fl_TOCLayout@@QAEIXZ
    public /* 未知 */ getMatchingBlock(/* TODO 参数 */);  // ?getMatchingBlock@fl_TOCLayout@@QAEPAVfl_BlockLayout@@PAV2@@
    virtual public /* 未知 */ getNewContainer(/* TODO 参数 */);  // ?getNewContainer@fl_TOCLayout@@UAEPAVfp_Container@@PAV2@@Z
    public /* 未知 */ getNumType(/* TODO 参数 */);  // ?getNumType@fl_TOCLayout@@QAE?AW4_FootnoteType@@H@Z
    public const /* 未知 */ getRangeBookmarkName(/* TODO 参数 */);  // ?getRangeBookmarkName@fl_TOCLayout@@QBEABVUT_UTF8String@@XZ
    virtual public const /* 未知 */ getSectionLayout(/* TODO 参数 */);  // ?getSectionLayout@fl_TOCLayout@@UBEPAVfl_SectionLayout@@XZ
    public /* 未知 */ getTOCHeading(/* TODO 参数 */);  // ?getTOCHeading@fl_TOCLayout@@QAEAAVUT_UTF8String@@XZ
    public /* 未知 */ getTOCListLabel(/* TODO 参数 */);  // ?getTOCListLabel@fl_TOCLayout@@QAEAAVUT_UTF8String@@PAVfl_Bl
    public const /* 未知 */ getTOCPID(/* TODO 参数 */);  // ?getTOCPID@fl_TOCLayout@@QBEIXZ
    public /* 未知 */ getTabLeader(/* TODO 参数 */);  // ?getTabLeader@fl_TOCLayout@@QAE?AW4eTabLeader@@H@Z
    public /* 未知 */ getTabPosition(/* TODO 参数 */);  // ?getTabPosition@fl_TOCLayout@@QAEHHPAVfl_BlockLayout@@@Z
    public bool isBlockInTOC(/* TODO 参数 */);  // ?isBlockInTOC@fl_TOCLayout@@QAE_NPAVfl_BlockLayout@@@Z
    public const bool isEndTOCIn(/* TODO 参数 */);  // ?isEndTOCIn@fl_TOCLayout@@QBE_NXZ
    public /* 未知 */ isInVector(/* TODO 参数 */);  // ?isInVector@fl_TOCLayout@@QAEHPAVfl_BlockLayout@@PAV?$UT_Gen
    public bool isSelected(/* TODO 参数 */);  // ?isSelected@fl_TOCLayout@@QAE_NXZ
    public bool isStyleInTOC(/* TODO 参数 */);  // ?isStyleInTOC@fl_TOCLayout@@QAE_NAAVUT_UTF8String@@@Z
    virtual public /* 未知 */ markAllRunsDirty(/* TODO 参数 */);  // ?markAllRunsDirty@fl_TOCLayout@@UAEXXZ
    public /* 未知 */ purgeLayout(/* TODO 参数 */);  // ?purgeLayout@fl_TOCLayout@@QAEXXZ
    virtual public bool recalculateFields(/* TODO 参数 */);  // ?recalculateFields@fl_TOCLayout@@UAE_NI@Z
    virtual public /* 未知 */ redrawUpdate(/* TODO 参数 */);  // ?redrawUpdate@fl_TOCLayout@@UAEXXZ
    public bool removeBlock(/* TODO 参数 */);  // ?removeBlock@fl_TOCLayout@@QAE_NPAVfl_BlockLayout@@@Z
    public /* 未知 */ setSelected(/* TODO 参数 */);  // ?setSelected@fl_TOCLayout@@QAEX_N@Z
    public /* 未知 */ setTOCEndIn(/* TODO 参数 */);  // ?setTOCEndIn@fl_TOCLayout@@QAEXXZ
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@fl_TOCLayout@@UAEX_N@Z
    public bool verifyBookmarkAssumptions(/* TODO 参数 */);  // ?verifyBookmarkAssumptions@fl_TOCLayout@@QAE_NXZ
};

/* ---- fl_TOCListener (5 方法) ---- */
class fl_TOCListener {
public:
    virtual public bool change(/* TODO 参数 */);  // ?change@fl_TOCListener@@UAE_NPBXPBVPX_ChangeRecord@@@Z
    virtual public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@fl_TOCListener@@UAE_NPBXPBVPX_ChangeRecord@@0IP
    virtual public bool populate(/* TODO 参数 */);  // ?populate@fl_TOCListener@@UAE_NPBXPBVPX_ChangeRecord@@@Z
    virtual public bool populateStrux(/* TODO 参数 */);  // ?populateStrux@fl_TOCListener@@UAE_NPBXPBVPX_ChangeRecord@@P
    virtual public bool signal(/* TODO 参数 */);  // ?signal@fl_TOCListener@@UAE_NI@Z
};

/* ---- fl_TabStop (8 方法) ---- */
class fl_TabStop {
public:
    public /* 未知 */ getLeader(/* TODO 参数 */);  // ?getLeader@fl_TabStop@@QAE?AW4eTabLeader@@XZ
    public /* 未知 */ getOffset(/* TODO 参数 */);  // ?getOffset@fl_TabStop@@QAEIXZ
    public const /* 未知 */ getPosition(/* TODO 参数 */);  // ?getPosition@fl_TabStop@@QBEHXZ
    public /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fl_TabStop@@QAE?AW4eTabType@@XZ
    public /* 未知 */ setLeader(/* TODO 参数 */);  // ?setLeader@fl_TabStop@@QAEXW4eTabLeader@@@Z
    public /* 未知 */ setOffset(/* TODO 参数 */);  // ?setOffset@fl_TabStop@@QAEXI@Z
    public /* 未知 */ setPosition(/* TODO 参数 */);  // ?setPosition@fl_TabStop@@QAEXH@Z
    public /* 未知 */ setType(/* TODO 参数 */);  // ?setType@fl_TabStop@@QAEXW4eTabType@@@Z
};

/* ---- fl_TableLayout (56 方法) ---- */
class fl_TableLayout {
public:
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fl_TableLayout@@MAEXPBVPP_AttrProp@@@Z
    protected /* 未知 */ _purgeLayout(/* TODO 参数 */);  // ?_purgeLayout@fl_TableLayout@@IAEXXZ
    public /* 未知 */ attachCell(/* TODO 参数 */);  // ?attachCell@fl_TableLayout@@QAEXPAVfl_ContainerLayout@@@Z
    virtual public bool bl_doclistener_insertBlock(/* TODO 参数 */);  // ?bl_doclistener_insertBlock@fl_TableLayout@@UAE_NPAVfl_Conta
    virtual public bool bl_doclistener_insertCell(/* TODO 参数 */);  // ?bl_doclistener_insertCell@fl_TableLayout@@UAE_NPAVfl_Contai
    virtual public bool bl_doclistener_insertEndTable(/* TODO 参数 */);  // ?bl_doclistener_insertEndTable@fl_TableLayout@@UAE_NPAVfl_Co
    virtual public bool bl_doclistener_insertTable(/* TODO 参数 */);  // ?bl_doclistener_insertTable@fl_TableLayout@@UAE_NPBVPX_Chang
    public /* 未知 */ clearRebuild(/* TODO 参数 */);  // ?clearRebuild@fl_TableLayout@@QAEXXZ
    virtual public /* 未知 */ collapse(/* TODO 参数 */);  // ?collapse@fl_TableLayout@@UAEXXZ
    public /* 未知 */ createTableContainer(/* TODO 参数 */);  // ?createTableContainer@fl_TableLayout@@QAEXXZ
    public /* 未知 */ decNumNestedTables(/* TODO 参数 */);  // ?decNumNestedTables@fl_TableLayout@@QAEXXZ
    public bool doSimpleChange(/* TODO 参数 */);  // ?doSimpleChange@fl_TableLayout@@QAE_NXZ
    virtual public bool doclistener_changeStrux(/* TODO 参数 */);  // ?doclistener_changeStrux@fl_TableLayout@@UAE_NPBVPX_ChangeRe
    virtual public bool doclistener_deleteStrux(/* TODO 参数 */);  // ?doclistener_deleteStrux@fl_TableLayout@@UAE_NPBVPX_ChangeRe
    virtual public /* 未知 */ format(/* TODO 参数 */);  // ?format@fl_TableLayout@@UAEXXZ
    public const /* 未知 */ getBackground(/* TODO 参数 */);  // ?getBackground@fl_TableLayout@@QBEABVBackground@PP_PropertyM
    public const /* 未知 */ getBottomOffset(/* TODO 参数 */);  // ?getBottomOffset@fl_TableLayout@@QBEHXZ
    public const /* 未知 */ getBottomStyle(/* TODO 参数 */);  // ?getBottomStyle@fl_TableLayout@@QBEABVLine@PP_PropertyMap@@X
    public const /* 未知 */ getColSpacing(/* TODO 参数 */);  // ?getColSpacing@fl_TableLayout@@QBEHXZ
    public const /* 未知 */ getDefaultColor(/* TODO 参数 */);  // ?getDefaultColor@fl_TableLayout@@QBEABVUT_RGBColor@@XZ
    public const /* 未知 */ getLeftColPos(/* TODO 参数 */);  // ?getLeftColPos@fl_TableLayout@@QBEHXZ
    public const /* 未知 */ getLeftOffset(/* TODO 参数 */);  // ?getLeftOffset@fl_TableLayout@@QBEHXZ
    public const /* 未知 */ getLeftStyle(/* TODO 参数 */);  // ?getLeftStyle@fl_TableLayout@@QBEABVLine@PP_PropertyMap@@XZ
    public /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@fl_TableLayout@@QAEIXZ
    public const /* 未知 */ getLineThickness(/* TODO 参数 */);  // ?getLineThickness@fl_TableLayout@@QBEHXZ
    virtual public /* 未知 */ getNewContainer(/* TODO 参数 */);  // ?getNewContainer@fl_TableLayout@@UAEPAVfp_Container@@PAV2@@Z
    public const /* 未知 */ getNumNestedTables(/* TODO 参数 */);  // ?getNumNestedTables@fl_TableLayout@@QBEHXZ
    virtual public const /* 未知 */ getPosition(/* TODO 参数 */);  // ?getPosition@fl_TableLayout@@UBEI_N@Z
    public const /* 未知 */ getRightOffset(/* TODO 参数 */);  // ?getRightOffset@fl_TableLayout@@QBEHXZ
    public const /* 未知 */ getRightStyle(/* TODO 参数 */);  // ?getRightStyle@fl_TableLayout@@QBEABVLine@PP_PropertyMap@@XZ
    public const /* 未知 */ getRowSpacing(/* TODO 参数 */);  // ?getRowSpacing@fl_TableLayout@@QBEHXZ
    virtual public const /* 未知 */ getSectionLayout(/* TODO 参数 */);  // ?getSectionLayout@fl_TableLayout@@UBEPAVfl_SectionLayout@@XZ
    public const /* 未知 */ getTopOffset(/* TODO 参数 */);  // ?getTopOffset@fl_TableLayout@@QBEHXZ
    public const /* 未知 */ getTopStyle(/* TODO 参数 */);  // ?getTopStyle@fl_TableLayout@@QBEABVLine@PP_PropertyMap@@XZ
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fl_TableLayout@@QBE?AW4_SectionType@@XZ
    public const /* 未知 */ getVecColProps(/* TODO 参数 */);  // ?getVecColProps@fl_TableLayout@@QBEPBV?$UT_GenericVector@PAV
    public const /* 未知 */ getVecRowProps(/* TODO 参数 */);  // ?getVecRowProps@fl_TableLayout@@QBEPBV?$UT_GenericVector@PAV
    public /* 未知 */ incNumNestedTables(/* TODO 参数 */);  // ?incNumNestedTables@fl_TableLayout@@QAEXXZ
    public /* 未知 */ insertTableContainer(/* TODO 参数 */);  // ?insertTableContainer@fl_TableLayout@@QAEXPAVfp_TableContain
    public const bool isDirty(/* TODO 参数 */);  // ?isDirty@fl_TableLayout@@QBE_NXZ
    public bool isDoingDestructor(/* TODO 参数 */);  // ?isDoingDestructor@fl_TableLayout@@QAE_NXZ
    public bool isEndTableIn(/* TODO 参数 */);  // ?isEndTableIn@fl_TableLayout@@QAE_NXZ
    virtual public /* 未知 */ markAllRunsDirty(/* TODO 参数 */);  // ?markAllRunsDirty@fl_TableLayout@@UAEXXZ
    public /* 未知 */ markForRebuild(/* TODO 参数 */);  // ?markForRebuild@fl_TableLayout@@QAEXXZ
    public /* 未知 */ markForReformat(/* TODO 参数 */);  // ?markForReformat@fl_TableLayout@@QAEXXZ
    public const bool needsReFormat(/* TODO 参数 */);  // ?needsReFormat@fl_TableLayout@@QBE_NXZ
    public const bool needsRebuild(/* TODO 参数 */);  // ?needsRebuild@fl_TableLayout@@QBE_NXZ
    virtual public const bool needsReformat(/* TODO 参数 */);  // ?needsReformat@fl_TableLayout@@UBE_NXZ
    virtual public bool recalculateFields(/* TODO 参数 */);  // ?recalculateFields@fl_TableLayout@@UAE_NI@Z
    virtual public /* 未知 */ redrawUpdate(/* TODO 参数 */);  // ?redrawUpdate@fl_TableLayout@@UAEXXZ
    public /* 未知 */ setDirty(/* TODO 参数 */);  // ?setDirty@fl_TableLayout@@QAEXXZ
    public /* 未知 */ setEndTableIn(/* TODO 参数 */);  // ?setEndTableIn@fl_TableLayout@@QAEXXZ
    public /* 未知 */ setHeightChanged(/* TODO 参数 */);  // ?setHeightChanged@fl_TableLayout@@QAEXPAVfp_CellContainer@@@
    public /* 未知 */ setTableContainerProperties(/* TODO 参数 */);  // ?setTableContainerProperties@fl_TableLayout@@QAEXPAVfp_Table
    virtual public /* 未知 */ updateLayout(/* TODO 参数 */);  // ?updateLayout@fl_TableLayout@@UAEX_N@Z
    public /* 未知 */ updateTable(/* TODO 参数 */);  // ?updateTable@fl_TableLayout@@QAEXXZ
};

/* ---- fp_BookmarkRun (16 方法) ---- */
class fp_BookmarkRun {
public:
    public /* 未知 */ _canContainPoint(/* TODO 参数 */);  // ?_canContainPoint@fp_BookmarkRun@@EBE_NXZ
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_BookmarkRun@@EAEX_N@Z
    public /* 未知 */ _deleteFollowingIfAtInsPoint(/* TODO 参数 */);  // ?_deleteFollowingIfAtInsPoint@fp_BookmarkRun@@EBE_NXZ
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_BookmarkRun@@EAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_BookmarkRun@@EBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_BookmarkRun@@EAEXPBVPP_AttrProp@@00PAV
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_BookmarkRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_BookmarkRun@@UBE_NXZ
    virtual public const bool doesContainNonBlankData(/* TODO 参数 */);  // ?doesContainNonBlankData@fp_BookmarkRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_BookmarkRun@@UAEXIAAH0000AA_N@Z
    public const /* 未知 */ getBookmarkedDocPosition(/* TODO 参数 */);  // ?getBookmarkedDocPosition@fp_BookmarkRun@@QBEI_N@Z
    public const /* 未知 */ getName(/* TODO 参数 */);  // ?getName@fp_BookmarkRun@@QBEPBDXZ
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_BookmarkRun@@UBE_NXZ
    public const bool isComrade(/* TODO 参数 */);  // ?isComrade@fp_BookmarkRun@@QBE_NPAV1@@Z
    public const bool isStartOfBookmark(/* TODO 参数 */);  // ?isStartOfBookmark@fp_BookmarkRun@@QBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_BookmarkRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_CellContainer (95 方法) ---- */
class fp_CellContainer {
public:
    virtual public /* 未知 */ HBreakAt(/* TODO 参数 */);  // ?HBreakAt@fp_CellContainer@@UAEPAVfp_ContainerObject@@H@Z
    virtual public /* 未知 */ VBreakAt(/* TODO 参数 */);  // ?VBreakAt@fp_CellContainer@@UAEPAVfp_ContainerObject@@H@Z
    public /* 未知 */ _clear(/* TODO 参数 */);  // ?_clear@fp_CellContainer@@AAEXPAVfp_TableContainer@@@Z
    public /* 未知 */ _drawBoundaries(/* TODO 参数 */);  // ?_drawBoundaries@fp_CellContainer@@QAEXPAUdg_DrawArgs@@PAVfp
    public /* 未知 */ _drawLine(/* TODO 参数 */);  // ?_drawLine@fp_CellContainer@@AAEXABVLine@PP_PropertyMap@@HHH
    public /* 未知 */ _getBrokenRect(/* TODO 参数 */);  // ?_getBrokenRect@fp_CellContainer@@AAEXPAVfp_TableContainer@@
    public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_CellContainer@@QAEX_N@Z
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_CellContainer@@UAEXXZ
    public /* 未知 */ clearSelection(/* TODO 参数 */);  // ?clearSelection@fp_CellContainer@@QAEXXZ
    public bool containsFootnoteReference(/* TODO 参数 */);  // ?containsFootnoteReference@fp_CellContainer@@QAE_NXZ
    public bool containsNestedTables(/* TODO 参数 */);  // ?containsNestedTables@fp_CellContainer@@QAE_NXZ
    public /* 未知 */ deleteBrokenTables(/* TODO 参数 */);  // ?deleteBrokenTables@fp_CellContainer@@QAEX_N@Z
    public bool doesIntersectClip(/* TODO 参数 */);  // ?doesIntersectClip@fp_CellContainer@@QAE_NPAVfp_TableContain
    public bool doesOverlapBrokenTable(/* TODO 参数 */);  // ?doesOverlapBrokenTable@fp_CellContainer@@QAE_NPAVfp_TableCo
    public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_CellContainer@@QAEXPAVfp_Line@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_CellContainer@@UAEXPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_CellContainer@@UAEXPAVGR_Graphics@@@Z
    public /* 未知 */ drawBroken(/* TODO 参数 */);  // ?drawBroken@fp_CellContainer@@QAEXPAUdg_DrawArgs@@PAVfp_Tabl
    public /* 未知 */ drawLines(/* TODO 参数 */);  // ?drawLines@fp_CellContainer@@QAEXPAVfp_TableContainer@@PAVGR
    public /* 未知 */ drawLinesAdjacent(/* TODO 参数 */);  // ?drawLinesAdjacent@fp_CellContainer@@QAEXXZ
    public /* 未知 */ drawSelectedCell(/* TODO 参数 */);  // ?drawSelectedCell@fp_CellContainer@@QAEPAVfp_Container@@PAVf
    public const /* 未知 */ getBackground(/* TODO 参数 */);  // ?getBackground@fp_CellContainer@@QBE?AVBackground@PP_Propert
    public const /* 未知 */ getBotPad(/* TODO 参数 */);  // ?getBotPad@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getBottomAttach(/* TODO 参数 */);  // ?getBottomAttach@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getBottomStyle(/* TODO 参数 */);  // ?getBottomStyle@fp_CellContainer@@QBE?AVLine@PP_PropertyMap@
    public /* 未知 */ getBrokenTable(/* TODO 参数 */);  // ?getBrokenTable@fp_CellContainer@@QAEPAVfp_TableContainer@@P
    public const /* 未知 */ getCellX(/* TODO 参数 */);  // ?getCellX@fp_CellContainer@@QBEHPAVfp_Line@@@Z
    public const /* 未知 */ getCellY(/* TODO 参数 */);  // ?getCellY@fp_CellContainer@@QBEHPAVfp_Line@@@Z
    public /* 未知 */ getColumn(/* TODO 参数 */);  // ?getColumn@fp_CellContainer@@QAEPAVfp_VerticalContainer@@PAV
    public bool getFootnoteContainers(/* TODO 参数 */);  // ?getFootnoteContainers@fp_CellContainer@@QAE_NPAV?$UT_Generi
    public const /* 未知 */ getLeftAttach(/* TODO 参数 */);  // ?getLeftAttach@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getLeftPad(/* TODO 参数 */);  // ?getLeftPad@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getLeftPos(/* TODO 参数 */);  // ?getLeftPos@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getLeftStyle(/* TODO 参数 */);  // ?getLeftStyle@fp_CellContainer@@QBE?AVLine@PP_PropertyMap@@P
    public /* 未知 */ getLeftTopOffsets(/* TODO 参数 */);  // ?getLeftTopOffsets@fp_CellContainer@@QAEXAAH0@Z
    virtual public const /* 未知 */ getNextContainerInSection(/* TODO 参数 */);  // ?getNextContainerInSection@fp_CellContainer@@UBEPAVfp_Contai
    virtual public const /* 未知 */ getPrevContainerInSection(/* TODO 参数 */);  // ?getPrevContainerInSection@fp_CellContainer@@UBEPAVfp_Contai
    public const /* 未知 */ getRightAttach(/* TODO 参数 */);  // ?getRightAttach@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getRightPad(/* TODO 参数 */);  // ?getRightPad@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getRightPos(/* TODO 参数 */);  // ?getRightPos@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getRightStyle(/* TODO 参数 */);  // ?getRightStyle@fp_CellContainer@@QBE?AVLine@PP_PropertyMap@@
    public /* 未知 */ getScreenPositions(/* TODO 参数 */);  // ?getScreenPositions@fp_CellContainer@@QAEXPAVfp_TableContain
    public /* 未知 */ getSpannedHeight(/* TODO 参数 */);  // ?getSpannedHeight@fp_CellContainer@@QAEHXZ
    public const /* 未知 */ getStartY(/* TODO 参数 */);  // ?getStartY@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getStopY(/* TODO 参数 */);  // ?getStopY@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getTopAttach(/* TODO 参数 */);  // ?getTopAttach@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getTopPad(/* TODO 参数 */);  // ?getTopPad@fp_CellContainer@@QBEHXZ
    public const /* 未知 */ getTopStyle(/* TODO 参数 */);  // ?getTopStyle@fp_CellContainer@@QBE?AVLine@PP_PropertyMap@@PB
    public const /* 未知 */ getTopmostTable(/* TODO 参数 */);  // ?getTopmostTable@fp_CellContainer@@QBEPAVfp_TableContainer@@
    public const bool getXexpand(/* TODO 参数 */);  // ?getXexpand@fp_CellContainer@@QBE_NXZ
    public const bool getXfill(/* TODO 参数 */);  // ?getXfill@fp_CellContainer@@QBE_NXZ
    public const bool getXshrink(/* TODO 参数 */);  // ?getXshrink@fp_CellContainer@@QBE_NXZ
    public const bool getYexpand(/* TODO 参数 */);  // ?getYexpand@fp_CellContainer@@QBE_NXZ
    public const bool getYfill(/* TODO 参数 */);  // ?getYfill@fp_CellContainer@@QBE_NXZ
    public const bool getYshrink(/* TODO 参数 */);  // ?getYshrink@fp_CellContainer@@QBE_NXZ
    public const bool isDirty(/* TODO 参数 */);  // ?isDirty@fp_CellContainer@@QBE_NXZ
    virtual public bool isHBreakable(/* TODO 参数 */);  // ?isHBreakable@fp_CellContainer@@UAE_NXZ
    public bool isInNestedTable(/* TODO 参数 */);  // ?isInNestedTable@fp_CellContainer@@QAE_NXZ
    public const bool isRepeated(/* TODO 参数 */);  // ?isRepeated@fp_CellContainer@@QBE_NXZ
    public const bool isSelected(/* TODO 参数 */);  // ?isSelected@fp_CellContainer@@QBE_NXZ
    virtual public bool isVBreakable(/* TODO 参数 */);  // ?isVBreakable@fp_CellContainer@@UAE_NXZ
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_CellContainer@@QAEXXZ
    public /* 未知 */ markAsDirty(/* TODO 参数 */);  // ?markAsDirty@fp_CellContainer@@QAEXXZ
    virtual public /* 未知 */ recalcMaxWidth(/* TODO 参数 */);  // ?recalcMaxWidth@fp_CellContainer@@UAEX_N@Z
    public /* 未知 */ setAngle(/* TODO 参数 */);  // ?setAngle@fp_CellContainer@@QAEXH@Z
    virtual public /* 未知 */ setAssignedScreenHeight(/* TODO 参数 */);  // ?setAssignedScreenHeight@fp_CellContainer@@UAEXH@Z
    public /* 未知 */ setBackground(/* TODO 参数 */);  // ?setBackground@fp_CellContainer@@QAEXABVBackground@PP_Proper
    public /* 未知 */ setBotPad(/* TODO 参数 */);  // ?setBotPad@fp_CellContainer@@QAEXH@Z
    public /* 未知 */ setBottomAttach(/* TODO 参数 */);  // ?setBottomAttach@fp_CellContainer@@QAEXH@Z
    public /* 未知 */ setBottomStyle(/* TODO 参数 */);  // ?setBottomStyle@fp_CellContainer@@QAEXABVLine@PP_PropertyMap
    virtual public /* 未知 */ setContainer(/* TODO 参数 */);  // ?setContainer@fp_CellContainer@@UAEXPAVfp_Container@@@Z
    virtual public /* 未知 */ setHeight(/* TODO 参数 */);  // ?setHeight@fp_CellContainer@@UAEXH@Z
    public /* 未知 */ setLeftAttach(/* TODO 参数 */);  // ?setLeftAttach@fp_CellContainer@@QAEXH@Z
    public /* 未知 */ setLeftPad(/* TODO 参数 */);  // ?setLeftPad@fp_CellContainer@@QAEXH@Z
    public /* 未知 */ setLeftStyle(/* TODO 参数 */);  // ?setLeftStyle@fp_CellContainer@@QAEXABVLine@PP_PropertyMap@@
    public /* 未知 */ setLineMarkers(/* TODO 参数 */);  // ?setLineMarkers@fp_CellContainer@@QAEXXZ
    public /* 未知 */ setRightAttach(/* TODO 参数 */);  // ?setRightAttach@fp_CellContainer@@QAEXH@Z
    public /* 未知 */ setRightPad(/* TODO 参数 */);  // ?setRightPad@fp_CellContainer@@QAEXH@Z
    public /* 未知 */ setRightStyle(/* TODO 参数 */);  // ?setRightStyle@fp_CellContainer@@QAEXABVLine@PP_PropertyMap@
    public /* 未知 */ setToAllocation(/* TODO 参数 */);  // ?setToAllocation@fp_CellContainer@@QAEXXZ
    public /* 未知 */ setTopAttach(/* TODO 参数 */);  // ?setTopAttach@fp_CellContainer@@QAEXH@Z
    public /* 未知 */ setTopPad(/* TODO 参数 */);  // ?setTopPad@fp_CellContainer@@QAEXH@Z
    public /* 未知 */ setTopStyle(/* TODO 参数 */);  // ?setTopStyle@fp_CellContainer@@QAEXABVLine@PP_PropertyMap@@@
    virtual public /* 未知 */ setWidth(/* TODO 参数 */);  // ?setWidth@fp_CellContainer@@UAEXH@Z
    public /* 未知 */ setXexpand(/* TODO 参数 */);  // ?setXexpand@fp_CellContainer@@QAEX_N@Z
    public /* 未知 */ setXfill(/* TODO 参数 */);  // ?setXfill@fp_CellContainer@@QAEX_N@Z
    public /* 未知 */ setXshrink(/* TODO 参数 */);  // ?setXshrink@fp_CellContainer@@QAEX_N@Z
    public /* 未知 */ setYexpand(/* TODO 参数 */);  // ?setYexpand@fp_CellContainer@@QAEX_N@Z
    public /* 未知 */ setYfill(/* TODO 参数 */);  // ?setYfill@fp_CellContainer@@QAEX_N@Z
    public /* 未知 */ setYshrink(/* TODO 参数 */);  // ?setYshrink@fp_CellContainer@@QAEX_N@Z
    public /* 未知 */ sizeAllocate(/* TODO 参数 */);  // ?sizeAllocate@fp_CellContainer@@QAEXPAU_fp_Allocation@@@Z
    public /* 未知 */ sizeRequest(/* TODO 参数 */);  // ?sizeRequest@fp_CellContainer@@QAEXPAU_fp_Requisition@@@Z
    public /* 未知 */ tweakBrokenTable(/* TODO 参数 */);  // ?tweakBrokenTable@fp_CellContainer@@QAEHPAVfp_TableContainer
    virtual public /* 未知 */ wantHBreakAt(/* TODO 参数 */);  // ?wantHBreakAt@fp_CellContainer@@UAEHH@Z
    virtual public /* 未知 */ wantVBreakAt(/* TODO 参数 */);  // ?wantVBreakAt@fp_CellContainer@@UAEHH@Z
};

/* ---- fp_Column (11 方法) ---- */
class fp_Column {
public:
    public /* 未知 */ _drawBoundaries(/* TODO 参数 */);  // ?_drawBoundaries@fp_Column@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ collapseEndnotes(/* TODO 参数 */);  // ?collapseEndnotes@fp_Column@@QAEXXZ
    public const /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fp_Column@@QBEPAVfl_DocSectionLayout@@X
    public const /* 未知 */ getFollower(/* TODO 参数 */);  // ?getFollower@fp_Column@@QBEPAV1@XZ
    public const /* 未知 */ getLeader(/* TODO 参数 */);  // ?getLeader@fp_Column@@QBEPAV1@XZ
    public const /* 未知 */ getMaxHeight(/* TODO 参数 */);  // ?getMaxHeight@fp_Column@@QBEHXZ
    virtual public const /* 未知 */ getPage(/* TODO 参数 */);  // ?getPage@fp_Column@@UBEPAVfp_Page@@XZ
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_Column@@QAEXXZ
    public /* 未知 */ setFollower(/* TODO 参数 */);  // ?setFollower@fp_Column@@QAEXPAV1@@Z
    public /* 未知 */ setLeader(/* TODO 参数 */);  // ?setLeader@fp_Column@@QAEXPAV1@@Z
    public /* 未知 */ setPage(/* TODO 参数 */);  // ?setPage@fp_Column@@QAEXPAVfp_Page@@@Z
};

/* ---- fp_Container (27 方法) ---- */
class fp_Container {
public:
    public /* 未知 */ addCon(/* TODO 参数 */);  // ?addCon@fp_Container@@QAEXPAVfp_ContainerObject@@@Z
    public /* 未知 */ binarysearchCons(/* TODO 参数 */);  // ?binarysearchCons@fp_Container@@QAEIPBXP6AH00@Z@Z
    public /* 未知 */ clearBrokenContainers(/* TODO 参数 */);  // ?clearBrokenContainers@fp_Container@@QAEXXZ
    public /* 未知 */ clearCons(/* TODO 参数 */);  // ?clearCons@fp_Container@@QAEXXZ
    public const /* 未知 */ countCons(/* TODO 参数 */);  // ?countCons@fp_Container@@QBEIXZ
    public /* 未知 */ decBrokenCount(/* TODO 参数 */);  // ?decBrokenCount@fp_Container@@QAEXXZ
    public /* 未知 */ deleteNthCon(/* TODO 参数 */);  // ?deleteNthCon@fp_Container@@QAEXH@Z
    public const /* 未知 */ findCon(/* TODO 参数 */);  // ?findCon@fp_Container@@QBEHPAVfp_ContainerObject@@@Z
    public /* 未知 */ getBrokenCount(/* TODO 参数 */);  // ?getBrokenCount@fp_Container@@QAEIXZ
    public const /* 未知 */ getColumn(/* TODO 参数 */);  // ?getColumn@fp_Container@@QBEPAV1@XZ
    public const /* 未知 */ getContainer(/* TODO 参数 */);  // ?getContainer@fp_Container@@QBEPAV1@XZ
    public /* 未知 */ getFillType(/* TODO 参数 */);  // ?getFillType@fp_Container@@QAEPAVfg_FillType@@XZ
    public const /* 未知 */ getMyBrokenContainer(/* TODO 参数 */);  // ?getMyBrokenContainer@fp_Container@@QBEPAV1@XZ
    virtual public const /* 未知 */ getNext(/* TODO 参数 */);  // ?getNext@fp_Container@@UBEPAVfp_ContainerObject@@XZ
    public const /* 未知 */ getNthCon(/* TODO 参数 */);  // ?getNthCon@fp_Container@@QBEPAVfp_ContainerObject@@I@Z
    public const /* 未知 */ getPage(/* TODO 参数 */);  // ?getPage@fp_Container@@QBEPAVfp_Page@@XZ
    public const bool getPageRelativeOffsets(/* TODO 参数 */);  // ?getPageRelativeOffsets@fp_Container@@QBE_NAAVUT_Rect@@@Z
    virtual public const /* 未知 */ getPrev(/* TODO 参数 */);  // ?getPrev@fp_Container@@UBEPAVfp_ContainerObject@@XZ
    public /* 未知 */ incBrokenCount(/* TODO 参数 */);  // ?incBrokenCount@fp_Container@@QAEXXZ
    public /* 未知 */ insertConAt(/* TODO 参数 */);  // ?insertConAt@fp_Container@@QAEXPAVfp_ContainerObject@@H@Z
    public const bool isEmpty(/* TODO 参数 */);  // ?isEmpty@fp_Container@@QBE_NXZ
    public const bool isOnScreen(/* TODO 参数 */);  // ?isOnScreen@fp_Container@@QBE_NXZ
    public /* 未知 */ justRemoveNthCon(/* TODO 参数 */);  // ?justRemoveNthCon@fp_Container@@QAEXH@Z
    virtual public /* 未知 */ setContainer(/* TODO 参数 */);  // ?setContainer@fp_Container@@UAEXPAV1@@Z
    public /* 未知 */ setMyBrokenContainer(/* TODO 参数 */);  // ?setMyBrokenContainer@fp_Container@@QAEXPAV1@@Z
    virtual public /* 未知 */ setNext(/* TODO 参数 */);  // ?setNext@fp_Container@@UAEXPAVfp_ContainerObject@@@Z
    virtual public /* 未知 */ setPrev(/* TODO 参数 */);  // ?setPrev@fp_Container@@UAEXPAVfp_ContainerObject@@@Z
};

/* ---- fp_ContainerObject (11 方法) ---- */
class fp_ContainerObject {
public:
    public const /* 未知 */ getBreakTick(/* TODO 参数 */);  // ?getBreakTick@fp_ContainerObject@@QBEHXZ
    public /* 未知 */ getContainerString(/* TODO 参数 */);  // ?getContainerString@fp_ContainerObject@@QAEPBDXZ
    public const /* 未知 */ getContainerType(/* TODO 参数 */);  // ?getContainerType@fp_ContainerObject@@QBE?AW4FP_ContainerTyp
    virtual public /* 未知 */ getDirection(/* TODO 参数 */);  // ?getDirection@fp_ContainerObject@@UAEJXZ
    virtual public const /* 未知 */ getDrawingWidth(/* TODO 参数 */);  // ?getDrawingWidth@fp_ContainerObject@@UBEHXZ
    public const /* 未知 */ getGraphics(/* TODO 参数 */);  // ?getGraphics@fp_ContainerObject@@QBEPAVGR_Graphics@@XZ
    public const /* 未知 */ getSectionLayout(/* TODO 参数 */);  // ?getSectionLayout@fp_ContainerObject@@QBEPAVfl_SectionLayout
    public const bool isColumnType(/* TODO 参数 */);  // ?isColumnType@fp_ContainerObject@@QBE_NXZ
    public /* 未知 */ setBreakTick(/* TODO 参数 */);  // ?setBreakTick@fp_ContainerObject@@QAEXH@Z
    virtual public /* 未知 */ setDirection(/* TODO 参数 */);  // ?setDirection@fp_ContainerObject@@UAEXJ@Z
    public /* 未知 */ setSectionLayout(/* TODO 参数 */);  // ?setSectionLayout@fp_ContainerObject@@QAEXPAVfl_SectionLayou
};

/* ---- fp_DeleteDataRun (1 方法, 定制类) ---- */
class fp_DeleteDataRun {
public:
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_DeleteDataRun@@UBE_NXZ
};

/* ---- fp_DirectionMarkerRun (12 方法) ---- */
class fp_DirectionMarkerRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_DirectionMarkerRun@@MAEX_N@Z
    public /* 未知 */ _deleteFollowingIfAtInsPoint(/* TODO 参数 */);  // ?_deleteFollowingIfAtInsPoint@fp_DirectionMarkerRun@@MBE_NXZ
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_DirectionMarkerRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_DirectionMarkerRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_DirectionMarkerRun@@MAEXPBVPP_AttrProp
    public /* 未知 */ _recalcWidth(/* TODO 参数 */);  // ?_recalcWidth@fp_DirectionMarkerRun@@MAE_NXZ
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_DirectionMarkerRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_DirectionMarkerRun@@UBE_NXZ
    virtual public const bool doesContainNonBlankData(/* TODO 参数 */);  // ?doesContainNonBlankData@fp_DirectionMarkerRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_DirectionMarkerRun@@UAEXIAAH0000AA_N@Z
    virtual public const /* 未知 */ getDrawingWidth(/* TODO 参数 */);  // ?getDrawingWidth@fp_DirectionMarkerRun@@UBEHXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_DirectionMarkerRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_DummyRun (11 方法) ---- */
class fp_DummyRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_DummyRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_DummyRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_DummyRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_DummyRun@@MAEXPBVPP_AttrProp@@00PAVGR_
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_DummyRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_DummyRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_DummyRun@@UAEXIAAH0000AA_N@Z
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_DummyRun@@UBE_NXZ
    virtual public const bool isSubscript(/* TODO 参数 */);  // ?isSubscript@fp_DummyRun@@UBE_NXZ
    virtual public const bool isSuperscript(/* TODO 参数 */);  // ?isSuperscript@fp_DummyRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_DummyRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_EmbedRun (21 方法) ---- */
class fp_EmbedRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_EmbedRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_EmbedRun@@MAEXPAUdg_DrawArgs@@@Z
    protected /* 未知 */ _drawResizeBox(/* TODO 参数 */);  // ?_drawResizeBox@fp_EmbedRun@@IAEXVUT_Rect@@@Z
    protected /* 未知 */ _getLayoutPropFromObject(/* TODO 参数 */);  // ?_getLayoutPropFromObject@fp_EmbedRun@@IAEHPBD@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_EmbedRun@@MBE_NXZ
    protected /* 未知 */ _lookupLocalProperties(/* TODO 参数 */);  // ?_lookupLocalProperties@fp_EmbedRun@@IAEXXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_EmbedRun@@MAEXPBVPP_AttrProp@@00PAVGR_
    public /* 未知 */ _recalcWidth(/* TODO 参数 */);  // ?_recalcWidth@fp_EmbedRun@@MAE_NXZ
    protected bool _updatePropValuesIfNeeded(/* TODO 参数 */);  // ?_updatePropValuesIfNeeded@fp_EmbedRun@@IAE_NXZ
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_EmbedRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_EmbedRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_EmbedRun@@UAEXIAAH0000AA_N@Z
    public const /* 未知 */ getDataID(/* TODO 参数 */);  // ?getDataID@fp_EmbedRun@@QBEPBDXZ
    public /* 未知 */ getEmbedManager(/* TODO 参数 */);  // ?getEmbedManager@fp_EmbedRun@@QAEPAVGR_EmbedManager@@XZ
    public const /* 未知 */ getUID(/* TODO 参数 */);  // ?getUID@fp_EmbedRun@@QBEHXZ
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_EmbedRun@@UBE_NXZ
    public bool isEdittable(/* TODO 参数 */);  // ?isEdittable@fp_EmbedRun@@QAE_NXZ
    virtual public const bool isSubscript(/* TODO 参数 */);  // ?isSubscript@fp_EmbedRun@@UBE_NXZ
    virtual public const bool isSuperscript(/* TODO 参数 */);  // ?isSuperscript@fp_EmbedRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_EmbedRun@@UAEXHHAAIAA_N11@Z
    virtual public /* 未知 */ updateVerticalMetric(/* TODO 参数 */);  // ?updateVerticalMetric@fp_EmbedRun@@UAEXXZ
};

/* ---- fp_EndOfParagraphRun (10 方法) ---- */
class fp_EndOfParagraphRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_EndOfParagraphRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_EndOfParagraphRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_EndOfParagraphRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_EndOfParagraphRun@@MAEXPBVPP_AttrProp@
    public /* 未知 */ _recalcWidth(/* TODO 参数 */);  // ?_recalcWidth@fp_EndOfParagraphRun@@MAE_NXZ
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_EndOfParagraphRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_EndOfParagraphRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_EndOfParagraphRun@@UAEXIAAH0000AA_N@Z
    virtual public const /* 未知 */ getDrawingWidth(/* TODO 参数 */);  // ?getDrawingWidth@fp_EndOfParagraphRun@@UBEHXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_EndOfParagraphRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_EndnoteContainer (15 方法) ---- */
class fp_EndnoteContainer {
public:
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_EndnoteContainer@@UAEXXZ
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_EndnoteContainer@@UAEXPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_EndnoteContainer@@UAEXPAVGR_Graphics@@@Z
    public /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fp_EndnoteContainer@@QAEPAVfl_DocSectio
    public /* 未知 */ getLocalNext(/* TODO 参数 */);  // ?getLocalNext@fp_EndnoteContainer@@QAEPAV1@XZ
    public /* 未知 */ getLocalPrev(/* TODO 参数 */);  // ?getLocalPrev@fp_EndnoteContainer@@QAEPAV1@XZ
    virtual public const /* 未知 */ getNextContainerInSection(/* TODO 参数 */);  // ?getNextContainerInSection@fp_EndnoteContainer@@UBEPAVfp_Con
    virtual public /* 未知 */ getPage(/* TODO 参数 */);  // ?getPage@fp_EndnoteContainer@@UAEPAVfp_Page@@XZ
    virtual public const /* 未知 */ getPrevContainerInSection(/* TODO 参数 */);  // ?getPrevContainerInSection@fp_EndnoteContainer@@UBEPAVfp_Con
    public /* 未知 */ getValue(/* TODO 参数 */);  // ?getValue@fp_EndnoteContainer@@QAEHXZ
    virtual public const /* 未知 */ getY(/* TODO 参数 */);  // ?getY@fp_EndnoteContainer@@UBEHXZ
    virtual public bool isVBreakable(/* TODO 参数 */);  // ?isVBreakable@fp_EndnoteContainer@@UAE_NXZ
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_EndnoteContainer@@QAEXXZ
    virtual public /* 未知 */ setContainer(/* TODO 参数 */);  // ?setContainer@fp_EndnoteContainer@@UAEXPAVfp_Container@@@Z
    virtual public /* 未知 */ setY(/* TODO 参数 */);  // ?setY@fp_EndnoteContainer@@UAEXH@Z
};

/* ---- fp_FieldAMPMRun (3 方法) ---- */
class fp_FieldAMPMRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldAMPMRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldAMPMRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldAMPMRun@@UAEIXZ
};

/* ---- fp_FieldBuildCompileDateRun (2 方法) ---- */
class fp_FieldBuildCompileDateRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldBuildCompileDateRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldBuildCompileDateRun@@UAE_NXZ
};

/* ---- fp_FieldBuildCompileTimeRun (2 方法) ---- */
class fp_FieldBuildCompileTimeRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldBuildCompileTimeRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldBuildCompileTimeRun@@UAE_NXZ
};

/* ---- fp_FieldBuildIdRun (2 方法) ---- */
class fp_FieldBuildIdRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldBuildIdRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldBuildIdRun@@UAE_NXZ
};

/* ---- fp_FieldBuildOptionsRun (2 方法) ---- */
class fp_FieldBuildOptionsRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldBuildOptionsRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldBuildOptionsRun@@UAE_NXZ
};

/* ---- fp_FieldBuildTargetRun (2 方法) ---- */
class fp_FieldBuildTargetRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldBuildTargetRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldBuildTargetRun@@UAE_NXZ
};

/* ---- fp_FieldBuildVersionRun (2 方法) ---- */
class fp_FieldBuildVersionRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldBuildVersionRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldBuildVersionRun@@UAE_NXZ
};

/* ---- fp_FieldCharCountRun (3 方法) ---- */
class fp_FieldCharCountRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldCharCountRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldCharCountRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldCharCountRun@@UAEIXZ
};

/* ---- fp_FieldCtrlEditRun (2 方法, 定制类) ---- */
class fp_FieldCtrlEditRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldCtrlEditRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldCtrlEditRun@@UAE_NXZ
};

/* ---- fp_FieldCtrlRadiobuttonRun (6 方法, 定制类) ---- */
class fp_FieldCtrlRadiobuttonRun {
public:
    public /* 未知 */ _RadiobuttonWndProc(/* TODO 参数 */);  // ?_RadiobuttonWndProc@fp_FieldCtrlRadiobuttonRun@@CGJPAUHWND_
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldCtrlRadiobuttonRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldCtrlRadiobuttonRun@@UAE_NXZ
    public const /* 未知 */ uwGetCtrlHandle(/* TODO 参数 */);  // ?uwGetCtrlHandle@fp_FieldCtrlRadiobuttonRun@@QBEIXZ
    public /* 未知 */ uwSetCheck(/* TODO 参数 */);  // ?uwSetCheck@fp_FieldCtrlRadiobuttonRun@@QAEX_N@Z
    public bool uwSetValue(/* TODO 参数 */);  // ?uwSetValue@fp_FieldCtrlRadiobuttonRun@@QAE_NPBI@Z
};

/* ---- fp_FieldDDMMYYRun (3 方法) ---- */
class fp_FieldDDMMYYRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldDDMMYYRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldDDMMYYRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldDDMMYYRun@@UAEIXZ
};

/* ---- fp_FieldDOYRun (3 方法) ---- */
class fp_FieldDOYRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldDOYRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldDOYRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldDOYRun@@UAEIXZ
};

/* ---- fp_FieldDateRun (3 方法) ---- */
class fp_FieldDateRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldDateRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldDateRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldDateRun@@UAEIXZ
};

/* ---- fp_FieldDateTimeCustomRun (3 方法) ---- */
class fp_FieldDateTimeCustomRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldDateTimeCustomRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldDateTimeCustomRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldDateTimeCustomRun@@UAEIXZ
};

/* ---- fp_FieldDefaultDateNoTimeRun (3 方法) ---- */
class fp_FieldDefaultDateNoTimeRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldDefaultDateNoTimeRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldDefaultDateNoTimeRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldDefaultDateNoTimeRun@@UAEIXZ
};

/* ---- fp_FieldDefaultDateRun (3 方法) ---- */
class fp_FieldDefaultDateRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldDefaultDateRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldDefaultDateRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldDefaultDateRun@@UAEIXZ
};

/* ---- fp_FieldEndRun (9 方法) ---- */
class fp_FieldEndRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_FieldEndRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldEndRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_FieldEndRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_FieldEndRun@@MAEXPBVPP_AttrProp@@00PAV
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_FieldEndRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_FieldEndRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_FieldEndRun@@UAEXIAAH0000AA_N@Z
    virtual public const bool isForcedBreak(/* TODO 参数 */);  // ?isForcedBreak@fp_FieldEndRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_FieldEndRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_FieldEndnoteAnchorRun (4 方法) ---- */
class fp_FieldEndnoteAnchorRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldEndnoteAnchorRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldEndnoteAnchorRun@@UAE_NXZ
    public const /* 未知 */ getPID(/* TODO 参数 */);  // ?getPID@fp_FieldEndnoteAnchorRun@@QBEIXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldEndnoteAnchorRun@@UAEIXZ
};

/* ---- fp_FieldEndnoteRefRun (5 方法) ---- */
class fp_FieldEndnoteRefRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldEndnoteRefRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldEndnoteRefRun@@UAE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_FieldEndnoteRefRun@@UBE_NXZ
    public const /* 未知 */ getPID(/* TODO 参数 */);  // ?getPID@fp_FieldEndnoteRefRun@@QBEIXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldEndnoteRefRun@@UAEIXZ
};

/* ---- fp_FieldFileNameRun (2 方法) ---- */
class fp_FieldFileNameRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldFileNameRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldFileNameRun@@UAE_NXZ
};

/* ---- fp_FieldFootnoteAnchorRun (4 方法) ---- */
class fp_FieldFootnoteAnchorRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldFootnoteAnchorRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldFootnoteAnchorRun@@UAE_NXZ
    public const /* 未知 */ getPID(/* TODO 参数 */);  // ?getPID@fp_FieldFootnoteAnchorRun@@QBEIXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldFootnoteAnchorRun@@UAEIXZ
};

/* ---- fp_FieldFootnoteRefRun (5 方法) ---- */
class fp_FieldFootnoteRefRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldFootnoteRefRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldFootnoteRefRun@@UAE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_FieldFootnoteRefRun@@UBE_NXZ
    public const /* 未知 */ getPID(/* TODO 参数 */);  // ?getPID@fp_FieldFootnoteRefRun@@QBEIXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldFootnoteRefRun@@UAEIXZ
};

/* ---- fp_FieldHengXianRun (3 方法, 定制类) ---- */
class fp_FieldHengXianRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldHengXianRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldHengXianRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldHengXianRun@@UAEIXZ
};

/* ---- fp_FieldLineCountRun (3 方法) ---- */
class fp_FieldLineCountRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldLineCountRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldLineCountRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldLineCountRun@@UAEIXZ
};

/* ---- fp_FieldListLabelRun (4 方法) ---- */
class fp_FieldListLabelRun {
public:
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldListLabelRun@@EAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_FieldListLabelRun@@EAEXPBVPP_AttrProp@
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldListLabelRun@@UAE_NXZ
    virtual public bool isListLabelField(/* TODO 参数 */);  // ?isListLabelField@fp_FieldListLabelRun@@UAE_NXZ
};

/* ---- fp_FieldMMDDYYRun (3 方法) ---- */
class fp_FieldMMDDYYRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldMMDDYYRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldMMDDYYRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldMMDDYYRun@@UAEIXZ
};

/* ---- fp_FieldMailMergeRun (3 方法) ---- */
class fp_FieldMailMergeRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldMailMergeRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldMailMergeRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldMailMergeRun@@UAEIXZ
};

/* ---- fp_FieldMetaRun (3 方法) ---- */
class fp_FieldMetaRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldMetaRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldMetaRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldMetaRun@@UAEIXZ
};

/* ---- fp_FieldMilTimeRun (3 方法) ---- */
class fp_FieldMilTimeRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldMilTimeRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldMilTimeRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldMilTimeRun@@UAEIXZ
};

/* ---- fp_FieldMonthDayYearRun (3 方法) ---- */
class fp_FieldMonthDayYearRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldMonthDayYearRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldMonthDayYearRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldMonthDayYearRun@@UAEIXZ
};

/* ---- fp_FieldMthDayYearRun (3 方法) ---- */
class fp_FieldMthDayYearRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldMthDayYearRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldMthDayYearRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldMthDayYearRun@@UAEIXZ
};

/* ---- fp_FieldNonBlankCharCountRun (3 方法) ---- */
class fp_FieldNonBlankCharCountRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldNonBlankCharCountRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldNonBlankCharCountRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldNonBlankCharCountRun@@UAEIXZ
};

/* ---- fp_FieldPageCountRun (3 方法) ---- */
class fp_FieldPageCountRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldPageCountRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldPageCountRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldPageCountRun@@UAEIXZ
};

/* ---- fp_FieldPageNumberRun (3 方法) ---- */
class fp_FieldPageNumberRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldPageNumberRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldPageNumberRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldPageNumberRun@@UAEIXZ
};

/* ---- fp_FieldPageReferenceRun (3 方法) ---- */
class fp_FieldPageReferenceRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldPageReferenceRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldPageReferenceRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldPageReferenceRun@@UAEIXZ
};

/* ---- fp_FieldParaCountRun (3 方法) ---- */
class fp_FieldParaCountRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldParaCountRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldParaCountRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldParaCountRun@@UAEIXZ
};

/* ---- fp_FieldRun (19 方法) ---- */
class fp_FieldRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_FieldRun@@MAEX_N@Z
    public /* 未知 */ _defaultDraw(/* TODO 参数 */);  // ?_defaultDraw@fp_FieldRun@@MAEXPAUdg_DrawArgs@@_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _getParameter(/* TODO 参数 */);  // ?_getParameter@fp_FieldRun@@IBEPBDXZ
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_FieldRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_FieldRun@@MAEXPBVPP_AttrProp@@00PAVGR_
    public /* 未知 */ _recalcWidth(/* TODO 参数 */);  // ?_recalcWidth@fp_FieldRun@@MAE_NXZ
    public bool _setValue(/* TODO 参数 */);  // ?_setValue@fp_FieldRun@@QAE_NPBI@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldRun@@UAE_NXZ
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_FieldRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_FieldRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_FieldRun@@UAEXIAAH0000AA_N@Z
    virtual public const /* 未知 */ getFieldType(/* TODO 参数 */);  // ?getFieldType@fp_FieldRun@@UBE?AW4fp_FieldsEnum@@XZ
    virtual public const /* 未知 */ getValue(/* TODO 参数 */);  // ?getValue@fp_FieldRun@@UBEPBIXZ
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_FieldRun@@UBE_NXZ
    virtual public const bool isSubscript(/* TODO 参数 */);  // ?isSubscript@fp_FieldRun@@UBE_NXZ
    virtual public const bool isSuperscript(/* TODO 参数 */);  // ?isSuperscript@fp_FieldRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_FieldRun@@UAEXHHAAIAA_N11@Z
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldRun@@UAEIXZ
};

/* ---- fp_FieldStartRun (9 方法) ---- */
class fp_FieldStartRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_FieldStartRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldStartRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_FieldStartRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_FieldStartRun@@MAEXPBVPP_AttrProp@@00P
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_FieldStartRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_FieldStartRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_FieldStartRun@@UAEXIAAH0000AA_N@Z
    virtual public const bool isForcedBreak(/* TODO 参数 */);  // ?isForcedBreak@fp_FieldStartRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_FieldStartRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_FieldTOCHeadingRun (4 方法) ---- */
class fp_FieldTOCHeadingRun {
public:
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldTOCHeadingRun@@EAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_FieldTOCHeadingRun@@EAEXPBVPP_AttrProp
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldTOCHeadingRun@@UAE_NXZ
    virtual public bool isListLabelField(/* TODO 参数 */);  // ?isListLabelField@fp_FieldTOCHeadingRun@@UAE_NXZ
};

/* ---- fp_FieldTOCListLabelRun (4 方法) ---- */
class fp_FieldTOCListLabelRun {
public:
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldTOCListLabelRun@@EAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_FieldTOCListLabelRun@@EAEXPBVPP_AttrPr
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldTOCListLabelRun@@UAE_NXZ
    virtual public bool isListLabelField(/* TODO 参数 */);  // ?isListLabelField@fp_FieldTOCListLabelRun@@UAE_NXZ
};

/* ---- fp_FieldTOCNumRun (4 方法) ---- */
class fp_FieldTOCNumRun {
public:
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldTOCNumRun@@EAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_FieldTOCNumRun@@EAEXPBVPP_AttrProp@@00
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldTOCNumRun@@UAE_NXZ
    virtual public bool isListLabelField(/* TODO 参数 */);  // ?isListLabelField@fp_FieldTOCNumRun@@UAE_NXZ
};

/* ---- fp_FieldTableSumCols (3 方法) ---- */
class fp_FieldTableSumCols {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldTableSumCols@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldTableSumCols@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldTableSumCols@@UAEIXZ
};

/* ---- fp_FieldTableSumRows (3 方法) ---- */
class fp_FieldTableSumRows {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldTableSumRows@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldTableSumRows@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldTableSumRows@@UAEIXZ
};

/* ---- fp_FieldTimeEpochRun (3 方法) ---- */
class fp_FieldTimeEpochRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldTimeEpochRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldTimeEpochRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldTimeEpochRun@@UAEIXZ
};

/* ---- fp_FieldTimeRun (3 方法) ---- */
class fp_FieldTimeRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldTimeRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldTimeRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldTimeRun@@UAEIXZ
};

/* ---- fp_FieldTimeZoneRun (2 方法) ---- */
class fp_FieldTimeZoneRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldTimeZoneRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldTimeZoneRun@@UAE_NXZ
};

/* ---- fp_FieldWkdayRun (3 方法) ---- */
class fp_FieldWkdayRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldWkdayRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldWkdayRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldWkdayRun@@UAEIXZ
};

/* ---- fp_FieldWordCountRun (3 方法) ---- */
class fp_FieldWordCountRun {
public:
    virtual public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FieldWordCountRun@@UAEXPAUdg_DrawArgs@@@Z
    virtual public bool calculateValue(/* TODO 参数 */);  // ?calculateValue@fp_FieldWordCountRun@@UAE_NXZ
    virtual public /* 未知 */ needsFrequentUpdates(/* TODO 参数 */);  // ?needsFrequentUpdates@fp_FieldWordCountRun@@UAEIXZ
};

/* ---- fp_FmtMarkRun (11 方法) ---- */
class fp_FmtMarkRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_FmtMarkRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_FmtMarkRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_FmtMarkRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_FmtMarkRun@@MAEXPBVPP_AttrProp@@00PAVG
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_FmtMarkRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_FmtMarkRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_FmtMarkRun@@UAEXIAAH0000AA_N@Z
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_FmtMarkRun@@UBE_NXZ
    virtual public const bool isSubscript(/* TODO 参数 */);  // ?isSubscript@fp_FmtMarkRun@@UBE_NXZ
    virtual public const bool isSuperscript(/* TODO 参数 */);  // ?isSuperscript@fp_FmtMarkRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_FmtMarkRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_FootnoteContainer (12 方法) ---- */
class fp_FootnoteContainer {
public:
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_FootnoteContainer@@UAEXXZ
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_FootnoteContainer@@UAEXPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_FootnoteContainer@@UAEXPAVGR_Graphics@@@Z
    public /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fp_FootnoteContainer@@QAEPAVfl_DocSecti
    virtual public const /* 未知 */ getNextContainerInSection(/* TODO 参数 */);  // ?getNextContainerInSection@fp_FootnoteContainer@@UBEPAVfp_Co
    virtual public /* 未知 */ getPage(/* TODO 参数 */);  // ?getPage@fp_FootnoteContainer@@UAEPAVfp_Page@@XZ
    virtual public const /* 未知 */ getPrevContainerInSection(/* TODO 参数 */);  // ?getPrevContainerInSection@fp_FootnoteContainer@@UBEPAVfp_Co
    public /* 未知 */ getValue(/* TODO 参数 */);  // ?getValue@fp_FootnoteContainer@@QAEHXZ
    virtual public bool isVBreakable(/* TODO 参数 */);  // ?isVBreakable@fp_FootnoteContainer@@UAE_NXZ
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_FootnoteContainer@@QAEXXZ
    virtual public /* 未知 */ setContainer(/* TODO 参数 */);  // ?setContainer@fp_FootnoteContainer@@UAEXPAVfp_Container@@@Z
    public /* 未知 */ setPage(/* TODO 参数 */);  // ?setPage@fp_FootnoteContainer@@QAEXPAVfp_Page@@@Z
};

/* ---- fp_ForcedColumnBreakRun (9 方法) ---- */
class fp_ForcedColumnBreakRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_ForcedColumnBreakRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_ForcedColumnBreakRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_ForcedColumnBreakRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_ForcedColumnBreakRun@@MAEXPBVPP_AttrPr
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_ForcedColumnBreakRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_ForcedColumnBreakRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_ForcedColumnBreakRun@@UAEXIAAH0000AA_N@Z
    virtual public const bool isForcedBreak(/* TODO 参数 */);  // ?isForcedBreak@fp_ForcedColumnBreakRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_ForcedColumnBreakRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_ForcedLineBreakRun (9 方法) ---- */
class fp_ForcedLineBreakRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_ForcedLineBreakRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_ForcedLineBreakRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_ForcedLineBreakRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_ForcedLineBreakRun@@MAEXPBVPP_AttrProp
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_ForcedLineBreakRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_ForcedLineBreakRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_ForcedLineBreakRun@@UAEXIAAH0000AA_N@Z
    virtual public const bool isForcedBreak(/* TODO 参数 */);  // ?isForcedBreak@fp_ForcedLineBreakRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_ForcedLineBreakRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_ForcedPageBreakRun (9 方法) ---- */
class fp_ForcedPageBreakRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_ForcedPageBreakRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_ForcedPageBreakRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_ForcedPageBreakRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_ForcedPageBreakRun@@MAEXPBVPP_AttrProp
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_ForcedPageBreakRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_ForcedPageBreakRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_ForcedPageBreakRun@@UAEXIAAH0000AA_N@Z
    virtual public const bool isForcedBreak(/* TODO 参数 */);  // ?isForcedBreak@fp_ForcedPageBreakRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_ForcedPageBreakRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_FrameContainer (48 方法) ---- */
class fp_FrameContainer {
public:
    public /* 未知 */ _drawLine(/* TODO 参数 */);  // ?_drawLine@fp_FrameContainer@@AAEXABVLine@PP_PropertyMap@@HH
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_FrameContainer@@UAEXXZ
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_FrameContainer@@UAEXPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_FrameContainer@@UAEXPAVGR_Graphics@@@Z
    public /* 未知 */ drawBoundaries(/* TODO 参数 */);  // ?drawBoundaries@fp_FrameContainer@@QAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ drawHandles(/* TODO 参数 */);  // ?drawHandles@fp_FrameContainer@@QAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ getBlocksAroundFrame(/* TODO 参数 */);  // ?getBlocksAroundFrame@fp_FrameContainer@@QAEXAAV?$UT_Generic
    public /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fp_FrameContainer@@QAEPAVfl_DocSectionL
    public const /* 未知 */ getFullHeight(/* TODO 参数 */);  // ?getFullHeight@fp_FrameContainer@@QBEHXZ
    public const /* 未知 */ getFullWidth(/* TODO 参数 */);  // ?getFullWidth@fp_FrameContainer@@QBEHXZ
    public const /* 未知 */ getFullX(/* TODO 参数 */);  // ?getFullX@fp_FrameContainer@@QBEHXZ
    public const /* 未知 */ getFullY(/* TODO 参数 */);  // ?getFullY@fp_FrameContainer@@QBEHXZ
    virtual public const /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@fp_FrameContainer@@UBEHXZ
    public /* 未知 */ getLeftPad(/* TODO 参数 */);  // ?getLeftPad@fp_FrameContainer@@QAEHHH@Z
    virtual public const /* 未知 */ getNextContainerInSection(/* TODO 参数 */);  // ?getNextContainerInSection@fp_FrameContainer@@UBEPAVfp_Conta
    virtual public /* 未知 */ getPage(/* TODO 参数 */);  // ?getPage@fp_FrameContainer@@UAEPAVfp_Page@@XZ
    virtual public const /* 未知 */ getPrevContainerInSection(/* TODO 参数 */);  // ?getPrevContainerInSection@fp_FrameContainer@@UBEPAVfp_Conta
    public /* 未知 */ getRightPad(/* TODO 参数 */);  // ?getRightPad@fp_FrameContainer@@QAEHHH@Z
    virtual public const /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@fp_FrameContainer@@UBEHXZ
    virtual public const /* 未知 */ getX(/* TODO 参数 */);  // ?getX@fp_FrameContainer@@UBEHXZ
    public /* 未知 */ getXPad(/* TODO 参数 */);  // ?getXPad@fp_FrameContainer@@QAEHXZ
    virtual public const /* 未知 */ getY(/* TODO 参数 */);  // ?getY@fp_FrameContainer@@UBEHXZ
    public /* 未知 */ getYPad(/* TODO 参数 */);  // ?getYPad@fp_FrameContainer@@QAEHXZ
    public bool isAbove(/* TODO 参数 */);  // ?isAbove@fp_FrameContainer@@QAE_NXZ
    public const bool isLeftWrapped(/* TODO 参数 */);  // ?isLeftWrapped@fp_FrameContainer@@QBE_NXZ
    public const bool isRightWrapped(/* TODO 参数 */);  // ?isRightWrapped@fp_FrameContainer@@QBE_NXZ
    public const bool isTightWrapped(/* TODO 参数 */);  // ?isTightWrapped@fp_FrameContainer@@QBE_NXZ
    public const bool isTopBot(/* TODO 参数 */);  // ?isTopBot@fp_FrameContainer@@QBE_NXZ
    virtual public bool isVBreakable(/* TODO 参数 */);  // ?isVBreakable@fp_FrameContainer@@UAE_NXZ
    public const bool isWrappingSet(/* TODO 参数 */);  // ?isWrappingSet@fp_FrameContainer@@QBE_NXZ
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_FrameContainer@@QAEXXZ
    public bool overlapsRect(/* TODO 参数 */);  // ?overlapsRect@fp_FrameContainer@@QAE_NAAVUT_Rect@@@Z
    public /* 未知 */ setAbove(/* TODO 参数 */);  // ?setAbove@fp_FrameContainer@@QAEX_N@Z
    public /* 未知 */ setBackground(/* TODO 参数 */);  // ?setBackground@fp_FrameContainer@@QAEXABVBackground@PP_Prope
    public /* 未知 */ setBottomStyle(/* TODO 参数 */);  // ?setBottomStyle@fp_FrameContainer@@QAEXABVLine@PP_PropertyMa
    virtual public /* 未知 */ setContainer(/* TODO 参数 */);  // ?setContainer@fp_FrameContainer@@UAEXPAVfp_Container@@@Z
    public /* 未知 */ setLeftStyle(/* TODO 参数 */);  // ?setLeftStyle@fp_FrameContainer@@QAEXABVLine@PP_PropertyMap@
    public /* 未知 */ setLeftWrapped(/* TODO 参数 */);  // ?setLeftWrapped@fp_FrameContainer@@QAEX_N@Z
    public /* 未知 */ setOverWrote(/* TODO 参数 */);  // ?setOverWrote@fp_FrameContainer@@QAEXXZ
    public /* 未知 */ setPage(/* TODO 参数 */);  // ?setPage@fp_FrameContainer@@QAEXPAVfp_Page@@@Z
    public /* 未知 */ setRightStyle(/* TODO 参数 */);  // ?setRightStyle@fp_FrameContainer@@QAEXABVLine@PP_PropertyMap
    public /* 未知 */ setRightWrapped(/* TODO 参数 */);  // ?setRightWrapped@fp_FrameContainer@@QAEX_N@Z
    public /* 未知 */ setTightWrapping(/* TODO 参数 */);  // ?setTightWrapping@fp_FrameContainer@@QAEX_N@Z
    public /* 未知 */ setTopBot(/* TODO 参数 */);  // ?setTopBot@fp_FrameContainer@@QAEX_N@Z
    public /* 未知 */ setTopStyle(/* TODO 参数 */);  // ?setTopStyle@fp_FrameContainer@@QAEXABVLine@PP_PropertyMap@@
    public /* 未知 */ setWrapping(/* TODO 参数 */);  // ?setWrapping@fp_FrameContainer@@QAEX_N@Z
    public /* 未知 */ setXpad(/* TODO 参数 */);  // ?setXpad@fp_FrameContainer@@QAEXH@Z
    public /* 未知 */ setYpad(/* TODO 参数 */);  // ?setYpad@fp_FrameContainer@@QAEXH@Z
};

/* ---- fp_HdrFtrContainer (5 方法) ---- */
class fp_HdrFtrContainer {
public:
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_HdrFtrContainer@@UAEXXZ
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_HdrFtrContainer@@UAEXPAUdg_DrawArgs@@@Z
    public const /* 未知 */ getHdrFtrSectionLayout(/* TODO 参数 */);  // ?getHdrFtrSectionLayout@fp_HdrFtrContainer@@QBEPAVfl_HdrFtrS
    public /* 未知 */ getScreenOffsets(/* TODO 参数 */);  // ?getScreenOffsets@fp_HdrFtrContainer@@QAEXPAVfp_ContainerObj
    virtual public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_HdrFtrContainer@@UAEXXZ
};

/* ---- fp_HyperlinkRun (15 方法) ---- */
class fp_HyperlinkRun {
public:
    public /* 未知 */ _canContainPoint(/* TODO 参数 */);  // ?_canContainPoint@fp_HyperlinkRun@@MBE_NXZ
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_HyperlinkRun@@MAEX_N@Z
    public /* 未知 */ _deleteFollowingIfAtInsPoint(/* TODO 参数 */);  // ?_deleteFollowingIfAtInsPoint@fp_HyperlinkRun@@MBE_NXZ
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_HyperlinkRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_HyperlinkRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_HyperlinkRun@@MAEXPBVPP_AttrProp@@00PA
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_HyperlinkRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_HyperlinkRun@@UBE_NXZ
    virtual public const bool doesContainNonBlankData(/* TODO 参数 */);  // ?doesContainNonBlankData@fp_HyperlinkRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_HyperlinkRun@@UAEXIAAH0000AA_N@Z
    virtual public /* 未知 */ getHyperlinkType(/* TODO 参数 */);  // ?getHyperlinkType@fp_HyperlinkRun@@UAE?AW4FP_HYPERLINK_TYPE@
    public const /* 未知 */ getTarget(/* TODO 参数 */);  // ?getTarget@fp_HyperlinkRun@@QBEPBDXZ
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_HyperlinkRun@@UBE_NXZ
    public const bool isStartOfHyperlink(/* TODO 参数 */);  // ?isStartOfHyperlink@fp_HyperlinkRun@@QBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_HyperlinkRun@@UAEXHHAAIAA_N11@Z
};

/* ---- fp_ImageRun (13 方法) ---- */
class fp_ImageRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_ImageRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_ImageRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_ImageRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_ImageRun@@MAEXPBVPP_AttrProp@@00PAVGR_
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_ImageRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_ImageRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_ImageRun@@UAEXIAAH0000AA_N@Z
    public const /* 未知 */ getDataId(/* TODO 参数 */);  // ?getDataId@fp_ImageRun@@QBEPBDXZ
    virtual public /* 未知 */ getImage(/* TODO 参数 */);  // ?getImage@fp_ImageRun@@UAEPAVGR_Image@@XZ
    public /* 未知 */ getPointHeight(/* TODO 参数 */);  // ?getPointHeight@fp_ImageRun@@QAEHXZ
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_ImageRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_ImageRun@@UAEXHHAAIAA_N11@Z
    public /* 未知 */ regenerateImage(/* TODO 参数 */);  // ?regenerateImage@fp_ImageRun@@QAEXPAVGR_Graphics@@@Z
};

/* ---- fp_Line (125 方法) ---- */
class fp_Line {
public:
    virtual public /* 未知 */ HBreakAt(/* TODO 参数 */);  // ?HBreakAt@fp_Line@@UAEPAVfp_ContainerObject@@H@Z
    virtual public /* 未知 */ VBreakAt(/* TODO 参数 */);  // ?VBreakAt@fp_Line@@UAEPAVfp_ContainerObject@@H@Z
    protected /* 未知 */ _calculateWidthOfRun(/* TODO 参数 */);  // ?_calculateWidthOfRun@fp_Line@@IAEXAAHPAVfp_Run@@IIW4FL_WORK
    public /* 未知 */ _createMapOfRuns(/* TODO 参数 */);  // ?_createMapOfRuns@fp_Line@@AAEHXZ
    public /* 未知 */ _doClearScreenFromRunToEnd(/* TODO 参数 */);  // ?_doClearScreenFromRunToEnd@fp_Line@@AAEXH@Z
    public /* 未知 */ _getRunLogIndx(/* TODO 参数 */);  // ?_getRunLogIndx@fp_Line@@AAEII@Z
    public /* 未知 */ _getRunVisIndx(/* TODO 参数 */);  // ?_getRunVisIndx@fp_Line@@AAEII@Z
    public /* 未知 */ _splitRunsAtSpaces(/* TODO 参数 */);  // ?_splitRunsAtSpaces@fp_Line@@AAEXXZ
    public /* 未知 */ _updateContainsFootnoteRef(/* TODO 参数 */);  // ?_updateContainsFootnoteRef@fp_Line@@AAEXXZ
    public /* 未知 */ addDirectionUsed(/* TODO 参数 */);  // ?addDirectionUsed@fp_Line@@QAEXJ_N@Z
    public /* 未知 */ addRun(/* TODO 参数 */);  // ?addRun@fp_Line@@QAEXPAVfp_Run@@@Z
    public bool assertLineListIntegrity(/* TODO 参数 */);  // ?assertLineListIntegrity@fp_Line@@QAE_NXZ
    public /* 未知 */ calculateWidthOfLine(/* TODO 参数 */);  // ?calculateWidthOfLine@fp_Line@@QAEHXZ
    public /* 未知 */ calculateWidthOfRun(/* TODO 参数 */);  // ?calculateWidthOfRun@fp_Line@@QAEPAVfp_Run@@AAHIW4FL_WORKING
    public /* 未知 */ calculateWidthOfTrailingSpaces(/* TODO 参数 */);  // ?calculateWidthOfTrailingSpaces@fp_Line@@QAEHXZ
    public const bool canContainPoint(/* TODO 参数 */);  // ?canContainPoint@fp_Line@@QBE_NXZ
    public /* 未知 */ changeDirectionUsed(/* TODO 参数 */);  // ?changeDirectionUsed@fp_Line@@QAEXJJ_N@Z
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_Line@@UAEXXZ
    public /* 未知 */ clearScreenFromRunToEnd(/* TODO 参数 */);  // ?clearScreenFromRunToEnd@fp_Line@@QAEXI@Z
    public /* 未知 */ clearScreenFromRunToEnd(/* TODO 参数 */);  // ?clearScreenFromRunToEnd@fp_Line@@QAEXPAVfp_Run@@@Z
    public /* 未知 */ coalesceRuns(/* TODO 参数 */);  // ?coalesceRuns@fp_Line@@QAEXXZ
    public bool containsFootnoteReference(/* TODO 参数 */);  // ?containsFootnoteReference@fp_Line@@QAE_NXZ
    public const bool containsForcedColumnBreak(/* TODO 参数 */);  // ?containsForcedColumnBreak@fp_Line@@QBE_NXZ
    public const bool containsForcedPageBreak(/* TODO 参数 */);  // ?containsForcedPageBreak@fp_Line@@QBE_NXZ
    public bool containsOffset(/* TODO 参数 */);  // ?containsOffset@fp_Line@@QAE_NI@Z
    public /* 未知 */ countJustificationPoints(/* TODO 参数 */);  // ?countJustificationPoints@fp_Line@@QAEIXZ
    public const /* 未知 */ countRuns(/* TODO 参数 */);  // ?countRuns@fp_Line@@QBEHXZ
    virtual public /* 未知 */ distanceFromPoint(/* TODO 参数 */);  // ?distanceFromPoint@fp_Line@@UAEIHH@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_Line@@UAEXPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_Line@@UAEXPAVGR_Graphics@@@Z
    public bool findNextTabStop(/* TODO 参数 */);  // ?findNextTabStop@fp_Line@@QAE_NHAAHAAW4eTabType@@AAW4eTabLea
    public bool findPrevTabStop(/* TODO 参数 */);  // ?findPrevTabStop@fp_Line@@QAE_NHAAHAAW4eTabType@@AAW4eTabLea
    public /* 未知 */ genOverlapRects(/* TODO 参数 */);  // ?genOverlapRects@fp_Line@@QAEXAAVUT_Rect@@0@Z
    public const /* 未知 */ getAscent(/* TODO 参数 */);  // ?getAscent@fp_Line@@QBEHXZ
    public const /* 未知 */ getBlock(/* TODO 参数 */);  // ?getBlock@fp_Line@@QBEPAVfl_BlockLayout@@XZ
    public const /* 未知 */ getBreakTick(/* TODO 参数 */);  // ?getBreakTick@fp_Line@@QBEHXZ
    public /* 未知 */ getColumn(/* TODO 参数 */);  // ?getColumn@fp_Line@@QAEPAVfp_Container@@XZ
    public /* 未知 */ getColumnGap(/* TODO 参数 */);  // ?getColumnGap@fp_Line@@QAEHXZ
    public const /* 未知 */ getDescent(/* TODO 参数 */);  // ?getDescent@fp_Line@@QBEHXZ
    virtual public const /* 未知 */ getDrawingWidth(/* TODO 参数 */);  // ?getDrawingWidth@fp_Line@@UBEHXZ
    public /* 未知 */ getFilledWidth(/* TODO 参数 */);  // ?getFilledWidth@fp_Line@@QAEHXZ
    public const /* 未知 */ getFirstRun(/* TODO 参数 */);  // ?getFirstRun@fp_Line@@QBEPAVfp_Run@@XZ
    public /* 未知 */ getFirstVisRun(/* TODO 参数 */);  // ?getFirstVisRun@fp_Line@@QAEPAVfp_Run@@XZ
    public bool getFootnoteContainers(/* TODO 参数 */);  // ?getFootnoteContainers@fp_Line@@QAE_NPAV?$UT_GenericVector@P
    virtual public const /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@fp_Line@@UBEHXZ
    public const /* 未知 */ getLastRun(/* TODO 参数 */);  // ?getLastRun@fp_Line@@QBEPAVfp_Run@@XZ
    public const /* 未知 */ getLastTextRun(/* TODO 参数 */);  // ?getLastTextRun@fp_Line@@QBEPAVfp_Run@@XZ
    public /* 未知 */ getLastVisRun(/* TODO 参数 */);  // ?getLastVisRun@fp_Line@@QAEPAVfp_Run@@XZ
    public /* 未知 */ getLineAlignJ(/* TODO 参数 */);  // ?getLineAlignJ@fp_Line@@QAEHXZ
    virtual public const /* 未知 */ getMarginAfter(/* TODO 参数 */);  // ?getMarginAfter@fp_Line@@UBEHXZ
    virtual public const /* 未知 */ getMarginBefore(/* TODO 参数 */);  // ?getMarginBefore@fp_Line@@UBEHXZ
    public const /* 未知 */ getMaxFontsize(/* TODO 参数 */);  // ?getMaxFontsize@fp_Line@@QBENXZ
    public const /* 未知 */ getMaxWidth(/* TODO 参数 */);  // ?getMaxWidth@fp_Line@@QBEHXZ
    virtual public const /* 未知 */ getNextContainerInSection(/* TODO 参数 */);  // ?getNextContainerInSection@fp_Line@@UBEPAVfp_Container@@XZ
    public const /* 未知 */ getNumRunsInLine(/* TODO 参数 */);  // ?getNumRunsInLine@fp_Line@@QBEHXZ
    public /* 未知 */ getOffsets(/* TODO 参数 */);  // ?getOffsets@fp_Line@@QAEXPAVfp_Run@@AAH1@Z
    public /* 未知 */ getPage(/* TODO 参数 */);  // ?getPage@fp_Line@@QAEPAVfp_Page@@XZ
    virtual public const /* 未知 */ getPrevContainerInSection(/* TODO 参数 */);  // ?getPrevContainerInSection@fp_Line@@UBEPAVfp_Container@@XZ
    public /* 未知 */ getRunAtVisPos(/* TODO 参数 */);  // ?getRunAtVisPos@fp_Line@@QAEPAVfp_Run@@I@Z
    public /* 未知 */ getRunFromIndex(/* TODO 参数 */);  // ?getRunFromIndex@fp_Line@@QAEPAVfp_Run@@I@Z
    public /* 未知 */ getScreenOffsets(/* TODO 参数 */);  // ?getScreenOffsets@fp_Line@@QAEXPAVfp_Run@@AAH1@Z
    virtual public /* 未知 */ getScreenRect(/* TODO 参数 */);  // ?getScreenRect@fp_Line@@UAEPAVUT_Rect@@XZ
    public /* 未知 */ getVisIndx(/* TODO 参数 */);  // ?getVisIndx@fp_Line@@QAEIPAVfp_Run@@@Z
    virtual public const /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@fp_Line@@UBEHXZ
    public /* 未知 */ getWidthToRun(/* TODO 参数 */);  // ?getWidthToRun@fp_Line@@QAEHPAVfp_Run@@@Z
    public const /* 未知 */ getWorkingDirectionAndTabstops(/* TODO 参数 */);  // ?getWorkingDirectionAndTabstops@fp_Line@@QBEXAAW4FL_WORKING_
    public /* 未知 */ getWorkingLineWidth(/* TODO 参数 */);  // ?getWorkingLineWidth@fp_Line@@QAEHPAVfp_Run@@AAH@Z
    virtual public const /* 未知 */ getX(/* TODO 参数 */);  // ?getX@fp_Line@@UBEHXZ
    virtual public const /* 未知 */ getY(/* TODO 参数 */);  // ?getY@fp_Line@@UBEHXZ
    public /* 未知 */ insertRun(/* TODO 参数 */);  // ?insertRun@fp_Line@@QAEXPAVfp_Run@@@Z
    public /* 未知 */ insertRunAfter(/* TODO 参数 */);  // ?insertRunAfter@fp_Line@@QAEXPAVfp_Run@@0@Z
    public /* 未知 */ insertRunBefore(/* TODO 参数 */);  // ?insertRunBefore@fp_Line@@QAEXPAVfp_Run@@0@Z
    public const bool isEmpty(/* TODO 参数 */);  // ?isEmpty@fp_Line@@QBE_NXZ
    public const bool isFirstLineInBlock(/* TODO 参数 */);  // ?isFirstLineInBlock@fp_Line@@QBE_NXZ
    virtual public bool isHBreakable(/* TODO 参数 */);  // ?isHBreakable@fp_Line@@UAE_NXZ
    public const bool isLastCharacter(/* TODO 参数 */);  // ?isLastCharacter@fp_Line@@QBE_NI@Z
    public const bool isLastLineInBlock(/* TODO 参数 */);  // ?isLastLineInBlock@fp_Line@@QBE_NXZ
    public const bool isSameYAsPrevious(/* TODO 参数 */);  // ?isSameYAsPrevious@fp_Line@@QBE_NXZ
    public const bool isScreenCleared(/* TODO 参数 */);  // ?isScreenCleared@fp_Line@@QBE_NXZ
    virtual public bool isVBreakable(/* TODO 参数 */);  // ?isVBreakable@fp_Line@@UAE_NXZ
    public const bool isWrapped(/* TODO 参数 */);  // ?isWrapped@fp_Line@@QBE_NXZ
    public /* 未知 */ justify(/* TODO 参数 */);  // ?justify@fp_Line@@QAEXH@Z
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_Line@@QAEXXZ
    public /* 未知 */ lineRefreshTextRuns(/* TODO 参数 */);  // ?lineRefreshTextRuns@fp_Line@@QAEXH@Z
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_Line@@UAEXHHAAIAA_N11@Z
    virtual public /* 未知 */ markDirtyOverlappingRuns(/* TODO 参数 */);  // ?markDirtyOverlappingRuns@fp_Line@@UAEXAAVUT_Rect@@@Z
    public bool needsRedraw(/* TODO 参数 */);  // ?needsRedraw@fp_Line@@QAE_NXZ
    public /* 未知 */ recalcHeight(/* TODO 参数 */);  // ?recalcHeight@fp_Line@@QAEXPAVfp_Run@@@Z
    virtual public /* 未知 */ recalcMaxWidth(/* TODO 参数 */);  // ?recalcMaxWidth@fp_Line@@UAEX_N@Z
    public bool recalculateFields(/* TODO 参数 */);  // ?recalculateFields@fp_Line@@QAE_NI@Z
    public bool redrawUpdate(/* TODO 参数 */);  // ?redrawUpdate@fp_Line@@QAE_NXZ
    public /* 未知 */ remove(/* TODO 参数 */);  // ?remove@fp_Line@@QAEXXZ
    public /* 未知 */ removeDirectionUsed(/* TODO 参数 */);  // ?removeDirectionUsed@fp_Line@@QAEXJ_N@Z
    public bool removeRun(/* TODO 参数 */);  // ?removeRun@fp_Line@@QAE_NPAVfp_Run@@_N@Z
    public /* 未知 */ resetJustification(/* TODO 参数 */);  // ?resetJustification@fp_Line@@QAEX_N@Z
    public /* 未知 */ s_iClassInstanceCounter(/* TODO 参数 */);  // ?s_iClassInstanceCounter@fp_Line@@0IA
    public /* 未知 */ s_iMapOfRunsSize(/* TODO 参数 */);  // ?s_iMapOfRunsSize@fp_Line@@0IA
    public /* 未知 */ s_iOldXsSize(/* TODO 参数 */);  // ?s_iOldXsSize@fp_Line@@0IA
    public /* 未知 */ s_pEmbeddingLevels(/* TODO 参数 */);  // ?s_pEmbeddingLevels@fp_Line@@0PAEA
    public /* 未知 */ s_pMapOfRunsL2V(/* TODO 参数 */);  // ?s_pMapOfRunsL2V@fp_Line@@0PAIA
    public /* 未知 */ s_pMapOfRunsV2L(/* TODO 参数 */);  // ?s_pMapOfRunsV2L@fp_Line@@0PAIA
    public /* 未知 */ s_pMapOwner(/* TODO 参数 */);  // ?s_pMapOwner@fp_Line@@0PAV1@A
    public /* 未知 */ s_pOldXs(/* TODO 参数 */);  // ?s_pOldXs@fp_Line@@0PAHA
    public /* 未知 */ s_pPseudoString(/* TODO 参数 */);  // ?s_pPseudoString@fp_Line@@0PAIA
    public /* 未知 */ setAdditionalMargin(/* TODO 参数 */);  // ?setAdditionalMargin@fp_Line@@QAEXH@Z
    public /* 未知 */ setAscent(/* TODO 参数 */);  // ?setAscent@fp_Line@@AAEXH@Z
    virtual public /* 未知 */ setAssignedScreenHeight(/* TODO 参数 */);  // ?setAssignedScreenHeight@fp_Line@@UAEXH@Z
    public /* 未知 */ setBlock(/* TODO 参数 */);  // ?setBlock@fp_Line@@QAEXPAVfl_BlockLayout@@@Z
    public /* 未知 */ setBreakTick(/* TODO 参数 */);  // ?setBreakTick@fp_Line@@QAEXH@Z
    virtual public /* 未知 */ setContainer(/* TODO 参数 */);  // ?setContainer@fp_Line@@UAEXPAVfp_Container@@@Z
    public /* 未知 */ setDescent(/* TODO 参数 */);  // ?setDescent@fp_Line@@AAEXH@Z
    virtual public /* 未知 */ setHeight(/* TODO 参数 */);  // ?setHeight@fp_Line@@UAEXH@Z
    public /* 未知 */ setMapOfRunsDirty(/* TODO 参数 */);  // ?setMapOfRunsDirty@fp_Line@@QAEXXZ
    public /* 未知 */ setMaxWidth(/* TODO 参数 */);  // ?setMaxWidth@fp_Line@@QAEXH@Z
    public /* 未知 */ setNeedsRedraw(/* TODO 参数 */);  // ?setNeedsRedraw@fp_Line@@QAEXXZ
    public /* 未知 */ setReformat(/* TODO 参数 */);  // ?setReformat@fp_Line@@QAEXXZ
    public /* 未知 */ setSameYAsPrevious(/* TODO 参数 */);  // ?setSameYAsPrevious@fp_Line@@QAEX_N@Z
    public /* 未知 */ setScreenCleared(/* TODO 参数 */);  // ?setScreenCleared@fp_Line@@QAEX_N@Z
    public /* 未知 */ setScreenHeight(/* TODO 参数 */);  // ?setScreenHeight@fp_Line@@AAEXH@Z
    virtual public /* 未知 */ setWidth(/* TODO 参数 */);  // ?setWidth@fp_Line@@UAEXH@Z
    public /* 未知 */ setWrapped(/* TODO 参数 */);  // ?setWrapped@fp_Line@@QAEX_N@Z
    virtual public /* 未知 */ setX(/* TODO 参数 */);  // ?setX@fp_Line@@UAEXH_N@Z
    virtual public /* 未知 */ setY(/* TODO 参数 */);  // ?setY@fp_Line@@UAEXH@Z
    virtual public /* 未知 */ wantHBreakAt(/* TODO 参数 */);  // ?wantHBreakAt@fp_Line@@UAEHH@Z
    virtual public /* 未知 */ wantVBreakAt(/* TODO 参数 */);  // ?wantVBreakAt@fp_Line@@UAEHH@Z
};

/* ---- fp_MathRun (19 方法) ---- */
class fp_MathRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_MathRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_MathRun@@MAEXPAUdg_DrawArgs@@@Z
    protected /* 未知 */ _drawResizeBox(/* TODO 参数 */);  // ?_drawResizeBox@fp_MathRun@@IAEXVUT_Rect@@@Z
    protected /* 未知 */ _getLayoutPropFromObject(/* TODO 参数 */);  // ?_getLayoutPropFromObject@fp_MathRun@@IAEHPBD@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_MathRun@@MBE_NXZ
    protected /* 未知 */ _lookupLocalProperties(/* TODO 参数 */);  // ?_lookupLocalProperties@fp_MathRun@@IAEXXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_MathRun@@MAEXPBVPP_AttrProp@@00PAVGR_G
    public /* 未知 */ _recalcWidth(/* TODO 参数 */);  // ?_recalcWidth@fp_MathRun@@MAE_NXZ
    protected bool _updatePropValuesIfNeeded(/* TODO 参数 */);  // ?_updatePropValuesIfNeeded@fp_MathRun@@IAE_NXZ
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_MathRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_MathRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_MathRun@@UAEXIAAH0000AA_N@Z
    public const /* 未知 */ getDataID(/* TODO 参数 */);  // ?getDataID@fp_MathRun@@QBEPBDXZ
    public /* 未知 */ getMathManager(/* TODO 参数 */);  // ?getMathManager@fp_MathRun@@QAEPAVGR_EmbedManager@@XZ
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_MathRun@@UBE_NXZ
    virtual public const bool isSubscript(/* TODO 参数 */);  // ?isSubscript@fp_MathRun@@UBE_NXZ
    virtual public const bool isSuperscript(/* TODO 参数 */);  // ?isSuperscript@fp_MathRun@@UBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_MathRun@@UAEXHHAAIAA_N11@Z
    virtual public /* 未知 */ updateVerticalMetric(/* TODO 参数 */);  // ?updateVerticalMetric@fp_MathRun@@UAEXXZ
};

/* ---- fp_Page (72 方法) ---- */
class fp_Page {
public:
    public bool TopBotMarginChanged(/* TODO 参数 */);  // ?TopBotMarginChanged@fp_Page@@QAE_NXZ
    protected /* 未知 */ _drawCropMarks(/* TODO 参数 */);  // ?_drawCropMarks@fp_Page@@IAEXPAUdg_DrawArgs@@@Z
    protected /* 未知 */ _reformat(/* TODO 参数 */);  // ?_reformat@fp_Page@@IAEXXZ
    protected /* 未知 */ _reformatColumns(/* TODO 参数 */);  // ?_reformatColumns@fp_Page@@IAEXXZ
    protected /* 未知 */ _reformatFootnotes(/* TODO 参数 */);  // ?_reformatFootnotes@fp_Page@@IAEXXZ
    public bool breakPage(/* TODO 参数 */);  // ?breakPage@fp_Page@@QAE_NXZ
    public /* 未知 */ buildHdrFtrContainer(/* TODO 参数 */);  // ?buildHdrFtrContainer@fp_Page@@QAEPAVfp_ShadowContainer@@PAV
    public /* 未知 */ clearScreenFootnotes(/* TODO 参数 */);  // ?clearScreenFootnotes@fp_Page@@QAEXXZ
    public /* 未知 */ clearScreenFrames(/* TODO 参数 */);  // ?clearScreenFrames@fp_Page@@QAEXXZ
    public /* 未知 */ columnHeightChanged(/* TODO 参数 */);  // ?columnHeightChanged@fp_Page@@QAEXPAVfp_Column@@@Z
    public const /* 未知 */ countAboveFrameContainers(/* TODO 参数 */);  // ?countAboveFrameContainers@fp_Page@@QBEIXZ
    public const /* 未知 */ countBelowFrameContainers(/* TODO 参数 */);  // ?countBelowFrameContainers@fp_Page@@QBEIXZ
    public const /* 未知 */ countColumnLeaders(/* TODO 参数 */);  // ?countColumnLeaders@fp_Page@@QBEIXZ
    public const /* 未知 */ countFootnoteContainers(/* TODO 参数 */);  // ?countFootnoteContainers@fp_Page@@QBEIXZ
    public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_Page@@QAEXPAUdg_DrawArgs@@_N@Z
    public /* 未知 */ expandDamageRect(/* TODO 参数 */);  // ?expandDamageRect@fp_Page@@QAEXHHHH@Z
    public /* 未知 */ findFootnoteContainer(/* TODO 参数 */);  // ?findFootnoteContainer@fp_Page@@QAEHPAVfp_FootnoteContainer@
    public /* 未知 */ findFrameContainer(/* TODO 参数 */);  // ?findFrameContainer@fp_Page@@QAEHPAVfp_FrameContainer@@@Z
    public /* 未知 */ footnoteHeightChanged(/* TODO 参数 */);  // ?footnoteHeightChanged@fp_Page@@QAEXXZ
    public /* 未知 */ frameHeightChanged(/* TODO 参数 */);  // ?frameHeightChanged@fp_Page@@QAEXXZ
    public /* 未知 */ getAllLayouts(/* TODO 参数 */);  // ?getAllLayouts@fp_Page@@QAEXAAV?$UT_GenericVector@PAVfl_Cont
    public const /* 未知 */ getAvailableHeight(/* TODO 参数 */);  // ?getAvailableHeight@fp_Page@@QBEHXZ
    public const /* 未知 */ getAvailableHeightForColumn(/* TODO 参数 */);  // ?getAvailableHeightForColumn@fp_Page@@QBEHPBVfp_Column@@@Z
    public const /* 未知 */ getBottom(/* TODO 参数 */);  // ?getBottom@fp_Page@@QBEHXZ
    public const /* 未知 */ getColumnGap(/* TODO 参数 */);  // ?getColumnGap@fp_Page@@QBEHXZ
    public /* 未知 */ getContainingTable(/* TODO 参数 */);  // ?getContainingTable@fp_Page@@QAEPAVfp_TableContainer@@I@Z
    public const /* 未知 */ getDocLayout(/* TODO 参数 */);  // ?getDocLayout@fp_Page@@QBEPAVFL_DocLayout@@XZ
    public /* 未知 */ getFillType(/* TODO 参数 */);  // ?getFillType@fp_Page@@QAEPAVfg_FillType@@XZ
    public const /* 未知 */ getFilledHeight(/* TODO 参数 */);  // ?getFilledHeight@fp_Page@@QBEHPAVfp_Container@@@Z
    public const /* 未知 */ getFirstLastPos(/* TODO 参数 */);  // ?getFirstLastPos@fp_Page@@QBEI_N@Z
    public /* 未知 */ getFirstPosAndRunType(/* TODO 参数 */);  // ?getFirstPosAndRunType@fp_Page@@QAEIAAH@Z
    public /* 未知 */ getFootnoteHeight(/* TODO 参数 */);  // ?getFootnoteHeight@fp_Page@@QAEHXZ
    public /* 未知 */ getHdrFtrContainer(/* TODO 参数 */);  // ?getHdrFtrContainer@fp_Page@@QAEPAVfp_ShadowContainer@@PAVfl
    public const /* 未知 */ getHdrFtrP(/* TODO 参数 */);  // ?getHdrFtrP@fp_Page@@QBEPAVfp_ShadowContainer@@W4_HdrFtrType
    public const /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@fp_Page@@QBEHXZ
    public /* 未知 */ getLastMappedTOC(/* TODO 参数 */);  // ?getLastMappedTOC@fp_Page@@QAEPAVfl_TOCLayout@@XZ
    public const /* 未知 */ getNext(/* TODO 参数 */);  // ?getNext@fp_Page@@QBEPAV1@XZ
    public const /* 未知 */ getNthAboveFrameContainer(/* TODO 参数 */);  // ?getNthAboveFrameContainer@fp_Page@@QBEPAVfp_FrameContainer@
    public const /* 未知 */ getNthBelowFrameContainer(/* TODO 参数 */);  // ?getNthBelowFrameContainer@fp_Page@@QBEPAVfp_FrameContainer@
    public const /* 未知 */ getNthColumnLeader(/* TODO 参数 */);  // ?getNthColumnLeader@fp_Page@@QBEPAVfp_Column@@H@Z
    public const /* 未知 */ getNthFootnoteContainer(/* TODO 参数 */);  // ?getNthFootnoteContainer@fp_Page@@QBEPAVfp_FootnoteContainer
    public const /* 未知 */ getOwningSection(/* TODO 参数 */);  // ?getOwningSection@fp_Page@@QBEPAVfl_DocSectionLayout@@XZ
    public const /* 未知 */ getPageSize(/* TODO 参数 */);  // ?getPageSize@fp_Page@@QBEABVfp_PageSize@@XZ
    public const /* 未知 */ getPrev(/* TODO 参数 */);  // ?getPrev@fp_Page@@QBEPAV1@XZ
    public const /* 未知 */ getScreenOffsets(/* TODO 参数 */);  // ?getScreenOffsets@fp_Page@@QBEXPAVfp_Container@@AAH1@Z
    public const /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@fp_Page@@QBEHXZ
    public /* 未知 */ initialHeaderInfo(/* TODO 参数 */);  // ?initialHeaderInfo@fp_Page@@QAEXXZ
    public bool insertColumnLeader(/* TODO 参数 */);  // ?insertColumnLeader@fp_Page@@QAE_NPAVfp_Column@@0@Z
    public bool insertFootnoteContainer(/* TODO 参数 */);  // ?insertFootnoteContainer@fp_Page@@QAE_NPAVfp_FootnoteContain
    public bool insertFrameContainer(/* TODO 参数 */);  // ?insertFrameContainer@fp_Page@@QAE_NPAVfp_FrameContainer@@@Z
    public const bool isEmpty(/* TODO 参数 */);  // ?isEmpty@fp_Page@@QBE_NXZ
    public bool isOnScreen(/* TODO 参数 */);  // ?isOnScreen@fp_Page@@QAE_NXZ
    public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_Page@@QAEXHHAAIAA_N11_NPAPAVfl_HdrFtrSha
    public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_Page@@QAEX_NHHAAIAA_N220PAPAVfl_HdrFtrSh
    public /* 未知 */ markAllDirty(/* TODO 参数 */);  // ?markAllDirty@fp_Page@@QAEXXZ
    public /* 未知 */ markDirtyOverlappingRuns(/* TODO 参数 */);  // ?markDirtyOverlappingRuns@fp_Page@@QAEXPAVfp_FrameContainer@
    public const bool needsRedraw(/* TODO 参数 */);  // ?needsRedraw@fp_Page@@QBE_NXZ
    public bool overlapsWrappedFrame(/* TODO 参数 */);  // ?overlapsWrappedFrame@fp_Page@@QAE_NAAVUT_Rect@@@Z
    public bool overlapsWrappedFrame(/* TODO 参数 */);  // ?overlapsWrappedFrame@fp_Page@@QAE_NPAVfp_Line@@@Z
    public bool pageHasThisElem(/* TODO 参数 */);  // ?pageHasThisElem@fp_Page@@QAE_NPBD@Z
    public /* 未知 */ redrawDamagedFrames(/* TODO 参数 */);  // ?redrawDamagedFrames@fp_Page@@QAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ removeColumnLeader(/* TODO 参数 */);  // ?removeColumnLeader@fp_Page@@QAEXPAVfp_Column@@@Z
    public /* 未知 */ removeFootnoteContainer(/* TODO 参数 */);  // ?removeFootnoteContainer@fp_Page@@QAEXPAVfp_FootnoteContaine
    public /* 未知 */ removeFrameContainer(/* TODO 参数 */);  // ?removeFrameContainer@fp_Page@@QAEXPAVfp_FrameContainer@@@Z
    public /* 未知 */ removeHdrFtr(/* TODO 参数 */);  // ?removeHdrFtr@fp_Page@@QAEXW4_HdrFtrType@@@Z
    public /* 未知 */ setLastMappedTOC(/* TODO 参数 */);  // ?setLastMappedTOC@fp_Page@@QAEXPAVfl_TOCLayout@@@Z
    public /* 未知 */ setNext(/* TODO 参数 */);  // ?setNext@fp_Page@@QAEXPAV1@@Z
    public /* 未知 */ setPrev(/* TODO 参数 */);  // ?setPrev@fp_Page@@QAEXPAV1@@Z
    public /* 未知 */ setView(/* TODO 参数 */);  // ?setView@fp_Page@@QAEXPAVFV_View@@@Z
    public /* 未知 */ updateAddiInfo(/* TODO 参数 */);  // ?updateAddiInfo@fp_Page@@QAEXPAVadd_tag@@@Z
    public /* 未知 */ updatePageForWrapping(/* TODO 参数 */);  // ?updatePageForWrapping@fp_Page@@QAEPAVfp_Container@@AAPAVfp_
    public bool uw_getreplacecontentMoify(/* TODO 参数 */);  // ?uw_getreplacecontentMoify@fp_Page@@QAE_NVUT_UTF8String@@PAD
};

/* ---- fp_PageSize (21 方法) ---- */
class fp_PageSize {
public:
    public const /* 未知 */ Height(/* TODO 参数 */);  // ?Height@fp_PageSize@@QBENW4_ut_dimension@@@Z
    public /* 未知 */ IsPredefinedName(/* TODO 参数 */);  // ?IsPredefinedName@fp_PageSize@@SA_NPBD@Z
    public const /* 未知 */ MarginBottom(/* TODO 参数 */);  // ?MarginBottom@fp_PageSize@@QBENW4_ut_dimension@@@Z
    public const /* 未知 */ MarginLeft(/* TODO 参数 */);  // ?MarginLeft@fp_PageSize@@QBENW4_ut_dimension@@@Z
    public const /* 未知 */ MarginRight(/* TODO 参数 */);  // ?MarginRight@fp_PageSize@@QBENW4_ut_dimension@@@Z
    public const /* 未知 */ MarginTop(/* TODO 参数 */);  // ?MarginTop@fp_PageSize@@QBENW4_ut_dimension@@@Z
    public /* 未知 */ NameToPredefined(/* TODO 参数 */);  // ?NameToPredefined@fp_PageSize@@SA?AW4Predefined@1@PBD@Z
    public /* 未知 */ PredefinedToName(/* TODO 参数 */);  // ?PredefinedToName@fp_PageSize@@SAPBDW4Predefined@1@@Z
    public /* 未知 */ Set(/* TODO 参数 */);  // ?Set@fp_PageSize@@QAEXNNW4_ut_dimension@@@Z
    public /* 未知 */ Set(/* TODO 参数 */);  // ?Set@fp_PageSize@@QAEXPBDW4_ut_dimension@@@Z
    public /* 未知 */ Set(/* TODO 参数 */);  // ?Set@fp_PageSize@@QAEXW4Predefined@1@W4_ut_dimension@@@Z
    public /* 未知 */ Set(/* TODO 参数 */);  // ?Set@fp_PageSize@@QAEXW4_ut_dimension@@@Z
    public const /* 未知 */ Width(/* TODO 参数 */);  // ?Width@fp_PageSize@@QBENW4_ut_dimension@@@Z
    public /* 未知 */ getDims(/* TODO 参数 */);  // ?getDims@fp_PageSize@@QAE?AW4_ut_dimension@@XZ
    public const /* 未知 */ getPredefinedName(/* TODO 参数 */);  // ?getPredefinedName@fp_PageSize@@QBEPADXZ
    public /* 未知 */ getScale(/* TODO 参数 */);  // ?getScale@fp_PageSize@@QAENXZ
    public const bool isPortrait(/* TODO 参数 */);  // ?isPortrait@fp_PageSize@@QBE_NXZ
    public bool match(/* TODO 参数 */);  // ?match@fp_PageSize@@QAE_NNN@Z
    public /* 未知 */ setLandscape(/* TODO 参数 */);  // ?setLandscape@fp_PageSize@@QAEXXZ
    public /* 未知 */ setPortrait(/* TODO 参数 */);  // ?setPortrait@fp_PageSize@@QAEXXZ
    public /* 未知 */ setScale(/* TODO 参数 */);  // ?setScale@fp_PageSize@@QAEXN@Z
};

/* ---- fp_Run (181 方法) ---- */
class fp_Run {
public:
    public /* 未知 */ Fill(/* TODO 参数 */);  // ?Fill@fp_Run@@QAEXPAVGR_Graphics@@HHHH@Z
    virtual public /* 未知 */ HBreakAt(/* TODO 参数 */);  // ?HBreakAt@fp_Run@@UAEPAVfp_ContainerObject@@H@Z
    public /* 未知 */ Run_ClearScreen(/* TODO 参数 */);  // ?Run_ClearScreen@fp_Run@@QAEX_N@Z
    public /* 未知 */ Run_setX(/* TODO 参数 */);  // ?Run_setX@fp_Run@@QAEXHW4FPRUN_CLEAR_SCREEN@@@Z
    virtual public /* 未知 */ VBreakAt(/* TODO 参数 */);  // ?VBreakAt@fp_Run@@UAEPAVfp_ContainerObject@@H@Z
    public /* 未知 */ _canContainPoint(/* TODO 参数 */);  // ?_canContainPoint@fp_Run@@MBE_NXZ
    public /* 未知 */ _deleteFollowingIfAtInsPoint(/* TODO 参数 */);  // ?_deleteFollowingIfAtInsPoint@fp_Run@@MBE_NXZ
    public /* 未知 */ _drawTextLine(/* TODO 参数 */);  // ?_drawTextLine@fp_Run@@QAEXHHIIPAI@Z
    public /* 未知 */ _findPrevPropertyRun(/* TODO 参数 */);  // ?_findPrevPropertyRun@fp_Run@@IBEPAV1@XZ
    public const /* 未知 */ _getColorFG(/* TODO 参数 */);  // ?_getColorFG@fp_Run@@QBE?AVUT_RGBColor@@XZ
    public /* 未知 */ _getColorHL(/* TODO 参数 */);  // ?_getColorHL@fp_Run@@IBE?AVUT_RGBColor@@XZ
    public /* 未知 */ _getColorPG(/* TODO 参数 */);  // ?_getColorPG@fp_Run@@IBE?AVUT_RGBColor@@XZ
    public /* 未知 */ _getDecorations(/* TODO 参数 */);  // ?_getDecorations@fp_Run@@IBEEXZ
    public /* 未知 */ _getDirection(/* TODO 参数 */);  // ?_getDirection@fp_Run@@IBEJXZ
    public /* 未知 */ _getFont(/* TODO 参数 */);  // ?_getFont@fp_Run@@IBEPAVGR_Font@@XZ
    protected /* 未知 */ _getHeight(/* TODO 参数 */);  // ?_getHeight@fp_Run@@IAEHXZ
    protected /* 未知 */ _getLineWidth(/* TODO 参数 */);  // ?_getLineWidth@fp_Run@@IAEHXZ
    public /* 未知 */ _getRecalcWidth(/* TODO 参数 */);  // ?_getRecalcWidth@fp_Run@@IBE_NXZ
    public /* 未知 */ _getRefreshDrawBuffer(/* TODO 参数 */);  // ?_getRefreshDrawBuffer@fp_Run@@IBE?AW4GRShapingResult@@XZ
    public /* 未知 */ _getView(/* TODO 参数 */);  // ?_getView@fp_Run@@IBEPAVFV_View@@XZ
    public /* 未知 */ _getVisDirection(/* TODO 参数 */);  // ?_getVisDirection@fp_Run@@IBEJXZ
    protected /* 未知 */ _getWidth(/* TODO 参数 */);  // ?_getWidth@fp_Run@@IAEHXZ
    protected /* 未知 */ _inheritProperties(/* TODO 参数 */);  // ?_inheritProperties@fp_Run@@IAEXXZ
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_Run@@MBE_NXZ
    protected /* 未知 */ _orDecorations(/* TODO 参数 */);  // ?_orDecorations@fp_Run@@IAEXE@Z
    public /* 未知 */ _recalcWidth(/* TODO 参数 */);  // ?_recalcWidth@fp_Run@@MAE_NXZ
    protected /* 未知 */ _setAscent(/* TODO 参数 */);  // ?_setAscent@fp_Run@@IAEXH@Z
    protected /* 未知 */ _setBlock(/* TODO 参数 */);  // ?_setBlock@fp_Run@@IAEXPAVfl_BlockLayout@@@Z
    protected /* 未知 */ _setColorFG(/* TODO 参数 */);  // ?_setColorFG@fp_Run@@IAEXVUT_RGBColor@@@Z
    protected /* 未知 */ _setColorHL(/* TODO 参数 */);  // ?_setColorHL@fp_Run@@IAEXPBD@Z
    protected /* 未知 */ _setColorHL(/* TODO 参数 */);  // ?_setColorHL@fp_Run@@IAEXVUT_RGBColor@@@Z
    protected /* 未知 */ _setDecorations(/* TODO 参数 */);  // ?_setDecorations@fp_Run@@IAEXE@Z
    protected /* 未知 */ _setDescent(/* TODO 参数 */);  // ?_setDescent@fp_Run@@IAEXH@Z
    protected /* 未知 */ _setDirection(/* TODO 参数 */);  // ?_setDirection@fp_Run@@IAEXJ@Z
    protected /* 未知 */ _setDirty(/* TODO 参数 */);  // ?_setDirty@fp_Run@@IAEX_N@Z
    protected /* 未知 */ _setField(/* TODO 参数 */);  // ?_setField@fp_Run@@IAEXPAVfd_Field@@@Z
    protected /* 未知 */ _setFont(/* TODO 参数 */);  // ?_setFont@fp_Run@@IAEXPAVGR_Font@@@Z
    protected /* 未知 */ _setHeight(/* TODO 参数 */);  // ?_setHeight@fp_Run@@IAEXH@Z
    protected /* 未知 */ _setHyperlink(/* TODO 参数 */);  // ?_setHyperlink@fp_Run@@IAEXPAVfp_HyperlinkRun@@@Z
    protected /* 未知 */ _setLength(/* TODO 参数 */);  // ?_setLength@fp_Run@@IAEXI@Z
    protected /* 未知 */ _setLine(/* TODO 参数 */);  // ?_setLine@fp_Run@@IAEXPAVfp_Line@@@Z
    protected bool _setLineWidth(/* TODO 参数 */);  // ?_setLineWidth@fp_Run@@IAE_NH@Z
    protected /* 未知 */ _setRecalcWidth(/* TODO 参数 */);  // ?_setRecalcWidth@fp_Run@@IAEX_N@Z
    protected /* 未知 */ _setRefreshDrawBuffer(/* TODO 参数 */);  // ?_setRefreshDrawBuffer@fp_Run@@IAEXW4GRShapingResult@@@Z
    protected /* 未知 */ _setRevisions(/* TODO 参数 */);  // ?_setRevisions@fp_Run@@IAEXPAVPP_RevisionAttr@@@Z
    public /* 未知 */ _setWidth(/* TODO 参数 */);  // ?_setWidth@fp_Run@@MAEXH@Z
    protected /* 未知 */ _setX(/* TODO 参数 */);  // ?_setX@fp_Run@@IAEXH@Z
    protected /* 未知 */ _setY(/* TODO 参数 */);  // ?_setY@fp_Run@@IAEXH@Z
    public /* 未知 */ _wouldBeHidden(/* TODO 参数 */);  // ?_wouldBeHidden@fp_Run@@IBE_NW4FPVisibility@@@Z
    virtual public /* 未知 */ adjustCaretPosition(/* TODO 参数 */);  // ?adjustCaretPosition@fp_Run@@UAEII_N@Z
    virtual public /* 未知 */ adjustDeletePosition(/* TODO 参数 */);  // ?adjustDeletePosition@fp_Run@@UAEXAAI0@Z
    virtual public const bool alwaysFits(/* TODO 参数 */);  // ?alwaysFits@fp_Run@@UBE_NXZ
    public const bool canContainPoint(/* TODO 参数 */);  // ?canContainPoint@fp_Run@@QBE_NXZ
    public bool clearIfNeeded(/* TODO 参数 */);  // ?clearIfNeeded@fp_Run@@QAE_NXZ
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_Run@@UAEXXZ
    public /* 未知 */ clearSelectionMode(/* TODO 参数 */);  // ?clearSelectionMode@fp_Run@@QAEXXZ
    public bool containsRevisions(/* TODO 参数 */);  // ?containsRevisions@fp_Run@@QAE_NXZ
    public const bool deleteFollowingIfAtInsPoint(/* TODO 参数 */);  // ?deleteFollowingIfAtInsPoint@fp_Run@@QBE_NXZ
    virtual public const bool doesContainNonBlankData(/* TODO 参数 */);  // ?doesContainNonBlankData@fp_Run@@UBE_NXZ
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_Run@@UAEXPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_Run@@UAEXPAVGR_Graphics@@@Z
    public /* 未知 */ drawDecors(/* TODO 参数 */);  // ?drawDecors@fp_Run@@QAEXHHPAVGR_Graphics@@@Z
    virtual public bool findFirstNonBlankSplitPoint(/* TODO 参数 */);  // ?findFirstNonBlankSplitPoint@fp_Run@@UAE_NAAUfp_RunSplitInfo
    virtual public bool findMaxLeftFitSplitPoint(/* TODO 参数 */);  // ?findMaxLeftFitSplitPoint@fp_Run@@UAE_NHAAUfp_RunSplitInfo@@
    virtual public const /* 未知 */ findTrailingSpaceDistance(/* TODO 参数 */);  // ?findTrailingSpaceDistance@fp_Run@@UBEHXZ
    public const /* 未知 */ getAscent(/* TODO 参数 */);  // ?getAscent@fp_Run@@QBEIXZ
    public const /* 未知 */ getBlock(/* TODO 参数 */);  // ?getBlock@fp_Run@@QBEPAVfl_BlockLayout@@XZ
    public /* 未知 */ getBlockAP(/* TODO 参数 */);  // ?getBlockAP@fp_Run@@QAEXAAPBVPP_AttrProp@@@Z
    public const /* 未知 */ getBlockOffset(/* TODO 参数 */);  // ?getBlockOffset@fp_Run@@QBEIXZ
    public const /* 未知 */ getDescent(/* TODO 参数 */);  // ?getDescent@fp_Run@@QBEIXZ
    virtual public const /* 未知 */ getDirection(/* TODO 参数 */);  // ?getDirection@fp_Run@@UBEJXZ
    virtual public const /* 未知 */ getDrawingWidth(/* TODO 参数 */);  // ?getDrawingWidth@fp_Run@@UBEHXZ
    public const /* 未知 */ getFGColor(/* TODO 参数 */);  // ?getFGColor@fp_Run@@QBE?BVUT_RGBColor@@XZ
    public const /* 未知 */ getField(/* TODO 参数 */);  // ?getField@fp_Run@@QBEPAVfd_Field@@XZ
    public /* 未知 */ getFillType(/* TODO 参数 */);  // ?getFillType@fp_Run@@QAEPAVfg_FillType@@XZ
    public const /* 未知 */ getGraphics(/* TODO 参数 */);  // ?getGraphics@fp_Run@@QBEPAVGR_Graphics@@XZ
    virtual public const /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@fp_Run@@UBEHXZ
    public const /* 未知 */ getHyperlink(/* TODO 参数 */);  // ?getHyperlink@fp_Run@@QBEPAVfp_HyperlinkRun@@XZ
    public const /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@fp_Run@@QBEIXZ
    public const /* 未知 */ getLine(/* TODO 参数 */);  // ?getLine@fp_Run@@QBEPAVfp_Line@@XZ
    public /* 未知 */ getLinethickness(/* TODO 参数 */);  // ?getLinethickness@fp_Run@@QAEHXZ
    public /* 未知 */ getMaxUnderline(/* TODO 参数 */);  // ?getMaxUnderline@fp_Run@@QAEHXZ
    public /* 未知 */ getMinOverline(/* TODO 参数 */);  // ?getMinOverline@fp_Run@@QAEHXZ
    public bool getMustClearScreen(/* TODO 参数 */);  // ?getMustClearScreen@fp_Run@@QAE_NXZ
    virtual public const /* 未知 */ getNext(/* TODO 参数 */);  // ?getNext@fp_Run@@UBEPAVfp_ContainerObject@@XZ
    virtual public const /* 未知 */ getNextContainerInSection(/* TODO 参数 */);  // ?getNextContainerInSection@fp_Run@@UBEPAVfp_Container@@XZ
    public const /* 未知 */ getNextRun(/* TODO 参数 */);  // ?getNextRun@fp_Run@@QBEPAV1@XZ
    public /* 未知 */ getNextVisual(/* TODO 参数 */);  // ?getNextVisual@fp_Run@@QAEPAV1@XZ
    public /* 未知 */ getOffsetFirstVis(/* TODO 参数 */);  // ?getOffsetFirstVis@fp_Run@@QAEIXZ
    public /* 未知 */ getOffsetLog(/* TODO 参数 */);  // ?getOffsetLog@fp_Run@@QAEII@Z
    public /* 未知 */ getOverlineXoff(/* TODO 参数 */);  // ?getOverlineXoff@fp_Run@@QAEHXZ
    virtual public const /* 未知 */ getPrev(/* TODO 参数 */);  // ?getPrev@fp_Run@@UBEPAVfp_ContainerObject@@XZ
    virtual public const /* 未知 */ getPrevContainerInSection(/* TODO 参数 */);  // ?getPrevContainerInSection@fp_Run@@UBEPAVfp_Container@@XZ
    public const /* 未知 */ getPrevRun(/* TODO 参数 */);  // ?getPrevRun@fp_Run@@QBEPAV1@XZ
    public /* 未知 */ getPrevVisual(/* TODO 参数 */);  // ?getPrevVisual@fp_Run@@QAEPAV1@XZ
    public const /* 未知 */ getRevisions(/* TODO 参数 */);  // ?getRevisions@fp_Run@@QBEPAVPP_RevisionAttr@@XZ
    virtual public /* 未知 */ getScreenRect(/* TODO 参数 */);  // ?getScreenRect@fp_Run@@UAEPAVUT_Rect@@XZ
    public /* 未知 */ getSpanAP(/* TODO 参数 */);  // ?getSpanAP@fp_Run@@QAEPBVPP_AttrProp@@XZ
    public /* 未知 */ getSpanAP(/* TODO 参数 */);  // ?getSpanAP@fp_Run@@QAEXAAPBVPP_AttrProp@@@Z
    public const /* 未知 */ getTmpLine(/* TODO 参数 */);  // ?getTmpLine@fp_Run@@QBEPAVfp_Line@@XZ
    public const /* 未知 */ getTmpWidth(/* TODO 参数 */);  // ?getTmpWidth@fp_Run@@QBEHXZ
    public const /* 未知 */ getTmpX(/* TODO 参数 */);  // ?getTmpX@fp_Run@@QBEHXZ
    public const /* 未知 */ getTmpY(/* TODO 参数 */);  // ?getTmpY@fp_Run@@QBEHXZ
    public /* 未知 */ getToplineThickness(/* TODO 参数 */);  // ?getToplineThickness@fp_Run@@QAEHXZ
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@fp_Run@@QBE?AW4FP_RUN_TYPE@@XZ
    public /* 未知 */ getUnderlineXoff(/* TODO 参数 */);  // ?getUnderlineXoff@fp_Run@@QAEHXZ
    public /* 未知 */ getVisDirection(/* TODO 参数 */);  // ?getVisDirection@fp_Run@@QAEJXZ
    public /* 未知 */ getVisPosition(/* TODO 参数 */);  // ?getVisPosition@fp_Run@@QAEII@Z
    public /* 未知 */ getVisPosition(/* TODO 参数 */);  // ?getVisPosition@fp_Run@@QAEIII@Z
    public const /* 未知 */ getVisibility(/* TODO 参数 */);  // ?getVisibility@fp_Run@@QBE?AW4FPVisibility@@XZ
    virtual public const /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@fp_Run@@UBEHXZ
    virtual public /* 未知 */ getWidthNoAlignJ(/* TODO 参数 */);  // ?getWidthNoAlignJ@fp_Run@@UAEHXZ
    virtual public const /* 未知 */ getX(/* TODO 参数 */);  // ?getX@fp_Run@@UBEHXZ
    virtual public const /* 未知 */ getY(/* TODO 参数 */);  // ?getY@fp_Run@@UBEHXZ
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_Run@@UBE_NXZ
    public /* 未知 */ insertIntoRunListAfterThis(/* TODO 参数 */);  // ?insertIntoRunListAfterThis@fp_Run@@QAEXAAV1@@Z
    public /* 未知 */ insertIntoRunListBeforeThis(/* TODO 参数 */);  // ?insertIntoRunListBeforeThis@fp_Run@@QAEXAAV1@@Z
    public const bool isBottomline(/* TODO 参数 */);  // ?isBottomline@fp_Run@@QBE_NXZ
    public const bool isDirty(/* TODO 参数 */);  // ?isDirty@fp_Run@@QBE_NXZ
    public const bool isField(/* TODO 参数 */);  // ?isField@fp_Run@@QBE_NXZ
    public const bool isFirstRunOnLine(/* TODO 参数 */);  // ?isFirstRunOnLine@fp_Run@@QBE_NXZ
    public const bool isFirstVisRunOnLine(/* TODO 参数 */);  // ?isFirstVisRunOnLine@fp_Run@@QBE_NXZ
    virtual public const bool isForcedBreak(/* TODO 参数 */);  // ?isForcedBreak@fp_Run@@UBE_NXZ
    virtual public bool isHBreakable(/* TODO 参数 */);  // ?isHBreakable@fp_Run@@UAE_NXZ
    public const bool isHidden(/* TODO 参数 */);  // ?isHidden@fp_Run@@QBE_NXZ
    public bool isInSelectedTOC(/* TODO 参数 */);  // ?isInSelectedTOC@fp_Run@@QAE_NXZ
    public const bool isLastRunOnLine(/* TODO 参数 */);  // ?isLastRunOnLine@fp_Run@@QBE_NXZ
    public const bool isLastVisRunOnLine(/* TODO 参数 */);  // ?isLastVisRunOnLine@fp_Run@@QBE_NXZ
    public const bool isOnlyRunOnLine(/* TODO 参数 */);  // ?isOnlyRunOnLine@fp_Run@@QBE_NXZ
    public const bool isOverline(/* TODO 参数 */);  // ?isOverline@fp_Run@@QBE_NXZ
    public const bool isPrinting(/* TODO 参数 */);  // ?isPrinting@fp_Run@@QBE_NXZ
    public const bool isSelectionDraw(/* TODO 参数 */);  // ?isSelectionDraw@fp_Run@@QBE_NXZ
    public const bool isStrikethrough(/* TODO 参数 */);  // ?isStrikethrough@fp_Run@@QBE_NXZ
    virtual public const bool isSubscript(/* TODO 参数 */);  // ?isSubscript@fp_Run@@UBE_NXZ
    virtual public const bool isSuperscript(/* TODO 参数 */);  // ?isSuperscript@fp_Run@@UBE_NXZ
    public const bool isTopline(/* TODO 参数 */);  // ?isTopline@fp_Run@@QBE_NXZ
    public const bool isUnderline(/* TODO 参数 */);  // ?isUnderline@fp_Run@@QBE_NXZ
    virtual public bool isVBreakable(/* TODO 参数 */);  // ?isVBreakable@fp_Run@@UAE_NXZ
    public const bool letPointPass(/* TODO 参数 */);  // ?letPointPass@fp_Run@@QBE_NXZ
    public /* 未知 */ lookupProperties(/* TODO 参数 */);  // ?lookupProperties@fp_Run@@QAEXPAVGR_Graphics@@@Z
    public /* 未知 */ markAsDirty(/* TODO 参数 */);  // ?markAsDirty@fp_Run@@QAEXXZ
    virtual public /* 未知 */ markDirtyOverlappingRuns(/* TODO 参数 */);  // ?markDirtyOverlappingRuns@fp_Run@@UAEXAAVUT_Rect@@@Z
    public /* 未知 */ markDrawBufferDirty(/* TODO 参数 */);  // ?markDrawBufferDirty@fp_Run@@QAEXXZ
    public /* 未知 */ markWidthDirty(/* TODO 参数 */);  // ?markWidthDirty@fp_Run@@QAEXXZ
    public /* 未知 */ orDrawBufferDirty(/* TODO 参数 */);  // ?orDrawBufferDirty@fp_Run@@QAEXW4GRShapingResult@@@Z
    public const /* 未知 */ posSelHigh(/* TODO 参数 */);  // ?posSelHigh@fp_Run@@QBEIXZ
    public const /* 未知 */ posSelLow(/* TODO 参数 */);  // ?posSelLow@fp_Run@@QBEIXZ
    public bool recalcWidth(/* TODO 参数 */);  // ?recalcWidth@fp_Run@@QAE_NXZ
    public /* 未知 */ setBlock(/* TODO 参数 */);  // ?setBlock@fp_Run@@QAEXPAVfl_BlockLayout@@@Z
    public /* 未知 */ setBlockOffset(/* TODO 参数 */);  // ?setBlockOffset@fp_Run@@QAEXI@Z
    public /* 未知 */ setCleared(/* TODO 参数 */);  // ?setCleared@fp_Run@@QAEXXZ
    virtual public /* 未知 */ setDirection(/* TODO 参数 */);  // ?setDirection@fp_Run@@UAEXJ@Z
    virtual public /* 未知 */ setHeight(/* TODO 参数 */);  // ?setHeight@fp_Run@@UAEXH@Z
    public /* 未知 */ setHyperlink(/* TODO 参数 */);  // ?setHyperlink@fp_Run@@QAEXPAVfp_HyperlinkRun@@@Z
    public /* 未知 */ setLength(/* TODO 参数 */);  // ?setLength@fp_Run@@QAEXI_N@Z
    public /* 未知 */ setLine(/* TODO 参数 */);  // ?setLine@fp_Run@@QAEXPAVfp_Line@@@Z
    public /* 未知 */ setLinethickness(/* TODO 参数 */);  // ?setLinethickness@fp_Run@@QAEXH@Z
    public /* 未知 */ setMaxUnderline(/* TODO 参数 */);  // ?setMaxUnderline@fp_Run@@QAEXH@Z
    public /* 未知 */ setMinOverline(/* TODO 参数 */);  // ?setMinOverline@fp_Run@@QAEXH@Z
    public /* 未知 */ setMustClearScreen(/* TODO 参数 */);  // ?setMustClearScreen@fp_Run@@QAEXXZ
    virtual public /* 未知 */ setNext(/* TODO 参数 */);  // ?setNext@fp_Run@@UAEXPAVfp_ContainerObject@@@Z
    public /* 未知 */ setNextRun(/* TODO 参数 */);  // ?setNextRun@fp_Run@@QAEXPAV1@_N@Z
    public /* 未知 */ setOverlineXoff(/* TODO 参数 */);  // ?setOverlineXoff@fp_Run@@QAEXH@Z
    virtual public /* 未知 */ setPrev(/* TODO 参数 */);  // ?setPrev@fp_Run@@UAEXPAVfp_ContainerObject@@@Z
    public /* 未知 */ setPrevRun(/* TODO 参数 */);  // ?setPrevRun@fp_Run@@QAEXPAV1@_N@Z
    public /* 未知 */ setSelectionMode(/* TODO 参数 */);  // ?setSelectionMode@fp_Run@@QAEXII@Z
    public /* 未知 */ setTmpLine(/* TODO 参数 */);  // ?setTmpLine@fp_Run@@QAEXPAVfp_Line@@@Z
    public /* 未知 */ setTmpWidth(/* TODO 参数 */);  // ?setTmpWidth@fp_Run@@QAEXH@Z
    public /* 未知 */ setTmpX(/* TODO 参数 */);  // ?setTmpX@fp_Run@@QAEXH@Z
    public /* 未知 */ setTmpY(/* TODO 参数 */);  // ?setTmpY@fp_Run@@QAEXH@Z
    public /* 未知 */ setUnderlineXoff(/* TODO 参数 */);  // ?setUnderlineXoff@fp_Run@@QAEXH@Z
    public /* 未知 */ setVisDirection(/* TODO 参数 */);  // ?setVisDirection@fp_Run@@QAEXJ@Z
    public /* 未知 */ setVisibility(/* TODO 参数 */);  // ?setVisibility@fp_Run@@QAEXW4FPVisibility@@@Z
    virtual public /* 未知 */ setWidth(/* TODO 参数 */);  // ?setWidth@fp_Run@@UAEXH@Z
    virtual public /* 未知 */ setX(/* TODO 参数 */);  // ?setX@fp_Run@@UAEXH_N@Z
    virtual public /* 未知 */ setY(/* TODO 参数 */);  // ?setY@fp_Run@@UAEXH@Z
    public /* 未知 */ unlinkFromRunList(/* TODO 参数 */);  // ?unlinkFromRunList@fp_Run@@QAEXXZ
    virtual public /* 未知 */ updateOnDelete(/* TODO 参数 */);  // ?updateOnDelete@fp_Run@@UAEXII@Z
    virtual public /* 未知 */ updateVerticalMetric(/* TODO 参数 */);  // ?updateVerticalMetric@fp_Run@@UAEXXZ
    virtual public /* 未知 */ wantHBreakAt(/* TODO 参数 */);  // ?wantHBreakAt@fp_Run@@UAEHH@Z
    virtual public /* 未知 */ wantVBreakAt(/* TODO 参数 */);  // ?wantVBreakAt@fp_Run@@UAEHH@Z
};

/* ---- fp_ShadowContainer (11 方法) ---- */
class fp_ShadowContainer {
public:
    protected /* 未知 */ _drawHdrFtrBoundaries(/* TODO 参数 */);  // ?_drawHdrFtrBoundaries@fp_ShadowContainer@@IAEXPAUdg_DrawArg
    public /* 未知 */ clearHdrFtrBoundaries(/* TODO 参数 */);  // ?clearHdrFtrBoundaries@fp_ShadowContainer@@QAEXXZ
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_ShadowContainer@@UAEXXZ
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_ShadowContainer@@UAEXPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_ShadowContainer@@UAEXPAVGR_Graphics@@@Z
    public const /* 未知 */ getHdrFtrSectionLayout(/* TODO 参数 */);  // ?getHdrFtrSectionLayout@fp_ShadowContainer@@QBEPAVfl_HdrFtrS
    virtual public const /* 未知 */ getPage(/* TODO 参数 */);  // ?getPage@fp_ShadowContainer@@UBEPAVfp_Page@@XZ
    public /* 未知 */ getShadow(/* TODO 参数 */);  // ?getShadow@fp_ShadowContainer@@QAEPAVfl_HdrFtrShadow@@XZ
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_ShadowContainer@@QAEX_N@Z
    virtual public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_ShadowContainer@@UAEXXZ
    public /* 未知 */ setPage(/* TODO 参数 */);  // ?setPage@fp_ShadowContainer@@QAEXPAVfp_Page@@@Z
};

/* ---- fp_TOCContainer (38 方法) ---- */
class fp_TOCContainer {
public:
    virtual public /* 未知 */ HBreakAt(/* TODO 参数 */);  // ?HBreakAt@fp_TOCContainer@@UAEPAVfp_ContainerObject@@H@Z
    virtual public /* 未知 */ VBreakAt(/* TODO 参数 */);  // ?VBreakAt@fp_TOCContainer@@UAEPAVfp_ContainerObject@@H@Z
    public /* 未知 */ adjustBrokenTOCs(/* TODO 参数 */);  // ?adjustBrokenTOCs@fp_TOCContainer@@QAEXXZ
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_TOCContainer@@UAEXXZ
    public /* 未知 */ deleteBrokenTOCs(/* TODO 参数 */);  // ?deleteBrokenTOCs@fp_TOCContainer@@QAEX_N@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_TOCContainer@@UAEXPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_TOCContainer@@UAEXPAVGR_Graphics@@@Z
    public /* 未知 */ forceClearScreen(/* TODO 参数 */);  // ?forceClearScreen@fp_TOCContainer@@QAEXXZ
    public /* 未知 */ getBrokenColumn(/* TODO 参数 */);  // ?getBrokenColumn@fp_TOCContainer@@QAEPAVfp_Column@@XZ
    public /* 未知 */ getBrokenNumber(/* TODO 参数 */);  // ?getBrokenNumber@fp_TOCContainer@@QAEHXZ
    public /* 未知 */ getDocSectionLayout(/* TODO 参数 */);  // ?getDocSectionLayout@fp_TOCContainer@@QAEPAVfl_DocSectionLay
    public const /* 未知 */ getFirstBrokenTOC(/* TODO 参数 */);  // ?getFirstBrokenTOC@fp_TOCContainer@@QBEPAV1@XZ
    virtual public /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@fp_TOCContainer@@UAEHXZ
    public const /* 未知 */ getLastBrokenTOC(/* TODO 参数 */);  // ?getLastBrokenTOC@fp_TOCContainer@@QBEPAV1@XZ
    public const /* 未知 */ getLastWantedVBreak(/* TODO 参数 */);  // ?getLastWantedVBreak@fp_TOCContainer@@QBEHXZ
    public const /* 未知 */ getMasterTOC(/* TODO 参数 */);  // ?getMasterTOC@fp_TOCContainer@@QBEPAV1@XZ
    virtual public const /* 未知 */ getNextContainerInSection(/* TODO 参数 */);  // ?getNextContainerInSection@fp_TOCContainer@@UBEPAVfp_Contain
    virtual public const /* 未知 */ getPrevContainerInSection(/* TODO 参数 */);  // ?getPrevContainerInSection@fp_TOCContainer@@UBEPAVfp_Contain
    public /* 未知 */ getValue(/* TODO 参数 */);  // ?getValue@fp_TOCContainer@@QAEHXZ
    public const /* 未知 */ getYBottom(/* TODO 参数 */);  // ?getYBottom@fp_TOCContainer@@QBEHXZ
    public const /* 未知 */ getYBreak(/* TODO 参数 */);  // ?getYBreak@fp_TOCContainer@@QBEHXZ
    virtual public bool isHBreakable(/* TODO 参数 */);  // ?isHBreakable@fp_TOCContainer@@UAE_NXZ
    public bool isInBrokenTOC(/* TODO 参数 */);  // ?isInBrokenTOC@fp_TOCContainer@@QAE_NPAVfp_Container@@@Z
    public const bool isThisBroken(/* TODO 参数 */);  // ?isThisBroken@fp_TOCContainer@@QBE_NXZ
    virtual public bool isVBreakable(/* TODO 参数 */);  // ?isVBreakable@fp_TOCContainer@@UAE_NXZ
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_TOCContainer@@QAEXXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_TOCContainer@@UAEXHHAAIAA_N11@Z
    public /* 未知 */ setBrokenBot(/* TODO 参数 */);  // ?setBrokenBot@fp_TOCContainer@@QAEXH@Z
    public /* 未知 */ setBrokenTop(/* TODO 参数 */);  // ?setBrokenTop@fp_TOCContainer@@QAEXH@Z
    virtual public /* 未知 */ setContainer(/* TODO 参数 */);  // ?setContainer@fp_TOCContainer@@UAEXPAVfp_Container@@@Z
    public /* 未知 */ setFirstBrokenTOC(/* TODO 参数 */);  // ?setFirstBrokenTOC@fp_TOCContainer@@QAEXPAV1@@Z
    public /* 未知 */ setLastBrokenTOC(/* TODO 参数 */);  // ?setLastBrokenTOC@fp_TOCContainer@@QAEXPAV1@@Z
    public /* 未知 */ setLastWantedVBreak(/* TODO 参数 */);  // ?setLastWantedVBreak@fp_TOCContainer@@QAEXH@Z
    virtual public /* 未知 */ setY(/* TODO 参数 */);  // ?setY@fp_TOCContainer@@UAEXH@Z
    public /* 未知 */ setYBottom(/* TODO 参数 */);  // ?setYBottom@fp_TOCContainer@@QAEXH@Z
    public /* 未知 */ setYBreakHere(/* TODO 参数 */);  // ?setYBreakHere@fp_TOCContainer@@QAEXH@Z
    virtual public /* 未知 */ wantHBreakAt(/* TODO 参数 */);  // ?wantHBreakAt@fp_TOCContainer@@UAEHH@Z
    virtual public /* 未知 */ wantVBreakAt(/* TODO 参数 */);  // ?wantVBreakAt@fp_TOCContainer@@UAEHH@Z
};

/* ---- fp_TabRun (19 方法) ---- */
class fp_TabRun {
public:
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_TabRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_TabRun@@MAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _drawArrow(/* TODO 参数 */);  // ?_drawArrow@fp_TabRun@@MAEXIIII@Z
    public /* 未知 */ _letPointPass(/* TODO 参数 */);  // ?_letPointPass@fp_TabRun@@MBE_NXZ
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_TabRun@@MAEXPBVPP_AttrProp@@00PAVGR_Gr
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_TabRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_TabRun@@UBE_NXZ
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_TabRun@@UAEXIAAH0000AA_N@Z
    public /* 未知 */ getLeader(/* TODO 参数 */);  // ?getLeader@fp_TabRun@@QAE?AW4eTabLeader@@XZ
    public const /* 未知 */ getTabType(/* TODO 参数 */);  // ?getTabType@fp_TabRun@@QBE?AW4eTabType@@XZ
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_TabRun@@UBE_NXZ
    public bool isTOCTab(/* TODO 参数 */);  // ?isTOCTab@fp_TabRun@@QAE_NXZ
    public const bool isTOCTabListLabel(/* TODO 参数 */);  // ?isTOCTabListLabel@fp_TabRun@@QBE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_TabRun@@UAEXHHAAIAA_N11@Z
    public /* 未知 */ setLeader(/* TODO 参数 */);  // ?setLeader@fp_TabRun@@QAEXW4eTabLeader@@@Z
    public /* 未知 */ setTOCTab(/* TODO 参数 */);  // ?setTOCTab@fp_TabRun@@QAEXXZ
    public /* 未知 */ setTOCTabListLabel(/* TODO 参数 */);  // ?setTOCTabListLabel@fp_TabRun@@QAEXXZ
    public /* 未知 */ setTabType(/* TODO 参数 */);  // ?setTabType@fp_TabRun@@QAEXW4eTabType@@@Z
    public /* 未知 */ setTabWidth(/* TODO 参数 */);  // ?setTabWidth@fp_TabRun@@QAEXH@Z
};

/* ---- fp_TableContainer (93 方法) ---- */
class fp_TableContainer {
public:
    virtual public /* 未知 */ HBreakAt(/* TODO 参数 */);  // ?HBreakAt@fp_TableContainer@@UAEPAVfp_ContainerObject@@H@Z
    virtual public /* 未知 */ VBreakAt(/* TODO 参数 */);  // ?VBreakAt@fp_TableContainer@@UAEPAVfp_ContainerObject@@H@Z
    public /* 未知 */ _brokenDraw(/* TODO 参数 */);  // ?_brokenDraw@fp_TableContainer@@AAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _drawBoundaries(/* TODO 参数 */);  // ?_drawBoundaries@fp_TableContainer@@EAEXPAUdg_DrawArgs@@@Z
    public /* 未知 */ _drawBrokenBoundaries(/* TODO 参数 */);  // ?_drawBrokenBoundaries@fp_TableContainer@@AAEXPAUdg_DrawArgs
    public /* 未知 */ _size_allocate_init(/* TODO 参数 */);  // ?_size_allocate_init@fp_TableContainer@@AAEXXZ
    public /* 未知 */ _size_allocate_pass1(/* TODO 参数 */);  // ?_size_allocate_pass1@fp_TableContainer@@AAEXXZ
    public /* 未知 */ _size_allocate_pass2(/* TODO 参数 */);  // ?_size_allocate_pass2@fp_TableContainer@@AAEXXZ
    public /* 未知 */ _size_request_init(/* TODO 参数 */);  // ?_size_request_init@fp_TableContainer@@AAEXXZ
    public /* 未知 */ _size_request_pass1(/* TODO 参数 */);  // ?_size_request_pass1@fp_TableContainer@@AAEXXZ
    public /* 未知 */ _size_request_pass2(/* TODO 参数 */);  // ?_size_request_pass2@fp_TableContainer@@AAEXXZ
    public /* 未知 */ _size_request_pass3(/* TODO 参数 */);  // ?_size_request_pass3@fp_TableContainer@@AAEXXZ
    public /* 未知 */ adjustBrokenTables(/* TODO 参数 */);  // ?adjustBrokenTables@fp_TableContainer@@QAEXXZ
    public /* 未知 */ breakCellsAt(/* TODO 参数 */);  // ?breakCellsAt@fp_TableContainer@@QAEXH@Z
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_TableContainer@@UAEXXZ
    public bool containsFootnoteReference(/* TODO 参数 */);  // ?containsFootnoteReference@fp_TableContainer@@QAE_NXZ
    public bool containsNestedTables(/* TODO 参数 */);  // ?containsNestedTables@fp_TableContainer@@QAE_NXZ
    public /* 未知 */ deleteBrokenTables(/* TODO 参数 */);  // ?deleteBrokenTables@fp_TableContainer@@QAEX_N0@Z
    public const bool doRedrawLines(/* TODO 参数 */);  // ?doRedrawLines@fp_TableContainer@@QBE_NXZ
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_TableContainer@@UAEXPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_TableContainer@@UAEXPAVGR_Graphics@@@Z
    public /* 未知 */ drawLines(/* TODO 参数 */);  // ?drawLines@fp_TableContainer@@QAEXXZ
    public const /* 未知 */ getBorderWidth(/* TODO 参数 */);  // ?getBorderWidth@fp_TableContainer@@QBEHXZ
    public /* 未知 */ getBrokenBot(/* TODO 参数 */);  // ?getBrokenBot@fp_TableContainer@@QAEHXZ
    public /* 未知 */ getBrokenColumn(/* TODO 参数 */);  // ?getBrokenColumn@fp_TableContainer@@QAEPAVfp_Column@@XZ
    public /* 未知 */ getBrokenNumber(/* TODO 参数 */);  // ?getBrokenNumber@fp_TableContainer@@QAEHXZ
    public /* 未知 */ getBrokenTop(/* TODO 参数 */);  // ?getBrokenTop@fp_TableContainer@@QAEHXZ
    public /* 未知 */ getCellAtRowColumn(/* TODO 参数 */);  // ?getCellAtRowColumn@fp_TableContainer@@QAEPAVfp_CellContaine
    public /* 未知 */ getCellAtRowColumnLinear(/* TODO 参数 */);  // ?getCellAtRowColumnLinear@fp_TableContainer@@QAEPAVfp_CellCo
    public const /* 未知 */ getFirstBrokenTable(/* TODO 参数 */);  // ?getFirstBrokenTable@fp_TableContainer@@QBEPAV1@XZ
    public /* 未知 */ getFirstLineInColumn(/* TODO 参数 */);  // ?getFirstLineInColumn@fp_TableContainer@@QAEPAVfp_Line@@PAVf
    public bool getFootnoteContainers(/* TODO 参数 */);  // ?getFootnoteContainers@fp_TableContainer@@QAE_NPAV?$UT_Gener
    virtual public /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@fp_TableContainer@@UAEHXZ
    public const /* 未知 */ getLastBrokenTable(/* TODO 参数 */);  // ?getLastBrokenTable@fp_TableContainer@@QBEPAV1@XZ
    public /* 未知 */ getLastLineInColumn(/* TODO 参数 */);  // ?getLastLineInColumn@fp_TableContainer@@QAEPAVfp_Line@@PAVfp
    public const /* 未知 */ getLastWantedVBreak(/* TODO 参数 */);  // ?getLastWantedVBreak@fp_TableContainer@@QBEHXZ
    public /* 未知 */ getLineThickness(/* TODO 参数 */);  // ?getLineThickness@fp_TableContainer@@QAEHXZ
    virtual public const /* 未知 */ getMarginAfter(/* TODO 参数 */);  // ?getMarginAfter@fp_TableContainer@@UBEHXZ
    virtual public const /* 未知 */ getMarginBefore(/* TODO 参数 */);  // ?getMarginBefore@fp_TableContainer@@UBEHXZ
    public const /* 未知 */ getMasterTable(/* TODO 参数 */);  // ?getMasterTable@fp_TableContainer@@QBEPAV1@XZ
    virtual public const /* 未知 */ getNextContainerInSection(/* TODO 参数 */);  // ?getNextContainerInSection@fp_TableContainer@@UBEPAVfp_Conta
    public /* 未知 */ getNthCol(/* TODO 参数 */);  // ?getNthCol@fp_TableContainer@@QAEPAVfp_TableRowColumn@@H@Z
    public /* 未知 */ getNthRow(/* TODO 参数 */);  // ?getNthRow@fp_TableContainer@@QAEPAVfp_TableRowColumn@@H@Z
    public const /* 未知 */ getNumCols(/* TODO 参数 */);  // ?getNumCols@fp_TableContainer@@QBEHXZ
    public const /* 未知 */ getNumRows(/* TODO 参数 */);  // ?getNumRows@fp_TableContainer@@QBEHXZ
    virtual public /* 未知 */ getPage(/* TODO 参数 */);  // ?getPage@fp_TableContainer@@UAEPAVfp_Page@@XZ
    virtual public const /* 未知 */ getPrevContainerInSection(/* TODO 参数 */);  // ?getPrevContainerInSection@fp_TableContainer@@UBEPAVfp_Conta
    public /* 未知 */ getPrintType(/* TODO 参数 */);  // ?getPrintType@fp_TableContainer@@QAEHXZ
    public /* 未知 */ getRowHeight(/* TODO 参数 */);  // ?getRowHeight@fp_TableContainer@@QAEHHH@Z
    public const /* 未知 */ getYBottom(/* TODO 参数 */);  // ?getYBottom@fp_TableContainer@@QBEHXZ
    public const /* 未知 */ getYBreak(/* TODO 参数 */);  // ?getYBreak@fp_TableContainer@@QBEHXZ
    public /* 未知 */ getYOfRow(/* TODO 参数 */);  // ?getYOfRow@fp_TableContainer@@QAEHH@Z
    virtual public bool isHBreakable(/* TODO 参数 */);  // ?isHBreakable@fp_TableContainer@@UAE_NXZ
    public bool isInBrokenTable(/* TODO 参数 */);  // ?isInBrokenTable@fp_TableContainer@@QAE_NPAVfp_CellContainer
    public const bool isThisBroken(/* TODO 参数 */);  // ?isThisBroken@fp_TableContainer@@QBE_NXZ
    virtual public bool isVBreakable(/* TODO 参数 */);  // ?isVBreakable@fp_TableContainer@@UAE_NXZ
    public /* 未知 */ layout(/* TODO 参数 */);  // ?layout@fp_TableContainer@@QAEXXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_TableContainer@@UAEXHHAAIAA_N11@Z
    public /* 未知 */ queueResize(/* TODO 参数 */);  // ?queueResize@fp_TableContainer@@QAEXXZ
    public /* 未知 */ resize(/* TODO 参数 */);  // ?resize@fp_TableContainer@@QAEXHH@Z
    public /* 未知 */ setAdditionalMargin(/* TODO 参数 */);  // ?setAdditionalMargin@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setBorderWidth(/* TODO 参数 */);  // ?setBorderWidth@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setBottomOffset(/* TODO 参数 */);  // ?setBottomOffset@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setBrokenBot(/* TODO 参数 */);  // ?setBrokenBot@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setBrokenTop(/* TODO 参数 */);  // ?setBrokenTop@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setColSpacing(/* TODO 参数 */);  // ?setColSpacing@fp_TableContainer@@QAEXHH@Z
    public /* 未知 */ setColSpacings(/* TODO 参数 */);  // ?setColSpacings@fp_TableContainer@@QAEXH@Z
    virtual public /* 未知 */ setContainer(/* TODO 参数 */);  // ?setContainer@fp_TableContainer@@UAEXPAVfp_Container@@@Z
    public /* 未知 */ setFirstBrokenTable(/* TODO 参数 */);  // ?setFirstBrokenTable@fp_TableContainer@@QAEXPAV1@@Z
    virtual public /* 未知 */ setHeight(/* TODO 参数 */);  // ?setHeight@fp_TableContainer@@UAEXH@Z
    public /* 未知 */ setHomogeneous(/* TODO 参数 */);  // ?setHomogeneous@fp_TableContainer@@QAEX_N@Z
    public /* 未知 */ setLastBrokenTable(/* TODO 参数 */);  // ?setLastBrokenTable@fp_TableContainer@@QAEXPAV1@@Z
    public /* 未知 */ setLastWantedVBreak(/* TODO 参数 */);  // ?setLastWantedVBreak@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setLeftOffset(/* TODO 参数 */);  // ?setLeftOffset@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setLineThickness(/* TODO 参数 */);  // ?setLineThickness@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setPrintType(/* TODO 参数 */);  // ?setPrintType@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setRedrawLines(/* TODO 参数 */);  // ?setRedrawLines@fp_TableContainer@@QAEXXZ
    public /* 未知 */ setRightOffset(/* TODO 参数 */);  // ?setRightOffset@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setRowHeight(/* TODO 参数 */);  // ?setRowHeight@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setRowHeightType(/* TODO 参数 */);  // ?setRowHeightType@fp_TableContainer@@QAEXW4FL_RowHeightType@
    public /* 未知 */ setRowSpacing(/* TODO 参数 */);  // ?setRowSpacing@fp_TableContainer@@QAEXHH@Z
    public /* 未知 */ setRowSpacings(/* TODO 参数 */);  // ?setRowSpacings@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setToAllocation(/* TODO 参数 */);  // ?setToAllocation@fp_TableContainer@@QAEXXZ
    public /* 未知 */ setTopOffset(/* TODO 参数 */);  // ?setTopOffset@fp_TableContainer@@QAEXH@Z
    virtual public /* 未知 */ setY(/* TODO 参数 */);  // ?setY@fp_TableContainer@@UAEXH@Z
    public /* 未知 */ setYBottom(/* TODO 参数 */);  // ?setYBottom@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ setYBreakHere(/* TODO 参数 */);  // ?setYBreakHere@fp_TableContainer@@QAEXH@Z
    public /* 未知 */ sizeAllocate(/* TODO 参数 */);  // ?sizeAllocate@fp_TableContainer@@QAEXPAU_fp_Allocation@@@Z
    public /* 未知 */ sizeRequest(/* TODO 参数 */);  // ?sizeRequest@fp_TableContainer@@QAEXPAU_fp_Requisition@@@Z
    public /* 未知 */ tableAttach(/* TODO 参数 */);  // ?tableAttach@fp_TableContainer@@QAEXPAVfp_CellContainer@@@Z
    public /* 未知 */ tweakBrokenTable(/* TODO 参数 */);  // ?tweakBrokenTable@fp_TableContainer@@QAEHPAV1@@Z
    virtual public /* 未知 */ wantHBreakAt(/* TODO 参数 */);  // ?wantHBreakAt@fp_TableContainer@@UAEHH@Z
    virtual public /* 未知 */ wantVBreakAt(/* TODO 参数 */);  // ?wantVBreakAt@fp_TableContainer@@UAEHH@Z
};

/* ---- fp_TextRun (62 方法) ---- */
class fp_TextRun {
public:
    public /* 未知 */ MyteToWChar(/* TODO 参数 */);  // ?MyteToWChar@fp_TextRun@@QAEIPADPAI@Z
    public /* 未知 */ _addupCharWidths(/* TODO 参数 */);  // ?_addupCharWidths@fp_TextRun@@AAE_NXZ
    public /* 未知 */ _canContainPoint(/* TODO 参数 */);  // ?_canContainPoint@fp_TextRun@@MBE_NXZ
    public /* 未知 */ _clearScreen(/* TODO 参数 */);  // ?_clearScreen@fp_TextRun@@MAEX_N@Z
    public /* 未知 */ _draw(/* TODO 参数 */);  // ?_draw@fp_TextRun@@MAEXPAUdg_DrawArgs@@@Z
    protected /* 未知 */ _drawFirstChar(/* TODO 参数 */);  // ?_drawFirstChar@fp_TextRun@@IAEX_N@Z
    protected /* 未知 */ _drawInvisibleSpaces(/* TODO 参数 */);  // ?_drawInvisibleSpaces@fp_TextRun@@IAEXHH@Z
    protected /* 未知 */ _drawInvisibles(/* TODO 参数 */);  // ?_drawInvisibles@fp_TextRun@@IAEXHH@Z
    protected /* 未知 */ _drawLastChar(/* TODO 参数 */);  // ?_drawLastChar@fp_TextRun@@IAEX_N@Z
    protected /* 未知 */ _drawSquiggle(/* TODO 参数 */);  // ?_drawSquiggle@fp_TextRun@@IAEXHHHW4FL_SQUIGGLE_TYPE@@@Z
    protected /* 未知 */ _fillRect(/* TODO 参数 */);  // ?_fillRect@fp_TextRun@@IAEXAAVUT_RGBColor@@HHIIAAVUT_Rect@@P
    protected /* 未知 */ _getPartRect(/* TODO 参数 */);  // ?_getPartRect@fp_TextRun@@IAEXPAVUT_Rect@@HHII@Z
    public /* 未知 */ _lookupProperties(/* TODO 参数 */);  // ?_lookupProperties@fp_TextRun@@EAEXPBVPP_AttrProp@@00PAVGR_G
    public /* 未知 */ _recalcWidth(/* TODO 参数 */);  // ?_recalcWidth@fp_TextRun@@MAE_NXZ
    public /* 未知 */ _refreshDrawBuffer(/* TODO 参数 */);  // ?_refreshDrawBuffer@fp_TextRun@@AAE_NXZ
    virtual public /* 未知 */ adjustCaretPosition(/* TODO 参数 */);  // ?adjustCaretPosition@fp_TextRun@@UAEII_N@Z
    virtual public /* 未知 */ adjustDeletePosition(/* TODO 参数 */);  // ?adjustDeletePosition@fp_TextRun@@UAEXAAI0@Z
    virtual public const bool alwaysFits(/* TODO 参数 */);  // ?alwaysFits@fp_TextRun@@UBE_NXZ
    public /* 未知 */ appendTextToBuf(/* TODO 参数 */);  // ?appendTextToBuf@fp_TextRun@@QAEXAAVUT_GrowBuf@@@Z
    public /* 未知 */ breakMeAtDirBoundaries(/* TODO 参数 */);  // ?breakMeAtDirBoundaries@fp_TextRun@@QAEXJ@Z
    public /* 未知 */ breakNeighborsAtDirBoundaries(/* TODO 参数 */);  // ?breakNeighborsAtDirBoundaries@fp_TextRun@@QAEXXZ
    virtual public const bool canBreakAfter(/* TODO 参数 */);  // ?canBreakAfter@fp_TextRun@@UBE_NXZ
    virtual public const bool canBreakBefore(/* TODO 参数 */);  // ?canBreakBefore@fp_TextRun@@UBE_NXZ
    public bool canMergeWithNext(/* TODO 参数 */);  // ?canMergeWithNext@fp_TextRun@@QAE_NXZ
    public const /* 未知 */ countJustificationPoints(/* TODO 参数 */);  // ?countJustificationPoints@fp_TextRun@@QBEH_N@Z
    virtual public const bool doesContainNonBlankData(/* TODO 参数 */);  // ?doesContainNonBlankData@fp_TextRun@@UBE_NXZ
    public /* 未知 */ drawSquiggle(/* TODO 参数 */);  // ?drawSquiggle@fp_TextRun@@QAEXIIW4FL_SQUIGGLE_TYPE@@@Z
    public const /* 未知 */ findCharacter(/* TODO 参数 */);  // ?findCharacter@fp_TextRun@@QBEHII@Z
    virtual public bool findFirstNonBlankSplitPoint(/* TODO 参数 */);  // ?findFirstNonBlankSplitPoint@fp_TextRun@@UAE_NAAUfp_RunSplit
    virtual public bool findMaxLeftFitSplitPoint(/* TODO 参数 */);  // ?findMaxLeftFitSplitPoint@fp_TextRun@@UAE_NHAAUfp_RunSplitIn
    virtual public /* 未知 */ findPointCoords(/* TODO 参数 */);  // ?findPointCoords@fp_TextRun@@UAEXIAAH0000AA_N@Z
    virtual public const /* 未知 */ findTrailingSpaceDistance(/* TODO 参数 */);  // ?findTrailingSpaceDistance@fp_TextRun@@UBEHXZ
    public const bool getCharacter(/* TODO 参数 */);  // ?getCharacter@fp_TextRun@@QBE_NIAAI@Z
    public const /* 未知 */ getDirOverride(/* TODO 参数 */);  // ?getDirOverride@fp_TextRun@@QBEJXZ
    virtual public const /* 未知 */ getDirection(/* TODO 参数 */);  // ?getDirection@fp_TextRun@@UBEJXZ
    public const /* 未知 */ getFont(/* TODO 参数 */);  // ?getFont@fp_TextRun@@QBEPAVGR_Font@@XZ
    public const /* 未知 */ getItem(/* TODO 参数 */);  // ?getItem@fp_TextRun@@QBEPAVGR_Item@@XZ
    public const /* 未知 */ getLanguage(/* TODO 参数 */);  // ?getLanguage@fp_TextRun@@QBEPBDXZ
    public /* 未知 */ getRenderInfo(/* TODO 参数 */);  // ?getRenderInfo@fp_TextRun@@QAEPAVGR_RenderInfo@@XZ
    public /* 未知 */ getStr(/* TODO 参数 */);  // ?getStr@fp_TextRun@@QAEHPAIAAI@Z
    virtual public /* 未知 */ getWidthNoAlignJ(/* TODO 参数 */);  // ?getWidthNoAlignJ@fp_TextRun@@UAEHXZ
    virtual public const bool hasLayoutProperties(/* TODO 参数 */);  // ?hasLayoutProperties@fp_TextRun@@UBE_NXZ
    public const bool isFirstCharacter(/* TODO 参数 */);  // ?isFirstCharacter@fp_TextRun@@QBE_NI@Z
    public const bool isLastCharacter(/* TODO 参数 */);  // ?isLastCharacter@fp_TextRun@@QBE_NI@Z
    virtual public const bool isSubscript(/* TODO 参数 */);  // ?isSubscript@fp_TextRun@@UBE_NXZ
    virtual public const bool isSuperscript(/* TODO 参数 */);  // ?isSuperscript@fp_TextRun@@UBE_NXZ
    public /* 未知 */ justify(/* TODO 参数 */);  // ?justify@fp_TextRun@@QAEXHI@Z
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_TextRun@@UAEXHHAAIAA_N11@Z
    public /* 未知 */ measureCharWidths(/* TODO 参数 */);  // ?measureCharWidths@fp_TextRun@@QAEXXZ
    public /* 未知 */ mergeWithNext(/* TODO 参数 */);  // ?mergeWithNext@fp_TextRun@@QAEXXZ
    public /* 未知 */ orShapingRequired(/* TODO 参数 */);  // ?orShapingRequired@fp_TextRun@@QAEXW4GRShapingResult@@@Z
    public /* 未知 */ refreshTextRun(/* TODO 参数 */);  // ?refreshTextRun@fp_TextRun@@QAEXH@Z
    public /* 未知 */ resetJustification(/* TODO 参数 */);  // ?resetJustification@fp_TextRun@@QAEX_N@Z
    public /* 未知 */ s_bBidiOS(/* TODO 参数 */);  // ?s_bBidiOS@fp_TextRun@@2_NA
    public /* 未知 */ s_iClassInstanceCount(/* TODO 参数 */);  // ?s_iClassInstanceCount@fp_TextRun@@2IA
    public /* 未知 */ setDirOverride(/* TODO 参数 */);  // ?setDirOverride@fp_TextRun@@QAEXJ@Z
    public /* 未知 */ setDirection(/* TODO 参数 */);  // ?setDirection@fp_TextRun@@QAEXJJ@Z
    public /* 未知 */ setItem(/* TODO 参数 */);  // ?setItem@fp_TextRun@@QAEXPAVGR_Item@@@Z
    public /* 未知 */ setShapingRequired(/* TODO 参数 */);  // ?setShapingRequired@fp_TextRun@@QAEXW4GRShapingResult@@@Z
    public /* 未知 */ simpleRecalcWidth(/* TODO 参数 */);  // ?simpleRecalcWidth@fp_TextRun@@QAEHH@Z
    public bool split(/* TODO 参数 */);  // ?split@fp_TextRun@@QAE_NI@Z
    virtual public /* 未知 */ updateOnDelete(/* TODO 参数 */);  // ?updateOnDelete@fp_TextRun@@UAEXII@Z
};

/* ---- fp_VerticalContainer (58 方法) ---- */
class fp_VerticalContainer {
public:
    virtual public /* 未知 */ HBreakAt(/* TODO 参数 */);  // ?HBreakAt@fp_VerticalContainer@@UAEPAVfp_ContainerObject@@H@
    virtual public /* 未知 */ VBreakAt(/* TODO 参数 */);  // ?VBreakAt@fp_VerticalContainer@@UAEPAVfp_ContainerObject@@H@
    public /* 未知 */ _drawBoundaries(/* TODO 参数 */);  // ?_drawBoundaries@fp_VerticalContainer@@MAEXPAUdg_DrawArgs@@@
    public /* 未知 */ _getMaxContainerHeight(/* TODO 参数 */);  // ?_getMaxContainerHeight@fp_VerticalContainer@@IBEHXZ
    public /* 未知 */ _setHeight(/* TODO 参数 */);  // ?_setHeight@fp_VerticalContainer@@QAEXH@Z
    protected /* 未知 */ _setMaxContainerHeight(/* TODO 参数 */);  // ?_setMaxContainerHeight@fp_VerticalContainer@@IAEXH@Z
    public /* 未知 */ _setWidth(/* TODO 参数 */);  // ?_setWidth@fp_VerticalContainer@@QAEXH@Z
    public /* 未知 */ _setX(/* TODO 参数 */);  // ?_setX@fp_VerticalContainer@@QAEXH@Z
    public /* 未知 */ _setY(/* TODO 参数 */);  // ?_setY@fp_VerticalContainer@@QAEXH@Z
    public bool addContainer(/* TODO 参数 */);  // ?addContainer@fp_VerticalContainer@@QAE_NPAVfp_Container@@@Z
    public /* 未知 */ addWrappedLine(/* TODO 参数 */);  // ?addWrappedLine@fp_VerticalContainer@@QAEXPAVfp_Line@@@Z
    public /* 未知 */ bumpContainers(/* TODO 参数 */);  // ?bumpContainers@fp_VerticalContainer@@QAEXPAVfp_ContainerObj
    virtual public /* 未知 */ clearScreen(/* TODO 参数 */);  // ?clearScreen@fp_VerticalContainer@@UAEXXZ
    public /* 未知 */ clearWrappedLines(/* TODO 参数 */);  // ?clearWrappedLines@fp_VerticalContainer@@QAEXXZ
    virtual public /* 未知 */ distanceFromPoint(/* TODO 参数 */);  // ?distanceFromPoint@fp_VerticalContainer@@UAEIHH@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_VerticalContainer@@UAEXPAUdg_DrawArgs@@@Z
    virtual public /* 未知 */ draw(/* TODO 参数 */);  // ?draw@fp_VerticalContainer@@UAEXPAVGR_Graphics@@@Z
    public const /* 未知 */ getColumnGap(/* TODO 参数 */);  // ?getColumnGap@fp_VerticalContainer@@QBEHXZ
    public /* 未知 */ getCorrectBrokenTOC(/* TODO 参数 */);  // ?getCorrectBrokenTOC@fp_VerticalContainer@@QAEPAVfp_TOCConta
    public /* 未知 */ getCorrectBrokenTable(/* TODO 参数 */);  // ?getCorrectBrokenTable@fp_VerticalContainer@@QAEPAVfp_TableC
    public const /* 未知 */ getFirstContainer(/* TODO 参数 */);  // ?getFirstContainer@fp_VerticalContainer@@QBEPAVfp_Container@
    virtual public const /* 未知 */ getHeight(/* TODO 参数 */);  // ?getHeight@fp_VerticalContainer@@UBEHXZ
    public const bool getIntentionallyEmpty(/* TODO 参数 */);  // ?getIntentionallyEmpty@fp_VerticalContainer@@QBE_NXZ
    public const /* 未知 */ getLastContainer(/* TODO 参数 */);  // ?getLastContainer@fp_VerticalContainer@@QBEPAVfp_Container@@
    virtual public const /* 未知 */ getMarginAfter(/* TODO 参数 */);  // ?getMarginAfter@fp_VerticalContainer@@UBEHXZ
    virtual public const /* 未知 */ getMarginBefore(/* TODO 参数 */);  // ?getMarginBefore@fp_VerticalContainer@@UBEHXZ
    public const /* 未知 */ getMaxHeight(/* TODO 参数 */);  // ?getMaxHeight@fp_VerticalContainer@@QBEHXZ
    virtual public const /* 未知 */ getNextContainerInSection(/* TODO 参数 */);  // ?getNextContainerInSection@fp_VerticalContainer@@UBEPAVfp_Co
    public /* 未知 */ getNthWrappedLine(/* TODO 参数 */);  // ?getNthWrappedLine@fp_VerticalContainer@@QAEPAVfp_Line@@H@Z
    public const /* 未知 */ getNumWrapped(/* TODO 参数 */);  // ?getNumWrapped@fp_VerticalContainer@@QBEHXZ
    public /* 未知 */ getOffsets(/* TODO 参数 */);  // ?getOffsets@fp_VerticalContainer@@QAEXPAVfp_ContainerObject@
    virtual public const /* 未知 */ getPrevContainerInSection(/* TODO 参数 */);  // ?getPrevContainerInSection@fp_VerticalContainer@@UBEPAVfp_Co
    public /* 未知 */ getScreenOffsets(/* TODO 参数 */);  // ?getScreenOffsets@fp_VerticalContainer@@QAEXPAVfp_ContainerO
    virtual public /* 未知 */ getScreenRect(/* TODO 参数 */);  // ?getScreenRect@fp_VerticalContainer@@UAEPAVUT_Rect@@XZ
    public const /* 未知 */ getView(/* TODO 参数 */);  // ?getView@fp_VerticalContainer@@QBEPAVFV_View@@XZ
    virtual public const /* 未知 */ getWidth(/* TODO 参数 */);  // ?getWidth@fp_VerticalContainer@@UBEHXZ
    virtual public const /* 未知 */ getX(/* TODO 参数 */);  // ?getX@fp_VerticalContainer@@UBEHXZ
    public const /* 未知 */ getY(/* TODO 参数 */);  // ?getY@fp_VerticalContainer@@QBEHPAVGR_Graphics@@@Z
    virtual public const /* 未知 */ getY(/* TODO 参数 */);  // ?getY@fp_VerticalContainer@@UBEHXZ
    public /* 未知 */ getYoffsetFromTable(/* TODO 参数 */);  // ?getYoffsetFromTable@fp_VerticalContainer@@QAEHPAVfp_Contain
    public bool insertContainer(/* TODO 参数 */);  // ?insertContainer@fp_VerticalContainer@@QAE_NPAVfp_Container@
    public bool insertContainerAfter(/* TODO 参数 */);  // ?insertContainerAfter@fp_VerticalContainer@@QAE_NPAVfp_Conta
    virtual public bool isHBreakable(/* TODO 参数 */);  // ?isHBreakable@fp_VerticalContainer@@UAE_NXZ
    virtual public bool isVBreakable(/* TODO 参数 */);  // ?isVBreakable@fp_VerticalContainer@@UAE_NXZ
    virtual public /* 未知 */ mapXYToPosition(/* TODO 参数 */);  // ?mapXYToPosition@fp_VerticalContainer@@UAEXHHAAIAA_N11@Z
    virtual public /* 未知 */ markDirtyOverlappingRuns(/* TODO 参数 */);  // ?markDirtyOverlappingRuns@fp_VerticalContainer@@UAEXAAVUT_Re
    virtual public /* 未知 */ recalcMaxWidth(/* TODO 参数 */);  // ?recalcMaxWidth@fp_VerticalContainer@@UAEX_N@Z
    public /* 未知 */ removeContainer(/* TODO 参数 */);  // ?removeContainer@fp_VerticalContainer@@QAEXPAVfp_Container@@
    virtual public /* 未知 */ setAssignedScreenHeight(/* TODO 参数 */);  // ?setAssignedScreenHeight@fp_VerticalContainer@@UAEXH@Z
    virtual public /* 未知 */ setHeight(/* TODO 参数 */);  // ?setHeight@fp_VerticalContainer@@UAEXH@Z
    public /* 未知 */ setIntentionallyEmpty(/* TODO 参数 */);  // ?setIntentionallyEmpty@fp_VerticalContainer@@QAEX_N@Z
    virtual public /* 未知 */ setMaxHeight(/* TODO 参数 */);  // ?setMaxHeight@fp_VerticalContainer@@UAEXH@Z
    virtual public /* 未知 */ setWidth(/* TODO 参数 */);  // ?setWidth@fp_VerticalContainer@@UAEXH@Z
    virtual public /* 未知 */ setX(/* TODO 参数 */);  // ?setX@fp_VerticalContainer@@UAEXH_N@Z
    virtual public /* 未知 */ setY(/* TODO 参数 */);  // ?setY@fp_VerticalContainer@@UAEXH@Z
    public bool validate(/* TODO 参数 */);  // ?validate@fp_VerticalContainer@@QAE_NXZ
    virtual public /* 未知 */ wantHBreakAt(/* TODO 参数 */);  // ?wantHBreakAt@fp_VerticalContainer@@UAEHH@Z
    virtual public /* 未知 */ wantVBreakAt(/* TODO 参数 */);  // ?wantVBreakAt@fp_VerticalContainer@@UAEHH@Z
};

/* ---- fv_PropCache (6 方法) ---- */
class fv_PropCache {
public:
    public /* 未知 */ clearProps(/* TODO 参数 */);  // ?clearProps@fv_PropCache@@QAEXXZ
    public /* 未知 */ fillProps(/* TODO 参数 */);  // ?fillProps@fv_PropCache@@QAEXIPAPBD@Z
    public const /* 未知 */ getCopyOfProps(/* TODO 参数 */);  // ?getCopyOfProps@fv_PropCache@@QBEPAPBDXZ
    public const /* 未知 */ getTick(/* TODO 参数 */);  // ?getTick@fv_PropCache@@QBEIXZ
    public const bool isValid(/* TODO 参数 */);  // ?isValid@fv_PropCache@@QBE_NXZ
    public /* 未知 */ setTick(/* TODO 参数 */);  // ?setTick@fv_PropCache@@QAEXI@Z
};

/* ---- ie_PartTable (22 方法) ---- */
class ie_PartTable {
public:
    public /* 未知 */ _clearAll(/* TODO 参数 */);  // ?_clearAll@ie_PartTable@@AAEXXZ
    public /* 未知 */ _clearAllCell(/* TODO 参数 */);  // ?_clearAllCell@ie_PartTable@@AAEXXZ
    public /* 未知 */ _setRowsCols(/* TODO 参数 */);  // ?_setRowsCols@ie_PartTable@@AAEXXZ
    public /* 未知 */ getBot(/* TODO 参数 */);  // ?getBot@ie_PartTable@@QAEHXZ
    public const /* 未知 */ getCellAPI(/* TODO 参数 */);  // ?getCellAPI@ie_PartTable@@QBEIXZ
    public /* 未知 */ getCellProp(/* TODO 参数 */);  // ?getCellProp@ie_PartTable@@QAEPBDPBD@Z
    public const /* 未知 */ getCurRow(/* TODO 参数 */);  // ?getCurRow@ie_PartTable@@QBEHXZ
    public /* 未知 */ getLeft(/* TODO 参数 */);  // ?getLeft@ie_PartTable@@QAEHXZ
    public /* 未知 */ getNumCols(/* TODO 参数 */);  // ?getNumCols@ie_PartTable@@QAEHXZ
    public /* 未知 */ getNumRows(/* TODO 参数 */);  // ?getNumRows@ie_PartTable@@QAEHXZ
    public /* 未知 */ getPrevRight(/* TODO 参数 */);  // ?getPrevRight@ie_PartTable@@QAEHXZ
    public /* 未知 */ getRight(/* TODO 参数 */);  // ?getRight@ie_PartTable@@QAEHXZ
    public const /* 未知 */ getTableAPI(/* TODO 参数 */);  // ?getTableAPI@ie_PartTable@@QBEIXZ
    public /* 未知 */ getTableProp(/* TODO 参数 */);  // ?getTableProp@ie_PartTable@@QAEPBDPBD@Z
    public /* 未知 */ getTableSDH(/* TODO 参数 */);  // ?getTableSDH@ie_PartTable@@QAEPBXXZ
    public /* 未知 */ getTop(/* TODO 参数 */);  // ?getTop@ie_PartTable@@QAEHXZ
    public /* 未知 */ incCurRow(/* TODO 参数 */);  // ?incCurRow@ie_PartTable@@QAEXXZ
    public bool isCellJustOpenned(/* TODO 参数 */);  // ?isCellJustOpenned@ie_PartTable@@QAE_NXZ
    public /* 未知 */ setCellApi(/* TODO 参数 */);  // ?setCellApi@ie_PartTable@@QAEXI@Z
    public /* 未知 */ setCellJustOpenned(/* TODO 参数 */);  // ?setCellJustOpenned@ie_PartTable@@QAEX_N@Z
    public /* 未知 */ setDoc(/* TODO 参数 */);  // ?setDoc@ie_PartTable@@QAEXPAVPD_Document@@@Z
    public /* 未知 */ setTableApi(/* TODO 参数 */);  // ?setTableApi@ie_PartTable@@QAEXPBXI@Z
};

/* ---- ie_Table (24 方法) ---- */
class ie_Table {
public:
    public /* 未知 */ CloseCell(/* TODO 参数 */);  // ?CloseCell@ie_Table@@QAEXXZ
    public /* 未知 */ CloseTable(/* TODO 参数 */);  // ?CloseTable@ie_Table@@QAEXXZ
    public /* 未知 */ OpenCell(/* TODO 参数 */);  // ?OpenCell@ie_Table@@QAEXI@Z
    public /* 未知 */ OpenTable(/* TODO 参数 */);  // ?OpenTable@ie_Table@@QAEXPBXI@Z
    public /* 未知 */ getBot(/* TODO 参数 */);  // ?getBot@ie_Table@@QAEHXZ
    public /* 未知 */ getCellAPI(/* TODO 参数 */);  // ?getCellAPI@ie_Table@@QAEIXZ
    public /* 未知 */ getCellProp(/* TODO 参数 */);  // ?getCellProp@ie_Table@@QAEPBDPBD@Z
    public /* 未知 */ getCurRow(/* TODO 参数 */);  // ?getCurRow@ie_Table@@QAEHXZ
    public /* 未知 */ getLeft(/* TODO 参数 */);  // ?getLeft@ie_Table@@QAEHXZ
    public /* 未知 */ getNestDepth(/* TODO 参数 */);  // ?getNestDepth@ie_Table@@QAEHXZ
    public /* 未知 */ getNumCols(/* TODO 参数 */);  // ?getNumCols@ie_Table@@QAEHXZ
    public /* 未知 */ getNumRows(/* TODO 参数 */);  // ?getNumRows@ie_Table@@QAEHXZ
    public /* 未知 */ getPrevNumRightMostVMerged(/* TODO 参数 */);  // ?getPrevNumRightMostVMerged@ie_Table@@QAEHXZ
    public /* 未知 */ getRight(/* TODO 参数 */);  // ?getRight@ie_Table@@QAEHXZ
    public /* 未知 */ getTableAPI(/* TODO 参数 */);  // ?getTableAPI@ie_Table@@QAEIXZ
    public /* 未知 */ getTableProp(/* TODO 参数 */);  // ?getTableProp@ie_Table@@QAEPBDPBD@Z
    public /* 未知 */ getTableSDH(/* TODO 参数 */);  // ?getTableSDH@ie_Table@@QAEPBXXZ
    public /* 未知 */ getTop(/* TODO 参数 */);  // ?getTop@ie_Table@@QAEHXZ
    public /* 未知 */ incCurRow(/* TODO 参数 */);  // ?incCurRow@ie_Table@@QAEXXZ
    public bool isCellJustOpenned(/* TODO 参数 */);  // ?isCellJustOpenned@ie_Table@@QAE_NXZ
    public bool isNewRow(/* TODO 参数 */);  // ?isNewRow@ie_Table@@QAE_NXZ
    public /* 未知 */ setCellJustOpenned(/* TODO 参数 */);  // ?setCellJustOpenned@ie_Table@@QAEX_N@Z
    public /* 未知 */ setCellRowCol(/* TODO 参数 */);  // ?setCellRowCol@ie_Table@@QAEXHH@Z
    public /* 未知 */ setDoc(/* TODO 参数 */);  // ?setDoc@ie_Table@@QAEXPAVPD_Document@@@Z
};

/* ---- ie_exp_RTF_ListOveride (5 方法) ---- */
class ie_exp_RTF_ListOveride {
public:
    public const bool doesOverideMatch(/* TODO 参数 */);  // ?doesOverideMatch@ie_exp_RTF_ListOveride@@QBE_NI@Z
    public const /* 未知 */ getAbiListID(/* TODO 参数 */);  // ?getAbiListID@ie_exp_RTF_ListOveride@@QBEIXZ
    public const /* 未知 */ getAutoNum(/* TODO 参数 */);  // ?getAutoNum@ie_exp_RTF_ListOveride@@QBEPAVfl_AutoNum@@XZ
    public const /* 未知 */ getOverideID(/* TODO 参数 */);  // ?getOverideID@ie_exp_RTF_ListOveride@@QBEIXZ
    public /* 未知 */ setOverideID(/* TODO 参数 */);  // ?setOverideID@ie_exp_RTF_ListOveride@@QAEXI@Z
};

/* ---- ie_exp_RTF_MsWord97List (2 方法) ---- */
class ie_exp_RTF_MsWord97List {
public:
    public const /* 未知 */ getAuto(/* TODO 参数 */);  // ?getAuto@ie_exp_RTF_MsWord97List@@QBEPAVfl_AutoNum@@XZ
    public const /* 未知 */ getID(/* TODO 参数 */);  // ?getID@ie_exp_RTF_MsWord97List@@QBEIXZ
};

/* ---- ie_exp_RTF_MsWord97ListMulti (5 方法) ---- */
class ie_exp_RTF_MsWord97ListMulti {
public:
    public /* 未知 */ addLevel(/* TODO 参数 */);  // ?addLevel@ie_exp_RTF_MsWord97ListMulti@@QAEXIPAVie_exp_RTF_M
    public /* 未知 */ getListAtLevel(/* TODO 参数 */);  // ?getListAtLevel@ie_exp_RTF_MsWord97ListMulti@@QAEPAVie_exp_R
    public /* 未知 */ getMatchingID(/* TODO 参数 */);  // ?getMatchingID@ie_exp_RTF_MsWord97ListMulti@@QAEII@Z
    public const bool isMulti(/* TODO 参数 */);  // ?isMulti@ie_exp_RTF_MsWord97ListMulti@@QBE_NXZ
    public const bool isSimple(/* TODO 参数 */);  // ?isSimple@ie_exp_RTF_MsWord97ListMulti@@QBE_NXZ
};

/* ---- ie_exp_RTF_MsWord97ListSimple (2 方法) ---- */
class ie_exp_RTF_MsWord97ListSimple {
public:
    public const bool isMulti(/* TODO 参数 */);  // ?isMulti@ie_exp_RTF_MsWord97ListSimple@@QBE_NXZ
    public const bool isSimple(/* TODO 参数 */);  // ?isSimple@ie_exp_RTF_MsWord97ListSimple@@QBE_NXZ
};

/* ---- ie_imp_cell (37 方法) ---- */
class ie_imp_cell {
public:
    public /* 未知 */ addPropString(/* TODO 参数 */);  // ?addPropString@ie_imp_cell@@QAEXABVUT_String@@@Z
    public /* 未知 */ copyCell(/* TODO 参数 */);  // ?copyCell@ie_imp_cell@@QAEXPAV1@@Z
    public /* 未知 */ getBot(/* TODO 参数 */);  // ?getBot@ie_imp_cell@@QAEHXZ
    public /* 未知 */ getCellAbove(/* TODO 参数 */);  // ?getCellAbove@ie_imp_cell@@QAEPAV1@XZ
    public /* 未知 */ getCellBelow(/* TODO 参数 */);  // ?getCellBelow@ie_imp_cell@@QAEPAV1@XZ
    public /* 未知 */ getCellLeft(/* TODO 参数 */);  // ?getCellLeft@ie_imp_cell@@QAEPAV1@XZ
    public /* 未知 */ getCellRight(/* TODO 参数 */);  // ?getCellRight@ie_imp_cell@@QAEPAV1@XZ
    public /* 未知 */ getCellSDH(/* TODO 参数 */);  // ?getCellSDH@ie_imp_cell@@QAEPBXXZ
    public /* 未知 */ getCellX(/* TODO 参数 */);  // ?getCellX@ie_imp_cell@@QAEHXZ
    public /* 未知 */ getLeft(/* TODO 参数 */);  // ?getLeft@ie_imp_cell@@QAEHXZ
    public /* 未知 */ getPropVal(/* TODO 参数 */);  // ?getPropVal@ie_imp_cell@@QAE?AVUT_String@@ABV2@@Z
    public /* 未知 */ getPropVal(/* TODO 参数 */);  // ?getPropVal@ie_imp_cell@@QAE?AVUT_String@@PBD@Z
    public /* 未知 */ getRight(/* TODO 参数 */);  // ?getRight@ie_imp_cell@@QAEHXZ
    public /* 未知 */ getRow(/* TODO 参数 */);  // ?getRow@ie_imp_cell@@QAEHXZ
    public /* 未知 */ getTop(/* TODO 参数 */);  // ?getTop@ie_imp_cell@@QAEHXZ
    public const bool isFirstHorizontalMerged(/* TODO 参数 */);  // ?isFirstHorizontalMerged@ie_imp_cell@@QBE_NXZ
    public const bool isFirstVerticalMerged(/* TODO 参数 */);  // ?isFirstVerticalMerged@ie_imp_cell@@QBE_NXZ
    public const bool isMergedAbove(/* TODO 参数 */);  // ?isMergedAbove@ie_imp_cell@@QBE_NXZ
    public const bool isMergedLeft(/* TODO 参数 */);  // ?isMergedLeft@ie_imp_cell@@QBE_NXZ
    public const bool isMergedRight(/* TODO 参数 */);  // ?isMergedRight@ie_imp_cell@@QBE_NXZ
    public /* 未知 */ setBot(/* TODO 参数 */);  // ?setBot@ie_imp_cell@@QAEXH@Z
    public /* 未知 */ setCellLeft(/* TODO 参数 */);  // ?setCellLeft@ie_imp_cell@@QAEXPAV1@@Z
    public /* 未知 */ setCellSDH(/* TODO 参数 */);  // ?setCellSDH@ie_imp_cell@@QAEXPBX@Z
    public /* 未知 */ setCellX(/* TODO 参数 */);  // ?setCellX@ie_imp_cell@@QAEXH@Z
    public /* 未知 */ setFirstHorizontalMerge(/* TODO 参数 */);  // ?setFirstHorizontalMerge@ie_imp_cell@@QAEX_N@Z
    public /* 未知 */ setFirstVerticalMerge(/* TODO 参数 */);  // ?setFirstVerticalMerge@ie_imp_cell@@QAEX_N@Z
    public /* 未知 */ setImpTable(/* TODO 参数 */);  // ?setImpTable@ie_imp_cell@@QAEXPAVie_imp_table@@@Z
    public /* 未知 */ setLeft(/* TODO 参数 */);  // ?setLeft@ie_imp_cell@@QAEXH@Z
    public /* 未知 */ setMergeAbove(/* TODO 参数 */);  // ?setMergeAbove@ie_imp_cell@@QAEX_N@Z
    public /* 未知 */ setMergeLeft(/* TODO 参数 */);  // ?setMergeLeft@ie_imp_cell@@QAEX_N@Z
    public /* 未知 */ setMergeRight(/* TODO 参数 */);  // ?setMergeRight@ie_imp_cell@@QAEX_N@Z
    public /* 未知 */ setProp(/* TODO 参数 */);  // ?setProp@ie_imp_cell@@QAEXABVUT_String@@0@Z
    public /* 未知 */ setProp(/* TODO 参数 */);  // ?setProp@ie_imp_cell@@QAEXPBD0@Z
    public /* 未知 */ setRight(/* TODO 参数 */);  // ?setRight@ie_imp_cell@@QAEXH@Z
    public /* 未知 */ setRow(/* TODO 参数 */);  // ?setRow@ie_imp_cell@@QAEXH@Z
    public /* 未知 */ setTop(/* TODO 参数 */);  // ?setTop@ie_imp_cell@@QAEXH@Z
    public bool writeCellPropsInDoc(/* TODO 参数 */);  // ?writeCellPropsInDoc@ie_imp_cell@@QAE_NXZ
};

/* ---- ie_imp_table (44 方法) ---- */
class ie_imp_table {
public:
    public /* 未知 */ CloseCell(/* TODO 参数 */);  // ?CloseCell@ie_imp_table@@QAEXXZ
    public /* 未知 */ NewRow(/* TODO 参数 */);  // ?NewRow@ie_imp_table@@QAEHXZ
    public /* 未知 */ OpenCell(/* TODO 参数 */);  // ?OpenCell@ie_imp_table@@QAEHXZ
    public /* 未知 */ _buildCellXVector(/* TODO 参数 */);  // ?_buildCellXVector@ie_imp_table@@AAEXXZ
    public /* 未知 */ _removeAllStruxes(/* TODO 参数 */);  // ?_removeAllStruxes@ie_imp_table@@AAEXXZ
    public /* 未知 */ appendRow(/* TODO 参数 */);  // ?appendRow@ie_imp_table@@QAEXPAV?$UT_GenericVector@PAVie_imp
    public /* 未知 */ buildTableStructure(/* TODO 参数 */);  // ?buildTableStructure@ie_imp_table@@QAEXXZ
    public /* 未知 */ deleteRow(/* TODO 参数 */);  // ?deleteRow@ie_imp_table@@QAEXH@Z
    public bool doCellXMatch(/* TODO 参数 */);  // ?doCellXMatch@ie_imp_table@@QAE_NHH_N@Z
    public /* 未知 */ getCellAtRowColX(/* TODO 参数 */);  // ?getCellAtRowColX@ie_imp_table@@QAEPAVie_imp_cell@@HH@Z
    public /* 未知 */ getCellPropVal(/* TODO 参数 */);  // ?getCellPropVal@ie_imp_table@@QAE?AVUT_String@@ABV2@@Z
    public /* 未知 */ getCellXOnRow(/* TODO 参数 */);  // ?getCellXOnRow@ie_imp_table@@QAEHXZ
    public /* 未知 */ getColNumber(/* TODO 参数 */);  // ?getColNumber@ie_imp_table@@QAEHPAVie_imp_cell@@@Z
    public /* 未知 */ getCurCell(/* TODO 参数 */);  // ?getCurCell@ie_imp_table@@QAEPAVie_imp_cell@@XZ
    public /* 未知 */ getNthCellOnRow(/* TODO 参数 */);  // ?getNthCellOnRow@ie_imp_table@@QAEPAVie_imp_cell@@H@Z
    public /* 未知 */ getNumRows(/* TODO 参数 */);  // ?getNumRows@ie_imp_table@@QAEHXZ
    public /* 未知 */ getPosOnRow(/* TODO 参数 */);  // ?getPosOnRow@ie_imp_table@@QAEHXZ
    public /* 未知 */ getPropVal(/* TODO 参数 */);  // ?getPropVal@ie_imp_table@@QAE?AVUT_String@@ABV2@@Z
    public /* 未知 */ getPropVal(/* TODO 参数 */);  // ?getPropVal@ie_imp_table@@QAE?AVUT_String@@PBD@Z
    public /* 未知 */ getRow(/* TODO 参数 */);  // ?getRow@ie_imp_table@@QAEHXZ
    public /* 未知 */ getTableSDH(/* TODO 参数 */);  // ?getTableSDH@ie_imp_table@@QAEPBXXZ
    public bool getVecOfCellsOnRow(/* TODO 参数 */);  // ?getVecOfCellsOnRow@ie_imp_table@@QAE_NHPAV?$UT_GenericVecto
    public /* 未知 */ incCellXOnRow(/* TODO 参数 */);  // ?incCellXOnRow@ie_imp_table@@QAEXXZ
    public /* 未知 */ incPosOnRow(/* TODO 参数 */);  // ?incPosOnRow@ie_imp_table@@QAEXXZ
    public bool isAutoFit(/* TODO 参数 */);  // ?isAutoFit@ie_imp_table@@QAE_NXZ
    public bool isNewRow(/* TODO 参数 */);  // ?isNewRow@ie_imp_table@@QAE_NXZ
    public /* 未知 */ removeCurrentRow(/* TODO 参数 */);  // ?removeCurrentRow@ie_imp_table@@QAEXXZ
    public /* 未知 */ removeExtraneousCells(/* TODO 参数 */);  // ?removeExtraneousCells@ie_imp_table@@QAEXXZ
    public /* 未知 */ removeOnThisCellRow(/* TODO 参数 */);  // ?removeOnThisCellRow@ie_imp_table@@QAEXPAVie_imp_cell@@@Z
    public bool removeRow(/* TODO 参数 */);  // ?removeRow@ie_imp_table@@QAE_NH@Z
    public /* 未知 */ setAutoFit(/* TODO 参数 */);  // ?setAutoFit@ie_imp_table@@QAEX_N@Z
    public /* 未知 */ setCell(/* TODO 参数 */);  // ?setCell@ie_imp_table@@QAEXPAVie_imp_cell@@@Z
    public /* 未知 */ setCellProp(/* TODO 参数 */);  // ?setCellProp@ie_imp_table@@QAEXABVUT_String@@0@Z
    public /* 未知 */ setCellRowNthCell(/* TODO 参数 */);  // ?setCellRowNthCell@ie_imp_table@@QAEXHH@Z
    public /* 未知 */ setCellX(/* TODO 参数 */);  // ?setCellX@ie_imp_table@@QAEXH@Z
    public /* 未知 */ setCellXOnRow(/* TODO 参数 */);  // ?setCellXOnRow@ie_imp_table@@QAEXH@Z
    public /* 未知 */ setNthCellOnThisRow(/* TODO 参数 */);  // ?setNthCellOnThisRow@ie_imp_table@@QAEXH@Z
    public /* 未知 */ setPosOnRow(/* TODO 参数 */);  // ?setPosOnRow@ie_imp_table@@QAEXH@Z
    public /* 未知 */ setProp(/* TODO 参数 */);  // ?setProp@ie_imp_table@@QAEXABVUT_String@@0@Z
    public /* 未知 */ setProp(/* TODO 参数 */);  // ?setProp@ie_imp_table@@QAEXPBD0@Z
    public /* 未知 */ setTableSDH(/* TODO 参数 */);  // ?setTableSDH@ie_imp_table@@QAEXPBX@Z
    public bool wasTableUsed(/* TODO 参数 */);  // ?wasTableUsed@ie_imp_table@@QAE_NXZ
    public /* 未知 */ writeAllCellPropsInDoc(/* TODO 参数 */);  // ?writeAllCellPropsInDoc@ie_imp_table@@QAEXXZ
    public /* 未知 */ writeTablePropsInDoc(/* TODO 参数 */);  // ?writeTablePropsInDoc@ie_imp_table@@QAEXXZ
};

/* ---- ie_imp_table_control (7 方法) ---- */
class ie_imp_table_control {
public:
    public /* 未知 */ CloseCell(/* TODO 参数 */);  // ?CloseCell@ie_imp_table_control@@QAEXXZ
    public /* 未知 */ CloseTable(/* TODO 参数 */);  // ?CloseTable@ie_imp_table_control@@QAEXXZ
    public bool NewRow(/* TODO 参数 */);  // ?NewRow@ie_imp_table_control@@QAE_NXZ
    public /* 未知 */ OpenCell(/* TODO 参数 */);  // ?OpenCell@ie_imp_table_control@@QAEHXZ
    public /* 未知 */ OpenTable(/* TODO 参数 */);  // ?OpenTable@ie_imp_table_control@@QAEXXZ
    public /* 未知 */ getNestDepth(/* TODO 参数 */);  // ?getNestDepth@ie_imp_table_control@@QAEHXZ
    public /* 未知 */ getTable(/* TODO 参数 */);  // ?getTable@ie_imp_table_control@@QAEPAVie_imp_table@@XZ
};

/* ---- pf_Frag (18 方法) ---- */
class pf_Frag {
public:
    public /* 未知 */ _isContentEqual(/* TODO 参数 */);  // ?_isContentEqual@pf_Frag@@MBE_NABV1@@Z
    virtual public const bool createSpecialChangeRecord(/* TODO 参数 */);  // ?createSpecialChangeRecord@pf_Frag@@UBE_NPAPAVPX_ChangeRecor
    public /* 未知 */ getField(/* TODO 参数 */);  // ?getField@pf_Frag@@QAEPAVfd_Field@@XZ
    public const /* 未知 */ getIndexAP(/* TODO 参数 */);  // ?getIndexAP@pf_Frag@@QBEIXZ
    public const /* 未知 */ getLength(/* TODO 参数 */);  // ?getLength@pf_Frag@@QBEIXZ
    public const /* 未知 */ getNext(/* TODO 参数 */);  // ?getNext@pf_Frag@@QBEPAV1@XZ
    public /* 未知 */ getPieceTable(/* TODO 参数 */);  // ?getPieceTable@pf_Frag@@QAEPAVpt_PieceTable@@XZ
    public const /* 未知 */ getPos(/* TODO 参数 */);  // ?getPos@pf_Frag@@QBEIXZ
    public const /* 未知 */ getPrev(/* TODO 参数 */);  // ?getPrev@pf_Frag@@QBEPAV1@XZ
    public const /* 未知 */ getType(/* TODO 参数 */);  // ?getType@pf_Frag@@QBE?AW4_PFType@1@XZ
    public const /* 未知 */ getXID(/* TODO 参数 */);  // ?getXID@pf_Frag@@QBEIXZ
    public const bool isContentEqual(/* TODO 参数 */);  // ?isContentEqual@pf_Frag@@QBE_NABV1@@Z
    virtual public /* 未知 */ setIndexAP(/* TODO 参数 */);  // ?setIndexAP@pf_Frag@@UAEXI@Z
    public /* 未知 */ setNext(/* TODO 参数 */);  // ?setNext@pf_Frag@@QAEPAV1@PAV1@@Z
    public const /* 未知 */ setPos(/* TODO 参数 */);  // ?setPos@pf_Frag@@QBEXI@Z
    public /* 未知 */ setPrev(/* TODO 参数 */);  // ?setPrev@pf_Frag@@QAEPAV1@PAV1@@Z
    public /* 未知 */ setXID(/* TODO 参数 */);  // ?setXID@pf_Frag@@QAEXI@Z
    virtual public const bool usesXID(/* TODO 参数 */);  // ?usesXID@pf_Frag@@UBE_NXZ
};

/* ---- pf_Frag_FmtMark (2 方法) ---- */
class pf_Frag_FmtMark {
public:
    virtual public const bool createSpecialChangeRecord(/* TODO 参数 */);  // ?createSpecialChangeRecord@pf_Frag_FmtMark@@UBE_NPAPAVPX_Cha
    virtual public const bool usesXID(/* TODO 参数 */);  // ?usesXID@pf_Frag_FmtMark@@UBE_NXZ
};

/* ---- pf_Frag_Object (5 方法) ---- */
class pf_Frag_Object {
public:
    public /* 未知 */ _isContentEqual(/* TODO 参数 */);  // ?_isContentEqual@pf_Frag_Object@@MBE_NABVpf_Frag@@@Z
    virtual public const bool createSpecialChangeRecord(/* TODO 参数 */);  // ?createSpecialChangeRecord@pf_Frag_Object@@UBE_NPAPAVPX_Chan
    public const /* 未知 */ getBookmark(/* TODO 参数 */);  // ?getBookmark@pf_Frag_Object@@QBEPAVpo_Bookmark@@XZ
    public const /* 未知 */ getObjectType(/* TODO 参数 */);  // ?getObjectType@pf_Frag_Object@@QBE?AW4_PTObjectType@@XZ
    virtual public const bool usesXID(/* TODO 参数 */);  // ?usesXID@pf_Frag_Object@@UBE_NXZ
};

/* ---- pf_Frag_Strux (9 方法) ---- */
class pf_Frag_Strux {
public:
    public /* 未知 */ _isContentEqual(/* TODO 参数 */);  // ?_isContentEqual@pf_Frag_Strux@@MBE_NABVpf_Frag@@@Z
    public /* 未知 */ clearAllFmtHandles(/* TODO 参数 */);  // ?clearAllFmtHandles@pf_Frag_Strux@@QAEXXZ
    virtual public const bool createSpecialChangeRecord(/* TODO 参数 */);  // ?createSpecialChangeRecord@pf_Frag_Strux@@UBE_NPAPAVPX_Chang
    public const /* 未知 */ getFmtHandle(/* TODO 参数 */);  // ?getFmtHandle@pf_Frag_Strux@@QBEPBXI@Z
    public const /* 未知 */ getStruxType(/* TODO 参数 */);  // ?getStruxType@pf_Frag_Strux@@QBE?AW4_PTStruxType@@XZ
    public const bool isMatchingType(/* TODO 参数 */);  // ?isMatchingType@pf_Frag_Strux@@QBE_NPBVpf_Frag@@@Z
    public const bool isMatchingType(/* TODO 参数 */);  // ?isMatchingType@pf_Frag_Strux@@QBE_NW4_PTStruxType@@@Z
    public bool setFmtHandle(/* TODO 参数 */);  // ?setFmtHandle@pf_Frag_Strux@@QAE_NIPBX@Z
    virtual public const bool usesXID(/* TODO 参数 */);  // ?usesXID@pf_Frag_Strux@@UBE_NXZ
};

/* ---- pf_Frag_Text (8 方法) ---- */
class pf_Frag_Text {
public:
    public /* 未知 */ _isContentEqual(/* TODO 参数 */);  // ?_isContentEqual@pf_Frag_Text@@MBE_NABVpf_Frag@@@Z
    public /* 未知 */ adjustOffsetLength(/* TODO 参数 */);  // ?adjustOffsetLength@pf_Frag_Text@@QAEXII@Z
    public /* 未知 */ changeLength(/* TODO 参数 */);  // ?changeLength@pf_Frag_Text@@QAEXI@Z
    virtual public const bool createSpecialChangeRecord(/* TODO 参数 */);  // ?createSpecialChangeRecord@pf_Frag_Text@@UBE_NPAPAVPX_Change
    virtual public const bool createSpecialChangeRecord(/* TODO 参数 */);  // ?createSpecialChangeRecord@pf_Frag_Text@@UBE_NPAPAVPX_Change
    public const /* 未知 */ getBufIndex(/* TODO 参数 */);  // ?getBufIndex@pf_Frag_Text@@QBEIXZ
    public /* 未知 */ setField(/* TODO 参数 */);  // ?setField@pf_Frag_Text@@QAEXPAVfd_Field@@@Z
    virtual public const bool usesXID(/* TODO 参数 */);  // ?usesXID@pf_Frag_Text@@UBE_NXZ
};

/* ---- pf_Fragments (16 方法) ---- */
class pf_Fragments {
public:
    public /* 未知 */ appendFrag(/* TODO 参数 */);  // ?appendFrag@pf_Fragments@@QAEXPAVpf_Frag@@@Z
    public const bool areFragsDirty(/* TODO 参数 */);  // ?areFragsDirty@pf_Fragments@@QBE_NXZ
    public const /* 未知 */ cleanFrags(/* TODO 参数 */);  // ?cleanFrags@pf_Fragments@@QBEXXZ
    public const /* 未知 */ findFirstFragBeforePos(/* TODO 参数 */);  // ?findFirstFragBeforePos@pf_Fragments@@QBEPAVpf_Frag@@I@Z
    public /* 未知 */ getCache(/* TODO 参数 */);  // ?getCache@pf_Fragments@@ABEPAVpf_Frag@@XZ
    public const /* 未知 */ getFirst(/* TODO 参数 */);  // ?getFirst@pf_Fragments@@QBEPAVpf_Frag@@XZ
    public const /* 未知 */ getFragNumber(/* TODO 参数 */);  // ?getFragNumber@pf_Fragments@@QBEIPBVpf_Frag@@@Z
    public const /* 未知 */ getLast(/* TODO 参数 */);  // ?getLast@pf_Fragments@@QBEPAVpf_Frag@@XZ
    public const /* 未知 */ getNthFrag(/* TODO 参数 */);  // ?getNthFrag@pf_Fragments@@QBEPAVpf_Frag@@I@Z
    public const /* 未知 */ getNumberOfFrags(/* TODO 参数 */);  // ?getNumberOfFrags@pf_Fragments@@QBEIXZ
    public const /* 未知 */ getvecParaFrags(/* TODO 参数 */);  // ?getvecParaFrags@pf_Fragments@@QBEPAV?$UT_GenericVector@PBX@
    public /* 未知 */ insertFrag(/* TODO 参数 */);  // ?insertFrag@pf_Fragments@@QAEXPAVpf_Frag@@0@Z
    public /* 未知 */ insertFragBefore(/* TODO 参数 */);  // ?insertFragBefore@pf_Fragments@@QAEXPAVpf_Frag@@0@Z
    public /* 未知 */ setCache(/* TODO 参数 */);  // ?setCache@pf_Fragments@@ABEXPAVpf_Frag@@@Z
    public /* 未知 */ setFragsDirty(/* TODO 参数 */);  // ?setFragsDirty@pf_Fragments@@QAEXPAVpf_Frag@@@Z
    public /* 未知 */ unlinkFrag(/* TODO 参数 */);  // ?unlinkFrag@pf_Fragments@@QAEXPAVpf_Frag@@@Z
};

/* ---- po_Bookmark (5 方法) ---- */
class po_Bookmark {
public:
    public /* 未知 */ getBlock(/* TODO 参数 */);  // ?getBlock@po_Bookmark@@QAEPAVfl_BlockLayout@@XZ
    public const /* 未知 */ getBookmarkType(/* TODO 参数 */);  // ?getBookmarkType@po_Bookmark@@QBE?AW4_bookmarkType@1@XZ
    public const /* 未知 */ getName(/* TODO 参数 */);  // ?getName@po_Bookmark@@QBEPBDXZ
    public /* 未知 */ setBlock(/* TODO 参数 */);  // ?setBlock@po_Bookmark@@QAEXPAVfl_BlockLayout@@@Z
    public /* 未知 */ setName(/* TODO 参数 */);  // ?setName@po_Bookmark@@QAEXPBD@Z
};

/* ---- pp_TableAttrProp (6 方法) ---- */
class pp_TableAttrProp {
public:
    public bool addAP(/* TODO 参数 */);  // ?addAP@pp_TableAttrProp@@QAE_NPAVPP_AttrProp@@PAI@Z
    public bool createAP(/* TODO 参数 */);  // ?createAP@pp_TableAttrProp@@QAE_NPAI@Z
    public bool createAP(/* TODO 参数 */);  // ?createAP@pp_TableAttrProp@@QAE_NPAPBD0PAI@Z
    public bool createAP(/* TODO 参数 */);  // ?createAP@pp_TableAttrProp@@QAE_NPBV?$UT_GenericVector@PAD@@
    public const bool findMatch(/* TODO 参数 */);  // ?findMatch@pp_TableAttrProp@@QBE_NPBVPP_AttrProp@@PAI@Z
    public const /* 未知 */ getAP(/* TODO 参数 */);  // ?getAP@pp_TableAttrProp@@QBEPBVPP_AttrProp@@I@Z
};

/* ---- pt_PieceTable (216 方法) ---- */
class pt_PieceTable {
public:
    public bool AddParagraph(/* TODO 参数 */);  // ?AddParagraph@pt_PieceTable@@QAE_NPBDPAPAVEMRParagraph@@@Z
    public /* 未知 */ CalcAdvRegionState(/* TODO 参数 */);  // ?CalcAdvRegionState@pt_PieceTable@@QAEXPAVpf_Frag@@PAVppt_Ad
    virtual public /* 未知 */ CalcAdvRegionState(/* TODO 参数 */);  // ?CalcAdvRegionState@pt_PieceTable@@UAEXIPAVppt_AdvRegionStat
    public /* 未知 */ CalcContextAdvRS(/* TODO 参数 */);  // ?CalcContextAdvRS@pt_PieceTable@@QAEXPAVpf_Frag@@PAVppt_Cont
    virtual public /* 未知 */ CalcContextAdvRS(/* TODO 参数 */);  // ?CalcContextAdvRS@pt_PieceTable@@UAEXIPAVppt_ContextAdvRegio
    public /* 未知 */ CalcContextRS(/* TODO 参数 */);  // ?CalcContextRS@pt_PieceTable@@QAEXPAVpf_Frag@@PAVppt_Context
    virtual public /* 未知 */ CalcContextRS(/* TODO 参数 */);  // ?CalcContextRS@pt_PieceTable@@UAEXIPAVppt_ContextRegionState
    public /* 未知 */ CalcParaRegionState(/* TODO 参数 */);  // ?CalcParaRegionState@pt_PieceTable@@QAEXPAVpf_Frag@@PAVppt_P
    virtual public /* 未知 */ CalcParaRegionState(/* TODO 参数 */);  // ?CalcParaRegionState@pt_PieceTable@@UAEXIPAVppt_ParaRegionSt
    public /* 未知 */ CalcRegionState(/* TODO 参数 */);  // ?CalcRegionState@pt_PieceTable@@QAEXPAVpf_Frag@@PAVppt_Regio
    virtual public /* 未知 */ CalcRegionState(/* TODO 参数 */);  // ?CalcRegionState@pt_PieceTable@@UAEXIPAVppt_RegionState@@@Z
    public bool CheckElemIsExtProp1SelectTrue(/* TODO 参数 */);  // ?CheckElemIsExtProp1SelectTrue@pt_PieceTable@@QAE_NPAVpf_Fra
    public bool CheckElemIsReadonly(/* TODO 参数 */);  // ?CheckElemIsReadonly@pt_PieceTable@@QAE_NPAVpf_Frag@@@Z
    public bool CheckInstanceProp(/* TODO 参数 */);  // ?CheckInstanceProp@pt_PieceTable@@QAE_NPBVppt_AdvRegionState
    public bool CheckIsParaFrag(/* TODO 参数 */);  // ?CheckIsParaFrag@pt_PieceTable@@QAE_NPBVpf_Frag@@PAPBD@Z
    public bool CheckIsRegionFrag(/* TODO 参数 */);  // ?CheckIsRegionFrag@pt_PieceTable@@QAE_NPAVpf_Frag@@PAPBD1@Z
    public bool CheckIsRgnBegin(/* TODO 参数 */);  // ?CheckIsRgnBegin@pt_PieceTable@@QAE_NPAVpf_Frag@@PBD1@Z
    public bool CheckIsRgnEnd(/* TODO 参数 */);  // ?CheckIsRgnEnd@pt_PieceTable@@QAE_NPAVpf_Frag@@PBD1@Z
    public bool CheckMajorProp(/* TODO 参数 */);  // ?CheckMajorProp@pt_PieceTable@@QAE_NPBVppt_AdvRegionState@@@
    public /* 未知 */ ClearAdvRegionState(/* TODO 参数 */);  // ?ClearAdvRegionState@pt_PieceTable@@QAEXPAVppt_AdvRegionStat
    public /* 未知 */ ClearContextAdvRS(/* TODO 参数 */);  // ?ClearContextAdvRS@pt_PieceTable@@QAEXPAVppt_ContextAdvRegio
    public /* 未知 */ ClearContextRS(/* TODO 参数 */);  // ?ClearContextRS@pt_PieceTable@@QAEXPAVppt_ContextRegionState
    public /* 未知 */ ClearParaRegionState(/* TODO 参数 */);  // ?ClearParaRegionState@pt_PieceTable@@QAEXPAVppt_ParaRegionSt
    public /* 未知 */ ClearRegionState(/* TODO 参数 */);  // ?ClearRegionState@pt_PieceTable@@QAEXPAVppt_RegionState@@@Z
    public /* 未知 */ CombineAdvRegion(/* TODO 参数 */);  // ?CombineAdvRegion@pt_PieceTable@@QAEXPAVpf_Frag@@@Z
    public /* 未知 */ DeleteElemFmtMark(/* TODO 参数 */);  // ?DeleteElemFmtMark@pt_PieceTable@@QAEXI@Z
    public /* 未知 */ FindParaPathname(/* TODO 参数 */);  // ?FindParaPathname@pt_PieceTable@@QAEPAVpf_Frag@@PAV2@PAPBD@Z
    public /* 未知 */ FindParent_Paragraph(/* TODO 参数 */);  // ?FindParent_Paragraph@pt_PieceTable@@QAEPAVEMRParagraph@@PAV
    public /* 未知 */ GetAdvElemByfrag(/* TODO 参数 */);  // ?GetAdvElemByfrag@pt_PieceTable@@QAEPAVEMRElement@@PAVpf_Fra
    public /* 未知 */ GetElemByfrag(/* TODO 参数 */);  // ?GetElemByfrag@pt_PieceTable@@QAEPAVEMRElement@@PAVpf_Frag@@
    public /* 未知 */ GetNextMainNum(/* TODO 参数 */);  // ?GetNextMainNum@pt_PieceTable@@QAEXPAVpf_Frag@@AAV?$basic_st
    public /* 未知 */ GetNextSubMainNum(/* TODO 参数 */);  // ?GetNextSubMainNum@pt_PieceTable@@QAEXPAVpf_Frag@@AAV?$basic
    public /* 未知 */ HCPT_addPara2XmlDoc(/* TODO 参数 */);  // ?HCPT_addPara2XmlDoc@pt_PieceTable@@QAEHPBVEMRParagraph@@@Z
    public bool IsEqualAdvRegion(/* TODO 参数 */);  // ?IsEqualAdvRegion@pt_PieceTable@@QAE_NPAVpf_Frag@@PBD1@Z
    public bool IsEqualRegion(/* TODO 参数 */);  // ?IsEqualRegion@pt_PieceTable@@QAE_NPAVpf_Frag@@PBD1@Z
    public /* 未知 */ SplitAdvRegion(/* TODO 参数 */);  // ?SplitAdvRegion@pt_PieceTable@@QAEXPAVpf_Frag@@@Z
    protected bool _StruxIsNotTable(/* TODO 参数 */);  // ?_StruxIsNotTable@pt_PieceTable@@IAE_NPAVpf_Frag_Strux@@@Z
    public /* 未知 */ _canCoalesceDeleteSpan(/* TODO 参数 */);  // ?_canCoalesceDeleteSpan@pt_PieceTable@@IBE_NPAVPX_ChangeReco
    public /* 未知 */ _canCoalesceInsertSpan(/* TODO 参数 */);  // ?_canCoalesceInsertSpan@pt_PieceTable@@IBE_NPAVPX_ChangeReco
    protected bool _changePointWithNotify(/* TODO 参数 */);  // ?_changePointWithNotify@pt_PieceTable@@IAE_NI@Z
    protected /* 未知 */ _chooseIndexAP(/* TODO 参数 */);  // ?_chooseIndexAP@pt_PieceTable@@IAEIPAVpf_Frag@@I@Z
    public const /* 未知 */ _computeBlockOffset(/* TODO 参数 */);  // ?_computeBlockOffset@pt_PieceTable@@QBEIPAVpf_Frag_Strux@@PA
    protected bool _computeFmtMarkForNewBlock(/* TODO 参数 */);  // ?_computeFmtMarkForNewBlock@pt_PieceTable@@IAE_NPAVpf_Frag_S
    protected bool _createBuiltinStyle(/* TODO 参数 */);  // ?_createBuiltinStyle@pt_PieceTable@@IAE_NPBDPAPBD@Z
    protected bool _createObject(/* TODO 参数 */);  // ?_createObject@pt_PieceTable@@IAE_NW4_PTObjectType@@IPAPAVpf
    protected bool _createStrux(/* TODO 参数 */);  // ?_createStrux@pt_PieceTable@@IAE_NW4_PTStruxType@@IPAPAVpf_F
    protected bool _deleteComplexSpan(/* TODO 参数 */);  // ?_deleteComplexSpan@pt_PieceTable@@IAE_NAAI0PAVUT_Stack@@@Z
    protected bool _deleteComplexSpan_norec(/* TODO 参数 */);  // ?_deleteComplexSpan_norec@pt_PieceTable@@IAE_NII@Z
    protected bool _deleteFmtMark(/* TODO 参数 */);  // ?_deleteFmtMark@pt_PieceTable@@IAE_NPAVpf_Frag_FmtMark@@PAPA
    public bool _deleteFmtMarkWithNotify(/* TODO 参数 */);  // ?_deleteFmtMarkWithNotify@pt_PieceTable@@QAE_NIPAVpf_Frag_Fm
    protected bool _deleteFormatting(/* TODO 参数 */);  // ?_deleteFormatting@pt_PieceTable@@IAE_NII@Z
    protected /* 未知 */ _deleteHdrFtrStruxWithNotify(/* TODO 参数 */);  // ?_deleteHdrFtrStruxWithNotify@pt_PieceTable@@IAEXPAVpf_Frag_
    protected bool _deleteHdrFtrsFromSectionStruxIfPresent(/* TODO 参数 */);  // ?_deleteHdrFtrsFromSectionStruxIfPresent@pt_PieceTable@@IAE_
    protected bool _deleteObject(/* TODO 参数 */);  // ?_deleteObject@pt_PieceTable@@IAE_NPAVpf_Frag_Object@@PAPAVp
    protected bool _deleteObjectWithNotify(/* TODO 参数 */);  // ?_deleteObjectWithNotify@pt_PieceTable@@IAE_NIPAVpf_Frag_Obj
    protected bool _deleteSpan(/* TODO 参数 */);  // ?_deleteSpan@pt_PieceTable@@IAE_NPAVpf_Frag_Text@@IIIPAPAVpf
    protected bool _deleteSpanWithNotify(/* TODO 参数 */);  // ?_deleteSpanWithNotify@pt_PieceTable@@IAE_NIPAVpf_Frag_Text@
    protected bool _deleteStruxWithNotify(/* TODO 参数 */);  // ?_deleteStruxWithNotify@pt_PieceTable@@IAE_NIPAVpf_Frag_Stru
    protected bool _doTheDo(/* TODO 参数 */);  // ?_doTheDo@pt_PieceTable@@IAE_NPBVPX_ChangeRecord@@_N@Z
    protected /* 未知 */ _findLastStruxOfType(/* TODO 参数 */);  // ?_findLastStruxOfType@pt_PieceTable@@IAEPAVpf_Frag@@PAV2@W4_
    protected /* 未知 */ _findNextHyperlink(/* TODO 参数 */);  // ?_findNextHyperlink@pt_PieceTable@@IAEPAVpf_Frag@@PAV2@@Z
    protected /* 未知 */ _findPrevHyperlink(/* TODO 参数 */);  // ?_findPrevHyperlink@pt_PieceTable@@IAEPAVpf_Frag@@PAV2@@Z
    protected bool _fixHdrFtrReferences(/* TODO 参数 */);  // ?_fixHdrFtrReferences@pt_PieceTable@@IAE_NPBD0_N@Z
    protected bool _fmtChangeFmtMark(/* TODO 参数 */);  // ?_fmtChangeFmtMark@pt_PieceTable@@IAE_NPAVpf_Frag_FmtMark@@I
    protected bool _fmtChangeFmtMarkWithNotify(/* TODO 参数 */);  // ?_fmtChangeFmtMarkWithNotify@pt_PieceTable@@IAE_NW4_PTChange
    protected bool _fmtChangeObject(/* TODO 参数 */);  // ?_fmtChangeObject@pt_PieceTable@@IAE_NPAVpf_Frag_Object@@IPA
    protected bool _fmtChangeObjectWithNotify(/* TODO 参数 */);  // ?_fmtChangeObjectWithNotify@pt_PieceTable@@IAE_NW4_PTChangeF
    protected bool _fmtChangeSpan(/* TODO 参数 */);  // ?_fmtChangeSpan@pt_PieceTable@@IAE_NPAVpf_Frag_Text@@IIIPAPA
    protected bool _fmtChangeSpanWithNotify(/* TODO 参数 */);  // ?_fmtChangeSpanWithNotify@pt_PieceTable@@IAE_NW4_PTChangeFmt
    protected bool _fmtChangeStrux(/* TODO 参数 */);  // ?_fmtChangeStrux@pt_PieceTable@@IAE_NPAVpf_Frag_Strux@@I@Z
    protected bool _fmtChangeStruxWithNotify(/* TODO 参数 */);  // ?_fmtChangeStruxWithNotify@pt_PieceTable@@IAE_NW4_PTChangeFm
    protected bool _fmtChangeStruxWithNotify(/* TODO 参数 */);  // ?_fmtChangeStruxWithNotify@pt_PieceTable@@IAE_NW4_PTChangeFm
    protected /* 未知 */ _getNextChangeRecordNumber(/* TODO 参数 */);  // ?_getNextChangeRecordNumber@pt_PieceTable@@IAEHXZ
    protected bool _getNextStruxAfterFragSkip(/* TODO 参数 */);  // ?_getNextStruxAfterFragSkip@pt_PieceTable@@IAE_NPAVpf_Frag@@
    public /* 未知 */ _getSpanAttrPropHelper(/* TODO 参数 */);  // ?_getSpanAttrPropHelper@pt_PieceTable@@IBE_NPAVpf_Frag@@PAPB
    public const bool _getStruxFromFrag(/* TODO 参数 */);  // ?_getStruxFromFrag@pt_PieceTable@@QBE_NPAVpf_Frag@@PAPAVpf_F
    public /* 未知 */ _getStruxFromFragSkip(/* TODO 参数 */);  // ?_getStruxFromFragSkip@pt_PieceTable@@IBE_NPAVpf_Frag@@PAPAV
    public /* 未知 */ _getStruxFromPosition(/* TODO 参数 */);  // ?_getStruxFromPosition@pt_PieceTable@@IBE_NIPAPAVpf_Frag_Str
    public /* 未知 */ _getStruxOfTypeFromPosition(/* TODO 参数 */);  // ?_getStruxOfTypeFromPosition@pt_PieceTable@@IBE_NIW4_PTStrux
    protected bool _insertFmtMark(/* TODO 参数 */);  // ?_insertFmtMark@pt_PieceTable@@IAE_NPAVpf_Frag@@II@Z
    protected bool _insertFmtMarkAfterBlockWithNotify(/* TODO 参数 */);  // ?_insertFmtMarkAfterBlockWithNotify@pt_PieceTable@@IAE_NPAVp
    protected bool _insertFmtMarkFragWithNotify(/* TODO 参数 */);  // ?_insertFmtMarkFragWithNotify@pt_PieceTable@@IAE_NW4_PTChang
    protected bool _insertFmtMarkFragWithNotify(/* TODO 参数 */);  // ?_insertFmtMarkFragWithNotify@pt_PieceTable@@IAE_NW4_PTChang
    protected bool _insertObject(/* TODO 参数 */);  // ?_insertObject@pt_PieceTable@@IAE_NPAVpf_Frag@@IW4_PTObjectT
    protected /* 未知 */ _insertSpan(/* TODO 参数 */);  // ?_insertSpan@pt_PieceTable@@IAEPAVpf_Frag_Text@@PAVpf_Frag@@
    protected /* 未知 */ _insertStrux(/* TODO 参数 */);  // ?_insertStrux@pt_PieceTable@@IAEXPAVpf_Frag@@IPAVpf_Frag_Str
    public /* 未知 */ _isSimpleDeleteSpan(/* TODO 参数 */);  // ?_isSimpleDeleteSpan@pt_PieceTable@@IBE_NII@Z
    protected bool _lastUndoIsThisFmtMark(/* TODO 参数 */);  // ?_lastUndoIsThisFmtMark@pt_PieceTable@@IAE_NI@Z
    protected bool _loadBuiltinStyles(/* TODO 参数 */);  // ?_loadBuiltinStyles@pt_PieceTable@@IAE_NXZ
    protected bool _makeFmtMark(/* TODO 参数 */);  // ?_makeFmtMark@pt_PieceTable@@IAE_NAAPAVpf_Frag_FmtMark@@@Z
    protected bool _makeFmtMark(/* TODO 参数 */);  // ?_makeFmtMark@pt_PieceTable@@IAE_NAAPAVpf_Frag_FmtMark@@PAPB
    protected bool _makeObject(/* TODO 参数 */);  // ?_makeObject@pt_PieceTable@@IAE_NW4_PTObjectType@@PAPBDAAPAV
    protected bool _makeStrux(/* TODO 参数 */);  // ?_makeStrux@pt_PieceTable@@IAE_NW4_PTStruxType@@PAPBDAAPAVpf
    protected bool _realChangeSectionAttsNoUpdate(/* TODO 参数 */);  // ?_realChangeSectionAttsNoUpdate@pt_PieceTable@@IAE_NPAVpf_Fr
    protected bool _realChangeSpanFmt(/* TODO 参数 */);  // ?_realChangeSpanFmt@pt_PieceTable@@IAE_NW4_PTChangeFmt@@IIPA
    protected bool _realChangeStruxFmt(/* TODO 参数 */);  // ?_realChangeStruxFmt@pt_PieceTable@@IAE_NW4_PTChangeFmt@@IIP
    protected bool _realChangeStruxForLists(/* TODO 参数 */);  // ?_realChangeStruxForLists@pt_PieceTable@@IAE_NPBXPBD_N@Z
    protected /* 未知 */ _realDeleteHdrFtrStrux(/* TODO 参数 */);  // ?_realDeleteHdrFtrStrux@pt_PieceTable@@IAEXPAVpf_Frag_Strux@
    protected bool _realDeleteSpan(/* TODO 参数 */);  // ?_realDeleteSpan@pt_PieceTable@@IAE_NIIPAVPP_AttrProp@@_N1@Z
    protected bool _realInsertObject(/* TODO 参数 */);  // ?_realInsertObject@pt_PieceTable@@IAE_NIW4_PTObjectType@@PAP
    protected bool _realInsertObject(/* TODO 参数 */);  // ?_realInsertObject@pt_PieceTable@@IAE_NIW4_PTObjectType@@PAP
    protected bool _realInsertSpan(/* TODO 参数 */);  // ?_realInsertSpan@pt_PieceTable@@IAE_NIPBIIPAPBD1PAVfd_Field@
    protected bool _realInsertStrux(/* TODO 参数 */);  // ?_realInsertStrux@pt_PieceTable@@IAE_NIW4_PTStruxType@@PAPBD
    public /* 未知 */ _struxHasContent(/* TODO 参数 */);  // ?_struxHasContent@pt_PieceTable@@IBE_NPAVpf_Frag_Strux@@@Z
    public /* 未知 */ _struxIsEmpty(/* TODO 参数 */);  // ?_struxIsEmpty@pt_PieceTable@@IBE_NPAVpf_Frag_Strux@@@Z
    protected bool _tellAndMaybeAddListener(/* TODO 参数 */);  // ?_tellAndMaybeAddListener@pt_PieceTable@@IAE_NPAVPL_Listener
    protected bool _translateRevisionAttribute(/* TODO 参数 */);  // ?_translateRevisionAttribute@pt_PieceTable@@IAE_NAAVPP_Revis
    public /* 未知 */ _tweakDeleteSpan(/* TODO 参数 */);  // ?_tweakDeleteSpan@pt_PieceTable@@IBE_NAAI0PAVUT_Stack@@@Z
    public /* 未知 */ _tweakDeleteSpanOnce(/* TODO 参数 */);  // ?_tweakDeleteSpanOnce@pt_PieceTable@@IBE_NAAI0PAVUT_Stack@@@
    public /* 未知 */ _tweakFieldSpan(/* TODO 参数 */);  // ?_tweakFieldSpan@pt_PieceTable@@IBEXAAI0@Z
    protected /* 未知 */ _unlinkFrag(/* TODO 参数 */);  // ?_unlinkFrag@pt_PieceTable@@IAEXPAVpf_Frag@@PAPAV2@PAI@Z
    protected bool _unlinkStrux(/* TODO 参数 */);  // ?_unlinkStrux@pt_PieceTable@@IAE_NPAVpf_Frag_Strux@@PAPAVpf_
    protected bool _unlinkStrux_Block(/* TODO 参数 */);  // ?_unlinkStrux_Block@pt_PieceTable@@IAE_NPAVpf_Frag_Strux@@PA
    protected bool _unlinkStrux_Section(/* TODO 参数 */);  // ?_unlinkStrux_Section@pt_PieceTable@@IAE_NPAVpf_Frag_Strux@@
    public bool addComposite(/* TODO 参数 */);  // ?addComposite@pt_PieceTable@@QAE_NPAVpf_Frag@@PAPAVEMRCompos
    public bool addElement(/* TODO 参数 */);  // ?addElement@pt_PieceTable@@QAE_NPAVpf_Frag@@PBDPAPAVEMREleme
    public bool addListener(/* TODO 参数 */);  // ?addListener@pt_PieceTable@@QAE_NPAVPL_Listener@@I@Z
    public bool appendFmt(/* TODO 参数 */);  // ?appendFmt@pt_PieceTable@@QAE_NPAPBD@Z
    public bool appendFmt(/* TODO 参数 */);  // ?appendFmt@pt_PieceTable@@QAE_NPBV?$UT_GenericVector@PAD@@@Z
    public bool appendFmtMark(/* TODO 参数 */);  // ?appendFmtMark@pt_PieceTable@@QAE_NXZ
    public bool appendLastStruxFmt(/* TODO 参数 */);  // ?appendLastStruxFmt@pt_PieceTable@@QAE_NW4_PTStruxType@@PAPB
    public bool appendLastStruxFmt(/* TODO 参数 */);  // ?appendLastStruxFmt@pt_PieceTable@@QAE_NW4_PTStruxType@@PAPB
    public bool appendObject(/* TODO 参数 */);  // ?appendObject@pt_PieceTable@@QAE_NW4_PTObjectType@@PAPBD@Z
    public bool appendSpan(/* TODO 参数 */);  // ?appendSpan@pt_PieceTable@@QAE_NPBII@Z
    public bool appendStrux(/* TODO 参数 */);  // ?appendStrux@pt_PieceTable@@QAE_NW4_PTStruxType@@PAPBDPAPAVp
    public bool appendStruxFmt(/* TODO 参数 */);  // ?appendStruxFmt@pt_PieceTable@@QAE_NPAVpf_Frag_Strux@@PAPBD@
    public bool appendStyle(/* TODO 参数 */);  // ?appendStyle@pt_PieceTable@@QAE_NPAPBD@Z
    public /* 未知 */ beginMultiStepGlob(/* TODO 参数 */);  // ?beginMultiStepGlob@pt_PieceTable@@QAEXXZ
    public /* 未知 */ beginUserAtomicGlob(/* TODO 参数 */);  // ?beginUserAtomicGlob@pt_PieceTable@@QAEXXZ
    public const bool canDo(/* TODO 参数 */);  // ?canDo@pt_PieceTable@@QBE_N_N@Z
    public bool changeLastStruxFmtNoUndo(/* TODO 参数 */);  // ?changeLastStruxFmtNoUndo@pt_PieceTable@@QAE_NIW4_PTStruxTyp
    public bool changeLastStruxFmtNoUndo(/* TODO 参数 */);  // ?changeLastStruxFmtNoUndo@pt_PieceTable@@QAE_NIW4_PTStruxTyp
    public bool changeObjectFormatNoUpdate(/* TODO 参数 */);  // ?changeObjectFormatNoUpdate@pt_PieceTable@@QAE_NW4_PTChangeF
    public bool changeSectionAttsNoUpdate(/* TODO 参数 */);  // ?changeSectionAttsNoUpdate@pt_PieceTable@@QAE_NPAVpf_Frag_St
    public bool changeSpanFmt(/* TODO 参数 */);  // ?changeSpanFmt@pt_PieceTable@@QAE_NW4_PTChangeFmt@@IIPAPBD1_
    public bool changeStruxFmt(/* TODO 参数 */);  // ?changeStruxFmt@pt_PieceTable@@QAE_NW4_PTChangeFmt@@IIPAPBD1
    public bool changeStruxFmtNoUndo(/* TODO 参数 */);  // ?changeStruxFmtNoUndo@pt_PieceTable@@QAE_NW4_PTChangeFmt@@PA
    public bool changeStruxForLists(/* TODO 参数 */);  // ?changeStruxForLists@pt_PieceTable@@QAE_NPBXPBD@Z
    public bool changeStruxFormatNoUpdate(/* TODO 参数 */);  // ?changeStruxFormatNoUpdate@pt_PieceTable@@QAE_NW4_PTChangeFm
    public bool checkfontfamily(/* TODO 参数 */);  // ?checkfontfamily@pt_PieceTable@@QAE_NPBIII_N11@Z
    public /* 未知 */ clearIfAtFmtMark(/* TODO 参数 */);  // ?clearIfAtFmtMark@pt_PieceTable@@QAEXI@Z
    public /* 未知 */ clearUndo(/* TODO 参数 */);  // ?clearUndo@pt_PieceTable@@QAEXXZ
    public bool deleteFieldFrag(/* TODO 参数 */);  // ?deleteFieldFrag@pt_PieceTable@@QAE_NPAVpf_Frag@@@Z
    public /* 未知 */ deleteHdrFtrStrux(/* TODO 参数 */);  // ?deleteHdrFtrStrux@pt_PieceTable@@QAEXPAVpf_Frag_Strux@@@Z
    public bool deleteSpan(/* TODO 参数 */);  // ?deleteSpan@pt_PieceTable@@QAE_NIIPAVPP_AttrProp@@AAI_N2@Z
    public bool deleteSpan(/* TODO 参数 */);  // ?deleteSpan@pt_PieceTable@@QAE_NIIPAVPP_AttrProp@@AAI_N@Z
    public bool deleteSpanWithTable(/* TODO 参数 */);  // ?deleteSpanWithTable@pt_PieceTable@@QAE_NIIPAVPP_AttrProp@@A
    public bool deleteStruxNoUpdate(/* TODO 参数 */);  // ?deleteStruxNoUpdate@pt_PieceTable@@QAE_NPBX@Z
    public /* 未知 */ endMultiStepGlob(/* TODO 参数 */);  // ?endMultiStepGlob@pt_PieceTable@@QAEXXZ
    public /* 未知 */ endUserAtomicGlob(/* TODO 参数 */);  // ?endUserAtomicGlob@pt_PieceTable@@QAEXXZ
    public const bool enumStyles(/* TODO 参数 */);  // ?enumStyles@pt_PieceTable@@QBE_NAAPAV?$UT_GenericVector@PAVP
    public const bool enumStyles(/* TODO 参数 */);  // ?enumStyles@pt_PieceTable@@QBE_NIPAPBDPAPBVPD_Style@@@Z
    public /* 未知 */ fixMissingXIDs(/* TODO 参数 */);  // ?fixMissingXIDs@pt_PieceTable@@QAEXXZ
    public const /* 未知 */ getAllStyles(/* TODO 参数 */);  // ?getAllStyles@pt_PieceTable@@QBEABV?$UT_GenericStringMap@PAV
    public const bool getAttrProp(/* TODO 参数 */);  // ?getAttrProp@pt_PieceTable@@QBE_NIPAPBVPP_AttrProp@@@Z
    public const bool getBlockBuf(/* TODO 参数 */);  // ?getBlockBuf@pt_PieceTable@@QBE_NPBXPAVUT_GrowBuf@@@Z
    public const bool getBounds(/* TODO 参数 */);  // ?getBounds@pt_PieceTable@@QBE_N_NAAI@Z
    public /* 未知 */ getChangeHistory(/* TODO 参数 */);  // ?getChangeHistory@pt_PieceTable@@QAEPAVpx_ChangeHistory@@XZ
    public const /* 未知 */ getCursorStatus(/* TODO 参数 */);  // ?getCursorStatus@pt_PieceTable@@QBE?AW4_PPTCursorStatus@@XZ
    public /* 未知 */ getDocument(/* TODO 参数 */);  // ?getDocument@pt_PieceTable@@QAEPAVPD_Document@@XZ
    public /* 未知 */ getElementListByRoot(/* TODO 参数 */);  // ?getElementListByRoot@pt_PieceTable@@QAEXPAVpf_Frag@@AAV?$ba
    public /* 未知 */ getElementsList(/* TODO 参数 */);  // ?getElementsList@pt_PieceTable@@QAEXPAVpf_Frag@@AAV?$basic_s
    public const bool getFragFromPosition(/* TODO 参数 */);  // ?getFragFromPosition@pt_PieceTable@@QBE_NIPAPAVpf_Frag@@PAI@
    public const /* 未知 */ getFragNumber(/* TODO 参数 */);  // ?getFragNumber@pt_PieceTable@@QBEIPAVpf_Frag@@@Z
    public const /* 未知 */ getFragPosition(/* TODO 参数 */);  // ?getFragPosition@pt_PieceTable@@QBEIPBVpf_Frag@@@Z
    public /* 未知 */ getFragments(/* TODO 参数 */);  // ?getFragments@pt_PieceTable@@QAEAAVpf_Fragments@@XZ
    public const bool getFragsFromPositions(/* TODO 参数 */);  // ?getFragsFromPositions@pt_PieceTable@@QBE_NIIPAPAVpf_Frag@@P
    public /* 未知 */ getGlobFlags(/* TODO 参数 */);  // ?getGlobFlags@pt_PieceTable@@QAEEPAVPX_ChangeRecord@@@Z
    public const /* 未知 */ getPieceTableState(/* TODO 参数 */);  // ?getPieceTableState@pt_PieceTable@@QBE?BW4_PTState@@XZ
    public const /* 未知 */ getPointer(/* TODO 参数 */);  // ?getPointer@pt_PieceTable@@QBEPBII@Z
    public bool getPrevTextFrag(/* TODO 参数 */);  // ?getPrevTextFrag@pt_PieceTable@@QAE_NPAVpf_Frag@@PAPAVpf_Fra
    public bool getRegionBegin(/* TODO 参数 */);  // ?getRegionBegin@pt_PieceTable@@QAE_NPAVpf_Frag@@PAPAVpf_Frag
    public bool getRegionEnd(/* TODO 参数 */);  // ?getRegionEnd@pt_PieceTable@@QAE_NPAVpf_Frag@@PAPAVpf_Frag_T
    public /* 未知 */ getRegionLength(/* TODO 参数 */);  // ?getRegionLength@pt_PieceTable@@QAEIPAVpf_Frag@@PAPAVpf_Frag
    public const bool getSpanAttrProp(/* TODO 参数 */);  // ?getSpanAttrProp@pt_PieceTable@@QBE_NPBXI_NPAPBVPP_AttrProp@
    public const bool getStruxFromPosition(/* TODO 参数 */);  // ?getStruxFromPosition@pt_PieceTable@@QBE_NIIPAPBX@Z
    public const bool getStruxOfTypeFromPosition(/* TODO 参数 */);  // ?getStruxOfTypeFromPosition@pt_PieceTable@@QBE_NIIW4_PTStrux
    public const bool getStruxOfTypeFromPosition(/* TODO 参数 */);  // ?getStruxOfTypeFromPosition@pt_PieceTable@@QBE_NIW4_PTStruxT
    public const /* 未知 */ getStruxPosition(/* TODO 参数 */);  // ?getStruxPosition@pt_PieceTable@@QBEIPBX@Z
    public const bool getStyle(/* TODO 参数 */);  // ?getStyle@pt_PieceTable@@QBE_NPBDPAPAVPD_Style@@@Z
    public /* 未知 */ getStyleCount(/* TODO 参数 */);  // ?getStyleCount@pt_PieceTable@@QAEIXZ
    public const /* 未知 */ getTopXID(/* TODO 参数 */);  // ?getTopXID@pt_PieceTable@@QBEIXZ
    public /* 未知 */ getVarSet(/* TODO 参数 */);  // ?getVarSet@pt_PieceTable@@QAEAAVpt_VarSet@@XZ
    public /* 未知 */ getXID(/* TODO 参数 */);  // ?getXID@pt_PieceTable@@QAEIXZ
    public bool insertFmtMark(/* TODO 参数 */);  // ?insertFmtMark@pt_PieceTable@@QAE_NW4_PTChangeFmt@@IPAVPP_At
    public bool insertFmtMarkBeforeFrag(/* TODO 参数 */);  // ?insertFmtMarkBeforeFrag@pt_PieceTable@@QAE_NPAVpf_Frag@@@Z
    public bool insertFmtMarkBeforeFrag(/* TODO 参数 */);  // ?insertFmtMarkBeforeFrag@pt_PieceTable@@QAE_NPAVpf_Frag@@PAP
    public bool insertObject(/* TODO 参数 */);  // ?insertObject@pt_PieceTable@@QAE_NIW4_PTObjectType@@PAPBD1@Z
    public bool insertObject(/* TODO 参数 */);  // ?insertObject@pt_PieceTable@@QAE_NIW4_PTObjectType@@PAPBD1PA
    public bool insertObjectBeforeFrag(/* TODO 参数 */);  // ?insertObjectBeforeFrag@pt_PieceTable@@QAE_NPAVpf_Frag@@W4_P
    public bool insertSpan(/* TODO 参数 */);  // ?insertSpan@pt_PieceTable@@QAE_NIPBIIPAVfd_Field@@_N@Z
    public bool insertSpanBeforeFrag(/* TODO 参数 */);  // ?insertSpanBeforeFrag@pt_PieceTable@@QAE_NPAVpf_Frag@@PBII@Z
    public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@pt_PieceTable@@QAE_NIW4_PTStruxType@@PAPAVpf_Fr
    public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@pt_PieceTable@@QAE_NIW4_PTStruxType@@PAPBD1PAPA
    public bool insertStruxBeforeFrag(/* TODO 参数 */);  // ?insertStruxBeforeFrag@pt_PieceTable@@QAE_NPAVpf_Frag@@W4_PT
    public bool insertStruxNoUpdateBefore(/* TODO 参数 */);  // ?insertStruxNoUpdateBefore@pt_PieceTable@@QAE_NPBXW4_PTStrux
    public const bool isDirty(/* TODO 参数 */);  // ?isDirty@pt_PieceTable@@QBE_NXZ
    public const bool isDoingTheDo(/* TODO 参数 */);  // ?isDoingTheDo@pt_PieceTable@@QBE_NXZ
    public const bool isEndFootnote(/* TODO 参数 */);  // ?isEndFootnote@pt_PieceTable@@QBE_NPAVpf_Frag@@@Z
    public const bool isFootnote(/* TODO 参数 */);  // ?isFootnote@pt_PieceTable@@QBE_NPAVpf_Frag@@@Z
    public bool par_str(/* TODO 参数 */);  // ?par_str@pt_PieceTable@@QAE_NPBDAAV?$basic_string@DU?$char_t
    public bool purgeFmtMarks(/* TODO 参数 */);  // ?purgeFmtMarks@pt_PieceTable@@QAE_NXZ
    public bool redoCmd(/* TODO 参数 */);  // ?redoCmd@pt_PieceTable@@QAE_NXZ
    public bool removeStyle(/* TODO 参数 */);  // ?removeStyle@pt_PieceTable@@QAE_NPBD@Z
    public /* 未知 */ s_getLocalisedStyleName(/* TODO 参数 */);  // ?s_getLocalisedStyleName@pt_PieceTable@@SAXPBDAAVUT_UTF8Stri
    public /* 未知 */ setCRNumber(/* TODO 参数 */);  // ?setCRNumber@pt_PieceTable@@QAEXH@Z
    public /* 未知 */ setClean(/* TODO 参数 */);  // ?setClean@pt_PieceTable@@QAEXXZ
    public /* 未知 */ setDoNotTweakPosition(/* TODO 参数 */);  // ?setDoNotTweakPosition@pt_PieceTable@@QAEX_N@Z
    public /* 未知 */ setPieceTableState(/* TODO 参数 */);  // ?setPieceTableState@pt_PieceTable@@QAEXW4_PTState@@@Z
    public /* 未知 */ setXIDThreshold(/* TODO 参数 */);  // ?setXIDThreshold@pt_PieceTable@@QAEXI@Z
    public bool tellListener(/* TODO 参数 */);  // ?tellListener@pt_PieceTable@@QAE_NPAVPL_Listener@@@Z
    public bool tellListenerSubset(/* TODO 参数 */);  // ?tellListenerSubset@pt_PieceTable@@QAE_NPAVPL_Listener@@PAVP
    public bool undoCmd(/* TODO 参数 */);  // ?undoCmd@pt_PieceTable@@QAE_NXZ
    public const /* 未知 */ undoCount(/* TODO 参数 */);  // ?undoCount@pt_PieceTable@@QBEI_N@Z
    public /* 未知 */ uwChangeSpanFmt(/* TODO 参数 */);  // ?uwChangeSpanFmt@pt_PieceTable@@QAEXPAVppt_RegionState@@@Z
    public const bool uwgetFragFromPosition(/* TODO 参数 */);  // ?uwgetFragFromPosition@pt_PieceTable@@QBE_NIPAPAVpf_Frag@@PA
};

/* ---- pt_VarSet (18 方法) ---- */
class pt_VarSet {
public:
    public /* 未知 */ _finishConstruction(/* TODO 参数 */);  // ?_finishConstruction@pt_VarSet@@AAE_NXZ
    public /* 未知 */ _makeAPIndex(/* TODO 参数 */);  // ?_makeAPIndex@pt_VarSet@@ABEIII@Z
    public /* 未知 */ _makeBufIndex(/* TODO 参数 */);  // ?_makeBufIndex@pt_VarSet@@ABEIII@Z
    public /* 未知 */ _subscriptFromAPIndex(/* TODO 参数 */);  // ?_subscriptFromAPIndex@pt_VarSet@@ABEII@Z
    public /* 未知 */ _subscriptFromBufIndex(/* TODO 参数 */);  // ?_subscriptFromBufIndex@pt_VarSet@@ABEII@Z
    public /* 未知 */ _varsetFromAPIndex(/* TODO 参数 */);  // ?_varsetFromAPIndex@pt_VarSet@@ABEII@Z
    public /* 未知 */ _varsetFromBufIndex(/* TODO 参数 */);  // ?_varsetFromBufIndex@pt_VarSet@@ABEII@Z
    public bool addIfUniqueAP(/* TODO 参数 */);  // ?addIfUniqueAP@pt_VarSet@@QAE_NPAVPP_AttrProp@@PAI@Z
    public bool appendBuf(/* TODO 参数 */);  // ?appendBuf@pt_VarSet@@QAE_NPBIIPAI@Z
    public const /* 未知 */ getAP(/* TODO 参数 */);  // ?getAP@pt_VarSet@@QBEPBVPP_AttrProp@@I@Z
    public const /* 未知 */ getBufIndex(/* TODO 参数 */);  // ?getBufIndex@pt_VarSet@@QBEIII@Z
    public const /* 未知 */ getPointer(/* TODO 参数 */);  // ?getPointer@pt_VarSet@@QBEPBII@Z
    public const bool isContiguous(/* TODO 参数 */);  // ?isContiguous@pt_VarSet@@QBE_NIII@Z
    public bool mergeAP(/* TODO 参数 */);  // ?mergeAP@pt_VarSet@@QAE_NW4_PTChangeFmt@@IPAPBD1PAIPAVPD_Doc
    public bool overwriteBuf(/* TODO 参数 */);  // ?overwriteBuf@pt_VarSet@@QAE_NPAII0@Z
    public /* 未知 */ setPieceTableState(/* TODO 参数 */);  // ?setPieceTableState@pt_VarSet@@QAEXW4_PTState@@@Z
    public bool storeAP(/* TODO 参数 */);  // ?storeAP@pt_VarSet@@QAE_NPAPBDPAI@Z
    public bool storeAP(/* TODO 参数 */);  // ?storeAP@pt_VarSet@@QAE_NPBV?$UT_GenericVector@PAD@@PAI@Z
};

/* ---- px_ChangeHistory (16 方法) ---- */
class px_ChangeHistory {
public:
    protected /* 未知 */ _invalidateRedo(/* TODO 参数 */);  // ?_invalidateRedo@px_ChangeHistory@@IAEXXZ
    public bool addChangeRecord(/* TODO 参数 */);  // ?addChangeRecord@px_ChangeHistory@@QAE_NPAVPX_ChangeRecord@@
    public const bool canDo(/* TODO 参数 */);  // ?canDo@px_ChangeHistory@@QBE_N_N@Z
    public /* 未知 */ clearHistory(/* TODO 参数 */);  // ?clearHistory@px_ChangeHistory@@QAEXXZ
    public /* 未知 */ coalesceHistory(/* TODO 参数 */);  // ?coalesceHistory@px_ChangeHistory@@QAEXPBVPX_ChangeRecord@@@
    public bool didRedo(/* TODO 参数 */);  // ?didRedo@px_ChangeHistory@@QAE_NXZ
    public bool didUndo(/* TODO 参数 */);  // ?didUndo@px_ChangeHistory@@QAE_NXZ
    public const bool getRedo(/* TODO 参数 */);  // ?getRedo@px_ChangeHistory@@QBE_NPAPAVPX_ChangeRecord@@@Z
    public const /* 未知 */ getSavePosition(/* TODO 参数 */);  // ?getSavePosition@px_ChangeHistory@@QBEHXZ
    public const bool getUndo(/* TODO 参数 */);  // ?getUndo@px_ChangeHistory@@QBE_NPAPAVPX_ChangeRecord@@@Z
    public const bool getUndo(/* TODO 参数 */);  // ?getUndo@px_ChangeHistory@@QBE_NPAPAVPX_ChangeRecord@@I@Z
    public const /* 未知 */ getUndoPos(/* TODO 参数 */);  // ?getUndoPos@px_ChangeHistory@@QBEIXZ
    public const bool isDirty(/* TODO 参数 */);  // ?isDirty@px_ChangeHistory@@QBE_NXZ
    public /* 未知 */ setClean(/* TODO 参数 */);  // ?setClean@px_ChangeHistory@@QAEXXZ
    public /* 未知 */ setSavePosition(/* TODO 参数 */);  // ?setSavePosition@px_ChangeHistory@@QAEXH@Z
    public /* 未知 */ uwGetChangeRecords(/* TODO 参数 */);  // ?uwGetChangeRecords@px_ChangeHistory@@QAEPAV?$UT_GenericVect
};

/* ---- s_RTF_AttrPropAdapter_AP (2 方法) ---- */
class s_RTF_AttrPropAdapter_AP {
public:
    virtual public const /* 未知 */ getAttribute(/* TODO 参数 */);  // ?getAttribute@s_RTF_AttrPropAdapter_AP@@UBEPBDPBD@Z
    virtual public const /* 未知 */ getProperty(/* TODO 参数 */);  // ?getProperty@s_RTF_AttrPropAdapter_AP@@UBEPBDPBD@Z
};

/* ---- s_RTF_AttrPropAdapter_Style (2 方法) ---- */
class s_RTF_AttrPropAdapter_Style {
public:
    virtual public const /* 未知 */ getAttribute(/* TODO 参数 */);  // ?getAttribute@s_RTF_AttrPropAdapter_Style@@UBEPBDPBD@Z
    virtual public const /* 未知 */ getProperty(/* TODO 参数 */);  // ?getProperty@s_RTF_AttrPropAdapter_Style@@UBEPBDPBD@Z
};

/* ---- s_RTF_ListenerGetProps (16 方法) ---- */
class s_RTF_ListenerGetProps {
public:
    protected /* 未知 */ _check_revs_for_color(/* TODO 参数 */);  // ?_check_revs_for_color@s_RTF_ListenerGetProps@@IAEXPBVPP_Att
    protected /* 未知 */ _check_revs_for_font(/* TODO 参数 */);  // ?_check_revs_for_font@s_RTF_ListenerGetProps@@IAEXPBVPP_Attr
    protected /* 未知 */ _closeBlock(/* TODO 参数 */);  // ?_closeBlock@s_RTF_ListenerGetProps@@IAEXXZ
    protected /* 未知 */ _closeSection(/* TODO 参数 */);  // ?_closeSection@s_RTF_ListenerGetProps@@IAEXXZ
    protected /* 未知 */ _closeSpan(/* TODO 参数 */);  // ?_closeSpan@s_RTF_ListenerGetProps@@IAEXXZ
    protected /* 未知 */ _compute_span_properties(/* TODO 参数 */);  // ?_compute_span_properties@s_RTF_ListenerGetProps@@IAEXPBVPP_
    protected /* 未知 */ _openSpan(/* TODO 参数 */);  // ?_openSpan@s_RTF_ListenerGetProps@@IAEXI@Z
    protected /* 未知 */ _outputData(/* TODO 参数 */);  // ?_outputData@s_RTF_ListenerGetProps@@IAEXPBII@Z
    protected /* 未知 */ _searchCellAPI(/* TODO 参数 */);  // ?_searchCellAPI@s_RTF_ListenerGetProps@@IAEXI@Z
    protected /* 未知 */ _searchTableAPI(/* TODO 参数 */);  // ?_searchTableAPI@s_RTF_ListenerGetProps@@IAEXI@Z
    virtual public bool change(/* TODO 参数 */);  // ?change@s_RTF_ListenerGetProps@@UAE_NPBXPBVPX_ChangeRecord@@
    public bool hasBlock(/* TODO 参数 */);  // ?hasBlock@s_RTF_ListenerGetProps@@QAE_NXZ
    virtual public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@s_RTF_ListenerGetProps@@UAE_NPBXPBVPX_ChangeRec
    virtual public bool populate(/* TODO 参数 */);  // ?populate@s_RTF_ListenerGetProps@@UAE_NPBXPBVPX_ChangeRecord
    virtual public bool populateStrux(/* TODO 参数 */);  // ?populateStrux@s_RTF_ListenerGetProps@@UAE_NPBXPBVPX_ChangeR
    virtual public bool signal(/* TODO 参数 */);  // ?signal@s_RTF_ListenerGetProps@@UAE_NI@Z
};

/* ---- s_RTF_ListenerWriteDoc (44 方法) ---- */
class s_RTF_ListenerWriteDoc {
public:
    protected /* 未知 */ _closeBlock(/* TODO 参数 */);  // ?_closeBlock@s_RTF_ListenerWriteDoc@@IAEXI@Z
    protected /* 未知 */ _closeFrame(/* TODO 参数 */);  // ?_closeFrame@s_RTF_ListenerWriteDoc@@IAEXXZ
    protected /* 未知 */ _closeSection(/* TODO 参数 */);  // ?_closeSection@s_RTF_ListenerWriteDoc@@IAEXXZ
    protected /* 未知 */ _closeSpan(/* TODO 参数 */);  // ?_closeSpan@s_RTF_ListenerWriteDoc@@IAEXXZ
    protected /* 未知 */ _close_cell(/* TODO 参数 */);  // ?_close_cell@s_RTF_ListenerWriteDoc@@IAEXXZ
    protected /* 未知 */ _close_table(/* TODO 参数 */);  // ?_close_table@s_RTF_ListenerWriteDoc@@IAEXXZ
    protected /* 未知 */ _exportCellProps(/* TODO 参数 */);  // ?_exportCellProps@s_RTF_ListenerWriteDoc@@IAEXIAAVUT_String@
    protected /* 未知 */ _export_AbiWord_Cell_props(/* TODO 参数 */);  // ?_export_AbiWord_Cell_props@s_RTF_ListenerWriteDoc@@IAEXI_N@
    protected /* 未知 */ _export_AbiWord_Table_props(/* TODO 参数 */);  // ?_export_AbiWord_Table_props@s_RTF_ListenerWriteDoc@@IAEXI@Z
    protected /* 未知 */ _fillCellProps(/* TODO 参数 */);  // ?_fillCellProps@s_RTF_ListenerWriteDoc@@IAEXIAAVUT_String@@@
    protected /* 未知 */ _fillTableProps(/* TODO 参数 */);  // ?_fillTableProps@s_RTF_ListenerWriteDoc@@IAEXIAAVUT_String@@
    protected /* 未知 */ _getColumnWidthInches(/* TODO 参数 */);  // ?_getColumnWidthInches@s_RTF_ListenerWriteDoc@@IAENXZ
    protected /* 未知 */ _getFieldValue(/* TODO 参数 */);  // ?_getFieldValue@s_RTF_ListenerWriteDoc@@IAEPBIXZ
    protected /* 未知 */ _getPropString(/* TODO 参数 */);  // ?_getPropString@s_RTF_ListenerWriteDoc@@IAEXVUT_String@@PBDA
    public /* 未知 */ _isListBlock(/* TODO 参数 */);  // ?_isListBlock@s_RTF_ListenerWriteDoc@@IBE_NXZ
    public /* 未知 */ _isTabEaten(/* TODO 参数 */);  // ?_isTabEaten@s_RTF_ListenerWriteDoc@@IBE_NXZ
    protected /* 未知 */ _newRow(/* TODO 参数 */);  // ?_newRow@s_RTF_ListenerWriteDoc@@IAEXXZ
    protected /* 未知 */ _openFrame(/* TODO 参数 */);  // ?_openFrame@s_RTF_ListenerWriteDoc@@IAEXI@Z
    protected /* 未知 */ _openSpan(/* TODO 参数 */);  // ?_openSpan@s_RTF_ListenerWriteDoc@@IAEXIPBVPP_AttrProp@@@Z
    protected /* 未知 */ _openTag(/* TODO 参数 */);  // ?_openTag@s_RTF_ListenerWriteDoc@@IAEXPBD0_NI@Z
    protected /* 未知 */ _open_cell(/* TODO 参数 */);  // ?_open_cell@s_RTF_ListenerWriteDoc@@IAEXI@Z
    protected /* 未知 */ _open_table(/* TODO 参数 */);  // ?_open_table@s_RTF_ListenerWriteDoc@@IAEXI_N@Z
    protected /* 未知 */ _outputCellBorders(/* TODO 参数 */);  // ?_outputCellBorders@s_RTF_ListenerWriteDoc@@IAEXH@Z
    protected /* 未知 */ _outputData(/* TODO 参数 */);  // ?_outputData@s_RTF_ListenerWriteDoc@@IAEXPBIII_N@Z
    protected /* 未知 */ _outputTableBorders(/* TODO 参数 */);  // ?_outputTableBorders@s_RTF_ListenerWriteDoc@@IAEXH@Z
    protected /* 未知 */ _rtf_docfmt(/* TODO 参数 */);  // ?_rtf_docfmt@s_RTF_ListenerWriteDoc@@IAEXXZ
    protected /* 未知 */ _rtf_info(/* TODO 参数 */);  // ?_rtf_info@s_RTF_ListenerWriteDoc@@IAEXXZ
    protected /* 未知 */ _rtf_open_block(/* TODO 参数 */);  // ?_rtf_open_block@s_RTF_ListenerWriteDoc@@IAEXI@Z
    protected /* 未知 */ _rtf_open_section(/* TODO 参数 */);  // ?_rtf_open_section@s_RTF_ListenerWriteDoc@@IAEXI@Z
    protected /* 未知 */ _setListBlock(/* TODO 参数 */);  // ?_setListBlock@s_RTF_ListenerWriteDoc@@IAEX_N@Z
    protected /* 未知 */ _setTabEaten(/* TODO 参数 */);  // ?_setTabEaten@s_RTF_ListenerWriteDoc@@IAEX_N@Z
    protected /* 未知 */ _writeBookmark(/* TODO 参数 */);  // ?_writeBookmark@s_RTF_ListenerWriteDoc@@IAEXPBVPX_ChangeReco
    protected /* 未知 */ _writeFieldPreamble(/* TODO 参数 */);  // ?_writeFieldPreamble@s_RTF_ListenerWriteDoc@@IAEXPBVPP_AttrP
    protected /* 未知 */ _writeFieldTrailer(/* TODO 参数 */);  // ?_writeFieldTrailer@s_RTF_ListenerWriteDoc@@IAEXXZ
    protected /* 未知 */ _writeHyperlink(/* TODO 参数 */);  // ?_writeHyperlink@s_RTF_ListenerWriteDoc@@IAEXPBVPX_ChangeRec
    protected /* 未知 */ _writeImageInRTF(/* TODO 参数 */);  // ?_writeImageInRTF@s_RTF_ListenerWriteDoc@@IAEXPBVPX_ChangeRe
    protected /* 未知 */ _writeSPNumProp(/* TODO 参数 */);  // ?_writeSPNumProp@s_RTF_ListenerWriteDoc@@IAEXPBDH@Z
    protected /* 未知 */ _writeTOC(/* TODO 参数 */);  // ?_writeTOC@s_RTF_ListenerWriteDoc@@IAEXI@Z
    virtual public bool change(/* TODO 参数 */);  // ?change@s_RTF_ListenerWriteDoc@@UAE_NPBXPBVPX_ChangeRecord@@
    protected /* 未知 */ getRightOfCell(/* TODO 参数 */);  // ?getRightOfCell@s_RTF_ListenerWriteDoc@@IAEHHH@Z
    virtual public bool insertStrux(/* TODO 参数 */);  // ?insertStrux@s_RTF_ListenerWriteDoc@@UAE_NPBXPBVPX_ChangeRec
    virtual public bool populate(/* TODO 参数 */);  // ?populate@s_RTF_ListenerWriteDoc@@UAE_NPBXPBVPX_ChangeRecord
    virtual public bool populateStrux(/* TODO 参数 */);  // ?populateStrux@s_RTF_ListenerWriteDoc@@UAE_NPBXPBVPX_ChangeR
    virtual public bool signal(/* TODO 参数 */);  // ?signal@s_RTF_ListenerWriteDoc@@UAE_NI@Z
};

/* ---- s_TemplateHandler (12 方法) ---- */
class s_TemplateHandler {
public:
    virtual public /* 未知 */ CharData(/* TODO 参数 */);  // ?CharData@s_TemplateHandler@@UAEXPBDH@Z
    virtual public /* 未知 */ Comment(/* TODO 参数 */);  // ?Comment@s_TemplateHandler@@UAEXPBD@Z
    virtual public /* 未知 */ Default(/* TODO 参数 */);  // ?Default@s_TemplateHandler@@UAEXPBDH@Z
    virtual public /* 未知 */ EndCdataSection(/* TODO 参数 */);  // ?EndCdataSection@s_TemplateHandler@@UAEXXZ
    virtual public /* 未知 */ EndElement(/* TODO 参数 */);  // ?EndElement@s_TemplateHandler@@UAEXPBD@Z
    virtual public /* 未知 */ ProcessingInstruction(/* TODO 参数 */);  // ?ProcessingInstruction@s_TemplateHandler@@UAEXPBD0@Z
    virtual public /* 未知 */ StartCdataSection(/* TODO 参数 */);  // ?StartCdataSection@s_TemplateHandler@@UAEXXZ
    virtual public /* 未知 */ StartElement(/* TODO 参数 */);  // ?StartElement@s_TemplateHandler@@UAEXPBDPAPBD@Z
    public /* 未知 */ _handleMeta(/* TODO 参数 */);  // ?_handleMeta@s_TemplateHandler@@AAEXXZ
    public /* 未知 */ _handleMetaTag(/* TODO 参数 */);  // ?_handleMetaTag@s_TemplateHandler@@AAEXPBDAAVUT_UTF8String@@
    public /* 未知 */ condition(/* TODO 参数 */);  // ?condition@s_TemplateHandler@@ABE_NPBD@Z
    public /* 未知 */ echo(/* TODO 参数 */);  // ?echo@s_TemplateHandler@@ABE_NXZ
};

#endif // UWWORDDLL_API_H