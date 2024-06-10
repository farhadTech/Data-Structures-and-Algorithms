#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool valid(const vector<int>& stalls, int c, int min_dist) {
    int cows_placed = 1;
    int last_position = stalls[0];
    for (int i = 1; i < stalls.size(); ++i) {
        if (stalls[i] - last_position >= min_dist) {
            ++cows_placed;
            last_position = stalls[i];
        }
    }
    return cows_placed >= c;
}

int largest_minimum_distance(const vector<int>& stalls, int c) {
    int left = 1; // minimum possible distance
    int right = stalls.back() - stalls[0];

    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (valid(stalls, c, mid)) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> stalls(n);
        for (int i = 0; i < n; ++i) {
            cin >> stalls[i];
        }

        sort(stalls.begin(), stalls.end());

        int result = largest_minimum_distance(stalls, c);
        cout << result << endl;
    }

    return 0;
}
