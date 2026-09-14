#pragma once

namespace whudsa {
class ArrayStack {
public:
    ArrayStack();
    explicit ArrayStack(int initialCapacity);
    ~ArrayStack();
    ArrayStack(const ArrayStack&) = delete;
    ArrayStack& operator=(const ArrayStack&) = delete;

    int size() const;
    bool empty() const;
    int top() const;
    void push(int value); // CORE TODO
    void pop();           // CORE TODO
    void clear();

private:
    int* data_;
    int size_;
    int capacity_;
    void ensureCapacity(int minCapacity);
};
}
