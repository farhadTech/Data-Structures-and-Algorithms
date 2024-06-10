#include <bits/stdc++.h>

using namespace std;

int calc_sum(const int arr[], int left, int right) {
    if (left == right) {
        return arr[left];
    } else {
        int mid = left + (right - left) / 2;
        int left_sum = calc_sum(arr, left, mid);
        int right_sum = calc_sum(arr, mid + 1, right);
        return left_sum + right_sum;
    }
}


int main() {
    int numbers[] = {1, 2, 3, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int sum = calc_sum(numbers, 0, size-1);

    cout << "Sum of the array: " << sum << endl;

    return 0;
}

