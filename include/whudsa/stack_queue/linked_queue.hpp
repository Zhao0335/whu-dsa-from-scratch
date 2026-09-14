#pragma once
namespace whudsa {
class LinkedQueue {
public:
    LinkedQueue(); ~LinkedQueue();
    int size() const; bool empty() const; int front() const;
    void push(int value); void pop(); void clear();
private: // TODO: design head/tail representation.
};
}
