import java.util.Scanner;

public class Caesar_Cipher {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        n = in.nextInt();
        in.nextLine();
        String s;
        s = in.nextLine();
        // char f = 'e';
        // f -= 5;
        // System.out.println(f);
        StringBuilder str = new StringBuilder(s);
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            char b = ch;
            ch -= n;

            char ss = ' ';
            if (ch >= 'a' && ch <= 'z') {
                str.setCharAt(i, ch);
            } else if (b != ss) {
                int a = b - 'a' + 1;
                a = n - a;
                a = (122 - a);
                ch = (char) a;
                str.setCharAt(i, ch);
            }
        }
        System.out.println(str);
    }
}