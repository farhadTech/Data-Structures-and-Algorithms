/*
Given an array of integers of size N. answer q queries where you need to print the sum of values in a given range of indices from l to r (both included.)

Note: The values of l and r in queries follow 1-based indexing.
*/

#include <iostream>
#include <vector>
using namespace std;

int sum_of_range(vector<int>& a, int left, int right) {
    int prefix_sum_left = 0;
    for (int i = 0; i < left - 1; i++) {
        prefix_sum_left += a[i];
    }
    int prefix_sum_right = 0;
    for (int i = 0; i < right; i++) {
        prefix_sum_right += a[i];
    }
    return prefix_sum_right - prefix_sum_left;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;

        int result = sum_of_range(a, l, r);
        cout << result << '\n';
    }
    return 0;
}
