#include <iostream>
using namespace std;

void print_even(int arr[], int n, int i) {
    if(i == n)
        return;
    if(arr[i] % 2 == 0) {
        cout << arr[i] << ' ';
    }
    print_even(arr, n, i++);
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    print_even(arr, n, 0);
    return 0;
}
