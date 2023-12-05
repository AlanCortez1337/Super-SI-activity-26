#include <iostream>
#include "matrix-graph.hpp"

int main()
{

    // Below we initialize a graph with essentially the following graph:
    // [0, 30, 0, 10, 30]
    // [10, 25, 0, 0, 40]
    // [0, 0, 40, 0, 20]
    // [0, 20, 0, 0, 20]
    // [0, 10, 50, 80, 0]

    MatrixGraph megaGraph(
        {{0, 30, 0, 10, 30},
         {10, 25, 0, 0, 40},
         {0, 0, 40, 0, 20},
         {0, 20, 0, 0, 20},
         {0, 10, 50, 80, 0}});

    std::cout << "DFS SEARCH AT 0" << std::endl;
    megaGraph.DFSPrint(0);
    std::cout << "BFS SEARCH AT 0" << std::endl;
    megaGraph.BFSPrint(0);

    return 0;
}