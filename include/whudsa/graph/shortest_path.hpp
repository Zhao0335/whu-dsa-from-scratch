#pragma once
namespace whudsa { class AdjacencyListGraph; void dijkstraSimple(const AdjacencyListGraph& g,int source,int* dist); void dijkstraHeap(const AdjacencyListGraph& g,int source,int* dist); void floydWarshall(int* matrix,int n,int infinity); }
