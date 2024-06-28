#include <iostream>
#include <vector>
using namespace std;

void prefix_sum(vector<int>&a) {
    int n = a.size();
    for (int i = 1; i < n; i++){
        a[i] = a[i - 1] + a[i];
    }
}

void print_array(vector<int>&a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;	cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    prefix_sum(a);
    print_array(a);
    return 0;
}

