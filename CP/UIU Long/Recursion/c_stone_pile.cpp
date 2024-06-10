#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    int total_sum = 0;
    for (int weight : weights) {
        total_sum += weight;
    }

    int min_diff = INT_MAX;

    int num_subsets = 1 << n;
    for (int subset = 0; subset < num_subsets; ++subset) {
        int subset_sum = 0;
        for (int i = 0; i < n; ++i) {
            if (subset & (1 << i)) {
                subset_sum += weights[i];
            }
        }
        int other_subset_sum = total_sum - subset_sum;
        int current_diff = abs(subset_sum - other_subset_sum);
        if (current_diff < min_diff) {
            min_diff = current_diff;
        }
    }

    cout << min_diff << endl;

    return 0;
}
