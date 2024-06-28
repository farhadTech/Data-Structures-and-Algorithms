import java.util.*;
public class DiamondAlphabet{
    public static void print(int rows) {
        int apha_left = 65, alpha_right = 67, trace1 = 68, trace2 = 68;
        for(int i = 1; i <= rows; i++) {
            // printing upper left space
            for(int j = rows - 1; j >= i; j--) {
                System.out.print(" ");
            }
            // printing upper left alphabet
            for(int k = 1; k <= i; k++) {
                System.out.printf("%c", apha_left);

                apha_left++;
            }
            apha_left = 65;

            // printing upper right alphabet
            if(i >= 2 && i <= rows) {
                for(int p = 1; p <= i - 1; p++){
                    System.out.printf("%c", alpha_right);
                    alpha_right++;
                }
                alpha_right = trace1;
                trace1++;
            }
            System.out.println();
        }

        for(int i = 1; i <= rows - 1; i++) {
            // print bottom left space
            for(int j = 1; j <= i; j++) {
                System.out.print(" ");
            }
            // printing alphabet
            for(int k = rows - 1; k >= i; k--) {
                System.out.printf("%c", apha_left);
                apha_left++;
            }
            for(int p = rows - 2; p >= i; p--) {
                System.out.printf("%c", apha_left);
                apha_left++;
            }
            apha_left = 65;
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        print(rows);
    }
}
