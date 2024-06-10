#include <iostream>
using namespace std;

void recursive(int n){
    if(n < 1)
        return;

    recursive(n - 1);
    cout << n << " ";
}

void increasing_sequence(int num, int itr) {
    cout << itr << ' ';

    if(num == itr)
        return;
    increasing_sequence(num, itr + 1);
}

int main() {
    int num;
    cin >> num;

    increasing_sequence(num, 1);
    cout << '\n';
    recursive(num);
    return 0;
}
