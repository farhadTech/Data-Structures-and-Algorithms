#include <iostream>
using namespace std;

// iterative approach
int iterative_fact(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

// recursive approach
int fact(int n){
    if(n == 1){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int num = 6;

    cout << "Factorial of recursive" << num << " is: " << fact(num) << '\n';
    cout << "Factorial of iterative" << num << " is: " << iterative_fact(num) << '\n';
    return 0;
}
