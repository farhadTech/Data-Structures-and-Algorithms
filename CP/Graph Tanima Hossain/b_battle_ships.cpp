#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j, int& alive) {
    int n = grid.size();
    if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] == '.' || visited[i][j]) return;

    visited[i][j] = true;

    if (grid[i][j] == 'x') alive = 1;

    dfs(grid, visited, i + 1, j, alive);
    dfs(grid, visited, i - 1, j, alive);
    dfs(grid, visited, i, j + 1, alive);
    dfs(grid, visited, i, j - 1, alive);
}

int countAliveShips(vector<vector<char>>& grid) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int aliveShips = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((grid[i][j] == 'x' || grid[i][j] == '@') && !visited[i][j]) {
                int alive = 0;
                dfs(grid, visited, i, j, alive);
                if (alive > 0) aliveShips++;
            }
        }
    }
    return aliveShips;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        vector<vector<char>> grid(N, vector<char>(N));

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> grid[i][j];
            }
        }

        int aliveShips = countAliveShips(grid);

        cout << "Case " << t << ": " << aliveShips << endl;
    }

    return 0;
}
