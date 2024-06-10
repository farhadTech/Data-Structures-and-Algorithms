#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);

    set<int> s;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    for(auto p : s){
        cout << p << " ";
    }
    cout << '\n';

    auto it = s.lower_bound(5);
    cout << *it << '\n';

    auto it1 = s.upper_bound(5);
    cout << *it1 << '\n';

    return 0;
}
