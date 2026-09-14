#include "whudsa/priority_queue/binary_heap.hpp"
#include <cassert>
using whudsa::BinaryHeap;
int main(){ BinaryHeap h; h.push(5); h.push(1); h.push(3); assert(h.top()==1); h.pop(); assert(h.top()==3); }
