#pragma once
namespace whudsa {
class BinarySearchTree {
public:
    BinarySearchTree(); ~BinarySearchTree();
    bool insert(int value); bool contains(int value) const; bool erase(int value);
    int minimum() const; int maximum() const; int size() const;
private: // TODO: design Node/root and erase cases.
};
}
