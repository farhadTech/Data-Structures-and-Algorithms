import java.util.*;
public class Sort0sAnd1s{
    public static int helper(int[] arr, int index, int count) {
        if(index == arr.length)
            return count;
        if(arr[index] == 0)
            count++;
        return helper(arr, index + 1, count);
    }

    public static int sort(int[] arr, int index){
        return helper(arr, 0, 0);
    }

    public static void printArray(int[] arr, int index) {
        if(index == arr.length){
            System.out.println();
            return;
        }
        System.out.print(arr[index] + " ");
        printArray(arr, index + 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        printArray(arr, 0);
        int ct = sort(arr, 0);
        for(int i = 0; i < arr.length; i++) {
            if(i < ct)
                arr[i] = 0;
            else
                arr[i] = 1;
        }
        printArray(arr, 0);
        System.out.println(Arrays.toString(arr));
    }
}


