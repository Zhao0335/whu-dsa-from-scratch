#pragma once

namespace whudsa {
class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();
    BinaryTree(const BinaryTree&) = delete;
    BinaryTree& operator=(const BinaryTree&) = delete;

    void insertLevelOrder(int value); // CORE TODO
    int size() const;
    int height() const;               // CORE TODO
    int leafCount() const;            // CORE TODO
    void preorder(int* out, int& outSize) const;   // CORE TODO
    void inorder(int* out, int& outSize) const;    // CORE TODO
    void postorder(int* out, int& outSize) const;  // CORE TODO
    void levelOrder(int* out, int& outSize) const; // CORE TODO

private:
    struct Node {
        int value;
        Node* left;
        Node* right;
    };
    Node* root_;
    int size_;

    void destroy(Node* node);
};
}
