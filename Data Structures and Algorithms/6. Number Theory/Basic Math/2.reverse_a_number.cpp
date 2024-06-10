#include <iostream>
using namespace std;

int reverse(int n) {
    int rev = 0;

    while(n){
        int remainder = n % 10;
        rev = (rev * 10) + remainder;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    cin >> n;

    cout << "After reversing the number " << reverse(n) << "\n";
    return 0;
}
