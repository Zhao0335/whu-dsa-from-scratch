#include "whudsa/stack_queue/array_stack.hpp"
#include <cassert>
using whudsa::ArrayStack;
int main(){ ArrayStack s(1); assert(s.empty()); s.push(1); s.push(2); assert(s.top()==2&&s.size()==2); s.pop(); assert(s.top()==1); s.clear(); assert(s.empty()); }
