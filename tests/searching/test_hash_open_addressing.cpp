#include "whudsa/searching/hash_open_addressing.hpp"
#include <cassert>
using whudsa::HashOpenAddressing;
int main(){ HashOpenAddressing h(5); assert(h.insert(1,10)); assert(h.insert(6,20)); int v=0; assert(h.get(6,v)&&v==20); assert(h.erase(1)&&!h.contains(1)); }
