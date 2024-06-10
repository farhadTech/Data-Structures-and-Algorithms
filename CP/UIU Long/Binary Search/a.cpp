#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n, q;

    int case_no = 1;
    while (cin >> n >> q){
        if(n == 0 and q == 0)
            break;

        vector<int> marbles(n);
        for (int i = 0; i < n; i++){
            cin >> marbles[i];
        }

        vector<int> queries(q);
        for (int i = 0; i < q; i++){
            cin >> queries[i];
        }

        sort(marbles.begin(), marbles.end());
        cout << "CASE# " << case_no << ":\n";
        for (int i = 0; i < q; i++){
            auto it = lower_bound(marbles.begin(), marbles.end(), queries[i]);
            if (it != marbles.end() and *it == queries[i]){
                cout << *it << " found at " << it - marbles.begin() + 1 << "\n";
            }
            else{
                cout << queries[i] << " not found\n";
            }
        }
        case_no++;
    }
}

int main(){
    solve();
    return 0;
}
