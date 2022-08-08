import java.util.Scanner;

public class Goat_Research {
    public static void main(String[] args) {
        int n;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        in.nextLine();
        String [] ans ;
        int i=0;
        while (n-- > 0) {
            String s;
            s = in.nextLine();
            // System.out.println(s);
            int a = s.length();
            a--;
            if (a % 2 == 0) {
                int b = 10 - s.length();
                b /= 2;
                while (b-- > 0) {
                    System.out.print(" ");
                }
                System.out.println(s);
            } else if (a == 1) {
                int b = 10 - s.length();
                b /= 2;
                while (b-- > 0) {
                    System.out.print(" ");
                }
                System.out.println(s + "a");
            } else {
                StringBuilder str = new StringBuilder(s);
                str.deleteCharAt(s.length() - 1);
                int b = 10 - str.length();
                b /= 2;
                while (b-- > 0) {
                  //  System.out.print(" ");
                  
                }
                System.out.println(str);
            }
        }
    }
}