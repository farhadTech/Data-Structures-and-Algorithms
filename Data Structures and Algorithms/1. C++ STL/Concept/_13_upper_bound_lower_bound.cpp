#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    /*
    The lower_bound is a function in stl, it search for a value if it is present it gives the memory address of that value, if value not present then it gives memory address of the next value.
    */
    auto it = lower_bound(arr.begin(), arr.end(), 5);
    cout << *it << '\n';

    if(it == (arr.end())){
        cout << "Not Found.\n";
        return 0;
    }

    // upper_bound search for the value if it is present or not it gives the memory address of the next value.
    auto it1 = upper_bound(arr.begin(), arr.end(), 10);
    cout << *it1 << '\n';

    return 0;
}
