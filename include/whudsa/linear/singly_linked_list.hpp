#pragma once

namespace whudsa {
class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    SinglyLinkedList(const SinglyLinkedList&) = delete;
    SinglyLinkedList& operator=(const SinglyLinkedList&) = delete;

    int size() const;
    bool empty() const;
    void pushFront(int value);          // CORE TODO
    void pushBack(int value);           // CORE TODO
    void insert(int index, int value);  // CORE TODO
    void erase(int index);              // CORE TODO
    bool removeFirst(int value);        // CORE TODO
    int get(int index) const;
    int find(int value) const;          // CORE TODO
    void reverse();                     // CORE TODO
    void clear();

private:
    // 支撑表示：不用自己设计类，只要理解 head/tail/size 的含义。
    struct Node {
        int value;
        Node* next;
    };

    Node* head_;
    Node* tail_;
    int size_;

    void checkIndex(int index) const;
    void checkInsertIndex(int index) const;
};
}
