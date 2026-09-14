#include "whudsa/sorting/merge_sort.hpp"
#include <cassert>
using whudsa::mergeSort;
int main(){ int a[]={5,1,4,1,3,2}; mergeSort(a,6); for(int i=1;i<6;++i) assert(a[i-1]<=a[i]); int b[]={3}; mergeSort(b,1); assert(b[0]==3); mergeSort(nullptr,0); }
