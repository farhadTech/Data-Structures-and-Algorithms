import java.util.*;

public class _3_factorial{
    public static int fact(int n) {
        if(n == 0) return 1;

        return fact(n - 1) * n;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num;
        num = sc.nextInt();
        System.out.println("Factorial of " + num + " is " + fact(num));
    }
}
