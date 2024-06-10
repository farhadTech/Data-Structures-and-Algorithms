#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> mp;
    // 1.
    mp["jkl"] = 7;
    mp["mno"] = 9;
    // 2.
    mp.insert(make_pair("abc", 1));
    mp.insert(make_pair("xyz", 3));
    // 3.
    mp.insert({"pqr", 4});
    mp.insert({"tuv", 8});

    // unordered_map<string, int>::iterator it;
    // for(it = mp.begin(); it != mp.end(); it++){
    //     cout << (*it).first << " " << (*it).second << "\n";
    // }

    auto it = mp.find("pqr");

    if(it != mp.end()){
        mp.erase(it);
    }

    for(auto &p : mp){
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}