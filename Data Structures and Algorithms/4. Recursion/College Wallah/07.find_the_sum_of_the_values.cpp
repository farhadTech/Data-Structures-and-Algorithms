#include <iostream>
using namespace std;

int sum_of_array(int *arr, int n, int idx, int sum) {
    // base case
    if(idx == n) {
        return sum;
    }
    // self work
    sum += arr[idx];
    // induction case
    return sum_of_array(arr, n, idx + 1, sum);
}

int main(){
    int arr[] = {3, 8, 1, 3, 0};
    int n = 5;
    cout << "Sum is: " << sum_of_array(arr, n, 0, 0) << '\n';

    return 0;
}



