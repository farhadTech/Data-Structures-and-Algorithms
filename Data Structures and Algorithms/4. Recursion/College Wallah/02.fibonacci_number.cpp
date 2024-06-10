#include <iostream>
using namespace std;

int fibonacci_number(int n){
    if(n == 0 or n == 1) {
        return n;
    }
    return fibonacci_number(n - 1) + fibonacci_number(n - 2);
}

int main(){
    for(int i = 0; i < 20; i++){
        cout << "Fibonacci number of " << i << " :" << fibonacci_number(i) << '\n';
    }

    return 0;
}
