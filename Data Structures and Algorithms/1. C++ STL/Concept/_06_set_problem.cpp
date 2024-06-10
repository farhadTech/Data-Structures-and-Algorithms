/*
    Given n strings and q queries.
    In each query you are given a string
    print yes if string is present else no.

    N <= 10^6
    |s| <= 100
    Q <= 10^6
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<string> st;

    int n, q; cin >> n >> q;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        st.insert(s);
    }

    for(int i = 0; i < q; i++){
        string s;
        cin >> s;
        auto it = st.find(s);

        if(it != st.end()){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
