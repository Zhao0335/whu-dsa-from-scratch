#include "whudsa/string/seq_string.hpp"
#include <cassert>
#include <cstring>
using whudsa::SeqString;
int main(){ SeqString s("abc"); assert(s.length()==3&&s.charAt(1)=='b'); s.append('d'); s.insert(1,'X'); assert(std::strcmp(s.c_str(),"aXbcd")==0); s.erase(1,2); assert(std::strcmp(s.c_str(),"acd")==0); SeqString t=s; t.append('!'); assert(std::strcmp(s.c_str(),"acd")==0); }
