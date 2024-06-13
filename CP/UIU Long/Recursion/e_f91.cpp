#include <iostream>

using namespace std;

int f91(int N) {
    if (N >= 101) {
        return N - 10;
    } else {
        return f91(f91(N + 11));
    }
}

int main() {
    int N;
    while (cin >> N && N != 0) {
        cout << "f91(" << N << ") = " << f91(N) << endl;
    }
    return 0;
}
