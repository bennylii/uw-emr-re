// uwemr/util/UT_Set.h — 红黑树集合容器（clean-room）
// 对应 uwWordDll.dll UT_Set（与 UT_Map 同族的去重集合）。
// License: GPL v2（研究用途）

#ifndef UWEMR_UT_SET_H
#define UWEMR_UT_SET_H

#include "UT_RBTree.h"

namespace uwemr {

class UT_Set {
public:
    typedef UT_RBTree::Iterator Iterator;

    explicit UT_Set(UT_RBTree::Comparator cmp = NULL) : _tree(cmp) {}

    bool insert(const void* key) { return _tree.insert(key, NULL); }
    bool contains(const void* key) const { return _tree.find(key) != _tree.end(); }
    void erase(const void* key) { _tree.erase(key); }
    Iterator begin() const { return _tree.begin(); }
    Iterator end() const { return _tree.end(); }
    std::size_t size() const { return _tree.size(); }
    void clear() { _tree.clear(); }

private:
    UT_RBTree _tree;
};

} // namespace uwemr

#endif // UWEMR_UT_SET_H
