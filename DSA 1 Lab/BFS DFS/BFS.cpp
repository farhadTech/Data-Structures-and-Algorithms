#include <bits/stdc++.h>

using namespace std;


class Graph {
private:
    int numVertices;
    vector<vector<int>> adjList;

public:
    Graph(int vertices) : numVertices(vertices), adjList(vertices) {}

    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src);
    }

    void bfs(int startVertex) {
        vector<bool> visited(numVertices, false);
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        while (!q.empty()) {
            int currentVertex = q.front();
            q.pop();
            cout << currentVertex << " ";

            for (int neighbor : adjList[currentVertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }
};



int main() {
    int numVertices, numEdges, a, b;
    cout << "Enter number of vertices: ";
    cin >> numVertices;
    cout << "Enter number of edges: ";
    cin >> numEdges;
    Graph graph(numVertices);

    for(int i=1;i<=numEdges;i++) {
        cout << "Enter endpoints of edge: ";
        cin >> a >> b;
        graph.addEdge(a,b);
    }

    cout << "BFS starting from vertex 0: ";
    graph.bfs(0);

    return 0;
}
