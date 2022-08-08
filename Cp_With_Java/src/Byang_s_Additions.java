import java.util.Scanner;

public class Byang_s_Additions {
    public static void main(String[] args) {
        int x;
        String a, b;
        Scanner in = new Scanner(System.in);
        x = in.nextInt();
        a = Integer.toString(x);
        x = in.nextInt();
        b = Integer.toString(x);
        int c = a.length();
        int d = b.length();
        c--;
        d--;
        while (c >= 0 && d >= 0) {
            char ch1 = a.charAt(c);
            char ch2 = b.charAt(d);
            int sum = Character.getNumericValue(ch1) + Character.getNumericValue(ch2);
            if (sum > 9) {
                System.out.println("Yes");
                return;
            }
            d--;
            c--;
        }

        System.out.println("No");

    }
}