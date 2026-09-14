#pragma once

namespace whudsa {
class DAryHeap {
public:
    explicit DAryHeap(int d = 2);
    ~DAryHeap();
    DAryHeap(const DAryHeap&) = delete;
    DAryHeap& operator=(const DAryHeap&) = delete;

    int size() const;
    bool empty() const;
    int top() const;
    void push(int value); // CORE TODO
    void pop();           // CORE TODO

private:
    int* data_;
    int size_;
    int capacity_;
    int d_;
    void ensureCapacity(int minCapacity);
    void siftUp(int index);   // CORE TODO helper
    void siftDown(int index); // CORE TODO helper
};
}
