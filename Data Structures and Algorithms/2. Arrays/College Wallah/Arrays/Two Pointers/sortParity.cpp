#include <bits/stdc++.h>
using namespace std;

void parity(vector<int>&a){
    int left = 0, right = a.size() - 1;
    while(left < right) {
        if(a[left] % 2 == 1 and a[right] % 2 == 0) {
            swap(a[left], a[right]);
            left++, right--;
        }
        if(a[left] % 2 == 0)
            left++;
        if(a[right] % 2 == 1)
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
    int n;	cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    parity(a);
    print_array(a);
    return 0;
}
