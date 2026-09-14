#pragma once
namespace whudsa {
class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    int size() const;
    bool empty() const;
    void pushFront(int value);
    void pushBack(int value);
    void insert(int index, int value);
    void erase(int index);
    int get(int index) const;
    int getFromBack(int reverseIndex) const;
    void clear();
private:
    // TODO: design Node/head/tail representation yourself.
};
}
