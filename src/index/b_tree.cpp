#include "whudsa/index/b_tree.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
BTree::BTree(int minimumDegree) : root_(nullptr), t_(minimumDegree >= 2 ? minimumDegree : 2) {
    root_ = makeNode(true);
}
BTree::~BTree() { destroy(root_); }
BTree::Node* BTree::makeNode(bool leaf) const {
    Node* node = new Node;
    node->leaf = leaf;
    node->keyCount = 0;
    node->keys = new int[2 * t_ - 1];
    node->children = new Node*[2 * t_];
    for (int i = 0; i < 2 * t_; ++i) node->children[i] = nullptr;
    return node;
}
void BTree::destroy(Node* node) {
    if (!node) return;
    if (!node->leaf) for (int i = 0; i <= node->keyCount; ++i) destroy(node->children[i]);
    delete[] node->keys;
    delete[] node->children;
    delete node;
}

// ==================== CORE TODO ====================
bool BTree::contains(int key) const {
    throw std::logic_error("TODO: BTree::contains");
}
void BTree::splitChild(Node* parent, int childIndex) {
    // 把满孩子的中间关键字提升到 parent，并拆成两个 t-1 关键字节点。
    throw std::logic_error("TODO: BTree::splitChild");
}
void BTree::insertNonFull(Node* node, int key) {
    throw std::logic_error("TODO: BTree::insertNonFull");
}
void BTree::insert(int key) {
    throw std::logic_error("TODO: BTree::insert");
}
bool BTree::eraseFromNode(Node* node, int key) {
    // 课程重点：叶删除、前驱/后继替换、向兄弟借关键字、合并。
    throw std::logic_error("TODO: BTree::eraseFromNode");
}
bool BTree::erase(int key) {
    throw std::logic_error("TODO: BTree::erase");
}

}
