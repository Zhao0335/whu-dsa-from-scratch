#include "whudsa/tree/general_tree.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
GeneralTree::GeneralTree() : nodes_(new Node*[8]), count_(0), capacity_(8), root_(nullptr) {}
GeneralTree::~GeneralTree() {
    for (int i = 0; i < count_; ++i) delete nodes_[i];
    delete[] nodes_;
}
int GeneralTree::nodeCount() const { return count_; }
void GeneralTree::ensureCapacity(int minCapacity) {
    if (capacity_ >= minCapacity) return;
    int nextCapacity = capacity_ * 2;
    while (nextCapacity < minCapacity) nextCapacity *= 2;
    Node** next = new Node*[nextCapacity];
    for (int i = 0; i < count_; ++i) next[i] = nodes_[i];
    delete[] nodes_;
    nodes_ = next;
    capacity_ = nextCapacity;
}
GeneralTree::Node* GeneralTree::nodeById(int id) const {
    if (id < 0 || id >= count_) throw std::out_of_range("GeneralTree node id");
    return nodes_[id];
}

// ==================== CORE TODO ====================
int GeneralTree::addRoot(int value) {
    // 一棵树只能有一个根；创建后返回稳定编号。
    throw std::logic_error("TODO: GeneralTree::addRoot");
}
int GeneralTree::addChild(int parentId, int value) {
    // 在 parent 的 firstChild/nextSibling 链上接入新节点。
    throw std::logic_error("TODO: GeneralTree::addChild");
}
int GeneralTree::childCount(int nodeId) const {
    // 只统计直接孩子。
    throw std::logic_error("TODO: GeneralTree::childCount");
}

}
