#pragma once

namespace whudsa {
class CircularLinkedList {
public:
    CircularLinkedList();
    ~CircularLinkedList();
    CircularLinkedList(const CircularLinkedList&) = delete;
    CircularLinkedList& operator=(const CircularLinkedList&) = delete;

    int size() const;
    bool empty() const;
    void pushBack(int value);           // CORE TODO
    void insert(int index, int value);  // CORE TODO
    void erase(int index);              // CORE TODO
    int get(int index) const;
    void clear();

private:
    // 只保存尾指针：非空时头节点就是 tail_->next。
    struct Node { int value; Node* next; };
    Node* tail_;
    int size_;

    void checkIndex(int index) const;
    void checkInsertIndex(int index) const;
};
}
