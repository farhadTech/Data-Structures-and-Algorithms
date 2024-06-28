import java.util.*;
public class Sum{
    private static int helper(int[] arr, int index, int sum) {
        if(index == arr.length)
            return sum;
        return helper(arr, index + 1, sum + arr[index]);
    }

    public static int sum(int[] arr, int index){
        return helper(arr, 0, 0);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        int result = sum(arr, 0);
        System.out.print(result);
    }
}