import java.util.*;
public class _16_linear_search{

    public static boolean search(int []arr, int n, int i, int x) {
        if(i == n)
            return false;
        return (arr[i] == x) || search(arr, n, i + 1, x);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        boolean result = search(arr, n, 0, 15);
        if(result) {
            System.out.print("Element found.\n");
        } else {
            System.out.print("Element not found.\n");
        }
    }
}
