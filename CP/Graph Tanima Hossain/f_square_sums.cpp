#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
void dfs(const vector<vector<int>>& image, vector<vector<bool>>& visited, int row, int col);

bool isEagle(int pixel) {
  return pixel == 1;
}

int countEagles(const vector<vector<int>>& image) {
  int rows = image.size();
  int cols = image[0].size();
  int eagleCount = 0;
  vector<vector<bool>> visited(rows, vector<bool>(cols, false));

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      if (isEagle(image[i][j]) && !visited[i][j]) {
        eagleCount++;
        dfs(image, visited, i, j);
      }
    }
  }

  return eagleCount;
}

void dfs(const vector<vector<int>>& image, vector<vector<bool>>& visited, int row, int col) {
  int rows = image.size();
  int cols = image[0].size();

  visited[row][col] = true;

  // Check all adjacent pixels (up, down, left, right)
  int directions[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
  for (int d = 0; d < 4; ++d) {
    int newRow = row + directions[d][0];
    int newCol = col + directions[d][1];

    if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols &&
        isEagle(image[newRow][newCol]) && !visited[newRow][newCol]) {
      dfs(image, visited, newRow, newCol);
    }
  }
}

int main() {
  ifstream infile("Bumble.in");
  ofstream outfile("output.txt");

  if (!infile.is_open()) {
    cerr << "Error opening input file." << endl;
    return 1;
  }

  if (!outfile.is_open()) {
    cerr << "Error opening output file." << endl;
    return 1;
  }

  int imageNumber = 1;
  while (infile) {
    int dimension;
    infile >> dimension;

    if (infile.eof()) {
      break;
    }

    vector<vector<int>> image(dimension, vector<int>(dimension));
    for (int i = 0; i < dimension; ++i) {
      for (int j = 0; j < dimension; ++j) {
        infile >> image[i][j];
      }
    }

    int eagleCount = countEagles(image);
    outfile << "Image number " << imageNumber << " contains " << eagleCount << " war eagles." << endl;

    imageNumber++;
  }

  infile.close();
  outfile.close();

  return 0;
}
