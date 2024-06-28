#include <iostream>
using namespace std;

void number5(int n) {
    cout << n << '\n';
}
void number4(int n) {
    cout << n << '\n';
    number5(5);
}
void number3(int n){
    cout << n << '\n';
    number4(4);
}
void number2(int n) {
    cout << n << '\n';
    number3(3);
}
void number(int n) {
    cout << n << '\n';
    number2(2);
}


int main() {
    int n = 1;

    number(n);
}
