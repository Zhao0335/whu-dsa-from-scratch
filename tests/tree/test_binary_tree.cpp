#include "whudsa/tree/binary_tree.hpp"
#include <cassert>
using whudsa::BinaryTree;
int main(){ BinaryTree t; for(int i=1;i<=7;++i)t.insertLevelOrder(i); assert(t.size()==7&&t.height()==3&&t.leafCount()==4); int out[16],n=0; t.preorder(out,n); assert(n==7&&out[0]==1); n=0; t.levelOrder(out,n); for(int i=0;i<7;++i)assert(out[i]==i+1); }
