#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << [](int x) { return x + 2; }(4) << '\n';

    cout << [](int x, int y) { return x + y; } (4, 7) << '\n';

    auto sum = [](int x, int y) { return x + y; };
    cout << sum (2, 3) << '\n';


    vector<int> v = {2, 3, 5};
    cout << all_of(v.begin(), v.end(),
            [](int x){ return x > 0; }) << '\n';

    cout << any_of(v.begin(), v.end(),
            [](int x) { return x > 0; }) <<  '\n';

    cout << none_of(v.begin(), v.end(),
            [](int x) { return x > 0; }) << '\n';

    return 0;
}
