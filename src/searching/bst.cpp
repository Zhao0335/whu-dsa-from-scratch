#include "whudsa/searching/bst.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
BinarySearchTree::BinarySearchTree() : root_(nullptr), size_(0) {}
BinarySearchTree::~BinarySearchTree() { destroy(root_); }
void BinarySearchTree::destroy(Node* node) {
    if (!node) return;
    destroy(node->left); destroy(node->right); delete node;
}
int BinarySearchTree::size() const { return size_; }
int BinarySearchTree::minimum() const {
    if (!root_) throw std::out_of_range("BST minimum on empty tree");
    Node* p = root_; while (p->left) p = p->left; return p->value;
}
int BinarySearchTree::maximum() const {
    if (!root_) throw std::out_of_range("BST maximum on empty tree");
    Node* p = root_; while (p->right) p = p->right; return p->value;
}

// ==================== CORE TODO ====================
bool BinarySearchTree::insert(int value) {
    // 左小右大；本仓库重复值不插入并返回 false。
    throw std::logic_error("TODO: BinarySearchTree::insert");
}
bool BinarySearchTree::contains(int value) const {
    throw std::logic_error("TODO: BinarySearchTree::contains");
}
bool BinarySearchTree::erase(int value) {
    // 分别处理 0 个、1 个、2 个孩子；成功删除时维护 size_。
    throw std::logic_error("TODO: BinarySearchTree::erase");
}

}
