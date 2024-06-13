#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    while(true) {
        ll N;
        cin >> N;
        if(N == 0)
            break;

        ll G = 0;

        for (ll i = 1; i < N; i++) {
            for (ll j = i + 1; j <= N; j++) {
                G += __gcd(i, j);
            }
        }
        cout << G << '\n';
    }
    return 0;
}