import java.util.*;
public class RangeQueries{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n + 1];
        arr[0] = 0;
        for(int i = 1; i <= n; i++){
            arr[i] = sc.nextInt();
        }
        // prefix sum
        for(int i = 1; i <= n; i++) {
            arr[i] += arr[i - 1];
        }
        System.out.println(Arrays.toString(arr));

        int queries;
        queries = sc.nextInt();

        while(queries != 0) {
            int left, right;
            left = sc.nextInt();
            right = sc.nextInt();
            int ans = arr[right] - arr[left - 1];
            System.out.println(ans);
            queries--;
        }
    }
}
