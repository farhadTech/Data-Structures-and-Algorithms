import java.util.*;
public class RotatedBinarySearch {
    public static int Rbs(int[] arr, int target, int s, int e) {
        if(s > e)
            return -1;
        int mid = s + (e - s) / 2;
        if(arr[mid] == target)
            return mid;
        if(arr[s] <= arr[mid]) {
            if(target >= arr[s] && target <= arr[mid]) {
                return Rbs(arr, target, s, mid - 1);
            } else {
                return Rbs(arr, target, mid + 1, e);
            }
        }
        if(target >= arr[mid] && target <= arr[e]) {
            return Rbs(arr, target, mid + 1, e);
        }
        return Rbs(arr, target, s, mid - 1);
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
        int target = sc.nextInt();
        int result = Rbs(arr, target, 0, arr.length - 1);
        System.out.print(result + "\n");
    }
}