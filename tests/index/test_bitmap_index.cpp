#include "whudsa/index/bitmap_index.hpp"
#include <cassert>
using whudsa::BitmapIndex;
int main(){ BitmapIndex b(100); b.set(63); b.set(64); assert(b.test(63)&&b.test(64)); b.clear(63); assert(!b.test(63)); }
