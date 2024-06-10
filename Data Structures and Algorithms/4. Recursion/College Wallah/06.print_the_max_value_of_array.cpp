#include <iostream>
#include <limits.h>
using namespace std;

int print_max(int *arr, int n, int idx, int mx){
    // base case
    if (idx == n){
        return mx;
    }
    // self work
    if (arr[idx] > mx){
        mx = arr[idx];
    }
    return print_max(arr, n, idx + 1, mx);
    // assume
}

void print_array(int *arr, int n, int idx){
    if (idx == n)
    {
        return;
    }
    cout << arr[idx] << " ";
    print_array(arr, n, idx + 1);
}

int main(){
    int n = 6;
    int arr[] = {15, 5, 9, 8, 3, 1};

    cout << "Max value is: " << print_max(arr, n, 0, INT_MIN) << '\n';
    print_array(arr, n, 0);
    return 0;
}
