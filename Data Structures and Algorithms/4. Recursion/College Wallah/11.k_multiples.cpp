#include <iostream>
using namespace std;

void recursive(int n, int k) {
    if(k == 0)
        return;

    recursive(n, k - 1);
    cout << (n * k) << " ";
}

void k_mulitples(int n, int k, int it, int temp) {
    if(it == k)
        return;

    cout << n << ' ';
    k_mulitples(n + temp, k, it + 1, temp);
}

int main() {
    int n, k;
    n = 3, k = 4;
    // int temp = n;
    // k_mulitples(n, k, 0, temp);
    cout << '\n';

    recursive(n, k);
    return 0;
}
