#include <iostream>
using namespace std;

bool isPalindrome(const string& s) {
    if(s.length() < 2)
        return true;
    else {
        if(s[0] != s[s.length() - 1]){
            return false;
        }
    }
    string middle = s.substr(1, s.length() - 2);
    return isPalindrome(middle);
}

int main() {
    string s;
    cin >> s;

    bool res = isPalindrome(s);
    if(res) {
        cout << "Palindrome.\n";
    } else {
        cout << "Not Palindrome.\n";
    }
    return 0;
}


