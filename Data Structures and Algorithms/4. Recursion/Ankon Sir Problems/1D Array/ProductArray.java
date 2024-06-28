import java.util.*;
public class ProductArray{
    private static int helper(int[] arr, int index, int prod) {
        if(index == arr.length)
            return prod;
        return helper(arr, index + 1, prod * arr[index]);
    }
    public static int product(int[] arr, int index) {
        return helper(arr, 0, 1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        int result = product(arr, 0);
        System.out.print(result);
    }
}
