#include "whudsa/linear/unrolled_linked_list.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
UnrolledLinkedList::UnrolledLinkedList(int blockCapacity)
    : head_(nullptr), size_(0), blockCapacity_(blockCapacity > 1 ? blockCapacity : 2) {}

UnrolledLinkedList::~UnrolledLinkedList() {
    Node* p = head_;
    while (p) {
        Node* next = p->next;
        delete[] p->values;
        delete p;
        p = next;
    }
}
int UnrolledLinkedList::size() const { return size_; }
UnrolledLinkedList::Node* UnrolledLinkedList::makeBlock() const {
    Node* p = new Node;
    p->values = new int[blockCapacity_];
    p->count = 0;
    p->next = nullptr;
    return p;
}
void UnrolledLinkedList::checkIndex(int index) const {
    if (index < 0 || index >= size_) throw std::out_of_range("UnrolledLinkedList index");
}
void UnrolledLinkedList::checkInsertIndex(int index) const {
    if (index < 0 || index > size_) throw std::out_of_range("UnrolledLinkedList insert index");
}
UnrolledLinkedList::Node* UnrolledLinkedList::locate(int index, int& offset) const {
    Node* p = head_;
    int passed = 0;
    while (p && index >= passed + p->count) {
        passed += p->count;
        p = p->next;
    }
    offset = index - passed;
    return p;
}
int UnrolledLinkedList::get(int index) const {
    checkIndex(index);
    int offset = 0;
    Node* p = locate(index, offset);
    return p->values[offset];
}

// ==================== CORE TODO ====================
void UnrolledLinkedList::insert(int index, int value) {
    // 找块 -> 块满时分裂 -> 块内后移 -> 插入 -> size_++。
    throw std::logic_error("TODO: UnrolledLinkedList::insert");
}
void UnrolledLinkedList::erase(int index) {
    // 找块 -> 块内前移 -> 必要时处理空块/合并 -> size_--。
    throw std::logic_error("TODO: UnrolledLinkedList::erase");
}
void UnrolledLinkedList::pushBack(int value) {
    // 找最后一块；没有块则创建；满了则新建块。
    throw std::logic_error("TODO: UnrolledLinkedList::pushBack");
}

}
