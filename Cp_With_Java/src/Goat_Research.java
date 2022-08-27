
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;

public class Goat_Research {
    public static void main(String[] args) {
        int n;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        in.nextLine();
        ArrayList<String> list = new ArrayList<>();

        int mx = 1;
        while (n-- > 0) {
            String s;
            s = in.nextLine();
            // System.out.println(s);
            int a = s.length();
            a--;
            if (a % 2 == 0) {
                // int b = 10 -
                a = s.length();
                // b /= 2;
                list.add(s);
                // while (b-- > 0) {
                // System.out.print(" ");
                // }
                // System.out.println(s);
            } else if (a == 1) {
                // int b = 10 -
                a = s.length();
                // b /= 2;
                // while (b-- > 0) {
                // System.out.print(" ");
                // }
                // System.out.println(s + "a");
                String s2 = s + "a";
                list.add(s2);
            } else {
                StringBuilder str = new StringBuilder(s);
                str.deleteCharAt(s.length() - 1);
                a = s.length() - 1;
                String ss = str.toString();
                list.add(ss);
                // int b = 10 - str.length();
                // b /= 2;
                // while (b-- > 0) {
                // // System.out.print(" ");

                // }
                // System.out.println(str);
            }
            if (mx < a) {
                mx = a;
            }
        }

        Iterator<String> it = list.iterator();

        while (it.hasNext()) {
            String demo = it.next();
            int len = demo.length();
            if (len != mx) {
                len = (mx - len) / 2;
                while (len-- > 0) {
                    System.out.print(" ");
                }
            }
            System.out.println(demo);
        }
    }
}