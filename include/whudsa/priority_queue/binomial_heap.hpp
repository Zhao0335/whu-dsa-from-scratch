#pragma once
namespace whudsa {
class BinomialHeap {
public:
    BinomialHeap(); ~BinomialHeap();
    int size() const; bool empty() const; int top() const;
    void push(int value); void pop(); void merge(BinomialHeap& other);
private:
    // TODO: design the internal representation and invariants yourself.
};
}
