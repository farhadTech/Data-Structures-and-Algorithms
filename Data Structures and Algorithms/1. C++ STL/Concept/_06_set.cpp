#include <iostream>
#include <set>
using namespace std;

int main(){
    set<string> st;

    st.insert("xyz");
    st.insert("pqr");
    st.insert("tuv");
    st.insert("abc");
    st.insert("xyz");
    st.insert("mno");
    st.insert("pqr");
    st.insert("jkl");

    // set<string>:: iterator it;
    // for(it = st.begin(); it != st.end(); it++){
    //     cout << (*it) << '\n';
    // }

    auto it = st.find("xyz");

    if(it != st.end()){
        st.erase(it);
    }

    for(auto &p : st){
        cout << p << "\n";
    }
    cout << '\n';
    return 0;
}
