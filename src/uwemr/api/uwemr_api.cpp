// uwemr/api/uwemr_api.cpp — C 业务入口实现骨架（clean-room）
//
// 对应 DLL plain C 导出（116 个，均为跳板 → 内部 XML 引擎）。
// 此处提供与本仓库分析一致的入口骨架，实际逻辑在 xml/fields 层。
// License: GPL v2（研究用途）

#include "uwemr_api.h"
#include "../xml/uwemr_xml.h"
#include "../qc/Similarity.h"
#include "ut_document.h"
#include "ut_vector.h"

namespace uwemr {

// ---- 模板查询 ----
UT_UTF8String Template_GetElemList(PD_Document* pDoc, bool bChoiceOnly) {
    UwEMRDocListener l(pDoc);
    UT_Vector v;
    l.getElemList(&v, bChoiceOnly);
    return l.serializeTemplate("elemlist");  // 骨架
}

UT_UTF8String Template_GetRelationship(PD_Document* pDoc) {
    UwEMRDocListener l(pDoc);
    UT_UTF8String out;
    l.getRelationship(&out);
    return out;
}

UT_UTF8String Template_GetParaKey(PD_Document* pDoc, const char* paraPath) {
    // 段落 key（供动态引用解析）
    return UT_UTF8String(paraPath);
}

// ---- 记录处理 ----
UT_UTF8String Record_CompressData(const UT_UTF8String& xml) {
    return compressRecordXml(xml);
}

UT_UTF8String RecordData_GetStandardXml(PD_Document* pDoc) {
    UwEMRDocListener l(pDoc);
    return l.serializeDoc();
}

// ---- 质控 ----
double CompareSimilValue(const UT_UTF8String& a, const UT_UTF8String& b) {
    return uwemr_qc::CompareSimilValue(a, b);
}

double CompareMaxSimilcontent(const UT_UTF8String& a,
                              const std::vector<UT_UTF8String>& pool) {
    return uwemr_qc::CompareMaxSimilcontent(a, pool);
}

// ---- 文档生命周期（LoadWord/NewDocument/RunDocument）----
bool LoadWord(PD_Document* pDoc, const char* fileOrXml) {
    // 骨架：XML/流 → 文档（对应 uwLoadCaseDocXml 语义）
    return pDoc != NULL;
}

bool NewDocument(PD_Document* pDoc, const char* templateId) {
    return pDoc != NULL;
}

bool RunDocument(PD_Document* pDoc) {
    return pDoc != NULL;
}

} // namespace uwemr
