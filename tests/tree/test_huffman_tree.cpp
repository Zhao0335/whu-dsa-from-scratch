#include "whudsa/tree/huffman_tree.hpp"
#include <cassert>
using whudsa::HuffmanTree;
int main(){ char s[]={'a','b','c','d','e','f'}; int w[]={45,13,12,16,9,5}; HuffmanTree h; h.build(s,w,6); assert(h.weightedPathLength()>0); char code[32]; assert(h.encode('a',code,32)); }
