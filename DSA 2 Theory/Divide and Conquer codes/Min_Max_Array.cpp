
#include <bits/stdc++.h>

using namespace std;

void findMinMax(int arr[], int low, int high, int& min, int& max) {

    if (low == high) {
        min = arr[low];
        max = arr[low];
        return;
    }

    int mid = (low + high) / 2;
    int leftMin, leftMax, rightMin, rightMax;
    findMinMax(arr, low, mid, leftMin, leftMax);
    findMinMax(arr, mid + 1, high, rightMin, rightMax);

    if (leftMin < rightMin)
        min = leftMin;
    else
        min = rightMin;


    if (leftMax > rightMax)
        max = leftMax;
    else
        max = rightMax;
}

int main() {
    int arr[] = {20,10,50,30,40,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    findMinMax(arr, 0, n - 1, min, max);
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
    return 0;
}
