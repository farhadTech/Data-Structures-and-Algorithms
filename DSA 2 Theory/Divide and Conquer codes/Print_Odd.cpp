#include <bits/stdc++.h>

using namespace std;

void odd(const int arr[], int left, int right) {
    if (left == right) {
        if (arr[left] % 2 != 0) {
            cout << arr[left] << " ";
        }
    } else {
        int mid = left + (right - left) / 2;
        odd(arr, left, mid);
        odd(arr, mid + 1, right);
    }
}


int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Odd numbers in the array: ";
    odd(numbers, 0, size-1);

    return 0;
}

