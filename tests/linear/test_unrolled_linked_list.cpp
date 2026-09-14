#include "whudsa/linear/unrolled_linked_list.hpp"
#include <cassert>
using whudsa::UnrolledLinkedList;
int main(){ UnrolledLinkedList l(3); for(int i=0;i<10;++i) l.pushBack(i); assert(l.size()==10&&l.get(7)==7); l.insert(5,99); assert(l.get(5)==99); l.erase(5); assert(l.get(5)==5); }
