#include "whudsa/string/boyer_moore.hpp"
#include <cassert>
using whudsa::boyerMooreSearch;
int main(){ assert(boyerMooreSearch("HERE IS A SIMPLE EXAMPLE","EXAMPLE")==17); assert(boyerMooreSearch("abc","z")==-1); }
