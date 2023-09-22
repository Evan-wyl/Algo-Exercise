#include <iostream>
#include <vector>

class Graph{
private:
    std::vector<std::vector<int>> adjaencyMatrix;
public:
    
    Graph(int numVertices) : adjaencyMatrix(numVertices, std::vector<int>(numVertices, 0)){}
    
    void addEdge(int src, int dest){
        adjaencyMatrix[src][dest] = 1;
        adjaencyMatrix[dest][src] = 1;
    }

    void printGraph(){
        for (int i = 0; i < adjaencyMatrix.size(); i++)
        {
            for (int j = 0; j < adjaencyMatrix[i].size(); j++)
            {
                std::cout << adjaencyMatrix[i][j] << " ";
            }
            std::cout << std::endl;
            
        }
    }
};
