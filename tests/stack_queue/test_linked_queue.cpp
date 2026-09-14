#include "whudsa/stack_queue/linked_queue.hpp"
#include <cassert>
using whudsa::LinkedQueue;
int main(){ LinkedQueue q; q.push(1); q.push(2); assert(q.front()==1); q.pop(); assert(q.front()==2); q.pop(); assert(q.empty()); q.push(3); assert(q.front()==3); }
