import java.util.*;
public class RectangularPattern{
    public static void rectangular_pattern(int rows, int cols) {
        for(int i = 1; i <= rows; i++) {
            for(int j = 1; j <= cols; j++) {
                System.out.print(" * ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows, cols;
        rows = sc.nextInt(); cols = sc.nextInt();
        rectangular_pattern(rows, cols);
    }
}