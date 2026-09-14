#include "whudsa/sorting/insertion_sort.hpp"
#include <cassert>
using whudsa::insertionSort;
int main(){ int a[]={5,1,4,1,3,2}; insertionSort(a,6); for(int i=1;i<6;++i) assert(a[i-1]<=a[i]); int b[]={3}; insertionSort(b,1); assert(b[0]==3); insertionSort(nullptr,0); }
