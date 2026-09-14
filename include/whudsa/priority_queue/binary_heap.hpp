#pragma once
namespace whudsa {
class BinaryHeap {
public:
    BinaryHeap(); ~BinaryHeap();
    int size() const; bool empty() const; int top() const;
    void push(int value); void pop(); void build(const int* values,int n);
private:
    // TODO: design the internal representation and invariants yourself.
};
}
