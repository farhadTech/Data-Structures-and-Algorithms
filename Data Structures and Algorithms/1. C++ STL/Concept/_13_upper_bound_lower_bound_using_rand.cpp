#include <iostream>
#include <vector>
#include <set>
#include <random>
using namespace std;

int main(){
    set<int> s;

    for(int i = 0; i < (int)(1e6); i++){
        s.insert(rand());
    }

    for(int i = 0; i < (int)(1e5); i++){
        auto it = s.lower_bound(rand());
    }
    return 0;
}
