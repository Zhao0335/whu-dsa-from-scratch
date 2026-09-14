#pragma once
namespace whudsa {
class LeftistHeap {
public:
    LeftistHeap(); ~LeftistHeap();
    int size() const; bool empty() const; int top() const;
    void push(int value); void pop(); void merge(LeftistHeap& other);
private:
    // TODO: design the internal representation and invariants yourself.
};
}
