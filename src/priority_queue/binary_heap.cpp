#include "whudsa/priority_queue/binary_heap.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
BinaryHeap::BinaryHeap() : data_(new int[8]), size_(0), capacity_(8) {}
BinaryHeap::~BinaryHeap() { delete[] data_; }
int BinaryHeap::size() const { return size_; }
bool BinaryHeap::empty() const { return size_ == 0; }
int BinaryHeap::top() const {
    if (empty()) throw std::out_of_range("BinaryHeap::top on empty heap");
    return data_[0];
}
void BinaryHeap::ensureCapacity(int minCapacity) {
    if (capacity_ >= minCapacity) return;
    int nextCapacity = capacity_ * 2;
    while (nextCapacity < minCapacity) nextCapacity *= 2;
    int* next = new int[nextCapacity];
    for (int i = 0; i < size_; ++i) next[i] = data_[i];
    delete[] data_;
    data_ = next;
    capacity_ = nextCapacity;
}

// ==================== CORE TODO ====================
void BinaryHeap::siftUp(int index) {
    throw std::logic_error("TODO: BinaryHeap::siftUp");
}
void BinaryHeap::siftDown(int index) {
    throw std::logic_error("TODO: BinaryHeap::siftDown");
}
void BinaryHeap::push(int value) {
    // 尾部加入后上滤。
    throw std::logic_error("TODO: BinaryHeap::push");
}
void BinaryHeap::pop() {
    // 根与末尾处理后下滤。
    throw std::logic_error("TODO: BinaryHeap::pop");
}
void BinaryHeap::build(const int* values, int n) {
    // 重点练 Floyd build-heap：从最后一个非叶节点开始向下调整。
    throw std::logic_error("TODO: BinaryHeap::build");
}

}
