#include <iostream>
using namespace std;

long long sum_of_digits(long long x) {
    long long sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

bool is_really_big(long long x, long long s) {
    return x - sum_of_digits(x) >= s;
}

long long find_smallest_really_big(long long n, long long s) {
    long long left = s, right = n, result = n + 1;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (is_really_big(mid, s)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

int main() {
    long long n, s;
    cin >> n >> s;

    long long smallest_really_big = find_smallest_really_big(n, s);

    long long count = (smallest_really_big <= n) ? (n - smallest_really_big + 1) : 0;

    cout << count << endl;
    return 0;
}
