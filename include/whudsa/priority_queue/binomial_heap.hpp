#pragma once

namespace whudsa {
class BinomialHeap {
public:
    BinomialHeap();
    ~BinomialHeap();
    BinomialHeap(const BinomialHeap&) = delete;
    BinomialHeap& operator=(const BinomialHeap&) = delete;

    int size() const;
    bool empty() const;
    int top() const;
    void push(int value);              // CORE TODO
    void pop();                        // CORE TODO
    void merge(BinomialHeap& other);   // CORE TODO

private:
    struct Node {
        int value;
        int degree;
        Node* parent;
        Node* child;
        Node* sibling;
    };
    Node* head_; // 按 degree 递增的根链
    int size_;

    void destroyForest(Node* node);
    void linkTrees(Node* child, Node* parent); // CORE TODO helper
    Node* mergeRootLists(Node* a, Node* b);    // CORE TODO helper
    void consolidate();                         // CORE TODO helper
};
}
