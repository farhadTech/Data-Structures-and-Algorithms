#include <bits/stdc++.h>
using namespace std;

void sort_zeros_and_ones(vector<int>& a){
    int ct = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 0)
            ct++;
    }
    for(int i = 0; i < a.size(); i++){
        if(i < ct) {
            a[i] = 0;
        } else {
            a[i] = 1;
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

    vector<int> a = {1, 0, 0, 1, 0, 1, 0};
    sort_zeros_and_ones(a);
    print_array(a);
    return 0;
}
