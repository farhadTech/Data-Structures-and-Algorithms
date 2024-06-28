import java.util.*;
public class Comparison{
    public static void main(String[] args) {
        String a = "Farhad";
        String b = "Farhad";
        System.out.println(a == b);
        String s = a;
        System.out.println(s == a);


        String c = new String("Humaira");
        String d = new String("Humaira");
        System.out.println(c == d);

        System.out.print(a.equals(b) + "\n");
    }
}
