#include <iostream>
using namespace std;

int power_recursive(int p, int q){
    if(q == 0) return 1;

    if( q % 2 == 0){
        int result = power_recursive(p, q / 2);
        return result * result;
    }
    else {
        int result = power_recursive(p, (q - 1) / 2);
        return p * result * result;
    }
}

int main(){
    int p, q;
    cin >> p >> q;

    cout << power_recursive(p, q) << '\n';

    return 0;
}
