import java.util.*;
public class Array_list{
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);
        list.add(60);
        list.remove(5);

        list.set(0, 2);
        list.set(1, 3);
        list.set(2, 5);
        list.set(3, 7);
        list.set(4, 11);

        System.out.print(list);
        Scanner sc = new Scanner(System.in);
        int size;
        size = sc.nextInt();
        for(int i = 0; i < size; i++) {
            list.add(sc.nextInt());
        }
        System.out.print("is 23 present in the list?\nAns: " + list.contains(23) + "\n");

        // get index at index
        for(int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i)); // pass index here
        }
    }
}
