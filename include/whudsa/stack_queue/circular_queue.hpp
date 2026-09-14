#pragma once
namespace whudsa {
class CircularQueue {
public:
    explicit CircularQueue(int capacity = 8); ~CircularQueue();
    int size() const; bool empty() const; bool full() const;
    int front() const; void push(int value); void pop(); void clear();
private:
    // TODO: define front/rear meaning, empty/full condition, and wrap-around policy.
};
}
