#pragma once

namespace whudsa {
class LinkedStack {
public:
    LinkedStack();
    ~LinkedStack();
    LinkedStack(const LinkedStack&) = delete;
    LinkedStack& operator=(const LinkedStack&) = delete;

    int size() const;
    bool empty() const;
    int top() const;
    void push(int value); // CORE TODO
    void pop();           // CORE TODO
    void clear();

private:
    struct Node { int value; Node* next; };
    Node* top_;
    int size_;
};
}
