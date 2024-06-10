#include <iostream>
using namespace std;

int sum_of_digits(int n){
    if(n >= 0 and n <= 9) return n;

    return sum_of_digits (n / 10) + n % 10;
}

int main(){
    int n = 823;

    cout << sum_of_digits(n) << " ";
    return 0;
}
