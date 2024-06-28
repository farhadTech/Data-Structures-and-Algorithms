import java.util.*;
public class SinusDances {
    public static void A(int n, int pos) {
        System.out.print("sin(" + pos);
        if(pos < n) {
            if (pos % 2 == 1)
                System.out.print('-');
            else
                System.out.print('+');
            A(n, pos + 1);
        }
        System.out.print(')');
    }

    public static void S(int n, int pos) {
        if(pos < n) {
            System.out.print('(');
            S(n, pos + 1);
            System.out.print(')');
        }

        A(n + 1 - pos, 1);
        System.out.print("+" + pos);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        S(N, 1);
    }
}