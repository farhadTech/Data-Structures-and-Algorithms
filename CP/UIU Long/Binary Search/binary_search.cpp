#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int>& a, int key){
    int low = 0;
    int high = a.size() - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(a[mid] == key) {
            return mid;
        }
        else if(a[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
}

int main(){
    vector<int> a{10, 20, 30, 40, 50, 60, 70};
    int key = 10;
    cout << "Key found at index: " << binary_search(a, key) << "\n";

    return 0;
}
