#pragma once

namespace whudsa {
class BinaryHeap {
public:
    BinaryHeap();
    ~BinaryHeap();
    BinaryHeap(const BinaryHeap&) = delete;
    BinaryHeap& operator=(const BinaryHeap&) = delete;

    int size() const;
    bool empty() const;
    int top() const;
    void push(int value);                    // CORE TODO
    void pop();                              // CORE TODO
    void build(const int* values, int n);    // CORE TODO

private:
    int* data_;
    int size_;
    int capacity_;
    void ensureCapacity(int minCapacity);
    void siftUp(int index);   // CORE TODO helper
    void siftDown(int index); // CORE TODO helper
};
}
