// uwemr/qc/Similarity.h — 病历书写相似度比对（clean-room）
// License: GPL v2（研究用途）

#ifndef UWEMR_QC_SIMILARITY_H
#define UWEMR_QC_SIMILARITY_H

#include "ut_utf8string.h"
#include <vector>

namespace uwemr {
namespace uwemr_qc {

// 0..1：1=完全相同（质控阈值按业务配置，如 >0.6 判疑似复制）
double CompareSimilValue(const UT_UTF8String& a, const UT_UTF8String& b);

// 与候选池批量比较，取最大相似度
double CompareMaxSimilcontent(const UT_UTF8String& a,
                              const std::vector<UT_UTF8String>& pool);

} // namespace uwemr_qc
} // namespace uwemr

#endif // UWEMR_QC_SIMILARITY_H
