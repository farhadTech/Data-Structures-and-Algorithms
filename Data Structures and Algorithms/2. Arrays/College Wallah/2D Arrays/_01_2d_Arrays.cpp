#include <bits/stdc++.h>
using namespace std;

int main(){
    int size_of_rows, size_of_cols;
    cin >> size_of_rows >> size_of_cols;

    int arr[size_of_rows][size_of_cols];
    for(int rows = 0; rows < size_of_rows; rows++){
        for(int cols = 0; cols < size_of_cols; cols++){
            cin >> arr[rows][cols];
        }
    }

    for(int rows = 0; rows < size_of_rows; rows++){
        for(int cols = 0; cols < size_of_cols; cols++){
            cout << arr[rows][cols] << " ";
        }
        cout << '\n';
    }

    return 0;
}
