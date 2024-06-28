import java.util.*;
public class MinimumElement{
    private static int helper(int[] arr, int index, int min) {
        if(index == arr.length)
            return min;
        if(arr[index] < min)
            min = arr[index];
        return helper(arr, index + 1, min);
    }
    public static int minimum(int[] arr, int index) {
        return helper(arr, 0, 1000000);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        int result = minimum(arr, 0);
        System.out.print(result);
    }
}