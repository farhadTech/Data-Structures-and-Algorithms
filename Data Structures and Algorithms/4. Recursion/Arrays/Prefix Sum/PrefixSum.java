import java.util.*;
public class PrefixSum{
    public static void prefix_sum(int[] arr, int i) {
        if(i == arr.length)
            return;
        arr[i] = arr[i - 1] + arr[i];
        prefix_sum(arr, i + 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        prefix_sum(arr, 1);
        System.out.println(Arrays.toString(arr));
    }
}