#include <iostream>
using namespace std;

void rectangle(int rows, int cols, int N) {
    if(N == 0)
        return;
    if(cols < rows){
        cout << "* ";
        rectangle(rows, cols + 1, N);
    }
    else {
        cout << "\n";
        rectangle(rows, 0, N - 1);
    }
}
 
int main() {
    rectangle(4, 0, 4);
    return 0;
}
