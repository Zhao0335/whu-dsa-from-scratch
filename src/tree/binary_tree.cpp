#include "whudsa/tree/binary_tree.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
BinaryTree::BinaryTree() : root_(nullptr), size_(0) {}
BinaryTree::~BinaryTree() { destroy(root_); }
void BinaryTree::destroy(Node* node) {
    if (!node) return;
    destroy(node->left);
    destroy(node->right);
    delete node;
}
int BinaryTree::size() const { return size_; }

// ==================== CORE TODO ====================
void BinaryTree::insertLevelOrder(int value) {
    // 按层序找到第一个空孩子位置；这是树结构操作，不是 C++ 生命周期练习。
    throw std::logic_error("TODO: BinaryTree::insertLevelOrder");
}
int BinaryTree::height() const {
    // 约定空树高度为 0，单节点树高度为 1。
    throw std::logic_error("TODO: BinaryTree::height");
}
int BinaryTree::leafCount() const {
    throw std::logic_error("TODO: BinaryTree::leafCount");
}
void BinaryTree::preorder(int* out, int& outSize) const {
    throw std::logic_error("TODO: BinaryTree::preorder");
}
void BinaryTree::inorder(int* out, int& outSize) const {
    throw std::logic_error("TODO: BinaryTree::inorder");
}
void BinaryTree::postorder(int* out, int& outSize) const {
    throw std::logic_error("TODO: BinaryTree::postorder");
}
void BinaryTree::levelOrder(int* out, int& outSize) const {
    throw std::logic_error("TODO: BinaryTree::levelOrder");
}

}
