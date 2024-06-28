import java.util.*;
public class InvertedTriangularPattern{
    public static void inverted(int rows) {
        for(int i = 1; i <= rows; i++) {
            for(int j = rows; j >= i; j--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        inverted(rows);
    }
}
