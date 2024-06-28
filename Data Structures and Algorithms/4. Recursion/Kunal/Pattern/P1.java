/*
******
******
******
******
*/

import java.util.*;
class P1 {
    public static void Rectangle(int rows, int cols, int N) {
        if(N == rows)
            return;
        if(cols < rows) {
            System.out.print("* ");
            Rectangle(rows, cols + 1, N);
        }
        else {
            System.out.println();
            Rectangle(rows, 0, N + 1);
        }
    }

    public static void main(String[] args) {
        Rectangle(4, 0, 0);
    }
}
