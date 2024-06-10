#include <iostream>
#include <string>
using namespace std;

// recursive solution
string recursive(string& str, int n, int idx, string res){
    // base case
    if(idx == n) {
        return res;
    }
    // case work
    if(str[idx] != 'a'){
        res += str[idx];
    }
    // inductive case
    return recursive(str, n, idx + 1, res);
}

// iterative solution
string remove_occurence(string str, int n){
    string res = "";
    for (int i = 0; i < n; i++){
        if(str[i] == 'a'){
            i++;
        }
    }
    return res;
}

int main(){
    int n = 8;
    string str = "abcabcaz";

    cout << remove_occurence(str, n) << '\n';
    cout << recursive(str, n, 0, "") << '\n';
    return 0;
}
