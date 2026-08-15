// test/test_similarity.cpp — 相似度算法验证（std::string 独立版，
// 与 src/uwemr/qc/Similarity.cpp 的 n-gram Jaccard 算法同构）
// 编译: g++ -std=c++11 -static test_similarity.cpp -o test_similarity
#include <cstdio>
#include <string>
#include <set>
#include <vector>

static int g_fail = 0;
#define CHECK(cond) do { \
    if (!(cond)) { printf("FAIL %s:%d  %s\n", __FILE__, __LINE__, #cond); ++g_fail; } \
} while (0)

// ---- 与 Similarity.cpp 同构的核心（std::string 版）----
static std::vector<std::string> toChunks(const std::string& s, int n) {
    std::vector<std::string> out;
    std::string buf;
    int cnt = 0;
    for (size_t i = 0; i < s.size(); ) {
        unsigned char c = (unsigned char)s[i];
        int len = 1;
        if ((c & 0xE0) == 0xC0) len = 2;
        else if ((c & 0xF0) == 0xE0) len = 3;
        else if ((c & 0xF8) == 0xF0) len = 4;
        buf.append(s, i, len);
        i += len;
        if (++cnt == n) { out.push_back(buf); buf.clear(); cnt = 0; }
    }
    if (!buf.empty()) out.push_back(buf);
    return out;
}

static double simil(const std::string& a, const std::string& b) {
    const int N = 3;
    std::vector<std::string> ca = toChunks(a, N), cb = toChunks(b, N);
    if (ca.empty() && cb.empty()) return 1.0;
    if (ca.empty() || cb.empty()) return 0.0;
    std::multiset<std::string> sa(ca.begin(), ca.end()), sb(cb.begin(), cb.end());
    std::size_t inter = 0;
    std::set<std::string> keys(sa.begin(), sa.end());
    for (std::set<std::string>::const_iterator k = keys.begin(); k != keys.end(); ++k)
        inter += (sa.count(*k) < sb.count(*k)) ? sa.count(*k) : sb.count(*k);
    std::size_t uni = ca.size() + cb.size() - inter;
    if (uni == 0) return 1.0;
    double jac = (double)inter / (double)uni;
    double lenRatio = (double)(ca.size() < cb.size() ? ca.size() : cb.size()) /
                      (double)(ca.size() > cb.size() ? ca.size() : cb.size());
    return jac * (0.7 + 0.3 * lenRatio);
}

int main() {
    // 完全相同
    CHECK(simil("患者因发热咳嗽3天入院", "患者因发热咳嗽3天入院") > 0.99);
    // 完全不同
    CHECK(simil("患者因发热咳嗽3天入院", "abcdefghijklmnopqrstuvwxyz") < 0.2);
    // 高相似（仅差一个字）
    double s1 = simil("患者因发热咳嗽3天入院", "患者因发热咳嗽5天入院");
    printf("s1(差一字)=%.3f\n", s1);
    CHECK(s1 > 0.3 && s1 < 0.8);
    // 中相似（一半相同）
    double s2 = simil("患者因发热咳嗽3天入院", "患者因外伤骨折3天入院");
    printf("s2(半同)=%.3f\n", s2);
    CHECK(s2 > 0.15 && s2 < 0.7);
    // 空串边界
    CHECK(simil("", "") == 1.0);
    CHECK(simil("", "abc") == 0.0);
    // 短文本（不足 3 字符）
    CHECK(simil("abc", "abc") > 0.99);
    // 子串关系（复制粘贴检测场景）
    double s3 = simil("今日患者神志清，精神可，饮食睡眠可，大小便正常，双肺呼吸音清。",
                      "今日患者神志清，精神可，饮食睡眠可，大小便正常，双肺呼吸音清。未及明显异常。");
    printf("s3(追加)=%.3f\n", s3);
    CHECK(s3 > 0.55 && s3 < 0.95);

    if (g_fail == 0) { printf("ALL SIMILARITY TESTS PASSED\n"); return 0; }
    printf("%d FAILED\n", g_fail);
    return 1;
}
