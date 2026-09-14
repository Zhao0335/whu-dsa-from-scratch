#pragma once

namespace whudsa {
class BinarySearchTree {
public:
    BinarySearchTree();
    ~BinarySearchTree();
    BinarySearchTree(const BinarySearchTree&) = delete;
    BinarySearchTree& operator=(const BinarySearchTree&) = delete;

    bool insert(int value);          // CORE TODO
    bool contains(int value) const;  // CORE TODO
    bool erase(int value);           // CORE TODO
    int minimum() const;
    int maximum() const;
    int size() const;

private:
    struct Node { int value; Node* left; Node* right; };
    Node* root_;
    int size_;
    void destroy(Node* node);
};
}
