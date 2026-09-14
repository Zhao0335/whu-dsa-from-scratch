#include "whudsa/stack_queue/circular_queue.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
CircularQueue::CircularQueue(int capacity)
    : data_(nullptr), capacity_(capacity > 0 ? capacity : 1), front_(0), rear_(0), size_(0) {
    data_ = new int[capacity_];
}
CircularQueue::~CircularQueue() { delete[] data_; }
int CircularQueue::size() const { return size_; }
bool CircularQueue::empty() const { return size_ == 0; }
bool CircularQueue::full() const { return size_ == capacity_; }
int CircularQueue::front() const {
    if (empty()) throw std::out_of_range("CircularQueue::front on empty queue");
    return data_[front_];
}
void CircularQueue::clear() { front_ = rear_ = size_ = 0; }

// ==================== CORE TODO ====================
void CircularQueue::push(int value) {
    // 满队列按项目约定抛异常；写 data_[rear_]，rear_ 回绕，size_++。
    throw std::logic_error("TODO: CircularQueue::push");
}
void CircularQueue::pop() {
    // 空队列检查；front_ 回绕，size_--。
    throw std::logic_error("TODO: CircularQueue::pop");
}

}
