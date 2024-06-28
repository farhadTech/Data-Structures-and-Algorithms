#include <bits/stdc++.h>
using namespace std;

void parity(vector<int> &a, int left, int right) {
    if (left >= right)
        return;
    if (a[left] % 2 == 1 and a[right] % 2 == 0) {
        swap(a[left], a[right]);
        parity(a, left + 1, right - 1);
    }
    if (a[left] % 2 == 0)
        parity(a, left + 1, right);
    if (a[right] % 2 == 1)
        parity(a, left, right - 1);
}

void print_array(vector<int> &a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    parity(a, 0, a.size() - 1);
    print_array(a);

    return 0;
}
