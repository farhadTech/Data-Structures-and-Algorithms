import java.util.*;

class _3fibonacci {
    public static int fibo (int n) {
        if(n == 0 || n == 1) return n;
        return fibo(n - 1) + fibo(n - 2);
    }

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        System.out.printf("%d th fibocci is: %d\n", n, fibo(n));
    }
}
