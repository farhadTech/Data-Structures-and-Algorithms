/*
Check if we can partition the array into two subarrays with equal sum. More formally check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
*/

import java.util.*;
public class EqualSum{
    public static int total_sum;
    private static int sum(int[] arr, int i, int s) {
        if(i == arr.length)
            return s;
        s += arr[i];
        return sum(arr, i + 1, s);
    }

    public static int prefix_sum = 0;
    public static boolean check(int[] arr, int i, int total_sum) {
        if(i == arr.length)
            return false;
        prefix_sum += arr[i];
        int suffix_sum;
        suffix_sum = total_sum - prefix_sum;
        if(prefix_sum == suffix_sum)
            return true;
        return check(arr, i + 1, total_sum);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println(Arrays.toString(arr));
        total_sum = sum(arr, 0, 0);
        boolean result = check(arr, 0, total_sum);
        System.out.print(result + "\n");
    }
}
