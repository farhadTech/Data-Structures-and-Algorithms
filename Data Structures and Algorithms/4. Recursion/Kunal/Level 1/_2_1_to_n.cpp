#include <iostream>
using namespace std;

void print_array(int arr[], int n) {
    if(n == 0)
        return;
    print_array(arr, n - 1);
    cout << arr[n - 1] << " ";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    print_array(arr, n);
    return 0;
}
