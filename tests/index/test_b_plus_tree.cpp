#include "whudsa/index/b_plus_tree.hpp"
#include <cassert>
using whudsa::BPlusTree;
int main(){ BPlusTree t(4); for(int i=1;i<=10;++i)t.insert(i,i*10); int v=0; assert(t.find(6,v)&&v==60); int k[16],val[16]; int n=t.rangeQuery(3,7,k,val,16); assert(n==5&&k[0]==3&&k[4]==7); }
