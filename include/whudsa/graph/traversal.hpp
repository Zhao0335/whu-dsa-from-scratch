#pragma once
namespace whudsa {
class AdjacencyListGraph;
void depthFirstSearch(const AdjacencyListGraph& g, int start, int* order, int& orderSize);   // CORE TODO
void breadthFirstSearch(const AdjacencyListGraph& g, int start, int* order, int& orderSize); // CORE TODO
}
