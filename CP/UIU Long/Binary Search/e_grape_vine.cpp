#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int largest_square_area(int N, int M, vector<vector<int>>& heights, int L, int U) {
    int max_side_length = 0;

    for (int i = 0; i < N; ++i) {
        int left = 0, right = M - 1, mid, valid_height = -1;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (heights[i][mid] >= L && heights[i][mid] <= U) {
                valid_height = mid;
                right = mid - 1;
            } else if (heights[i][mid] < L) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (valid_height == -1) continue;

        int square_side = min(N - i, M - valid_height);
        for (int side = square_side; side >= 1; --side) {
            if (heights[i + side - 1][valid_height + side - 1] <= U) {
                max_side_length = max(max_side_length, side);
                break;
            }
        }
    }

    return max_side_length;
}

int main() {
    int N, M;
    while (cin >> N >> M && !(N == 0 && M == 0)) {
        vector<vector<int>> heights(N, vector<int>(M));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> heights[i][j];
            }
        }

        int Q;
        cin >> Q;
        while (Q--) {
            int L, U;
            cin >> L >> U;
            int max_side_length = largest_square_area(N, M, heights, L, U);
            cout << max_side_length << endl;
        }
        cout << "-" << endl;
    }

    return 0;
}
