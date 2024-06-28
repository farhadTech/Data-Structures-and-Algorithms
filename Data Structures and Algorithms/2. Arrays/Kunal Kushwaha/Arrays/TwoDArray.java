import java.util.*;
public class TwoDArray{
    public static void main(String[] args) {
        int [][] arr = {
            {1, 2, 3},
            {1, 2},
            {5, 6, 8};
        }


        for(int row = 0; row < arr.length; row++) {
            for(int col = 0; col < arr[row].length; col++) {
                System.out.print(arr[row][cols] + " ");
            }
            System.out.println();
        }

    }
}