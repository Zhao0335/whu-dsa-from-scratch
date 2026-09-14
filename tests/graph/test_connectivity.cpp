#include "whudsa/graph/connectivity.hpp"
#include "whudsa/graph/adjacency_list.hpp"
#include <cassert>
using namespace whudsa;
int main(){ AdjacencyListGraph g(5,16,false); g.addEdge(0,1); g.addEdge(3,4); assert(connectedComponents(g)==3); }
