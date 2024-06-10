#include <iostream>
using namespace std;

// TC -> O(n) SC -> O(n)
void print_recursive_array(int *arr, int n, int idx){
    if(idx == n){
        return;
    }
    cout << arr[idx] << " ";
    print_recursive_array(arr, n, idx + 1);
}


int main(){
    int n = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};

    print_recursive_array(arr, n, 0);

    return 0;
}
