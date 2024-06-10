#include <iostream>
using namespace std;

int power_recursive(int p, int q){
    if(q == 0) {
        return 1;
    }
    return p * power_recursive(p, q - 1);
}

int main(){
    int p, q;
    p = 3, q = 4;

    cout << power_recursive(p, q) << '\n';
    return 0;
}
