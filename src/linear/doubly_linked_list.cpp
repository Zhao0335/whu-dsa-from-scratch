#include "whudsa/linear/doubly_linked_list.hpp"
#include <stdexcept>

namespace whudsa {

// ==================== 支撑代码：不用改 ====================
DoublyLinkedList::DoublyLinkedList() : head_(nullptr), tail_(nullptr), size_(0) {}
DoublyLinkedList::~DoublyLinkedList() { clear(); }
int DoublyLinkedList::size() const { return size_; }
bool DoublyLinkedList::empty() const { return size_ == 0; }
void DoublyLinkedList::checkIndex(int index) const {
    if (index < 0 || index >= size_) throw std::out_of_range("DoublyLinkedList index");
}
void DoublyLinkedList::checkInsertIndex(int index) const {
    if (index < 0 || index > size_) throw std::out_of_range("DoublyLinkedList insert index");
}
int DoublyLinkedList::get(int index) const {
    checkIndex(index);
    Node* p;
    if (index < size_ / 2) {
        p = head_;
        for (int i = 0; i < index; ++i) p = p->next;
    } else {
        p = tail_;
        for (int i = size_ - 1; i > index; --i) p = p->prev;
    }
    return p->value;
}
void DoublyLinkedList::clear() {
    Node* p = head_;
    while (p) {
        Node* next = p->next;
        delete p;
        p = next;
    }
    head_ = tail_ = nullptr;
    size_ = 0;
}

// ==================== CORE TODO ====================
void DoublyLinkedList::pushFront(int value) {
    // 同时维护新旧节点的 prev/next；空表时 head_ == tail_。
    throw std::logic_error("TODO: DoublyLinkedList::pushFront");
}
void DoublyLinkedList::pushBack(int value) {
    throw std::logic_error("TODO: DoublyLinkedList::pushBack");
}
void DoublyLinkedList::insert(int index, int value) {
    // 合法位置 [0,size_]；中间插入要改四条连接关系。
    throw std::logic_error("TODO: DoublyLinkedList::insert");
}
void DoublyLinkedList::erase(int index) {
    // 特别检查删头、删尾、删唯一节点。
    throw std::logic_error("TODO: DoublyLinkedList::erase");
}
int DoublyLinkedList::getFromBack(int reverseIndex) const {
    // reverseIndex=0 表示尾节点。
    throw std::logic_error("TODO: DoublyLinkedList::getFromBack");
}

}
