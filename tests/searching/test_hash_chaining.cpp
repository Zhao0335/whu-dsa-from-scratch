#include "whudsa/searching/hash_chaining.hpp"
#include <cassert>
using whudsa::HashChaining;
int main(){ HashChaining h(5); h.insert(1,10); h.insert(6,20); int v=0; assert(h.get(1,v)&&v==10); assert(h.get(6,v)&&v==20); }
