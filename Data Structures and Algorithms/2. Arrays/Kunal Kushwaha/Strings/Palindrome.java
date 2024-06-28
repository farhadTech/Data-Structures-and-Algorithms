import java.util.*;
public class Palindrome{
    public static boolean isPalindrome(String str) {
        str = str.toLowerCase();
        for(int i = 0; i < str.length() / 2; i++) {
            char start = str.charAt(i);
            char end = str.charAt(str.length() - 1 - i);
            if(start != end)
                return false;
        }
        return true;
    }

    public static boolean check(String str) {
        str = str.toLowerCase();
        int start = 0, end = str.length() - 1;
        while(start < end) {
            char s = str.charAt(start);
            char e = str.charAt(end);
            if(s != e)
                return false;
            start++; end--;
        }
        return true;
    }

    public static void main(String[] args) {
        String str = "abcdcba";
        if(check(str)) {
            System.out.println("Palindrome.");
        } else {
            System.out.println("Not Palindrome");
        }
    }
}
