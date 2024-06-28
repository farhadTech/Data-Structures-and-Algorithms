import java.util.*;
public class BinarySearch {

    public static int search(int[] arr, int target, int start, int end) {
        if(start > end) return -1;

        int mid = (start + end) / 2;
        if(arr[mid] == target) {
            return mid;
        } else if(target < arr[mid]) {
            return search(arr, target, start, mid - 1);
        } else {
            return search(arr, target, mid + 1, end);
        }
    }

    public static void print_array(int []arr) {
        int n = arr.length;
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
        print_array(arr);
        int target = sc.nextInt();
        int result = search(arr, target, 0, arr.length - 1);
        System.out.printf("Target found at index %d\n", result);
    }
}
