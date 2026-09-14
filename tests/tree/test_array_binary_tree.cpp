#include "whudsa/tree/array_binary_tree.hpp"
#include <cassert>
using whudsa::ArrayBinaryTree;
int main(){ ArrayBinaryTree t; t.set(0,10); t.set(1,20); t.set(2,30); assert(t.get(2)==30); assert(t.parentIndex(2)==0); assert(t.leftChildIndex(0)==1&&t.rightChildIndex(0)==2); }
