import java.util.*;

public class Is_Palindrome {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a;
        a = in.nextLine();
        StringBuilder b = new StringBuilder(a);
        b.reverse();
        // System.out.println(b);
        String c = b.toString();
        // System.out.println(c);
        if (a.equals(c)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}