import java.util.*;
public class HollowRectangularNumericalPattern{
    public static void pattern(int rows) {
        for(int i = 1; i <= rows; i++) {
            int cols = rows;
            for(int j = 1; j <= cols; j++) {
                if(i == 1 || i == cols || j == 1 || j == cols){
                    System.out.print(j);
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        pattern(rows);
    }
}
