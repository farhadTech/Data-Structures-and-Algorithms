import java.util.*;

public class _1_print_n_to_1 {
    public static void print(int []arr, int n) {
        if(n == 0) return;
        System.out.print(arr[n - 1] + " ");
        print(arr, n - 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println();
        print(arr, n);
    }
}
