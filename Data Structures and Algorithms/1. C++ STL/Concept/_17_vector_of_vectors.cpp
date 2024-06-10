#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v){
    cout << "size: " << v.size() << '\n';

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << '\n';
}
/*
int main(){
    int N; cin >> N;
    vector<int> v[N];

    for(int i = 0; i < N; i++){
        int n; cin >> n;
        for(int j = 0; j < n; j++){
            int x; cin >> x;
            v[i].push_back(x);
        }
    }

    for(int i = 0; i < N; i++){
        printVector(v[i]);
    }
}
*/

int main(){
    int N; cin >> N;
    vector<vector<int>> v;

    for(int i = 0; i < N; i++){
        int n; cin >> n;
        vector<int> temp;
        for(int j = 0; j < n; j++){
            int x; cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i = 0; i < v.size(); i++){
        printVector(v[i]);
    }
    return 0;
}
