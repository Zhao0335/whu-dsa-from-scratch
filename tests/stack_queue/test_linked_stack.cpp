#include "whudsa/stack_queue/linked_stack.hpp"
#include <cassert>
using whudsa::LinkedStack;
int main(){ LinkedStack s; for(int i=0;i<5;++i)s.push(i); for(int i=4;i>=0;--i){assert(s.top()==i);s.pop();} assert(s.empty()); }
