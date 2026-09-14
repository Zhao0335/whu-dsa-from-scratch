#include "whudsa/linear/circular_linked_list.hpp"
#include <cassert>
using whudsa::CircularLinkedList;
int main(){ CircularLinkedList l; l.pushBack(1); l.pushBack(2); l.pushBack(3); assert(l.get(0)==1&&l.get(2)==3); l.erase(0); assert(l.get(0)==2); l.insert(1,9); assert(l.get(1)==9); l.clear(); assert(l.empty()); }
