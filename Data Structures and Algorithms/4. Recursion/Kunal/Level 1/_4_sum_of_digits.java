import java.util.*;

public class _4_sum_of_digits{
    public static int sum(int n){
        int s = 0;
        while(n != 0) {
            int last_digit = n % 10;
            s += last_digit;
            n /= 10;
        }
        return s;
    }

    public static int recursive(int n, int s) {
        if(n == 0) return s;
        int last_digit = n % 10;
        return recursive(n /= 10, s += last_digit);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println("Sum of digits of number " + n + " is " + recursive(n, 0));
    }
}



