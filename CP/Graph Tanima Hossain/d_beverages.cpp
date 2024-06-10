#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>

using namespace std;

void topologicalSort(int N, vector<vector<int>>& adjList, vector<int>& inDegree, vector<string>& beverageNames) {
    priority_queue<int, vector<int>, greater<int>> zeroInDegree;
    for (int i = 0; i < N; ++i) {
        if (inDegree[i] == 0) {
            zeroInDegree.push(i);
        }
    }

    vector<int> sortedOrder;
    while (!zeroInDegree.empty()) {
        int u = zeroInDegree.top();
        zeroInDegree.pop();
        sortedOrder.push_back(u);

        for (int v : adjList[u]) {
            inDegree[v]--;
            if (inDegree[v] == 0) {
                zeroInDegree.push(v);
            }
        }
    }

    cout << "Dilbert should drink beverages in this order: ";
    for (int i = 0; i < sortedOrder.size(); ++i) {
        cout << beverageNames[sortedOrder[i]];
        if (i < sortedOrder.size() - 1) {
            cout << " ";
        }
    }
    cout << "." << endl;
}

int main() {
    int caseNumber = 1;
    int N;

    while (cin >> N) {
        vector<string> beverageNames(N);
        unordered_map<string, int> nameToIndex;
        for (int i = 0; i < N; ++i) {
            cin >> beverageNames[i];
            nameToIndex[beverageNames[i]] = i;
        }

        int M;
        cin >> M;
        vector<vector<int>> adjList(N);
        vector<int> inDegree(N, 0);

        for (int i = 0; i < M; ++i) {
            string B1, B2;
            cin >> B1 >> B2;
            int u = nameToIndex[B1];
            int v = nameToIndex[B2];
            adjList[u].push_back(v);
            inDegree[v]++;
        }

        cout << "Case #" << caseNumber++ << ": ";
        topologicalSort(N, adjList, inDegree, beverageNames);
        cout << endl;
    }

    return 0;
}
