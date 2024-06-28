import java.util.*;
public class MaximumElement{
    private static int helper(int[] arr, int index, int max) {
        if(index == arr.length)
            return max;
        if(arr[index] > max)
            max = arr[index];
        return helper(arr, index + 1, max);
    }
    public static int maximum(int[] arr, int index) {
        return helper(arr, 0, -1000000);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        int result = maximum(arr, 0);
        System.out.print(result);
    }
}
