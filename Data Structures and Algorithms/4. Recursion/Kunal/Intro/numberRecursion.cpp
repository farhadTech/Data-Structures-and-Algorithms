#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n == 5){
        cout << n << "\n";
        return;
    }
    cout << n << " ";
    fun(n + 1);
}

int main(){
    int n;
    cin >> n;
    fun(n);
    return 0;
}
