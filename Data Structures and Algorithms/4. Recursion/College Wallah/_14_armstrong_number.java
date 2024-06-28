import java.util.*;
public class _14_armstrong_number{

    public static int helper(int n, int s) {
        if(n == 0) return s;
        int ld = n % 10;
        s += (ld * ld * ld);
        return helper(n / 10, s);
    }

    public static int armstrong(int n) {
        return helper(n, 0);
    }

    public static boolean armstrong_iterative(int n) {
        int temp = n;
        int sum = 0;
        while(temp != 0) {
            int last_digit = temp % 10;
            sum += (last_digit * last_digit * last_digit);
            temp /= 10;
        }
        return sum == n;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int res = armstrong(n);

        if(res == n) {
            System.out.println("Yes Armstrong.\n");
        } else {
            System.out.println("Not Armstrong.\n");
        }
    }
}
