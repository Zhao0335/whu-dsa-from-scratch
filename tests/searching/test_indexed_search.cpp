#include "whudsa/searching/indexed_search.hpp"
#include <cassert>
using whudsa::indexedSearch;
int main(){ int d[]={1,4,7,10,13,20}; int mx[]={7,20}; int st[]={0,3}; assert(indexedSearch(d,6,mx,st,2,13)==4); }
