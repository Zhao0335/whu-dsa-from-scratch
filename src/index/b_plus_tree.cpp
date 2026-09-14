#include "whudsa/index/b_plus_tree.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
BPlusTree::BPlusTree(int order) : root_(nullptr), order_(order >= 3 ? order : 3) {
    root_ = makeNode(true);
}
BPlusTree::~BPlusTree() { destroy(root_); }
BPlusTree::Node* BPlusTree::makeNode(bool leaf) const {
    Node* node = new Node;
    node->leaf = leaf;
    node->keyCount = 0;
    node->keys = new int[order_];
    node->values = new int[order_];
    node->children = new Node*[order_ + 1];
    for (int i = 0; i <= order_; ++i) node->children[i] = nullptr;
    node->next = nullptr;
    return node;
}
void BPlusTree::destroy(Node* node) {
    if (!node) return;
    if (!node->leaf) for (int i = 0; i <= node->keyCount; ++i) destroy(node->children[i]);
    delete[] node->keys; delete[] node->values; delete[] node->children; delete node;
}

// ==================== CORE TODO ====================
BPlusTree::Node* BPlusTree::findLeaf(int key) const {
    throw std::logic_error("TODO: BPlusTree::findLeaf");
}
void BPlusTree::splitLeaf(Node* leaf) {
    throw std::logic_error("TODO: BPlusTree::splitLeaf");
}
void BPlusTree::splitInternal(Node* node) {
    throw std::logic_error("TODO: BPlusTree::splitInternal");
}
void BPlusTree::rebalanceAfterErase(Node* node) {
    throw std::logic_error("TODO: BPlusTree::rebalanceAfterErase");
}
void BPlusTree::insert(int key, int value) {
    throw std::logic_error("TODO: BPlusTree::insert");
}
bool BPlusTree::find(int key, int& value) const {
    throw std::logic_error("TODO: BPlusTree::find");
}
bool BPlusTree::erase(int key) {
    throw std::logic_error("TODO: BPlusTree::erase");
}
int BPlusTree::rangeQuery(int low, int high, int* outKeys, int* outValues, int maxOut) const {
    // 从 low 所在叶子开始沿 next 叶链扫描到 high。
    throw std::logic_error("TODO: BPlusTree::rangeQuery");
}

}
