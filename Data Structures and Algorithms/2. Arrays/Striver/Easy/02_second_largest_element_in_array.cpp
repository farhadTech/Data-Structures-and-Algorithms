#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

// example : {7, 2, 8, 9, 0 3, 8, 9, 10, 9, 10, 9}
// TC: O(N)

int second_largest_element_in_array(vector<int>& a){
    int ind = -1, mx = INT_MIN;
    for(int i = 0; i < a.size(); i++){
        if(a[i] > mx){
            mx = a[i];
        }
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] == mx) a[i] = INT_MIN;
    }

    mx = INT_MIN;
    for(int i = 0; i < a.size(); i++){
        if(a[i] > mx){
            mx = a[i];
        }
    }
    return mx;
}

int main(){
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int scnd_lar = second_largest_element_in_array(a);

    cout << scnd_lar << '\n';
    return 0;
}
