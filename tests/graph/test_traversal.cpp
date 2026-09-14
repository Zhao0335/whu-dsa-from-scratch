#include "whudsa/graph/traversal.hpp"
#include "whudsa/graph/adjacency_list.hpp"
#include <cassert>
using namespace whudsa;
int main(){ AdjacencyListGraph g(4,16,false); g.addEdge(0,1); g.addEdge(0,2); g.addEdge(1,3); int out[8],n=0; breadthFirstSearch(g,0,out,n); assert(n==4&&out[0]==0); n=0; depthFirstSearch(g,0,out,n); assert(n==4&&out[0]==0); }
