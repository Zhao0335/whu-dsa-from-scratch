#include "whudsa/linear/singly_linked_list.hpp"
#include <cassert>
using whudsa::SinglyLinkedList;
int main(){
    SinglyLinkedList l;
    assert(l.empty());
    l.pushFront(2); l.pushFront(1); l.pushBack(3);
    assert(l.size()==3 && l.get(0)==1 && l.get(2)==3);
    l.insert(1,9); assert(l.get(1)==9);
    l.erase(1); assert(l.get(1)==2);
    assert(l.removeFirst(2)); assert(l.find(2)==-1);
    l.reverse(); assert(l.get(0)==3 && l.get(1)==1);
    l.clear(); assert(l.empty());
    return 0;
}
