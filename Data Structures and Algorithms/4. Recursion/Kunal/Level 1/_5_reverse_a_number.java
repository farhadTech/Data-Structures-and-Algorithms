import java.util.*;

public class _5_reverse_a_number {
    public static int reverse(int n, int rev) {
        if(n == 0) return rev;
        int last_digit = n % 10;
        return reverse(n / 10, (rev * 10) + last_digit);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println("Reverse of " + n + " is " + reverse(n, 0));
    }
}
