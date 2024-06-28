#include <iostream>
using namespace std;

int reverse(int n, int rev) {
    if(n == 0)
        return rev;
    int last_digit = n % 10;
    return reverse(n /= 10, rev * 10 + last_digit);
}

int main() {
    int n;
    cin >> n;

    int rev = reverse(n, 0);
    if(n == rev) {
        cout << "Yes Palindrome.\n";
    } else {
        cout << "Not Palindrome.\n";
    }

    return 0;
}
