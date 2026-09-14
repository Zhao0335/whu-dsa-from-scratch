#include "whudsa/priority_queue/d_ary_heap.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
DAryHeap::DAryHeap(int d) : data_(new int[8]), size_(0), capacity_(8), d_(d >= 2 ? d : 2) {}
DAryHeap::~DAryHeap() { delete[] data_; }
int DAryHeap::size() const { return size_; }
bool DAryHeap::empty() const { return size_ == 0; }
int DAryHeap::top() const {
    if (empty()) throw std::out_of_range("DAryHeap::top on empty heap");
    return data_[0];
}
void DAryHeap::ensureCapacity(int minCapacity) {
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
void DAryHeap::siftUp(int index) {
    // d 叉堆父亲公式自己推出来，不要套二叉堆公式。
    throw std::logic_error("TODO: DAryHeap::siftUp");
}
void DAryHeap::siftDown(int index) {
    // 在最多 d 个孩子中找最小者。
    throw std::logic_error("TODO: DAryHeap::siftDown");
}
void DAryHeap::push(int value) { throw std::logic_error("TODO: DAryHeap::push"); }
void DAryHeap::pop() { throw std::logic_error("TODO: DAryHeap::pop"); }

}
