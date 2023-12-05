#include <vector>

class MatrixGraph
{
public:
    MatrixGraph(std::vector<std::vector<std::size_t>> container) : container_(container) {}

    std::size_t GetEdgeWeight(std::size_t pointA, std::size_t pointB)
    {
        return container_.at(pointA).at(pointB);
    }

    void DFSPrint(std::size_t startingPoint)
    {
        // ⭐ Loop through the adjacency matrix at the startingPoints value (this will be any number from 0 to n) and print each value in a DFS search
        // 💡 Hint: remember you go rows then columns for the adjacency matrix graph
        // 💡 Tips below
        //  initialize your stack with the first variable
        //  initialize a container to keep track of what vertices you have visited

        // initialize your loop
        // DO THE DFS STUFF :>
        // at the row check which values have an edge weight (0 means it doesnt have a connection) and then add that stuff to the stack and print it
    }

    void BFSPrint(std::size_t startingPoint)
    {
        // ⭐ Loop through the adjacency matrix at the startingPoints value (this will be any number from 0 to n) and print each value in a DFS search
        // 💡 Hint: remember you go rows then columns for the adjacency matrix graph
        // 💡 Tips below
        //  initialize your stack with the first variable
        //  initialize a container to keep track of what vertices you have visited

        // initialize your loop
        // DO THE BFS STUFF :>
        // at the row check which values have an edge weight (0 means it doesnt have a connection) and then add that stuff to the queue and print it
    }

private:
    std::vector<std::vector<std::size_t>> container_;
};