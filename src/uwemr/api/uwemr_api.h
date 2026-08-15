// uwemr/api/uwemr_api.h — C 业务入口声明（clean-room 骨架）
// License: GPL v2（研究用途）

#ifndef UWEMR_API_H
#define UWEMR_API_H

#include "ut_utf8string.h"
#include "ut_vector.h"
#include "pd_Document.h"
#include <vector>

namespace uwemr {

// 模板查询（DLL: Template_*）
UT_UTF8String Template_GetElemList(PD_Document* pDoc, bool bChoiceOnly);
UT_UTF8String Template_GetElemList_ByFilter(PD_Document* pDoc, const char* filter);
UT_UTF8String Template_GetRelationship(PD_Document* pDoc);
UT_UTF8String Template_GetParaKey(PD_Document* pDoc, const char* paraPath);
UT_UTF8String Template_GetChoiceElemList(PD_Document* pDoc);

// 记录处理（DLL: Record_*/RecordData_*）
UT_UTF8String Record_CompressData(const UT_UTF8String& xml);
UT_UTF8String RecordData_GetStandardXml(PD_Document* pDoc);
UT_UTF8String RecordData_GetElemList_ByFilter(PD_Document* pDoc, const char* filter);

// 质控（DLL: Compare*）
double CompareSimilValue(const UT_UTF8String& a, const UT_UTF8String& b);
double CompareMaxSimilcontent(const UT_UTF8String& a,
                              const std::vector<UT_UTF8String>& pool);

// 文档生命周期（DLL: LoadWord/NewDocument/RunDocument）
bool LoadWord(PD_Document* pDoc, const char* fileOrXml);
bool NewDocument(PD_Document* pDoc, const char* templateId);
bool RunDocument(PD_Document* pDoc);

} // namespace uwemr

#endif // UWEMR_API_H
