// uwemr/util/UT_Map.h — 红黑树映射容器（clean-room）
//
// 对应 uwWordDll.dll UT_Map（调用图: insert→UT_RBTree::insert, find/erase→
// find_if+erase, begin/end→Iterator——本实现直接复现该结构）。
// License: GPL v2（研究用途）

#ifndef UWEMR_UT_MAP_H
#define UWEMR_UT_MAP_H

#include "UT_RBTree.h"

namespace uwemr {

class UT_Map {
public:
    typedef UT_RBTree::Iterator Iterator;

    explicit UT_Map(UT_RBTree::Comparator cmp = NULL) : _tree(cmp) {}

    bool insert(const void* key, void* data) { return _tree.insert(key, data); }
    void erase(Iterator& it) { _tree.erase(it); }
    bool erase(const void* key) { return _tree.erase(key); }
    Iterator find(const void* key) const { return _tree.find(key); }
    Iterator find_if(const void* key, UT_RBTree::Predicate p) const {
        return _tree.find_if(key, p);
    }
    Iterator begin() const { return _tree.begin(); }
    Iterator end() const { return _tree.end(); }
    std::size_t size() const { return _tree.size(); }
    void clear() { _tree.clear(); }
    bool empty() const { return _tree.size() == 0; }

    void* operator[](const void* key) const {
        Iterator it = _tree.find(key);
        return it == end() ? NULL : it.value();
    }

private:
    UT_RBTree _tree;
};

// 同族容器（DLL 中还有 UT_NumberMap / UT_IntStrMap / UT_UTF8Hash /
// UT_GenericUTF8Hash——键类型差异的模板化版本）
template <typename K>
class UT_MapT {
public:
    bool insert(const K& key, void* data) {
        return _tree.insert(static_cast<const void*>(&key), data);
    }
    // ... 与 UT_Map 同构（研究骨架，按需展开）
private:
    UT_RBTree _tree;
};

} // namespace uwemr

#endif // UWEMR_UT_MAP_H
