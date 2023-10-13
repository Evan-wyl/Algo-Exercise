#include <iostream>
#include <vector>

class Graph{
    int v;
    std::vector<std::vector<int>> adj;
public:
    Graph(int v){
        this->v = v;
        adj.reserve(v);
    }

    void addEdge(int s, int d){
        adj[s].push_back(d);
        adj[d].push_back(s);
    }

    void DFSUtil(int s, int d, std::vector<bool>& isVisited, std::vector<int>& path){
        isVisited[s] = true;
        path.push_back(s);
        if (s == d)
        {
            for(int i = 0; i < path.size(); i++){
                std::cout << path[i] << std::endl;
            }
        }else{
            for (auto i = adj[s].begin(); i != adj[s].end(); i++)
            {
                if(!isVisited[*i]){
                    DFSUtil(*i, d, isVisited, path);
                }
            }   
        }
        isVisited[s] = true;
        path.pop_back();
    }

    std::vector<int> DFS(int s, int d){
        std::vector<bool> isVisited(v, false);
        std::vector<int> path;
        DFSUtil(s, d, isVisited, path);
        return path;
     }
};
