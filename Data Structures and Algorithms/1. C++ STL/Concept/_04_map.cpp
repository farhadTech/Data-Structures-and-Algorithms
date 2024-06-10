#include <iostream>
#include <map>
using namespace std;

void print_map(map<int, string> mp){
    map<int, string>:: iterator it;

    for(it = mp.begin(); it != mp.end(); it++){
        cout << (*it).first << " " << (*it).second << '\n';
    }
}

void printMap(map<int, string> mp){
    cout << "size of map is: " << mp.size() << '\n';
    for(auto &p : mp){
        cout << p.first << " " << p.second << '\n';
    }
    cout << '\n';
}

int main(){
    map<int, string> mp;

    mp[1] = "abc";
    mp[3] = "cdc";
    mp[5] = "string";

    // another way to insert
    mp.insert(make_pair(7, "seven"));
    mp.insert({8, "eight"});

    // using iterator to print
    //print_map(mp);

    // using range based loop to print
    //printMap(mp);

    auto it = mp.find(3);

    if(it == mp.end()){
        cout << "NO value" << '\n';
    } else {
        cout << (*it).first << " " << (*it).second << "\n";
    }

    mp.erase(3);
    printMap(mp);

    auto it1 = mp.find(1);
    if(it1 != mp.end()){
        mp.erase(it1);
    }
    else {
        cout << "not present.\n";
    }

    mp.clear();
    printMap(mp);
    return 0;
}