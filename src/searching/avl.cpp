#include "whudsa/searching/avl.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
AVLTree::AVLTree() : root_(nullptr) {}
AVLTree::~AVLTree() { destroy(root_); }
void AVLTree::destroy(Node* node) {
    if (!node) return;
    destroy(node->left); destroy(node->right); delete node;
}
int AVLTree::nodeHeight(Node* node) const { return node ? node->height : 0; }
void AVLTree::updateHeight(Node* node) {
    if (!node) return;
    int lh = nodeHeight(node->left), rh = nodeHeight(node->right);
    node->height = (lh > rh ? lh : rh) + 1;
}
int AVLTree::balanceFactor(Node* node) const {
    return node ? nodeHeight(node->left) - nodeHeight(node->right) : 0;
}
int AVLTree::height() const { return nodeHeight(root_); }

// ==================== CORE TODO ====================
AVLTree::Node* AVLTree::rotateLeft(Node* node) { throw std::logic_error("TODO: AVLTree::rotateLeft"); }
AVLTree::Node* AVLTree::rotateRight(Node* node) { throw std::logic_error("TODO: AVLTree::rotateRight"); }
AVLTree::Node* AVLTree::insertNode(Node* node, int value, bool& inserted) { throw std::logic_error("TODO: AVLTree::insertNode"); }
AVLTree::Node* AVLTree::eraseNode(Node* node, int value, bool& erased) { throw std::logic_error("TODO: AVLTree::eraseNode"); }
bool AVLTree::containsNode(Node* node, int value) const { throw std::logic_error("TODO: AVLTree::containsNode"); }
bool AVLTree::balanced(Node* node) const { throw std::logic_error("TODO: AVLTree::balanced"); }
bool AVLTree::insert(int value) { throw std::logic_error("TODO: AVLTree::insert"); }
bool AVLTree::erase(int value) { throw std::logic_error("TODO: AVLTree::erase"); }
bool AVLTree::contains(int value) const { throw std::logic_error("TODO: AVLTree::contains"); }
bool AVLTree::isBalanced() const { throw std::logic_error("TODO: AVLTree::isBalanced"); }

}
