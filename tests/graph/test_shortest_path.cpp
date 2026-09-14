#include "whudsa/graph/shortest_path.hpp"
#include "whudsa/graph/adjacency_list.hpp"
#include <cassert>
using namespace whudsa;
int main(){ AdjacencyListGraph g(4,16,true); g.addEdge(0,1,1); g.addEdge(1,2,2); g.addEdge(0,2,10); g.addEdge(2,3,3); int d[4]; dijkstraSimple(g,0,d); assert(d[0]==0&&d[2]==3&&d[3]==6); int e[4]; dijkstraHeap(g,0,e); for(int i=0;i<4;++i)assert(d[i]==e[i]); }
