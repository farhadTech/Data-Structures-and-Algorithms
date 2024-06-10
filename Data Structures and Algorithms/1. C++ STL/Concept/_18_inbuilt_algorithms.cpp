#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    int mn;
    mn = *min_element(a.begin(), a.end());
    cout << "minimum element is: " << mn << '\n';

    int mx;
    mx = *max_element(a.begin(), a.end());
    cout << "maximum element is: " << mx << '\n';

    int sum;
    sum = accumulate(a.begin(), a.end(), 0);
    cout << "Sum of all elements is: " << sum << '\n';

    int ct;
    ct = count(a.begin(), a.end(), 2);
    cout << "Count of 2 is: " << ct << '\n';

    auto it = find(a.begin(), a.end(), 10);
    if(it != a.end()){
        cout << *it << '\n';
    } else {
        cout << "10 not found.\n";
    }

    reverse(a.begin(), a.end());
    cout << "Reverse of vector is: " << '\n';
    for(auto val : a){
        cout << val << " ";
    }
    cout << '\n';

    string s = "abcdedfgijklmnopqrstuvwxyz";
    reverse(s.begin(), s.end());
    cout << "Reverse of string is: \n";
    cout << s << '\n';

    return 0;
}
