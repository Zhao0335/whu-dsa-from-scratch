#pragma once

namespace whudsa {
class SkewHeap {
public:
    SkewHeap();
    ~SkewHeap();
    SkewHeap(const SkewHeap&) = delete;
    SkewHeap& operator=(const SkewHeap&) = delete;

    int size() const;
    bool empty() const;
    int top() const;
    void push(int value);           // CORE TODO
    void pop();                     // CORE TODO
    void merge(SkewHeap& other);    // CORE TODO

private:
    struct Node { int value; Node* left; Node* right; };
    Node* root_;
    int size_;
    void destroy(Node* node);
    Node* mergeNodes(Node* a, Node* b); // CORE TODO helper
};
}
