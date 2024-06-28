import java.util.*;
public class HollowRectangular{
    public static void hollow(int rows, int cols) {
        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= cols; j++){
                if(i == 1 || j == 1 || i == rows || j == cols) {
                    System.out.print("*");
                }
                else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows, cols;
        rows = sc.nextInt(); cols = sc.nextInt();
        hollow(rows, cols);
    }
}
