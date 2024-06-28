import java.util.*;
public class PrimeNumbers{
    private static boolean isPrime(int num) {
        if(num <= 1)
            return false;
        for(int i = 2; i * i < num; i++){
            if(num % i == 0)
                return false;
        }
        return true;
    }
    public static void prime(int[] arr, int index) {
        if(index == arr.length)
            return;
        if(isPrime(arr[index])){
            System.out.print(arr[index] + " ");
        }
        prime(arr, index + 1);
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
        prime(arr, 0);
    }
}
