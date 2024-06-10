#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
long long sum_of_digits(long long x) {
    long long sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    long long n, s;
    cin >> n >> s;

    long long count = 0;
    // Start checking from s to n
    for (long long x = s; x <= n; ++x) {
        if (x - sum_of_digits(x) >= s) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
