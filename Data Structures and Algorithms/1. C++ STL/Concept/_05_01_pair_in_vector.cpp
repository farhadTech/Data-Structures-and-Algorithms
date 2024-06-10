#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    vector< pair<int, string> > v;
    vector< pair<int, string> >::iterator it;
    // 0 -> 21, dipta
    // 1 -> 22, nabil

    v.push_back(make_pair(21, "dipta"));
    v.push_back(make_pair(22, "nabil"));

    for(int i = 0; i < 3; i++){
        int x; string s;
        cin >> x;
    }

    for(it = v.begin(); it != v.end(); it++){
        cout << it->first << " " << it->second << '\n';
    }

    return 0;
}
