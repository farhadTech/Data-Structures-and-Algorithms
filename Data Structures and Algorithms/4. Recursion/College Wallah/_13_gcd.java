import java.util.*;
public class _13_gcd{
    public static int gcd(int a, int b) {
        if(b > a) return gcd(b, a); // in case b is greater than a.
        // base condition
        if(b == 0) return a;
        return gcd(b, a % b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt();

        System.out.println("GCD of " + a + " and " + b + " is: " + gcd(a, b));
    }
}
