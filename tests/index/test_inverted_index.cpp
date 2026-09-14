#include "whudsa/index/inverted_index.hpp"
#include <cassert>
using whudsa::InvertedIndex;
int main(){ InvertedIndex idx; idx.addDocument(1,"data structure algorithm"); idx.addDocument(2,"algorithm design"); int out[8]; int n=idx.search("algorithm",out,8); assert(n==2); }
