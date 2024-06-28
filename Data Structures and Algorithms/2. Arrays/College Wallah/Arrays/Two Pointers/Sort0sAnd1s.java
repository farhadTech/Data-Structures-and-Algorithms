import java.util.*;
public class Sort0sAnd1s{
    public static void sort(int[] arr) {
        int left_ptr = 0, right_ptr = arr.length - 1;

        while(left_ptr < right_ptr) {
            if(arr[left_ptr] == 1 && arr[right_ptr] == 0) {
                arr[left_ptr] = 0;
                arr[right_ptr] = 1;
            }
            if(arr[left_ptr] == 0)
                left_ptr++;
            if(arr[right_ptr] == 1)
                right_ptr--;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        sort(arr);
        System.out.println(Arrays.toString(arr));
    }
}
