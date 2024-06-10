#include <iostream>
using namespace std;

bool check_for_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if(check_for_prime(n)) {
        cout << n << " is a prime number.\n";
    }
    else {
        cout << n << " is not a prime number.\n";
    }
    return 0;
}