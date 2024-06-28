import java.util.*;
public class Method{
    public static void main(String[] args) {
        String name = "SOME STRINGS IS A STRING.";
        System.out.println(name.toCharArray());
        System.out.println(Arrays.toString(name.toCharArray()));
        System.out.println(name.toLowerCase());
        System.out.println(name);
        System.out.println(name.indexOf('M'));
        System.out.println("    kunal    ".strip()); // All white space are removed.
        System.out.println(Arrays.toString(name.split(" "))); // Split string where space is found.
    }
}
