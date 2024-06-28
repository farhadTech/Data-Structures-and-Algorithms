#include <iostream>
#include <vector>
using namespace std;

vector<int> rotate_array_left(vector<int>& arr, int k){
    int n = arr.size();
    k = k % n;
    vector<int> temp;
    for(int i = 0; i < k; i++){
        temp.push_back(arr[i]);
    }

    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            arr[j] = arr[j + 1];
        }
    }

    int ind = n - k;
    int j = 0;
    for(int i = ind; i < n; i++){
        arr[i] = temp[j++];
    }
    return arr;
}

vector<int> rotate_array_right(vector<int>&arr, int k){
    int n = arr.size();
    int ind = n - k;
    k = k % n;
    vector<int> temp;
    for(int i = ind; i < n; i++){
        temp.push_back(arr[i]);
    }

    for(int i = 0; i < k; i++){
        for(int j = n - 1; j >= 0; j--){
            arr[j] = arr[j - 1];
        }
    }

    int j = 0;
    for(int i = 0; i < k; i++){
        arr[i] = temp[j++];
    }
    return arr;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k; cin >> k;
    vector<int> res1 = rotate_array_left(a, k);

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << '\n';

    vector<int> res2 = rotate_array_right(a, k);
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << '\n';
    return 0;
}
