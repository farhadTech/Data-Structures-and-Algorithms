#include <bits/stdc++.h>
using namespace std;

void sort_0s_and_1s(vector<int>& a){
    int left = 0, right = a.size() - 1;
    while(left < right) {
        if(a[left] == 1 and a[right] == 0) {
            a[left++] = 0;
            a[right--] = 1;
        }
        if(a[left] == 0)
            left++;
        if(a[right] == 1)
            right--;
    }
}

void print_array(vector<int>&a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> a = {1, 0, 1, 1, 0, 0, 1};
    print_array;
    sort_0s_and_1s(a);
    print_array(a);
    return 0;
}
