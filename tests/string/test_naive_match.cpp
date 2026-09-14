#include "whudsa/string/naive_match.hpp"
#include <cassert>
using whudsa::naiveMatch;
int main(){ assert(naiveMatch("abcabc","cab")==2); assert(naiveMatch("aaaa","b")==-1); assert(naiveMatch("abc","")==0); }
