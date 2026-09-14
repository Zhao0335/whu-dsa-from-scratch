#include "whudsa/priority_queue/leftist_heap.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
LeftistHeap::LeftistHeap() : root_(nullptr), size_(0) {}
LeftistHeap::~LeftistHeap() { destroy(root_); }
void LeftistHeap::destroy(Node* node) {
    if (!node) return;
    destroy(node->left); destroy(node->right); delete node;
}
int LeftistHeap::size() const { return size_; }
bool LeftistHeap::empty() const { return size_ == 0; }
int LeftistHeap::top() const {
    if (empty()) throw std::out_of_range("LeftistHeap::top on empty heap");
    return root_->value;
}

// ==================== CORE TODO ====================
LeftistHeap::Node* LeftistHeap::mergeNodes(Node* a, Node* b) {
    // 先维护堆序，再递归合并右子树，最后维护 npl 与左偏性质。
    throw std::logic_error("TODO: LeftistHeap::mergeNodes");
}
void LeftistHeap::push(int value) { throw std::logic_error("TODO: LeftistHeap::push"); }
void LeftistHeap::pop() { throw std::logic_error("TODO: LeftistHeap::pop"); }
void LeftistHeap::merge(LeftistHeap& other) { throw std::logic_error("TODO: LeftistHeap::merge"); }

}
