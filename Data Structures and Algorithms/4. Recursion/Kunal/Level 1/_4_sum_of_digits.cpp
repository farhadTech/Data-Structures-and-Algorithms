#include <iostream>
using namespace std;

int sum(int n, int s) {
    if(n == 0)
        return s;

    int last_digit = n % 10;
    return sum(n /= 10, s += last_digit);
}

int recursive(int n) {
    if(n == 0)
        return 0;
    return (n % 10 + recursive(n / 10));
}

int main() {
    int n;
    cin >> n;

    cout << "Sum of digits " << n << " is " << recursive(n) << '\n';
    return 0;
}
