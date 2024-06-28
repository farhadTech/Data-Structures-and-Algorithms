import java.util.*;
public class PrintArray{
    public static void print(int[] arr, int index) {
        if(index == arr.length)
            return;
        System.out.print(arr[index] + " ");
        print(arr, index + 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        print(arr, 0);
    }
}
