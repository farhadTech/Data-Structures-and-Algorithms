#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> lady_chimps(n);
    for (int i = 0; i < n; i++) {
        cin >> lady_chimps[i];
    }

    int q;
    cin >> q;

    vector<int> lucu(q);
    for (int i = 0; i < q; i++) {
        cin >> lucu[i];
    }

    for (int i = 0; i < q; i++) {
        int height = lucu[i];

        auto shorter = lower_bound(lady_chimps.begin(), lady_chimps.end(), height);
        auto taller = upper_bound(lady_chimps.begin(), lady_chimps.end(), height);

        if(shorter == lady_chimps.begin()) {
            cout << "X ";
        } else {
            cout << *(shorter - 1) << " ";
        }

        if(taller == lady_chimps.end()) {
            cout << "X";
        } else {
            cout << *taller;
        }
        cout << '\n';
    }
}

int main() {
    solve();
    return 0;
}
