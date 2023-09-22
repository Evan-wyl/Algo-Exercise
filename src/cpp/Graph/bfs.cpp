#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph{
    int V;
    vector<vector<int>> adj;
public:
    
    Graph(int V){
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int v, int w){
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    vector<int> BFS(int s, int d){
        vector<bool> isVisited(V, false);
        queue<int> q;

        isVisited[s] = true;
        q.push(s);

        vector<int> path(V, -1);

        while (!q.empty())
        {
            s = q.front();
            q.pop();

            for (auto i = adj[s].begin(); i != adj[s].end(); i++)
            {
                if(!isVisited[*i]){  
                    path[*i] = s;
                    if(*i == d){
                        return path;
                    }
                }
                isVisited[*i] = true;
                q.push(*i);
            } 
        }
        return path;
    }
};
