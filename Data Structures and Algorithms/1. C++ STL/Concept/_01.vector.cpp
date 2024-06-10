#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Declaration of array
    int arr[3];
    arr[0] = 23;
    arr[1] = 37;

    /*  vector is same like array but with dynamic in nature. */
    // Declaration of vector
    vector<int> vec;
    vec.push_back(87);
    vec.push_back(22);
    vec.push_back(65);

    cout << vec[0] << '\n';
    cout << vec[1] << '\n';
    cout << vec[2] << '\n';

    cout << "Size of vector is: " << vec.size() << '\n';

    // Declare a vector of size 5, initialized all values with zeros
    vector<int> v(5, 0);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\nSize of vector is: " << v.size() << '\n';
    cout << '\n';

    vector<int> v1;
    for(int i = 1; i <= 5; i++){
        v1.push_back(i);
    }

    vector<int>::iterator it;
    for(it = v1.begin(); it != v1.end(); it++){
        cout << *it << " ";
    }
    cout << '\n';
    for(int &p : v1){
        cout << p << " ";
    }
    cout << '\n';
    return 0;
}
