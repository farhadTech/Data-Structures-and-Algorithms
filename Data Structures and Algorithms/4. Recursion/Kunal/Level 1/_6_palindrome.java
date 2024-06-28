import java.util.*;

public class _6_palindrome{

    public static int reverse(int n, int rev) {
        if(n == 0) return rev;
        int last_digit = n % 10;
        return reverse(n / 10, (rev * 10) + last_digit);

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int rev = reverse(n, 0);
        if(n == rev) {
            System.out.println("Yes Palindrome.\n");
        } else {
            System.out.println("Not Palindrome.\n");
        }
    }
}
