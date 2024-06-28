#include <bits/stdc++.h>
using namespace std;
vector<int> l;

bool linear_search(vector<int>& a, int target, int index) {
    if(index == a.size())
        return false;

    return (a[index] == target) or linear_search(a, target, index + 1);
}

void find_all_index(vector<int>& a, int target, int index) {
    if(index == a.size())
        return;
    if(a[index] == target)
        l.push_back(index);
    find_all_index(a, target, index + 1);
}

int findIndex(vector<int>& a, int target, int index) {
    if(index == a.size())
        return -1;
    if(a[index] == target)
        return index;
    else
        return findIndex(a, target, index + 1);
}

int main(){
    int n;	cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int target;
    cin >> target;
    int index = findIndex(a, target, 0);
    cout << target << " found at index: " << index << '\n';

    find_all_index(a, target, 0);
    for(int i = 0; i < l.size(); i++){
        cout << l[i] << " ";
    }

    return 0;
}
