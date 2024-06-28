/*
Check if we can partition the array into two subarrays with equal sum. More formally check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
*/

#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& a) {
    int total_sum = 0;
    for (int i = 0; i < a.size(); i++) {
        total_sum += a[i];
    }
    int prefix_sum = 0;
    for (int i = 0; i < a.size(); i++) {
        prefix_sum += a[i];
        int suffix_sum;
        suffix_sum = total_sum - prefix_sum;
        if(suffix_sum == prefix_sum)
            return true;
    }
    return false;
}

int main() {
    vector<int> a = {6, 2, 4, 3, 1};
    int result = check(a);
    if(result) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }
    return 0;
}
