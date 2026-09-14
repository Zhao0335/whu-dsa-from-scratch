#pragma once

namespace whudsa {
class LeftistHeap {
public:
    LeftistHeap();
    ~LeftistHeap();
    LeftistHeap(const LeftistHeap&) = delete;
    LeftistHeap& operator=(const LeftistHeap&) = delete;

    int size() const;
    bool empty() const;
    int top() const;
    void push(int value);             // CORE TODO
    void pop();                       // CORE TODO
    void merge(LeftistHeap& other);   // CORE TODO

private:
    struct Node {
        int value;
        int npl;
        Node* left;
        Node* right;
    };
    Node* root_;
    int size_;
    void destroy(Node* node);
    Node* mergeNodes(Node* a, Node* b); // CORE TODO helper
};
}
