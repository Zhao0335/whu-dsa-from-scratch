#include "whudsa/graph/critical_path.hpp"
#include "whudsa/graph/adjacency_list.hpp"
#include <cassert>
using namespace whudsa;
int main(){ AdjacencyListGraph g(4,16,true); g.addEdge(0,1,3); g.addEdge(0,2,2); g.addEdge(1,3,4); g.addEdge(2,3,10); assert(criticalPathLength(g)==12); }
