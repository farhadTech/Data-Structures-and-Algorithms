import java.util.*;
public class Toh{
    public static void Toh(int n, int a, int b, int c){
        if(n == 1){
            System.out.println("Move " + n + " disc from " + a + " to " + c);
            return;
        }
        Toh(n - 1, a, c, b);
        System.out.println("Move " + n + " disc from " + a + " to " + c);
        Toh(n - 1, b, a, c);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Toh(n, 1, 2, 3);
    }
}


