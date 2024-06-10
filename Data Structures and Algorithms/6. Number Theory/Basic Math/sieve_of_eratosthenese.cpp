#include <iostream>
#include <vector>
using namespace std;

vector<bool> isPrime;
void generatePrimes(long long n) {

    isPrime.resize(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if(isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

}

int main(){
    generatePrimes(10000000);

    int t;
    cin >> t;

    while(t--) {
        int q;
        cin >> q;

        if(isPrime[q]) {
            cout << q << " is a prime\n";
        }
        else {
            cout << q << " is not a prime\n";
        }
    }
    return 0;
}
