#include <bits/stdc++.h>
using namespace std;

void sort_0s_and_1s(vector<int>&a, int left, int right){
    if(left == right)
        return;
    if(a[left] == 1 and a[right] == 0) {
        a[left] = 0, a[right] = 1;
        sort_0s_and_1s(a, left + 1, right - 1);
    }
    if(a[left] == 0)
        sort_0s_and_1s(a, left + 1, right);
    if(a[right] == 1)
        sort_0s_and_1s(a, left, right - 1);
}

void print_array(vector<int>&a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> a = {1, 0, 0, 1};
    sort_0s_and_1s(a, 0, a.size() - 1);
    print_array(a);
    return 0;
}
