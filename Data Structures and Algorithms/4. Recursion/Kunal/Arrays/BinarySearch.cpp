#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& a, int target, int start, int end){

    if(start > end)
        return -1;
    int mid = (start + (end - start)) / 2;
    if(a[mid] == target)
        return mid;
    else if(target < a[mid])
        return (a, target, start, mid - 1);
    else
        return (a, target, mid + 1, end);
}


int main(){
    int n;	cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int target;
    cin >> target;
    int result = binary_search(a, target, 0, n - 1);
    cout << "Target found at index: " << result << '\n';
    return 0;
}
