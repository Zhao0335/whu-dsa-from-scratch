#include "whudsa/graph/adjacency_list.hpp"
#include <cassert>
using whudsa::AdjacencyListGraph;
int main(){ AdjacencyListGraph g(4,16,false); g.addEdge(0,1,5); g.addEdge(0,2,7); int e=g.firstEdge(0); assert(e!=-1); int seen=0; for(;e!=-1;e=g.nextEdge(e)){ int v=g.edgeTo(e); if(v==1||v==2)++seen; } assert(seen==2); }
