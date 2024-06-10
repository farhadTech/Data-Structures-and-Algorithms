#include <iostream>
using namespace std;

bool check_palindrome(int n) {
    int rev = 0;
    int original_number = n;

    while(n){
        int remainder = n % 10;
        rev = (rev * 10) + remainder;
        n /= 10;
    }
    return (original_number == rev);
}

int main() {
    int n;
    cin >> n;

    if(check_palindrome(n)){
        cout << "Yes Palindrome.\n";
    }
    else {
        cout << "Not Palindrome.\n";
    }
    return 0;
}
