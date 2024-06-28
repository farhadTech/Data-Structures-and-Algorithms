import java.util.*;
public class SortedOrNot{
    public static boolean sorted(int[] arr, int index) {
        if(index == arr.length - 1)
            return true;
        return arr[index] < arr[index + 1] && sorted(arr, index + 1);
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
        print_array(arr, n);

        boolean check = sorted(arr, 0);
        System.out.print(check);
    }
}

