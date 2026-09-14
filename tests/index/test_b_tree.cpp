#include "whudsa/index/b_tree.hpp"
#include <cassert>
using whudsa::BTree;
int main(){ BTree t(2); for(int i=1;i<=20;++i)t.insert(i); for(int i=1;i<=20;++i)assert(t.contains(i)); assert(t.erase(10)&&!t.contains(10)); }
