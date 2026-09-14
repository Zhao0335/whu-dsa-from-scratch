#include "whudsa/linear/doubly_linked_list.hpp"
#include <cassert>
using whudsa::DoublyLinkedList;
int main(){
    DoublyLinkedList l; l.pushBack(1); l.pushBack(2); l.pushFront(0);
    assert(l.size()==3 && l.get(0)==0 && l.getFromBack(0)==2);
    l.insert(2,9); assert(l.get(2)==9);
    l.erase(0); assert(l.get(0)==1);
    l.erase(l.size()-1); assert(l.getFromBack(0)==9);
    l.clear(); assert(l.empty()); return 0;
}
