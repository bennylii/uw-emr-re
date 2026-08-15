// uwemr/util/UT_RBTree.cpp — 红黑树实现（经典算法，clean-room 编写）
// License: GPL v2（研究用途）

#include "UT_RBTree.h"

namespace uwemr {

// ---------- 旋转与修正 ----------
void UT_RBTree::rotateLeft(Node* x) {
    Node* y = x->right;
    x->right = y->left;
    if (y->left) y->left->parent = x;
    y->parent = x->parent;
    if (!x->parent) _root = y;
    else if (x == x->parent->left) x->parent->left = y;
    else x->parent->right = y;
    y->left = x;
    x->parent = y;
}

void UT_RBTree::rotateRight(Node* x) {
    Node* y = x->left;
    x->left = y->right;
    if (y->right) y->right->parent = x;
    y->parent = x->parent;
    if (!x->parent) _root = y;
    else if (x == x->parent->right) x->parent->right = y;
    else x->parent->left = y;
    y->right = x;
    x->parent = y;
}

void UT_RBTree::insertFixup(Node* z) {
    while (z->parent && z->parent->color == 1) {
        if (z->parent == z->parent->parent->left) {
            Node* y = z->parent->parent->right;
            if (y && y->color == 1) {           // 叔父红
                z->parent->color = 0;
                y->color = 0;
                z->parent->parent->color = 1;
                z = z->parent->parent;
            } else {
                if (z == z->parent->right) {    // 内侧
                    z = z->parent;
                    rotateLeft(z);
                }
                z->parent->color = 0;           // 外侧
                z->parent->parent->color = 1;
                rotateRight(z->parent->parent);
            }
        } else {                                 // 镜像
            Node* y = z->parent->parent->left;
            if (y && y->color == 1) {
                z->parent->color = 0;
                y->color = 0;
                z->parent->parent->color = 1;
                z = z->parent->parent;
            } else {
                if (z == z->parent->left) {
                    z = z->parent;
                    rotateRight(z);
                }
                z->parent->color = 0;
                z->parent->parent->color = 1;
                rotateLeft(z->parent->parent);
            }
        }
    }
    _root->color = 0;
}

void UT_RBTree::eraseFixup(Node* x, Node* parent) {
    while (x != _root && (!x || x->color == 0)) {
        if (x == parent->left) {
            Node* w = parent->right;
            if (w && w->color == 1) {
                w->color = 0;
                parent->color = 1;
                rotateLeft(parent);
                w = parent->right;
            }
            if ((!w->left || w->left->color == 0) &&
                (!w->right || w->right->color == 0)) {
                w->color = 1;
                x = parent;
                parent = x->parent;
            } else {
                if (!w->right || w->right->color == 0) {
                    w->left->color = 0;
                    w->color = 1;
                    rotateRight(w);
                    w = parent->right;
                }
                w->color = parent->color;
                parent->color = 0;
                w->right->color = 0;
                rotateLeft(parent);
                x = _root;
            }
        } else {
            Node* w = parent->left;
            if (w && w->color == 1) {
                w->color = 0;
                parent->color = 1;
                rotateRight(parent);
                w = parent->left;
            }
            if ((!w->right || w->right->color == 0) &&
                (!w->left || w->left->color == 0)) {
                w->color = 1;
                x = parent;
                parent = x->parent;
            } else {
                if (!w->left || w->left->color == 0) {
                    w->right->color = 0;
                    w->color = 1;
                    rotateLeft(w);
                    w = parent->left;
                }
                w->color = parent->color;
                parent->color = 0;
                w->left->color = 0;
                rotateRight(parent);
                x = _root;
            }
        }
    }
    if (x) x->color = 0;
}

// ---------- 查找 ----------
UT_RBTree::Node* UT_RBTree::minimum(Node* n) const {
    while (n && n->left) n = n->left;
    return n;
}

UT_RBTree::Node* UT_RBTree::maximum(Node* n) const {
    while (n && n->right) n = n->right;
    return n;
}

// ---------- 公开接口 ----------
bool UT_RBTree::insert(const void* key, void* data) {
    Node* z = new Node(key, data);
    Node* y = NULL;
    Node* x = _root;
    while (x) {
        y = x;
        if (less(key, x->key)) x = x->left;
        else if (less(x->key, key)) x = x->right;
        else { delete z; return false; }   // 键已存在
    }
    z->parent = y;
    if (!y) _root = z;
    else if (less(z->key, y->key)) y->left = z;
    else y->right = z;
    insertFixup(z);
    return true;
}

UT_RBTree::Iterator UT_RBTree::find(const void* key) const {
    Node* x = _root;
    while (x) {
        if (less(key, x->key)) x = x->left;
        else if (less(x->key, key)) x = x->right;
        else return Iterator(this, x);
    }
    return end();
}

UT_RBTree::Iterator UT_RBTree::find_if(const void* key, Predicate p) const {
    for (Node* x = _root; x; ) {
        if (p(key, x->data)) return Iterator(this, x);
        if (less(key, x->key)) x = x->left;
        else x = x->right;
    }
    return end();
}

bool UT_RBTree::erase(const void* key) {
    Iterator it = find(key);
    if (it == end()) return false;
    erase(it);
    return true;
}

void UT_RBTree::erase(Iterator& it) {
    Node* z = static_cast<Node*>(it._node);
    Node* y = z;
    Node* x;
    int yColor = y->color;
    if (!z->left) {
        x = z->right;
        if (x) x->parent = z->parent;
        if (!z->parent) _root = x;
        else if (z == z->parent->left) z->parent->left = x;
        else z->parent->right = x;
    } else if (!z->right) {
        x = z->left;
        if (x) x->parent = z->parent;
        if (!z->parent) _root = x;
        else if (z == z->parent->left) z->parent->left = x;
        else z->parent->right = x;
    } else {
        y = minimum(z->right);
        yColor = y->color;
        x = y->right;
        if (y->parent == z) {
            if (x) x->parent = y;
        } else {
            if (x) x->parent = y->parent;
            y->parent->left = x;
            y->right = z->right;
            z->right->parent = y;
        }
        y->parent = z->parent;
        if (!z->parent) _root = y;
        else if (z == z->parent->left) z->parent->left = y;
        else z->parent->right = y;
        y->left = z->left;
        z->left->parent = y;
        y->color = z->color;
    }
    if (yColor == 0 && _root) eraseFixup(x, x ? x->parent : z->parent);
    delete z;
    it._node = NULL;
}

UT_RBTree::Iterator UT_RBTree::begin() const {
    return Iterator(this, minimum(_root));
}

std::size_t UT_RBTree::size() const {
    std::size_t n = 0;
    for (Iterator it = begin(); it != end(); ++it) ++n;
    return n;
}

void UT_RBTree::destroy(Node* n) {
    if (!n) return;
    destroy(n->left);
    destroy(n->right);
    delete n;
}

void UT_RBTree::clear() { destroy(_root); _root = NULL; }

// ---------- Iterator ----------
UT_RBTree::Iterator& UT_RBTree::Iterator::operator++() {
    Node* x = static_cast<Node*>(_node);
    if (x->right) {
        x = _tree->minimum(x->right);
    } else {
        while (x->parent && x == x->parent->right) x = x->parent;
        x = x->parent;
    }
    _node = x;
    return *this;
}

UT_RBTree::Iterator& UT_RBTree::Iterator::operator--() {
    Node* x = static_cast<Node*>(_node);
    if (!x) {  // end() -- 回到最大节点
        _node = _tree ? _tree->maximum(const_cast<UT_RBTree*>(_tree)->_root) : NULL;
        return *this;
    }
    if (x->left) {
        x = _tree->maximum(x->left);
    } else {
        while (x->parent && x == x->parent->left) x = x->parent;
        x = x->parent;
    }
    _node = x;
    return *this;
}

const void* UT_RBTree::Iterator::key() const {
    return _node ? static_cast<Node*>(_node)->key : NULL;
}

void* UT_RBTree::Iterator::value() const {
    return _node ? static_cast<Node*>(_node)->data : NULL;
}

} // namespace uwemr
