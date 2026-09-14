#pragma once
namespace whudsa {
class ArrayStack {
public:
    ArrayStack();
    explicit ArrayStack(int initialCapacity);
    ~ArrayStack();
    int size() const;
    bool empty() const;
    int top() const;
    void push(int value);
    void pop();
    void clear();
private:
    // TODO: design dynamic-array stack representation.
};
}
