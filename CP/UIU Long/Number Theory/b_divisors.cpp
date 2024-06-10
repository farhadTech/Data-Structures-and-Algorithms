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
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int lower, upper;
        cin >> lower >> upper;

        pair<int, int> result = maxDivisorsInRange(lower, upper);
        cout << "Between " << lower << " and " << upper << ", "
             << result.first << " has a maximum of " << result.second
             << " divisors." << endl;
    }

    return 0;
}
