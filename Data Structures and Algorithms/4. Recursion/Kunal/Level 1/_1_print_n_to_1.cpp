#include <iostream>
using namespace std;

void recursive(int arr[], int n) {
    if(n == 0)
        return;
    cout << arr[n - 1] << " ";
    recursive(arr, n - 1);
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    recursive(arr, n);

    return 0;
}
