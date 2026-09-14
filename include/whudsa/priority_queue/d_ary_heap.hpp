#pragma once
namespace whudsa {
class DAryHeap {
public:
    explicit DAryHeap(int d = 2); ~DAryHeap();
    int size() const; bool empty() const; int top() const;
    void push(int value); void pop(); 
private:
    // TODO: design the internal representation and invariants yourself.
};
}
