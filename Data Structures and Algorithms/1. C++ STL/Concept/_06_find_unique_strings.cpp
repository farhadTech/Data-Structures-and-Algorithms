#include <iostream>
#include <set>
using namespace std;

int main(){
    set<string> st;

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        st.insert(s);
    }

    for(auto &p : st){
        cout << p << " ";
    }
    cout << endl;

    return 0;
}
