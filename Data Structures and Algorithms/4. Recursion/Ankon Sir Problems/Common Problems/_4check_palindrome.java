import java.util.*;
class _4check_palindrome {
    public static String reverse(String str, int i) {
        if(i == str.length()) return str;
        swap(str[i], str[str.length - 1]);
        reverse(str, i++);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;
        str = sc.nextInt();
        if(reverse(str) ) {

        }
    }
}
