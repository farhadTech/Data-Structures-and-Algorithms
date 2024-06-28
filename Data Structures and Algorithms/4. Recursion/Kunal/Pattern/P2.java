/*

******
*****
****
***
**
*

*/

import java.util.*;
class P2 {
    public static void Triangle(int rows, int cols, int N) {
        if(N == 0)
            return;
        if(cols < rows) {
            System.out.print("* ");
            Triangle(rows, cols + 1, N);
        }
        else {
            System.out.println();
            Triangle(rows - 1, 0, N - 1);
        }
    }

    public static void main(String[] args) {
        Triangle(4, 0, 4);
    }
}
