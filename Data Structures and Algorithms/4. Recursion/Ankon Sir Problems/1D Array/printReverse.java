import java.util.*;
public class printReverse{
    public static void reverse(int[] arr, int index) {
        if(index == -1)
            return;
        System.out.print(arr[index] + " ");
        reverse(arr, index - 1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        reverse(arr, arr.length - 1);
    }
}
