#pragma once

namespace whudsa {
class LinkedQueue {
public:
    LinkedQueue();
    ~LinkedQueue();
    LinkedQueue(const LinkedQueue&) = delete;
    LinkedQueue& operator=(const LinkedQueue&) = delete;

    int size() const;
    bool empty() const;
    int front() const;
    void push(int value); // CORE TODO
    void pop();           // CORE TODO
    void clear();

private:
    struct Node { int value; Node* next; };
    Node* head_;
    Node* tail_;
    int size_;
};
}
