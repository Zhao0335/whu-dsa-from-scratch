#include "whudsa/priority_queue/binomial_heap.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
BinomialHeap::BinomialHeap() : head_(nullptr), size_(0) {}
BinomialHeap::~BinomialHeap() { destroyForest(head_); }
void BinomialHeap::destroyForest(Node* node) {
    while (node) {
        Node* next = node->sibling;
        destroyForest(node->child);
        delete node;
        node = next;
    }
}
int BinomialHeap::size() const { return size_; }
bool BinomialHeap::empty() const { return size_ == 0; }
int BinomialHeap::top() const {
    if (empty()) throw std::out_of_range("BinomialHeap::top on empty heap");
    int best = head_->value;
    for (Node* p = head_->sibling; p; p = p->sibling) if (p->value < best) best = p->value;
    return best;
}

// ==================== CORE TODO ====================
void BinomialHeap::linkTrees(Node* child, Node* parent) {
    throw std::logic_error("TODO: BinomialHeap::linkTrees");
}
BinomialHeap::Node* BinomialHeap::mergeRootLists(Node* a, Node* b) {
    throw std::logic_error("TODO: BinomialHeap::mergeRootLists");
}
void BinomialHeap::consolidate() {
    // 相邻同阶树合并，确保每个 degree 至多一个根。
    throw std::logic_error("TODO: BinomialHeap::consolidate");
}
void BinomialHeap::push(int value) { throw std::logic_error("TODO: BinomialHeap::push"); }
void BinomialHeap::pop() { throw std::logic_error("TODO: BinomialHeap::pop"); }
void BinomialHeap::merge(BinomialHeap& other) { throw std::logic_error("TODO: BinomialHeap::merge"); }

}
