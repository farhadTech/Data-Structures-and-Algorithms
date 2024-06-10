#include <iostream>
#include <vector>

using namespace std;

vector<int> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;

    for (int p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }

    for (int p = 2; p <= limit; p++) {
        if (isPrime[p])
            primes.push_back(p);
    }

    return primes;
}

int main() {
    int k;
    cin >> k;

    vector<int> primes = generatePrimes(200000);

    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;

        cout << primes[n - 1] << endl;
    }

    return 0;
}
