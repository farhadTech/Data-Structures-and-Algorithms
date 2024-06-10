#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dy[] = {0, 0, 1, -1, 1, -1, -1, 1};

int floodFill(int r, int c, vector<string>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int area = 0;

    queue<pair<int, int>> q;
    q.push({r, c});
    grid[r][c] = '.';

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();
        area++;

        for (int k = 0; k < 8; k++) {
            int nr = curr.first + dx[k];
            int nc = curr.second + dy[k];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == 'W') {
                q.push({nr, nc});
                grid[nr][nc] = '.';
            }
        }
    }

    return area;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        if (t > 0) cout << endl; // Separate output for each test case

        int n, m;
        cin >> n >> m;
        cin.ignore(); // Ignore newline after reading n and m

        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            getline(cin, grid[i]);
        }

        int k;
        cin >> k;

        for (int i = 0; i < k; i++) {
            int r, c;
            cin >> r >> c;
            r--; // Adjust for 0-based indexing
            c--;

            if (grid[r][c] == 'W') {
                cout << floodFill(r, c, grid) << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
