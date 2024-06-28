/*

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *

*/

import java.util.*;
class P3 {
    public static void Triangle(int rows, int cols) {
        if(rows == 0)
            return;
        if(cols < rows) {
            Triangle(rows, cols + 1);
            System.out.print("* ");
        } else {
            Triangle(rows - 1, 0);
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int N = 7;
        Triangle(N, 0);
    }
}
