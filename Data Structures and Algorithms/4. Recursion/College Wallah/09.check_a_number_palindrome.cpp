#include <iostream>
using namespace std;

bool recursive(int n, int *temp){
    // base case
    if(n >= 0 and n <= 9) {
        int last_digit = (*temp) % 10;
        (*temp) /= 10;
        return (n == last_digit);
    }
    bool result = (recursive(n / 10, temp) and (n % 10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}

// iterative approach
bool check(int n){
    int temp = n;

    int rev = 0;
    while(n != 0){
        int rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }
    return (rev == temp);
}

int main(){
    int num = 121;
    int anotherNum = num;
    int *temp = &anotherNum;

    cout << recursive(num, temp) << '\n';
    return 0;
}
