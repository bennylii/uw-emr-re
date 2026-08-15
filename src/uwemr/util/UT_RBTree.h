// uwemr/util/UT_RBTree.h — 自研红黑树（clean-room 实现）
//
// 对应 uwWordDll.dll 定制容器 UT_RBTree / UT_Map（调用图: UT_Map::insert/find/erase
// 直接转调 UT_RBTree，begin/end 返回 Iterator，比较用函数指针谓词 find_if）。
// 无外部依赖，可独立编译。仅研究用途。
//
// License: GPL v2 (与上游 AbiWord 2.8.x 一致)

#ifndef UWEMR_UT_RBTREE_H
#define UWEMR_UT_RBTREE_H

#include <cstddef>

namespace uwemr {

// 键值对式红黑树。键为 void* 指针（地址/句柄），值为 void*（任意对象）。
class UT_RBTree {
public:
    friend class Iterator;
    typedef bool (*Comparator)(const void* a, const void* b);
    typedef bool (*Predicate)(const void* key, const void* data);

    class Iterator {
        friend class UT_RBTree;
    public:
        Iterator() : _tree(NULL), _node(NULL) {}
        bool operator!=(const Iterator& o) const { return _node != o._node; }
        bool operator==(const Iterator& o) const { return _node == o._node; }
        Iterator& operator++();
        Iterator& operator--();
        const void* key() const;
        void* value() const;
    private:
        Iterator(const UT_RBTree* t, void* n) : _tree(t), _node(n) {}
        const UT_RBTree* _tree;
        void* _node;
    };

    explicit UT_RBTree(Comparator cmp = NULL) : _root(NULL), _cmp(cmp) {}
    ~UT_RBTree() { clear(); }

    bool insert(const void* key, void* data);
    bool erase(const void* key);
    void erase(Iterator& it);
    Iterator find(const void* key) const;
    Iterator find_if(const void* key, Predicate p) const;
    Iterator begin() const;
    Iterator end() const { return Iterator(this, NULL); }
    std::size_t size() const;
    void clear();

private:
    struct Node {
        const void* key;
        void* data;
        int color;            // 0=黑 1=红
        Node* parent;
        Node* left;
        Node* right;
        Node(const void* k, void* d) : key(k), data(d), color(1),
            parent(NULL), left(NULL), right(NULL) {}
    };
    Node* _root;
    Comparator _cmp;

    bool less(const void* a, const void* b) const {
        return _cmp ? _cmp(a, b) : a < b;
    }
    void rotateLeft(Node* x);
    void rotateRight(Node* x);
    void insertFixup(Node* z);
    void eraseFixup(Node* x, Node* parent);
    Node* minimum(Node* n) const;
    Node* maximum(Node* n) const;
    void destroy(Node* n);
    const void* nodeKey(Node* n) const { return n ? n->key : NULL; }
};

// ---- Iterator 实现（依赖 RBTree 私有结构，需在 .cpp 中定义）----

} // namespace uwemr

#endif // UWEMR_UT_RBTREE_H
