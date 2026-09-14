#include "whudsa/sorting/heap_sort.hpp"
#include <cassert>
using whudsa::heapSort;
int main(){ int a[]={5,1,4,1,3,2}; heapSort(a,6); for(int i=1;i<6;++i) assert(a[i-1]<=a[i]); int b[]={3}; heapSort(b,1); assert(b[0]==3); heapSort(nullptr,0); }
