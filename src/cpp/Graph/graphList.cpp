#include <iostream>
#include <vector>

class GraphbyList{
private:
    std::vector<std::vector<int>> adjacencyList;
public:
    GraphbyList(int numVertices) : adjacencyList(numVertices){}

    void addEdge(int src, int dest){
        adjacencyList[src].push_back(dest);
        adjacencyList[dest].push_back(src);
    }
    void printGraph(){
        for(int i = 0; i < adjacencyList.size(); i++){
            std::cout << "顶点 " << i << " 的邻接顶点";
            for (int j = 0; j < adjacencyList[i].size(); j++)
            {
                std::cout << adjacencyList[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};
