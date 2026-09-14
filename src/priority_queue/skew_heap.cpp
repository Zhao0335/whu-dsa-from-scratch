#include "whudsa/priority_queue/skew_heap.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
SkewHeap::SkewHeap() : root_(nullptr), size_(0) {}
SkewHeap::~SkewHeap() { destroy(root_); }
void SkewHeap::destroy(Node* node) {
    if (!node) return;
    destroy(node->left); destroy(node->right); delete node;
}
int SkewHeap::size() const { return size_; }
bool SkewHeap::empty() const { return size_ == 0; }
int SkewHeap::top() const {
    if (empty()) throw std::out_of_range("SkewHeap::top on empty heap");
    return root_->value;
}

// ==================== CORE TODO ====================
SkewHeap::Node* SkewHeap::mergeNodes(Node* a, Node* b) {
    // 按堆序选根，递归合并，然后交换左右孩子。
    throw std::logic_error("TODO: SkewHeap::mergeNodes");
}
void SkewHeap::push(int value) { throw std::logic_error("TODO: SkewHeap::push"); }
void SkewHeap::pop() { throw std::logic_error("TODO: SkewHeap::pop"); }
void SkewHeap::merge(SkewHeap& other) { throw std::logic_error("TODO: SkewHeap::merge"); }

}
