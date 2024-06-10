#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void find_min_room(ll n, ll a, ll b) {
    ll min_area = 6 * n;

    if(a * b >= min_area) {
        cout << a * b << '\n';
        cout << a << " " << b << '\n';
        return;
    }

    ll min_room_area = LLONG_MAX;
    ll optimal_a1 = a, optimal_b1 = b;

    for (ll a1 = a; a1 <= sqrt(min_area) + 1; ++a1) {
        ll b1 = max(b, (min_area + a1 - 1) / a1);
        if(a1 * b1 < min_room_area) {
            min_room_area = a1 * b1;
            optimal_a1 = a1;
            optimal_b1 = b1;
        }
    }

    for (ll b1 = b; b1 <= sqrt(min_area) + 1; ++b1) {
        ll a1 = max(a, (min_area + b1 - 1) / b1);

        if(a1 * b1 < min_room_area) {
            min_room_area = a1 * b1;
            optimal_a1 = a1;
            optimal_b1 = b1;
        }
    }

    cout << min_room_area << '\n';
    cout << optimal_a1 << " " << optimal_b1 << '\n';
}

int main() {


    ll n, a, b;
    n = 3, a = 3, b = 5;
    find_min_room(n, a, b);
    n = 2, a = 4, b = 4;
    find_min_room(n, a, b);
    n = 10, a = 1, b = 1;
    find_min_room(n, a, b);
    n = 7, a = 3, b = 7;
    find_min_room(n, a, b);
    n = 10, a = 2, b = 6;
    find_min_room(n, a, b);

    return 0;
}
