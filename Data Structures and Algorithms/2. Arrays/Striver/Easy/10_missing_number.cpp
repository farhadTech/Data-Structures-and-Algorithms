#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int>& arr){
    int n = arr.size();
    int total_sum = (n * (n + 1)) / 2;

    int actual_sum = accumulate(arr.begin(), arr.end(), 0);
    return total_sum - actual_sum;
}

int main(){
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res = missing_number(arr);
    cout << "Missing number is: " << res << "\n";
    return 0;
}

