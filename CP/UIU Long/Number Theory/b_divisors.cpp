#include <iostream>
#include <vector>
using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (n / i == i) count++;
            else count += 2;
        }
    }
    return count;
}

pair<int, int> maxDivisorsInRange(int lower, int upper) {
    int maxDivisors = 0;
    int maxNumber = 0;

    for (int i = lower; i <= upper; i++) {
        int divisors = countDivisors(i);
        if (divisors > maxDivisors) {
            maxDivisors = divisors;
            maxNumber = i;
        }
    }

    return make_pair(maxNumber, maxDivisors);
}

int main() {
    int lower, upper;

    lower = 1, upper = 10;
    pair<int, int> result = maxDivisorsInRange(lower, upper);
    cout << "Between " << lower << " and " << upper << ", "
        << result.first << " has a maximum of " << result.second
        << " divisors." << endl;

    lower = 10, upper = 20;
    result = maxDivisorsInRange(lower, upper);
    cout << "Between " << lower << " and " << upper << ", "
        << result.first << " has a maximum of " << result.second
        << " divisors." << endl;

    lower = 1000, upper = 1000;
    result = maxDivisorsInRange(lower, upper);
    cout << "Between " << lower << " and " << upper << ", "
        << result.first << " has a maximum of " << result.second
        << " divisors." << endl;

    lower = 999999900, upper = 1000000000;
    result = maxDivisorsInRange(lower, upper);
    cout << "Between " << lower << " and " << upper << ", "
        << result.first << " has a maximum of " << result.second
        << " divisors." << endl;

    return 0;
}
