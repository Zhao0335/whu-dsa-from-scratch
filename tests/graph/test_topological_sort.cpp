#include "whudsa/graph/topological_sort.hpp"
#include "whudsa/graph/adjacency_list.hpp"
#include <cassert>
using namespace whudsa;
int main(){ AdjacencyListGraph g(4,16,true); g.addEdge(0,1); g.addEdge(0,2); g.addEdge(1,3); g.addEdge(2,3); int o[4],n=0; assert(topologicalSort(g,o,n)); assert(n==4&&o[0]==0&&o[3]==3); }
