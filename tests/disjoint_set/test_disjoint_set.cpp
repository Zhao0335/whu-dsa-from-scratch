#include "whudsa/disjoint_set/disjoint_set.hpp"
#include <cassert>
using whudsa::DisjointSet;
int main(){ DisjointSet d(6); d.unite(0,1); d.unite(1,2); assert(d.same(0,2)); assert(!d.same(0,3)); assert(d.componentSize(1)==3); d.unite(3,4); d.unite(2,4); assert(d.same(0,3)&&d.componentSize(4)==5); }
