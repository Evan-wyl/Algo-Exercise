#include <iostream>
#include <vector>

using namespace std;

class Graph{
    int v;
    vector<vector<int>> adj;
public:
    Graph(int v){
        this->v = v;
        adj.reserve(v);
    }

    void addEdge(int s, int d){
        adj[s].push_back(d);
        adj[d].push_back(s);
    }

    void DFSUtil(int s, int d, vector<bool> isVisited, vector<int> path){
        isVisited[s] = true;
        path.push_back(s);
        if (s == d)
        {
            for(int i = 0; i < path.size(); i++){
                cout << path[i] << endl;
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

    vector<int> DFS(int s, int d){
        vector<bool> isVisited(v, false);
        vector<int> path;
        DFSUtil(s, d, isVisited, path);
        return path;
     }
};
