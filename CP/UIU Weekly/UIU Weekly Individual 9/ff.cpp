#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> groups(n);
    for (int i = 0; i < n; ++i) {
        cin >> groups[i];
    }

    int bus_count = 0;
    int current_capacity = 0;

    for (int i = 0; i < n; ++i) {
        if (current_capacity < groups[i]) {
            bus_count++;
            current_capacity = m;
        }
        current_capacity -= groups[i];
    }

    cout << bus_count << endl;
    return 0;
}
