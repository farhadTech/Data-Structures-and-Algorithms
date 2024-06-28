#include <bits/stdc++.h>
using namespace std;

bool sorted_or_not(vector<int>a, int index){
    if(index == a.size() - 1) {
        return true;
    }
    return (a[index] < a[index + 1]) and (sorted_or_not(a, index + 1));
}

void print_array(vector<int>&a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> a = {2, 4, 8, 10};
    
    bool check = sorted_or_not(a, 0);
    if(check) {
        cout << "Sorted.\n";
    } else {
        cout << "Not Sorted.\n";
    }
    return 0;
}
