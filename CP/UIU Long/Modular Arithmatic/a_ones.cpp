#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

int find_smallest_multiple(int n) {
    int remainder = 1 % n;
    vector<bool> visited(n, false);
    int count = 1;

    while (remainder != 0 && !visited[remainder]) {
        visited[remainder] = true;
        remainder = (remainder * 10 + 1) % n;
        count++;
    }

    if (remainder == 0) {
        return count;
    } else {
        return -1;
    }
}

int main() {
    ifstream infile("input.txt");
    int n;

    while (infile >> n) {
        int result = find_smallest_multiple(n);
        cout << result << endl;
    }

    infile.close();
    return 0;
}
