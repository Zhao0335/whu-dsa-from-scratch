#include "whudsa/string/linked_string.hpp"
#include <cassert>
using whudsa::LinkedString;
int main(){ LinkedString s("abc"); s.insert(1,'X'); assert(s.charAt(1)=='X'); s.erase(1); assert(s.charAt(1)=='b'); s.append('d'); assert(s.length()==4&&s.charAt(3)=='d'); }
