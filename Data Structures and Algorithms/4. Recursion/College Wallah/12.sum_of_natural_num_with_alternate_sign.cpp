#include <iostream>
using namespace std;

// recursive approach
int sum_of_numbers(int n){
    if(n == 0)
        return 0;

    return sum_of_numbers(n - 1) + ((n & 1) ? (n) : (-n));
}

// iterative approach
int sum(int n){
    int s = 0;
    for (int i = 1; i <= n; i++){
        if(i & 1){
            s += i;
        } else {
            s -= i;
        }
    }
    return s;
}

int main() {
    int n = 5;

    cout << "Sum of natural numbers with alternate sign is: " << sum_of_numbers(n) << '\n';
    cout << "Sum of natural numbers with alternate sign is: " << sum(n) << '\n';
    return 0;
}
