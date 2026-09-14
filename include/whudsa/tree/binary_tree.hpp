#pragma once
namespace whudsa {
class BinaryTree {
public:
    BinaryTree(); ~BinaryTree();
    void insertLevelOrder(int value);
    int size() const; int height() const; int leafCount() const;
    void preorder(int* out, int& outSize) const;
    void inorder(int* out, int& outSize) const;
    void postorder(int* out, int& outSize) const;
    void levelOrder(int* out, int& outSize) const;
private: // TODO: design Node/root and traversal helpers.
};
}
