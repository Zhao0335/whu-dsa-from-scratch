#include "whudsa/searching/binary_search.hpp"
#include <cassert>
using namespace whudsa;
int main(){ int a[]={1,2,2,2,5,7}; assert(binarySearch(a,6,5)==4); assert(firstGreaterEqual(a,6,2)==1); assert(lastLessEqual(a,6,2)==3); assert(firstGreaterEqual(a,6,6)==5); }
