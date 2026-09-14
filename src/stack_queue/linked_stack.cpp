#include "whudsa/stack_queue/linked_stack.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
LinkedStack::LinkedStack() : top_(nullptr), size_(0) {}
LinkedStack::~LinkedStack() { clear(); }
int LinkedStack::size() const { return size_; }
bool LinkedStack::empty() const { return size_ == 0; }
int LinkedStack::top() const {
    if (empty()) throw std::out_of_range("LinkedStack::top on empty stack");
    return top_->value;
}
void LinkedStack::clear() {
    while (top_) {
        Node* next = top_->next;
        delete top_;
        top_ = next;
    }
    size_ = 0;
}

// ==================== CORE TODO ====================
void LinkedStack::push(int value) {
    // 新节点直接接到链头；链头就是栈顶。
    throw std::logic_error("TODO: LinkedStack::push");
}
void LinkedStack::pop() {
    // 删除链头并维护 size_。
    throw std::logic_error("TODO: LinkedStack::pop");
}

}
