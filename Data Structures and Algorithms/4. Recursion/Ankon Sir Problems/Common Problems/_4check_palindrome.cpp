#include <iostream>
using namespace std;

void recursive(string& s, int f, int l) {
    if(f == s.length() / 2) {
        return;
    } else {
        swap(s[f], s[l]);
        recursive(s, f++, l--);
    }
}
void reverse(string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - 1 - i]);
    }
}

int main() {
    string s = "rahim";
    int n = s.length();
    recursive(s, 0, n - 1);
    cout << s << '\n';
    return 0;
}
