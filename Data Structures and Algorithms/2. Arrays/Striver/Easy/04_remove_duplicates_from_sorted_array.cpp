#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <limits.h>

using namespace std;

vector<int> remove_duplicates_from_sorted_array(vector<int>& a){
    // 1. using set
    // set<int> st;
    // for(auto &p : a){
    //     st.insert(p);
    // }
    // vector<int> res;
    // for(auto &p : st){
    //     res.push_back(p);
    // }

    // 2. using map
    // map<int, int> mp;
    // for(auto &p : a){
    //     mp[p]++;
    // }

    // vector<int> res;
    // for(auto &p : mp){
    //     res.push_back(p.first);
    // }

    // 3. array manipulation
    // { 0, -1, 2, -1, -1, 3, -1, 7, -1, -1, 8, -1, 9, }

    for(int i = 0; i < a.size() - 1; i++){
        if(a[i] == a[i + 1]){
            a[i] = INT_MIN;
        }
    }
    vector<int> res;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != INT_MIN){
            res.push_back(a[i]);
        }
    }

    return res;
}

int main(){
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> res = remove_duplicates_from_sorted_array(a);

    for(auto &p : res){
        cout << p << " ";
    }

    return 0;
}
