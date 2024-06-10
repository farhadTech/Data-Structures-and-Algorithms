#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    int Q;
    cin >> Q;

    vector<int> queries(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> queries[i];
    }

    for (int i = 0; i < Q; ++i) {
        int luchuHeight = queries[i];

        auto itLower = lower_bound(heights.begin(), heights.end(), luchuHeight);
        auto itUpper = upper_bound(heights.begin(), heights.end(), luchuHeight);

        if (itLower == heights.begin()) {
            cout << "X ";
        } else {
            cout << *(itLower - 1) << " ";
        }

        if (itUpper == heights.end()) {
            cout << "X";
        } else {
            cout << *itUpper;
        }

        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
