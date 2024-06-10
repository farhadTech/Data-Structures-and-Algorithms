#include <iostream>
using namespace std;

void solve() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost = 0;
    if(b < m * a) {
        cost = cost + (n / m) * b;
        n %= m;
        cost = cost + min(n * a, b);
    } else {
        cost = cost + n * a;
    }
    cout << cost << '\n';
}

int main() {
    solve();
    return 0;
}