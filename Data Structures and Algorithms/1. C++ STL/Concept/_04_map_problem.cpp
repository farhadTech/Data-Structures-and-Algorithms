#include <iostream>
#include <vector>
#include <map>
using namespace std;

void print_map(map<string, int> mp){
    for(auto &p : mp){
        cout << p.first << " " << p.second << "\n";
    }
}
void solve(){
    map<string, int> mp;
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        mp[s] = mp[s] + 1;
    }
    print_map(mp);
}


int main(){
    solve();
    return 0;
}
