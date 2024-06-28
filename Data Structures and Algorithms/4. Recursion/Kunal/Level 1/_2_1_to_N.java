import java.util.*;

public class _2_1_to_N {
    public static void print_array(int []arr, int n) {
        if(n == 0) return;

        print_array(arr, n - 1);
        System.out.print(arr[n-1] + " ");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int arr[] = new int[10];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        print_array(arr, n);
    }
}
