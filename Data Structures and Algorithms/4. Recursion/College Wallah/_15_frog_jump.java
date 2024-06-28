import java.util.*;
public class _15_frog_jump{
    public static int f(int []h, int n, int i) {
        if(i == n - 1)
            return 0;
        if(i == n - 2)
            return f(h, n, i + 1) + Math.abs(h[i] - h[i + 1]);

        if(f(h, n, i + 1) + Math.abs(h[i] - h[i + 1]) < f(h, n, i + 2) + Math.abs(h[i] - h[i + 2])) {
            return f(h, n, i + 1) + Math.abs(h[i] - h[i + 1]);
        } else {
            return f(h, n, i + 2) + Math.abs(h[i] - h[i + 2]);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int mn_cost = f(arr, n, 0);
        System.out.print(mn_cost + "\n");
    }
}
