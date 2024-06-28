import java.util.*;
public class ReverseArray{

    public static void method1(int []arr, int i, int n) {
        if(i >= n / 2){
            return;
        }
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        method1(arr, i + 1, n);
    }

    public static void method2(int []arr, int n, int l, int r) {
        if(l >= r) {
            return;
        }
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        method2(arr, n, l + 1, r - 1);
    }

    public static void print_array(int []arr, int n) {
        for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();

        int []arr;
        arr = new int[n + 1];
        
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        print_array(arr, n);
        method1(arr, 0, n);
        print_array(arr, n);

        print_array(arr, n);
        method2(arr, n, 0, n - 1);
        print_array(arr, n);
    }
}
