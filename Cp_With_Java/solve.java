import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;

public class solve {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s;
        s = in.nextLine();
        LinkedList<Character> arr = new LinkedList<Character>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ')') {
                if (arr.isEmpty()) {
                    System.out.println("No");
                    return;
                } else {
                    arr.removeLast();
                }
            } else {
                arr.addLast(s.charAt(i));
            }
        }
        if (!arr.isEmpty()) {
            System.out.println("No");
        } else {
            System.out.println("Yes");
        }
    }
}