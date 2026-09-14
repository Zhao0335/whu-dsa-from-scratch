#include "whudsa/string/kmp.hpp"
#include <cassert>
using namespace whudsa;
int main(){ int f[16]{}; buildKmpFailure("ababaca",f); assert(kmpSearch("xxababacayy","ababaca")==2); assert(kmpSearch("aaaaa","bba")==-1); assert(kmpSearch("abc","")==0); }
