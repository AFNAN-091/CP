import java.util.Scanner;

public class Formatted_Numbers {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s;
        s = in.nextLine();
        int n = s.length();
        int cnt = 1;
        String s1 = "";
        s1 += s.charAt(n - 1);

        for (int i = n - 2; i >= 0; i--) {
            if (cnt % 3 == 0) {
                s1 += ",";
                s1 += s.charAt(i);
                cnt++;
            } else {
                s1 += s.charAt(i);
                cnt++;
            }
        }
        StringBuilder s2 = new StringBuilder(s1);
        s2.reverse();
        System.out.println(s2);
    }
}