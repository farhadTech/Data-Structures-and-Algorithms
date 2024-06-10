#include <iostream>
using namespace std;

int count_digits(int n) {
    int count = 0;

    while(n){
        int remainder = n % 10;
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << "There are " << count_digits(n) << " digits.\n";
    return 0;
}
