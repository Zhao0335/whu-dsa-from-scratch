#include "whudsa/searching/avl.hpp"
#include <cassert>
using whudsa::AVLTree;
int main(){
    AVLTree a; a.insert(30); a.insert(20); a.insert(10); assert(a.isBalanced());
    AVLTree b; b.insert(10); b.insert(20); b.insert(30); assert(b.isBalanced());
    AVLTree c; c.insert(30); c.insert(10); c.insert(20); assert(c.isBalanced());
    AVLTree d; d.insert(10); d.insert(30); d.insert(20); assert(d.isBalanced());
}
