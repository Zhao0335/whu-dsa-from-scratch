#pragma once
namespace whudsa {
class BTree {
public:
    explicit BTree(int minimumDegree=2); ~BTree();
    bool contains(int key) const; void insert(int key); bool erase(int key);
private: // TODO: design node keys/children, split/borrow/merge.
};
}
