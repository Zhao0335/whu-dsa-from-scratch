#include "whudsa/priority_queue/d_ary_heap.hpp"
#include <cassert>
using whudsa::DAryHeap;
int main(){ DAryHeap h; h.push(5); h.push(1); h.push(3); assert(h.top()==1); h.pop(); assert(h.top()==3); }
