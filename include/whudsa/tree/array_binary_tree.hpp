#pragma once
namespace whudsa {
class ArrayBinaryTree {
public:
    explicit ArrayBinaryTree(int capacity=16); ~ArrayBinaryTree();
    void set(int index,int value); int get(int index) const; bool exists(int index) const;
    int parentIndex(int index) const; int leftChildIndex(int index) const; int rightChildIndex(int index) const;
private: // TODO: choose 0-based representation and occupancy tracking.
};
}
