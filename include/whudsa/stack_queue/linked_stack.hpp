#pragma once
namespace whudsa {
class LinkedStack {
public:
    LinkedStack(); ~LinkedStack();
    int size() const; bool empty() const; int top() const;
    void push(int value); void pop(); void clear();
private: // TODO: design linked representation.
};
}
