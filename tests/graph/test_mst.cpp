#include "whudsa/graph/mst.hpp"
#include "whudsa/graph/adjacency_list.hpp"
#include <cassert>
using namespace whudsa;
int main(){ AdjacencyListGraph g(4,32,false); g.addEdge(0,1,1); g.addEdge(1,2,2); g.addEdge(2,3,3); g.addEdge(0,3,10); g.addEdge(0,2,8); assert(primMstWeight(g)==6); assert(kruskalMstWeight(g)==6); }
