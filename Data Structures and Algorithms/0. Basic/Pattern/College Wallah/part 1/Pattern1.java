import java.util.*;
public class Pattern1{
    public static void pattern(int rows, int cols) {
        int a = 1, b = 2;
        for(int i = 1; i <= rows; i++) {
            for(int j = 1; j <= cols / 2; j++) {
                if(i % 2 == 1) {
                    System.out.printf("%d%d", a, b);
                } else {
                    System.out.printf("%d%d", b, a);
                }
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt(), cols = sc.nextInt();
        pattern(rows, cols);
    }
}
