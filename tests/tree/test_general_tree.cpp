#include "whudsa/tree/general_tree.hpp"
#include <cassert>
using whudsa::GeneralTree;
int main(){ GeneralTree t; int r=t.addRoot(1); t.addChild(r,2); t.addChild(r,3); assert(t.nodeCount()==3&&t.childCount(r)==2); }
