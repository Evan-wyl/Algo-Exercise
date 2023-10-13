#include <iostream>
#include <vector>
#include <queue>

class Graph{
    int V;
    std::vector<std::vector<int>> adj;
public:
    
    Graph(int V){
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int v, int w){
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    std::vector<int> BFS(int s, int d){
        std::vector<bool> isVisited(V, false);
        std::queue<int> q;

        isVisited[s] = true;
        q.push(s);

        std::vector<int> path(V, -1);

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

int main(){
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    return 0;
}
