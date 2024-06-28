#include <iostream>
using namespace std;

void Triangle(int rows, int cols) {
    if(rows == 0)
        return;
    if(cols < rows){
        Triangle(rows, cols + 1);
        cout << "* ";
    } else {
        Triangle(rows - 1, 0);
        cout << "\n";
    }
}

int main() {
    int rows = 4;
    Triangle(rows, 0);
    return 0;
}