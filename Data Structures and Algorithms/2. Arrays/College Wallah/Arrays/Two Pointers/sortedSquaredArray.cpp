#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
void sortedSquaredArray(vector<int>&a){
    int left = 0, right = a.size() - 1;
    while(left <= right) {
        if(abs(a[left]) < abs(a[right])) {
            ans.push_back(a[right] * a[right]);
            right--;
        } else {
            ans.push_back(a[left] * a[left]);
            left++;
        }
    }
}

void print_array(vector<int>&a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> a = {-10, -3, 2, 4, 5};
    sortedSquaredArray(a);
    
    reverse(ans.begin(), ans.end());
    for(int &p : ans) {
        cout << p << " ";
    }
    cout << '\n';
    return 0;
}
