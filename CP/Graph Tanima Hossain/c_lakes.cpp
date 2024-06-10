#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int dfs(vector<vector<int>>& grid, int x, int y, int M, int N) {
    int area = 0;
    stack<pair<int, int>> stk;
    stk.push({x, y});
    grid[x][y] = 1; // Mark the starting water cell as visited by setting it to land

    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    while (!stk.empty()) {
        auto [cx, cy] = stk.top();
        stk.pop();
        area++;

        for (auto& dir : directions) {
            int nx = cx + dir[0];
            int ny = cy + dir[1];

            if (nx >= 0 && ny >= 0 && nx < M && ny < N && grid[nx][ny] == 0) {
                grid[nx][ny] = 1; // Mark as visited
                stk.push({nx, ny});
            }
        }
    }

    return area;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline after T
    while (T--) {
        if (T != 0) cin.ignore(); // Ignore the blank line between datasets

        int startX, startY;
        cin >> startX >> startY;
        cin.ignore(); // Ignore the newline after the position

        vector<string> tempGrid;
        string line;
        while (getline(cin, line) && !line.empty()) {
            tempGrid.push_back(line);
        }

        int M = tempGrid.size();
        int N = tempGrid[0].size();
        vector<vector<int>> grid(M, vector<int>(N));

        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                grid[i][j] = tempGrid[i][j] - '0';
            }
        }

        int area = dfs(grid, startX, startY, M, N);
        cout << area << endl;

        if (T != 0) cout << endl; // Print blank line between datasets
    }

    return 0;
}
