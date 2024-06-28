#include <bits/stdc++.h>
using namespace std;

int helper(int n, int s) {
    if(n == 0)
        return s;
    int ld = n % 10;
    s += (ld * ld * ld);
    return helper(n / 10, s);
}

int armstrong(int n) {
    return helper(n, 0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    int res = armstrong(n);
    if(res == n) {
        cout << "Armstrong number.\n";
    } else {
        cout << "Not Armstrong number.\n";
    }
    
    return 0;
}
