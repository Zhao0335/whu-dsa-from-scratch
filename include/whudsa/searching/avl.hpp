#pragma once
namespace whudsa {
class AVLTree {
public:
    AVLTree(); ~AVLTree();
    bool insert(int value); bool erase(int value); bool contains(int value) const; int height() const; bool isBalanced() const;
private: // TODO: design Node, height maintenance, LL/RR/LR/RL rotations.
};
}
