import java.util.*;
public class LinearSearch {
    public static boolean present(int[] arr, int target, int index) {
        if(index == arr.length)
            return false;
        return arr[index] == target || present(arr, target, index + 1);
    }

    public static int findIndex(int[] arr, int target, int index) {
        // base condition
        if(index == arr.length)
            return -1;
        // body
        if(arr[index] == target)
            return index;
        else
        // recurrence relation
            return findIndex(arr, target, index + 1);
    }

    public static int findIndexLast(int[] arr, int target, int index) {
        // base condition
        if(index == -1)
            return -1;
        // body
        if(arr[index] == target)
            return index;
        else
        // recurrence relation
            return findIndex(arr, target, index - 1);
    }
    
    public static ArrayList findAllIndex(int[] arr, int target, int index, ArrayList<Integer> list) {
        if(index == arr.length)
            return list;
        if(arr[index] == target)
            list.add(index);
        return findAllIndex(arr, target, index + 1, list);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        int target = sc.nextInt();
        boolean test = present(arr, target, 0);
        if(test) {
            System.out.print("present.\n");
        } else {
            System.out.print("not present.\n");
        }

        int first = findIndex(arr, target, 0);
        int last = findIndexLast(arr, target, arr.length - 1);
        System.out.print(target + " Found at index: " + first + "\n");
        System.out.print(target + " Found at index: " + last + "\n");

        System.out.print(findAllIndex(arr, target, 0, new ArrayList<>()));
    }
}
