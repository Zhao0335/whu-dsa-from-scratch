#include "whudsa/sorting/selection_sort.hpp"
#include <cassert>
using whudsa::selectionSort;
int main(){ int a[]={5,1,4,1,3,2}; selectionSort(a,6); for(int i=1;i<6;++i) assert(a[i-1]<=a[i]); int b[]={3}; selectionSort(b,1); assert(b[0]==3); selectionSort(nullptr,0); }
