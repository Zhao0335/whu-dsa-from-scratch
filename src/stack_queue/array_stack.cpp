#include "whudsa/stack_queue/array_stack.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
ArrayStack::ArrayStack() : ArrayStack(8) {}
ArrayStack::ArrayStack(int initialCapacity)
    : data_(nullptr), size_(0), capacity_(initialCapacity > 0 ? initialCapacity : 1) {
    data_ = new int[capacity_];
}
ArrayStack::~ArrayStack() { delete[] data_; }
int ArrayStack::size() const { return size_; }
bool ArrayStack::empty() const { return size_ == 0; }
int ArrayStack::top() const {
    if (empty()) throw std::out_of_range("ArrayStack::top on empty stack");
    return data_[size_ - 1];
}
void ArrayStack::clear() { size_ = 0; }
void ArrayStack::ensureCapacity(int minCapacity) {
    if (capacity_ >= minCapacity) return;
    int newCapacity = capacity_ * 2;
    while (newCapacity < minCapacity) newCapacity *= 2;
    int* next = new int[newCapacity];
    for (int i = 0; i < size_; ++i) next[i] = data_[i];
    delete[] data_;
    data_ = next;
    capacity_ = newCapacity;
}

// ==================== CORE TODO ====================
void ArrayStack::push(int value) {
    // ensureCapacity 后把 value 放到栈顶并更新 size_。
    throw std::logic_error("TODO: ArrayStack::push");
}
void ArrayStack::pop() {
    // 空栈检查；删除栈顶只需要维护 size_。
    throw std::logic_error("TODO: ArrayStack::pop");
}

}
