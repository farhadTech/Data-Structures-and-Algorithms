#include <iostream>
#include <vector>
using namespace std;

bool check_if_sorted(vector<int>& a){
    for(int i = 0; i < a.size() - 1; ++i){
        return a[i] < a[i + 1];
    }
}

int main(){
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    check_if_sorted(a) ? puts("YES sorted.\n") : puts("NO not sorted.\n");
    return 0;
}
