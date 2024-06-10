#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>
using namespace std;

// TC : O(n)
int largest_element_in_array(vector<int>& a){
    int mx = INT_MIN;
    for(int ele : a){
        if(ele > mx){
            mx = ele;
        }
    }
    //int mx = *max_element(a.begin(), a.end());
    return mx;
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mx_ele = largest_element_in_array(a);

    cout << "Max element is: " << mx_ele << '\n';
    return 0;
}
