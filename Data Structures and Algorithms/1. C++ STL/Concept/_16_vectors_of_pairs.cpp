#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void print_vector(vector< pair<int, int> >&v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << '\n';
    }

    swap(v[0], v[2]);
    cout << '\n';
    // using iterator
    vector< pair<int, int> >::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << it->first << " " << it->second << '\n';
    }
    cout << '\n';
    // using range based loop
    for(pair<int, int>  &p : v){
        cout << p.first << " " << p.second << "\n";
    }

    cout << "\nusing auto keyword: \n";
    for(auto &p : v){
        cout << p.first << " " << p.second << '\n';
    }
}

int main(){
    //vector< pair<int, int> > v = { {1, 2}, {2, 3}, {3, 4} };
    // taking input
    vector< pair<int, int> > v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    print_vector(v);
    return 0;
}
