#include "whudsa/sorting/quick_sort.hpp"
#include <cassert>
using whudsa::quickSort;
int main(){ int a[]={5,1,4,1,3,2}; quickSort(a,6); for(int i=1;i<6;++i) assert(a[i-1]<=a[i]); int b[]={3}; quickSort(b,1); assert(b[0]==3); quickSort(nullptr,0); }
