#include "whudsa/graph/adjacency_matrix.hpp"
#include <cassert>
using whudsa::AdjacencyMatrixGraph;
int main(){ AdjacencyMatrixGraph g(4,false); g.addEdge(0,1,7); g.addEdge(0,2,3); assert(g.hasEdge(1,0)&&g.weight(0,1)==7&&g.degree(0)==2); g.removeEdge(0,1); assert(!g.hasEdge(0,1)); }
