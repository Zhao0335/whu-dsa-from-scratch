#include "whudsa/algorithm/greedy.hpp"
#include <cassert>
using namespace whudsa;
int main(){ int s[]={1,3,0,5,8,5}; int e[]={2,4,6,7,9,9}; assert(intervalScheduling(s,e,6)>=3); }
