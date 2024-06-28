import java.util.*;
public class TwoDimensionalArrays{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int no_of_rows = sc.nextInt();
        int no_of_cols = sc.nextInt();
        int [][] arr = new int[no_of_rows][no_of_cols];
        for(int rows = 0; rows < arr.length; rows++) {
            for(int cols = 0; cols < arr[rows].length; cols++) {
                arr[rows][cols] = sc.nextInt();
            }
        }

        for(int row = 0; row < arr.length; row++){
            for(int cols = 0; cols < arr[row].length; cols++){
                System.out.print(arr[row][cols] + " ");
            }
            System.out.println();
        }
    }
}
