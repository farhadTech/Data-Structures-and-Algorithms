#include <iostream>
#include <vector>
using namespace std;

int main() {
    // pair is relationship between two objects

    // Declaration
    pair<string, string> pair1;
    pair1.first = "Farhad";
    pair1.second = "0112230045";
    cout << pair1.first << " " << pair1.second << '\n';

    // another way declaration
    pair<string, int> pair2("Farhad", 45);

    // another way declaration
    pair<int, string> p;
    p = make_pair(2, "abcd");

    // another way declaration
    p = {2, "abcd"};

    cout << p.first << " " << p.second << '\n';

    // copy a pair to another pair
    pair<int, string> &p1 = p;
    p.first = 3;
    cout << p.first << " " << p.second << '\n';

    // relation between two vector
    vector<int> a = {1, 2, 3};
    vector<int> b = {2, 3, 4};

    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    // printing pair
    for (int i = 0; i < 3; i++){
        cout << p_array[i].first << " " << p_array[i].second << '\n';
    }
    // swapping
    swap(p_array[0], p_array[2]);

    cout << '\n';
    for (int i = 0; i < 3; i++){
        cout << p_array[i].first << " " << p_array[i].second << '\n';
    }
    return 0;
}
