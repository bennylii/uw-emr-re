// uwemr/qc/Similarity.cpp — 病历书写相似度比对（clean-room）
//
// 对应 DLL: CompareSimilValue（跳板 → 0x0151F0 短函数区，约 0x400 字节，
// 辅助 0x0151D0/0x0156AA）。用途：病历书写质控——检测复制粘贴。
// 研究性算法：字符 n-gram 余弦/Jaccard 相似度（实现自拟，非 DLL 复刻）。
// License: GPL v2（研究用途）

#include <string>
#include <set>
#include <cmath>
#include <vector>

#include "ut_utf8string.h"

namespace uwemr {

namespace {

// 按 UTF-8 字符切分（简化：按字节窗口，汉字 3 字节——研究实现按
// 码点切分更准确，这里给出 n-gram 框架）
typedef std::vector<std::string> Chunks;

Chunks toChunks(const UT_UTF8String& s, int n) {
    Chunks out;
    const char* p = s.utf8_str();
    std::string buf;
    int cnt = 0;
    for (const char* q = p; *q; ) {
        // UTF-8 前导字节判断
        int len = 1;
        unsigned char c = (unsigned char)*q;
        if ((c & 0xE0) == 0xC0) len = 2;
        else if ((c & 0xF0) == 0xE0) len = 3;
        else if ((c & 0xF8) == 0xF0) len = 4;
        buf.append(q, len);
        q += len;
        cnt++;
        if (cnt == n) {
            out.push_back(buf);
            buf.clear();
            cnt = 0;
        }
    }
    if (!buf.empty()) out.push_back(buf);
    return out;
}

} // namespace

// 返回值 0..1：1=完全相同（用于质控阈值判断，如 >0.85 判复制）
double CompareSimilValue(const UT_UTF8String& a, const UT_UTF8String& b) {
    const int N = 3;  // 3-gram
    Chunks ca = toChunks(a, N);
    Chunks cb = toChunks(b, N);
    if (ca.empty() && cb.empty()) return 1.0;
    if (ca.empty() || cb.empty()) return 0.0;
    std::multiset<std::string> sa(ca.begin(), ca.end());
    std::multiset<std::string> sb(cb.begin(), cb.end());
    // 交集计数（multiset 交集）
    std::size_t inter = 0;
    std::set<std::string> keys(sa.begin(), sa.end());
    for (std::set<std::string>::const_iterator k = keys.begin();
         k != keys.end(); ++k) {
        inter += (sa.count(*k) < sb.count(*k)) ? sa.count(*k) : sb.count(*k);
    }
    std::size_t uni = ca.size() + cb.size() - inter;
    if (uni == 0) return 1.0;
    // 加权: Jaccard × 长度比修正
    double jac = (double)inter / (double)uni;
    double lenRatio = (double)(ca.size() < cb.size() ? ca.size() : cb.size()) /
                      (double)(ca.size() > cb.size() ? ca.size() : cb.size());
    return jac * (0.7 + 0.3 * lenRatio);
}

// CompareMaxSimilcontent：批量比较，取最大相似度
double CompareMaxSimilcontent(const UT_UTF8String& a,
                              const std::vector<UT_UTF8String>& pool) {
    double best = 0.0;
    for (std::size_t i = 0; i < pool.size(); ++i) {
        double s = CompareSimilValue(a, pool[i]);
        if (s > best) best = s;
    }
    return best;
}

} // namespace uwemr
