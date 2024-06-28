#include <iostream>
using namespace std;

int gcd(int a, int b) {
    // in case b is greater than a.
    if(b > a)
        return gcd(b, a);
    // base condition
    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {
    int a, b;
    a = 40, b = 48;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << '\n';
    return 0;
}
