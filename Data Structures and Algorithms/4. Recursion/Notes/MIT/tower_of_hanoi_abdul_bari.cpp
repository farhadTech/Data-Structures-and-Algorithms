#include <bits/stdc++.h>
using namespace std;

void TOH(int n, int A, int B, int C){
    if(n == 1) {
        printf("Move a disc from %d to %d\n", A, C);
        return;
    }
    TOH(n - 1, A, C, B);
    printf("Move a disk from %d to %d\n", A, C);
    TOH(n - 1, B, A, C);
}

int main(){
    int n = 2;
    TOH(n, 1, 2, 3);
    return 0;
}
