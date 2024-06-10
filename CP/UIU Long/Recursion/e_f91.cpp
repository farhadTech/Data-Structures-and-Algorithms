#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    for (int caseno = 1; caseno <= cases; ++caseno) {
        int a, b, c, d, e, f, n;
        cin >> a >> b >> c >> d >> e >> f >> n;

        vector<int> dp(max(6, n + 1));
        dp[0] = a % 10000007;
        dp[1] = b % 10000007;
        dp[2] = c % 10000007;
        dp[3] = d % 10000007;
        dp[4] = e % 10000007;
        dp[5] = f % 10000007;

        for (int i = 6; i <= n; ++i) {
            dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6]) % 10000007;
        }

        cout << "Case " << caseno << ": " << dp[n] << endl;
    }

    return 0;
}
