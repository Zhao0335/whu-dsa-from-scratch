#pragma once
namespace whudsa {
class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    int size() const;
    bool empty() const;
    void pushFront(int value);
    void pushBack(int value);
    void insert(int index, int value);
    void erase(int index);
    bool removeFirst(int value);
    int get(int index) const;
    int find(int value) const;
    void reverse();
    void clear();
private:
    // TODO: design Node and list representation yourself.
};
}
