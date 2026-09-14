#pragma once

namespace whudsa {
class ArrayBinaryTree {
public:
    explicit ArrayBinaryTree(int capacity = 16);
    ~ArrayBinaryTree();
    ArrayBinaryTree(const ArrayBinaryTree&) = delete;
    ArrayBinaryTree& operator=(const ArrayBinaryTree&) = delete;

    void set(int index, int value); // CORE TODO
    int get(int index) const;       // CORE TODO
    bool exists(int index) const;   // CORE TODO
    int parentIndex(int index) const;     // CORE TODO
    int leftChildIndex(int index) const;  // CORE TODO
    int rightChildIndex(int index) const; // CORE TODO

private:
    int* values_;
    bool* occupied_;
    int capacity_;
    void checkIndex(int index) const;
};
}
