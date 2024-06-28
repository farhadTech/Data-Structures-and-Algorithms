#include <bits/stdc++.h>
using namespace std;

int powers(int x, int n){
    if(n == 0)
        return 1;
    if(n % 2 == 1) {
        return x * powers(x, n - 1);
    } else {
        int y = powers(x, n / 2);
        int z = y * y;
        return z;
    }
}

int main(){
    int x = 5, n = 7;
    int res = powers(x, n);
    cout << res << '\n';
    return 0;
}
