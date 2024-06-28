import java.util.*;
public class Average{
    private static int avg(int[] arr, int index, int sum) {
        if(index == arr.length)
            return sum / arr.length;
        return avg(arr, index + 1, sum + arr[index]);
    }
    public static int calculate(int[] arr, int index) {
        return avg(arr, 0, 0);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        int result = calculate(arr, 0);
        System.out.print(result);
    }
}
