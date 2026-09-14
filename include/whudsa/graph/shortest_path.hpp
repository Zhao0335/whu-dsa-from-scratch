#pragma once
namespace whudsa {
class AdjacencyListGraph;
void dijkstraSimple(const AdjacencyListGraph& g, int source, int* dist); // CORE TODO
void dijkstraHeap(const AdjacencyListGraph& g, int source, int* dist);   // CORE TODO
void floydWarshall(int* matrix, int n, int infinity);                    // CORE TODO
}
