#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
public:
    Graph(int n) : n(n), adjList(n), colors(n - 1) {}

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool isBipartiteBFS() {
        for (int i = 0; i < n; i++) {
            if(colors[i] == -1) {
                if(!bfs(i)) {
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartiteDFS() {
        for (int i = 0; i < n; i++) {
            if(colors[i] == -1) {
                if(!dfs(i, 1)){
                    return false;
                }
            }
        }
        return true;
    }

private:
    int n;
    vector<vector<int>> adjList;
    vector<int> colors;

    bool bfs(int src) {
        queue<int> q;
        q.push(src);
        colors[src] = 1;

        while(!q.empty()) {
            int node = q.front();
            q.pop();

            for(int neighbor : adjList[node]) {
                if(colors[neighbor] == -1) {
                    colors[neighbor] = 1 - colors[node];
                    q.push(neighbor);
                }
                else if(colors[neighbor] == colors[node]) {
                    return false;
                }
            }
        }
        return true;
    }

    bool dfs(int node, int color) {
        colors[node] = color;

        for(int neighbor : adjList[node]) {
            if(colors[neighbor] == -1){
                if(!dfs(neighbor, 1 - color)) {
                    return false;
                }
            }

            else if(colors[neighbor] == colors[node]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int n, e;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> e;

    Graph graph(n);
    cout << "Enter the edges (u v): " << '\n';
    for (int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }

    if(graph.isBipartiteBFS()) {
        cout << "Ther graph is bipartite (BFS check). " << '\n';
    }
    else {
        cout << "The graph is not bipartie (BFS check).\n";
    }
    Graph graph(n);
    cout << "Enter the edges (u v): " << '\n';
    for (int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }

    if(graph.isBipartiteDFS()) {
        cout << "Ther graph is bipartite (BFS check). " << '\n';
    }
    else {
        cout << "The graph is not bipartie (BFS check).\n";
    }

    return 0;
}