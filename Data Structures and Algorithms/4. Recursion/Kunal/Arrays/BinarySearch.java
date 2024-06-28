import java.util.*;
public class BinarySearch{
    public static int binary_search(int[] arr, int target, int start, int end) {
        if(start > end) return -1;
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] > target)
            return binary_search(arr, target, start, mid - 1);
        else
            return binary_search(arr, target, mid + 1, end);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        int target = sc.nextInt();
        int result = binary_search(arr, target, 0, arr.length - 1);
        System.out.printf("%d found at index: %d", target, result);
    }
}
