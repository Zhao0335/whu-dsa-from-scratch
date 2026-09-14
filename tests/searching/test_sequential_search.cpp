#include "whudsa/searching/sequential_search.hpp"
#include <cassert>
using namespace whudsa;
int main(){ int a[]={3,1,4,1,5}; assert(sequentialSearch(a,5,4)==2); assert(sequentialSearch(a,5,9)==-1); }
