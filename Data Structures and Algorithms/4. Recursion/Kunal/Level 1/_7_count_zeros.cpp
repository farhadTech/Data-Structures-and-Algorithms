#include <iostream>
using namespace std;

int helper(int n, int c) {
    if(n == 0)
        return c;
    int last_digit = n % 10;
    if(last_digit == 0)
        c++;
    return helper(n / 10, c);
}

int count_zeros(int n) {
    return helper(n, 0);
}


int main() {
    int n;
    cin >> n;

    int ans = count_zeros(n);
    cout << "The number of zeros in: " << n << " " << ans << '\n';
    return 0;
}
