#include <iostream>
#include <vector>

using namespace std;

enum Color { UNCOLORED, COLOR_0, COLOR_1 };

class Graph {
private:
    vector<vector<int>> adjList;
    int numVertices;

    bool dfs(int node, vector<Color>& color, Color currentColor) {
        color[node] = currentColor;
        Color nextColor = (currentColor == COLOR_0) ? COLOR_1 : COLOR_0;

        for (int neighbor : adjList[node]) {
            if (color[neighbor] == UNCOLORED) { // If the neighbor is uncolored
                if (!dfs(neighbor, color, nextColor)) {
                    return false; // If a conflict is found, return false
                }
            } else if (color[neighbor] == currentColor) {
                return false; // If the neighbor has the same color, return false
            }
        }
        return true;
    }

public:
    Graph(int n) : numVertices(n), adjList(n) {}

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool isBipartite() {
        vector<Color> color(numVertices, UNCOLORED); // Initialize all nodes as uncolored

        for (int i = 0; i < numVertices; ++i) {
            if (color[i] == UNCOLORED) { // If the node is not colored
                if (!dfs(i, color, COLOR_0)) {
                    return false; // If a conflict is found, return false
                }
            }
        }
        return true; // If no conflicts are found, the graph is bipartite
    }
};

int main() {
    while (true) {
        int n, l;
        cin >> n;
        if (n == 0) break;
        cin >> l;

        Graph graph(n);
        for (int i = 0; i < l; ++i) {
            int u, b;
            cin >> u >> b;
            graph.addEdge(u, b);
        }

        if (graph.isBipartite()) {
            cout << "BICOLORABLE." << endl;
        } else {
            cout << "NOT BICOLORABLE." << endl;
        }
    }

    return 0;
}
