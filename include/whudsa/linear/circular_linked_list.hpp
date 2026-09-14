#pragma once
namespace whudsa {
class CircularLinkedList {
public:
    CircularLinkedList();
    ~CircularLinkedList();
    int size() const;
    bool empty() const;
    void pushBack(int value);
    void insert(int index, int value);
    void erase(int index);
    int get(int index) const;
    void clear();
private:
    // TODO: decide whether to store head, tail, or both, and define the stop condition.
};
}
