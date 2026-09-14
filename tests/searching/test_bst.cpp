#include "whudsa/searching/bst.hpp"
#include <cassert>
#include <initializer_list>
using whudsa::BinarySearchTree;
int main(){ BinarySearchTree t; for(int x: {5,3,7,2,4,6,8}) t.insert(x); assert(t.contains(4)&&t.minimum()==2&&t.maximum()==8); assert(t.erase(5)&&!t.contains(5)); }
