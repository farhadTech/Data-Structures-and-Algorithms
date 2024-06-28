import java.util.*;
public class Pattern{
    public static void solve(int rows) {
        for(int i = 1; i <= rows; i++) {
            for(int j = rows - 1; j >= i; j--) {
                System.out.print(" ");
            }
            for(int k = 1; k <= i; k++) {
                System.out.print(k);
            }
            for(int l = i - 1; l >= 1; l--) {
                System.out.print(l);
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        solve(rows);
    }
}
