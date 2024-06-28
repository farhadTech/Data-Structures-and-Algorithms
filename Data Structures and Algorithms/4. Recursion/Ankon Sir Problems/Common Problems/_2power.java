import java.util.*;

class _2power {
    public static int power(int x, int y) {
        if(y == 1) return x;
        return power(x, y - 1) * x;
    }

    public static void main(String[] args) {
        int x, y;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        y = sc.nextInt();

        System.out.printf("%d raised to the power %d is %d \n", x, y, power(x, y));
    }
}
