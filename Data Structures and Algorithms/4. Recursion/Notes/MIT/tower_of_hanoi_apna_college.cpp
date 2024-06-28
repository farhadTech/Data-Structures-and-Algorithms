#include <iostream>
using namespace std;

void TOH(int n, int a, int b, int c) {
    if(n == 1){
        printf("Move %d disc from %d to %d\n", n, a, c);
        return;
    }
    TOH(n - 1, a, c, b);
    printf("Move %d disc from %d to %d\n", n, a, c);
    TOH(n - 1, b, a, c);
}

int main() {
    int n = 2;
    const int a = 1, b = 2, c = 3;
    TOH(n, a, b, c);
    return 0;
}
