#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
private:
    vector<vector<int>> adjList;
    int numVertices;

public:
    Graph(int n) : numVertices(n), adjList(n) {}

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool isBipartite() {
        vector<int> color(numVertices, -1);
        queue<int> q;

        for (int i = 0; i < numVertices; ++i) {
            if(color[i] == -1) {
                color[i] = 0;
                q.push(i);

                while(!q.empty()) {
                    int u = q.front();
                    q.pop();

                    for(int v : adjList[u]) {
                        if(color[v] == -1) {
                            color[v] = 1 - color[u];
                            q.push(v);
                        }
                        else if(color[v] == color[u]) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};

int main() {
    while(true) {
        int n, l;
        cin >> n;
        if(n == 0)
            break;
        cin >> l;

        Graph graph(n);

        for (int i = 0; i < l; i++) {
            int u, b;
            cin >> u >> b;
            graph.addEdge(u, b);
        }

        if(graph.isBipartite()) {
            cout << "BICOLORABLE." << '\n';
        }
        else {
            cout << "NOT BICOLORABLE\n";
        }
    }
    return 0;
}
