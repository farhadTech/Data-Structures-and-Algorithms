import java.util.*;

class _1factorial {
    public static int fact(int n) {
        if(n == 0) return 1;
        return fact(n - 1) * n;
    }

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        System.out.println("Factorial of " + n + " is " + fact(n));
    }
}
