// test/test_rbtree.cpp — UT_RBTree/UT_Map 单元测试（独立于 AbiWord）
// 编译: g++ -std=c++11 -I ../src/uwemr/util test_rbtree.cpp ../src/uwemr/util/UT_RBTree.cpp -o test_rbtree
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cstdint>
#include "UT_RBTree.h"
#include "UT_Map.h"
#include "UT_Set.h"

using namespace uwemr;

static int g_fail = 0;

#define CHECK(cond) do { \
    if (!(cond)) { \
        printf("FAIL %s:%d  %s\n", __FILE__, __LINE__, #cond); \
        ++g_fail; \
    } \
} while (0)

int main() {
    // ---- UT_RBTree 基本操作 ----
    {
        UT_RBTree t;
        CHECK(t.size() == 0);
        CHECK(t.begin() == t.end());

        int v1 = 1, v2 = 2, v3 = 3, v4 = 4, v5 = 5;
        // 键 = 值本身（指针键按数值大小比较），值为变量地址
        CHECK(t.insert((const void*)(uintptr_t)v1, &v1));
        CHECK(t.insert((const void*)(uintptr_t)v2, &v2));
        CHECK(t.insert((const void*)(uintptr_t)v3, &v3));
        CHECK(t.insert((const void*)(uintptr_t)v4, &v4));
        CHECK(t.insert((const void*)(uintptr_t)v5, &v5));
        CHECK(t.size() == 5);
        CHECK(!t.insert((const void*)(uintptr_t)v3, &v3));  // 重复键拒绝
        CHECK(t.size() == 5);

        UT_RBTree::Iterator it = t.find((const void*)(uintptr_t)v3);
        CHECK(it != t.end());
        CHECK(it.value() == &v3);
        CHECK(t.find((const void*)(uintptr_t)v2) != t.end());

        // 中序遍历有序（键递增）
        int prev = 0, n = 0;
        for (it = t.begin(); it != t.end(); ++it) {
            int k = (int)(uintptr_t)it.key();
            CHECK(k > prev);
            prev = k;
            ++n;
        }
        CHECK(n == 5);

        // 删除
        CHECK(t.erase((const void*)(uintptr_t)v1));
        CHECK(t.size() == 4);
        CHECK(t.find((const void*)(uintptr_t)v1) == t.end());
        CHECK(!t.erase((const void*)(uintptr_t)v1));       // 再删失败
        CHECK(t.erase((const void*)(uintptr_t)v3));
        CHECK(t.size() == 3);

        // 前向迭代跳过删除元素
        n = 0;
        for (it = t.begin(); it != t.end(); ++it) ++n;
        CHECK(n == 3);

        t.clear();
        CHECK(t.size() == 0);
    }

    // ---- 随机插入/删除对比 std 行为 ----
    {
        UT_Map m;
        srand(42);
        int keys[200];
        for (int i = 0; i < 200; ++i) keys[i] = i;
        // 打乱顺序插入
        for (int i = 199; i > 0; --i) {
            int j = rand() % (i + 1);
            int tmp = keys[i]; keys[i] = keys[j]; keys[j] = tmp;
        }
        for (int i = 0; i < 200; ++i)
            CHECK(m.insert(&keys[i], &keys[i]));
        CHECK(m.size() == 200);
        // 全部可查
        for (int i = 0; i < 200; ++i) {
            UT_Map::Iterator it = m.find(&keys[i]);
            CHECK(it != m.end());
            CHECK(it.value() == &keys[i]);
        }
        // 随机删一半
        for (int i = 0; i < 200; i += 2)
            CHECK(m.erase(&keys[i]));
        CHECK(m.size() == 100);
        for (int i = 0; i < 200; ++i) {
            if (i % 2 == 0) CHECK(m.find(&keys[i]) == m.end());
            else            CHECK(m.find(&keys[i]) != m.end());
        }
        // operator[]
        CHECK(m[&keys[1]] == &keys[1]);
        CHECK(m[&keys[0]] == NULL);
        m.clear();
        CHECK(m.empty());
    }

    // ---- 谓词 find_if ----
    {
        UT_Map m;
        int a = 5, b = 10, c = 15;
        m.insert((const void*)(uintptr_t)a, &a);
        m.insert((const void*)(uintptr_t)b, &b);
        m.insert((const void*)(uintptr_t)c, &c);
        UT_Map::Iterator it = m.find_if((const void*)(uintptr_t)b,
            [](const void* key, const void* data) {
                (void)key;
                return *(int*)data == 10;
            });
        CHECK(it != m.end());
        CHECK(it.value() == &b);
    }

    // ---- UT_Set ----
    {
        UT_Set s;
        int a = 1, b = 2;
        CHECK(s.insert((const void*)(uintptr_t)a));
        CHECK(!s.insert((const void*)(uintptr_t)a));
        CHECK(s.contains((const void*)(uintptr_t)a));
        CHECK(!s.contains((const void*)(uintptr_t)b));
        CHECK(s.size() == 1);
        s.erase((const void*)(uintptr_t)a);
        CHECK(!s.contains((const void*)(uintptr_t)a));
    }

    if (g_fail == 0) {
        printf("ALL TESTS PASSED\n");
        return 0;
    }
    printf("%d CHECK(S) FAILED\n", g_fail);
    return 1;
}
