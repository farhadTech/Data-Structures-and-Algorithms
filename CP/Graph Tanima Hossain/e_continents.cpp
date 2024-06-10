#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<char>>& map, vector<vector<bool>>& visited, int x, int y, int& count) {
    int M = map.size();
    int N = map[0].size();

    // Mark the current region as visited
    visited[x][y] = true;
    count++;

    // Define the four possible directions
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    // Explore neighboring regions
    for (int k = 0; k < 4; ++k) {
        int nx = x + dx[k];
        int ny = (y + dy[k] + N) % N; // Handle wrap around for the columns

        if (nx >= 0 && nx < M && map[nx][ny] == map[x][y] && !visited[nx][ny]) {
            dfs(map, visited, nx, ny, count);
        }
    }
}

int findLargestContinent(vector<vector<char>>& map, int startX, int startY) {
    int M = map.size();
    int N = map[0].size();

    vector<vector<bool>> visited(M, vector<bool>(N, false));

    int largestContinentSize = 0;

    char currentRegion = map[startX][startY];

    // Start DFS from the current region
    int currentRegionSize = 0;
    dfs(map, visited, startX, startY, currentRegionSize);

    // Update the largest continent size excluding the current region
    largestContinentSize = max(largestContinentSize, currentRegionSize);

    // Check each region for a new continent
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (!visited[i][j] && map[i][j] == currentRegion) {
                int continentSize = 0;
                dfs(map, visited, i, j, continentSize);
                largestContinentSize = max(largestContinentSize, continentSize);
            }
        }
    }

    return largestContinentSize;
}

int main() {
    int M, N;
    while (cin >> M >> N) {
        vector<vector<char>> map(M, vector<char>(N));
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> map[i][j];
            }
        }

        int startX, startY;
        cin >> startX >> startY;

        int largestContinentSize = findLargestContinent(map, startX, startY);
        cout << largestContinentSize << endl;

        // Consume the blank line after each test case
        string blank;
        getline(cin, blank);
    }

    return 0;
}
