import java.util.*;
public class OddEven{
    public static ArrayList <Integer> listOdd = new ArrayList<>();
    public static ArrayList <Integer> listEven = new ArrayList<>();
    public static void print(int[] arr, int index) {
        if(index == arr.length)
            return;
        if(arr[index] % 2 == 1)
            listOdd.add(arr[index]);
        else
            listEven.add(arr[index]);
        print(arr, index + 1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        print(arr, 0);
        System.out.print(listEven + "\n");
        System.out.print(listOdd);
    }
}
