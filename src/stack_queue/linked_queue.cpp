#include "whudsa/stack_queue/linked_queue.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
LinkedQueue::LinkedQueue() : head_(nullptr), tail_(nullptr), size_(0) {}
LinkedQueue::~LinkedQueue() { clear(); }
int LinkedQueue::size() const { return size_; }
bool LinkedQueue::empty() const { return size_ == 0; }
int LinkedQueue::front() const {
    if (empty()) throw std::out_of_range("LinkedQueue::front on empty queue");
    return head_->value;
}
void LinkedQueue::clear() {
    while (head_) {
        Node* next = head_->next;
        delete head_;
        head_ = next;
    }
    tail_ = nullptr;
    size_ = 0;
}

// ==================== CORE TODO ====================
void LinkedQueue::push(int value) {
    // 接到 tail_ 后面；原空队列要同时设置 head_。
    throw std::logic_error("TODO: LinkedQueue::push");
}
void LinkedQueue::pop() {
    // 删除 head_；删掉最后一个节点后 tail_ 也要置空。
    throw std::logic_error("TODO: LinkedQueue::pop");
}

}
