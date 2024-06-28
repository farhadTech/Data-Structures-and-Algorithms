#include <bits/stdc++.h>
using namespace std;

void reverse_array(vector<int>& a, int i, int n){
    if(i >= n / 2)
        return;
    swap(a[i], a[n - i - 1]);
    reverse_array(a, i + 1, n);
}

void print_array(vector<int>&a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;	cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    print_array(a);
    reverse_array(a, 0, n);
    print_array(a);
    return 0;
}




