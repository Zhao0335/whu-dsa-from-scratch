#include "whudsa/stack_queue/circular_queue.hpp"
#include <cassert>
using whudsa::CircularQueue;
int main(){ CircularQueue q(4); q.push(1); q.push(2); q.push(3); assert(q.front()==1); q.pop(); q.push(4); q.pop(); q.push(5); assert(q.front()==3); q.pop(); assert(q.front()==4); q.pop(); assert(q.front()==5); q.pop(); assert(q.empty()); }
