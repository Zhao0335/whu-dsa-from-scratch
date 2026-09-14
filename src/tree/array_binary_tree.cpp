#include "whudsa/tree/array_binary_tree.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
ArrayBinaryTree::ArrayBinaryTree(int capacity)
    : values_(nullptr), occupied_(nullptr), capacity_(capacity > 0 ? capacity : 1) {
    values_ = new int[capacity_];
    occupied_ = new bool[capacity_];
    for (int i = 0; i < capacity_; ++i) occupied_[i] = false;
}
ArrayBinaryTree::~ArrayBinaryTree() {
    delete[] values_;
    delete[] occupied_;
}
void ArrayBinaryTree::checkIndex(int index) const {
    if (index < 0 || index >= capacity_) throw std::out_of_range("ArrayBinaryTree index");
}

// ==================== CORE TODO ====================
void ArrayBinaryTree::set(int index, int value) {
    throw std::logic_error("TODO: ArrayBinaryTree::set");
}
int ArrayBinaryTree::get(int index) const {
    throw std::logic_error("TODO: ArrayBinaryTree::get");
}
bool ArrayBinaryTree::exists(int index) const {
    throw std::logic_error("TODO: ArrayBinaryTree::exists");
}
int ArrayBinaryTree::parentIndex(int index) const {
    // 0-based 完全二叉树父下标公式；根节点按项目约定返回 -1。
    throw std::logic_error("TODO: ArrayBinaryTree::parentIndex");
}
int ArrayBinaryTree::leftChildIndex(int index) const {
    throw std::logic_error("TODO: ArrayBinaryTree::leftChildIndex");
}
int ArrayBinaryTree::rightChildIndex(int index) const {
    throw std::logic_error("TODO: ArrayBinaryTree::rightChildIndex");
}

}
