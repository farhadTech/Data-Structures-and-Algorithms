import java.util.*;
public class Pascal{
    public static void pascal(int rows) {
        int cols = 1;
        for(int i = 1; i <= rows; i++) {
            for(int j = rows - 1; j >= i; j--){
                System.out.print(" ");
            }
            for(int k = 1; k <= cols; k++) {
                System.out.print("*");
            }
            cols += 2;
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        pascal(rows);
    }
}

