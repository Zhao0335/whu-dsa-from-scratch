#pragma once

namespace whudsa {
class AVLTree {
public:
    AVLTree();
    ~AVLTree();
    AVLTree(const AVLTree&) = delete;
    AVLTree& operator=(const AVLTree&) = delete;

    bool insert(int value);          // CORE TODO
    bool erase(int value);           // CORE TODO
    bool contains(int value) const;  // CORE TODO
    int height() const;
    bool isBalanced() const;         // CORE TODO

private:
    struct Node {
        int value;
        int height;
        Node* left;
        Node* right;
    };
    Node* root_;

    void destroy(Node* node);
    int nodeHeight(Node* node) const;
    void updateHeight(Node* node);
    int balanceFactor(Node* node) const;

    Node* rotateLeft(Node* node);   // CORE TODO helper
    Node* rotateRight(Node* node);  // CORE TODO helper
    Node* insertNode(Node* node, int value, bool& inserted); // CORE TODO helper
    Node* eraseNode(Node* node, int value, bool& erased);    // CORE TODO helper
    bool containsNode(Node* node, int value) const;           // CORE TODO helper
    bool balanced(Node* node) const;                          // CORE TODO helper
};
}
