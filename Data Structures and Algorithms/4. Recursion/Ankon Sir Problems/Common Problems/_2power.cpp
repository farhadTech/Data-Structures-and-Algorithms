#include <iostream>
using namespace std;

int power(int x, int y) {
    if(y == 1)
        return x;

    return power(x, y - 1) * x;
}

int main () {
    int x, y;
    cin >> x >> y;

    cout << x << " raised to the power " << y << " is " << power(x, y) << '\n';
    return 0;
}
