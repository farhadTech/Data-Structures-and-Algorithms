#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int N, Q, caseNumber = 0;

    while (cin >> N >> Q) {
        if (N == 0 && Q == 0) break;

        caseNumber++;

        vector<int> marbles(N);
        for (int i = 0; i < N; ++i) {
            cin >> marbles[i];
        }

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << caseNumber << ":\n";

        for (int i = 0; i < Q; ++i) {
            int query;
            cin >> query;

            auto it = lower_bound(marbles.begin(), marbles.end(), query);

            if (it != marbles.end() && *it == query) {
                cout << query << " found at " << (it - marbles.begin() + 1) << "\n";
            } else {
                cout << query << " not found\n";
            }
        }
    }
}

int main() {
    solve();
    return 0;
}
