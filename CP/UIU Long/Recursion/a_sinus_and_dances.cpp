#include <cstdio>

using namespace std;

void A(int n, int pos){
    printf("sin(%d", pos);
    if (pos < n){
        if (pos % 2 == 1)
            putchar('-');
        else
            putchar('+');
        A(n, pos + 1);
    }
    putchar(')');
}

void S(int n, int pos){
    if (pos < n){
        putchar('(');
        S(n, pos + 1);
        putchar(')');
    }

    A(n + 1 - pos, 1);
    printf("+%d", pos);
}

int main(){
    int N = 2;

    S(N, 1);

    return 0;
}