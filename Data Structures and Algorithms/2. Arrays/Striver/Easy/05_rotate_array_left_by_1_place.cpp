#include <iostream>
#include <vector>
using namespace std;

// example = { 1, 2, 3, 4, 5}
vector<int> rotate_array_left_by_one_place(vector<int>& arr){
    int temp = arr[0];
    for(int i = 0; i < arr.size(); i++){
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = temp;
    return arr;
}

int main(){
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> res = rotate_array_left_by_one_place(arr);
    for(auto &it : res){
        cout << it << " ";
    }

    return 0;
}
