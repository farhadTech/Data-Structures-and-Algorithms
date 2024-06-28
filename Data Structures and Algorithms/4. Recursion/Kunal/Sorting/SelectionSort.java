import java.util.*;
public class SelectionSort{
    public static void selection(int[] arr, int rows, int cols, int max) {
        if(rows == 0)
            return;
        if(cols < rows){
            if(arr[cols] < arr[max]){
                selection(arr, rows, cols + 1, cols);
            }
            else{
                selection(arr, rows, cols + 1, max);
            }
        }
        else {
            int temp = arr[max];
            arr[max] = arr[rows - 1];
            arr[max] = temp;
        }
        selection(arr, rows - 1, 0, 0);
    }

    public static void print_array(int []arr, int n) {
        for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        selection(arr, arr.length, 0, 0);
        print_array(arr, n);
    }
}
