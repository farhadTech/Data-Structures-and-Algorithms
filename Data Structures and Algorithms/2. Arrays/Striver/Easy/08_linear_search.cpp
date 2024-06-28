#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int>& arr, int key){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        if(arr[i] == key) return i;
    }
    return -1;
}

int main(){
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key; cin >> key;
    int ind = linear_search(arr, key);

    if(ind != -1){
        cout << "Found at index " << ind << '\n';
    } else {
        cout << "Not Found\n" << '\n';
    }
    return 0;
}
