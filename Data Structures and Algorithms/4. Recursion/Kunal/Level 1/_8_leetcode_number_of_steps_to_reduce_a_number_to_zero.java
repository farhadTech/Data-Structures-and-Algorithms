import java.util.*;

public class _8_leetcode_number_of_steps_to_reduce_a_number_to_zero {
    public static int number_of_steps(int n) {
        return helper(n, 0);
    }
    private static int helper(int n, int steps) {
        if(n == 0) {
            return steps;
        }
        if(n % 2 == 0) {
            return helper(n / 2, steps + 1);
        }
        return helper(n - 1, steps + 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int ans = number_of_steps(n);
        System.out.printf("Number of steps are: %d\n", number_of_steps(n));
    }
}
