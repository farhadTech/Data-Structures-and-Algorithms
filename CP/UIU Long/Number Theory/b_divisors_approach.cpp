#include <iostream>
using namespace std;
using ll = long long;

void solve() {
    ll l, u;
    cin >> l >> u;

    for (int i = l; i <= u; i++) {
        if(u % i == 0) {
            cout << i << ' ';
        }
    }
    cout << '\n';
}

int main() {
    solve();
    return 0;
}
