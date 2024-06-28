import java.util.*;
public class BubbleSort{
    public static void bubble_sort(int[] arr, int rows, int cols) {
        if(rows == 0)
            return;
        if(cols < rows){
            if(arr[cols] > arr[cols + 1]) {
                int temp = arr[cols];
                arr[cols] = arr[cols + 1];
                arr[cols + 1] = temp;
            }
            bubble_sort(arr, rows, cols + 1);
        } else {
            bubble_sort(arr, rows - 1, 0);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        bubble_sort(arr, arr.length - 1, 0);
        System.out.print(Arrays.toString(arr));
    }
}
