#include "whudsa/algorithm/branch_and_bound.hpp"
#include <cassert>
using namespace whudsa;
int main(){ int w[]={2,3,4}; int v[]={4,5,6}; assert(knapsackBranchAndBound(w,v,3,5)==9); }
