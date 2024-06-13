#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int ct = 0;

ll rev_num(ll N) {
    ll r = 0;

    do {
        r = (r * 10) + (N % 10);
        N /= 10;
    } while (N != 0);

    return r;
}

ll reverse_and_add(ll N) {
    ll rev_N = rev_num(N);

    if(rev_N == N)
        return N;

    ct++;
    return reverse_and_add(N + rev_N);
}

int main() {
    int t, n, ans;
    cin >> t;

    while(t--) {
        cin >> n;
        ans = reverse_and_add(n);
        cout << ct << " " << ans << '\n';
        ct = 0;
    }
    return 0;
}
