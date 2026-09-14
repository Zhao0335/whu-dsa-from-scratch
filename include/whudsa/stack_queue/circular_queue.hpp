#pragma once

namespace whudsa {
class CircularQueue {
public:
    explicit CircularQueue(int capacity = 8);
    ~CircularQueue();
    CircularQueue(const CircularQueue&) = delete;
    CircularQueue& operator=(const CircularQueue&) = delete;

    int size() const;
    bool empty() const;
    bool full() const;
    int front() const;
    void push(int value); // CORE TODO
    void pop();           // CORE TODO
    void clear();

private:
    int* data_;
    int capacity_;
    int front_;
    int rear_;   // 指向下一次写入的位置
    int size_;
};
}
