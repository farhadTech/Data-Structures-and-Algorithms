#include <iostream>
using namespace std;
// 0 -> empty cell
// 1 -> obstacle
// 2 -> exit
int maze[4][5] = {0, 1, 1, 0, 2,
                  0, 1, 1, 0, 1,
                  0, 1, 1, 0, 1,
                  0, 0, 0, 0, 1};

int visited[4][5] = {0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0};

int reached = 0;
void dfs(int row, int col)
{
    if (reached)
        return;
    if (row < 0 || row > 3 || col < 0 || col > 4)
        return;

    cout << row << " " << col << endl;

    // mark the cell as visited
    visited[row][col] = 1;

    if (maze[row][col] == 2)
    {
        cout << "We are in the exit" << endl;
        reached = 1;
        return;
    }

    // check if adjacent cell don't have any obstacle and it has not been visited
    if (maze[row][col + 1] != 1 && visited[row][col + 1] == 0)
    {
        dfs(row, col + 1); // right
    }
    if (maze[row][col - 1] != 1 && visited[row][col - 1] == 0)
    {
        dfs(row, col - 1); // left
    }
    if (maze[row + 1][col] != 1 && visited[row + 1][col] == 0)
    {
        dfs(row + 1, col); // down
    }
    if (maze[row - 1][col] != 1 && visited[row - 1][col] == 0)
    {
        dfs(row - 1, col); // up
    }
}

int main()
{
    dfs(3, 0);
    return 0;
}
