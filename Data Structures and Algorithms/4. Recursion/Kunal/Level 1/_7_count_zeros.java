import java.util.*;

public class _7_count_zeros {
    public static int count(int n) {
        return helper(n, 0);
    }

    public static int helper(int n, int c) {
        if(n == 0) {
            return c;
        }

        int rem = n % 10;
        if(rem == 0) {
            return helper(n / 10, c + 1);
        }
        return helper(n / 10, c);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();

        System.out.println("the number of zeros are in : " + num + " is " + count(num));
    }
}
