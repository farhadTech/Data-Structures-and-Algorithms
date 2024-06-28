import java.util.*;
public class Pat1{
    public static void print(int n) {
        for(int rows = 0; rows < n; rows++) {
            for(int cols = 0; cols < rows; cols++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        print(5);
    }
}
