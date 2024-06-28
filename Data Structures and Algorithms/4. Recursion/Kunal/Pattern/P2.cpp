/*

******
*****
****
***
**
*

*/

#include <iostream>
using namespace std;
void Triangle(int rows, int cols, int N){
    if (N == 0)
        return;
    if (cols < rows){
        cout << "* ";
        Triangle(rows, cols + 1, N);
    }
    else{
        cout << '\n';
        Triangle(rows - 1, 0, N - 1);
    }
}

int main(){
    Triangle(4, 0, 4);
    return 0;
}
