import java.util.*;
public class CountPrimeNumbers{
    private static boolean isPrime(int num, int i) {
        if(num <= 1)
            return false;
        // base case
        if(i * i > num)
            return true;
        // check for prime
        if(num % i == 0)
            return false;
        // recursive case
        return isPrime(num, i + 1);
    }
    private static int count(int[] arr, int index, int ct) {
        if(index == arr.length)
            return ct;
        if(isPrime(arr[index], 2)){
            ct++;
        }
        return count(arr, index + 1, ct);
    }
    public static int prime(int[] arr, int index) {
        return count(arr, 0, 0);
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
        int result = prime(arr, 0);
        System.out.print(result);
    }
}
