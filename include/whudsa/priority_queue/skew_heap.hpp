#pragma once
namespace whudsa {
class SkewHeap {
public:
    SkewHeap(); ~SkewHeap();
    int size() const; bool empty() const; int top() const;
    void push(int value); void pop(); void merge(SkewHeap& other);
private:
    // TODO: design the internal representation and invariants yourself.
};
}
