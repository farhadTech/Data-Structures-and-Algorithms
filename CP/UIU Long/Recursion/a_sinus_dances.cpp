#include <iostream>
#include <cmath>

using namespace std;

double compute_An(int n) {
    double result = 0;
    for (int i = n; i >= 1; --i) {
        result = sin(i + ((i % 2 == 0) ? -result : result));
    }
    return result;
}

double compute_Sn(int n) {
    double Sn = compute_An(1);
    for (int i = 2; i <= n; ++i) {
        Sn = (Sn + i) * compute_An(i);
    }
    Sn += 1;
    return Sn;
}

int main() {
    int N;
    cin >> N;

    double Sn = compute_Sn(N);
    cout << Sn << endl;

    return 0;
}
    