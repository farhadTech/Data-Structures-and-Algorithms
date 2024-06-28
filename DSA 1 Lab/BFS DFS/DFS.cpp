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
        adjList[dest].push_back(src); // Assuming an undirected graph
    }

    void dfs(int startVertex) {
        vector<bool> visited(numVertices, false);
        stack<int> s;

        s.push(startVertex);

        while (!s.empty()) {
            int currentVertex = s.top();
            s.pop();

            if (!visited[currentVertex]) {
                cout << currentVertex << " ";
                visited[currentVertex] = true;

                for (int neighbor : adjList[currentVertex]) {
                    if (!visited[neighbor]) {
                        s.push(neighbor);
                    }
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

    cout << "DFS starting from vertex 0: ";
    graph.dfs(0);

    return 0;
}
