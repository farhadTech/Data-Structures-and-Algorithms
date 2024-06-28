#include <iostream>
#include <vector>
using namespace std;

vector<int> union_of_two_sorted_arrays(vector<int>& a1, vector<int>&a2){
    int n1 = a1.size();
    int n2 = a2.size();

    vector<int> result;
    for(int i = 0; i < n1; i++){
        result.push_back(a1[i]);
    }
    for(int i = 0; i < n2; i++){
        result.push_back(a2[i]);
    }
    return result;
}

int main(){
    int n1;
    cin >> n1;
    vector<int> a1(n1);
    for(int i = 0; i < n1; i++){
        cin >> a1[i];
    }
    int n2;
    cin >> n2;
    vector<int> a2(n2);
    for(int i = 0; i < n2; i++){
        cin >> a2[i];
    }

    vector<int> res = union_of_two_sorted_arrays(a1, a2);
    for(auto &it : res){
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}
