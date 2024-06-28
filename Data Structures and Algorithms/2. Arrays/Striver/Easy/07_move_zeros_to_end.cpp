#include <iostream>
#include <vector>
using namespace std;

vector<int> move_zeros_to_end(vector<int>& arr){
    int n = arr.size();
    vector<int> temp;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            temp.push_back(0);
            if(i != n - 1){
                arr[i] = arr[i + 1];
            }
        }
    }
    return arr;
}

int main(){
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> res = move_zeros_to_end(arr);
    for(auto &it : res){
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}