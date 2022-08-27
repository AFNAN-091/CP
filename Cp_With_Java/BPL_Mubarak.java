import java.util.Scanner;

public class BPL_Mubarak {
    public static void main(String[] args) {

        int n;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        in.nextLine();
        while (n-- > 0) {
            String s;
            int ball = 0;
            s = in.nextLine();
            for (int i = 0; i < s.length(); i++) {
                char ch = s.charAt(i);
                if (ch - '0' >= 0 && ch - '0' <= 6 || ch == 'O') {
                    ball++;
                }
            }

            if (ball / 6 > 0) {
                if (ball / 6 == 1) {
                    System.out.print(ball / 6 + " OVER ");
                }

                else if (ball / 6 > 1) {
                    System.out.print(ball / 6 + " OVERS ");
                }

                if (ball % 6 > 1) {
                    System.out.print(ball % 6 + " BALLS ");
                } else if (ball % 6 == 1) {
                    System.out.print(ball % 6 + " BALL ");
                }

                System.out.println();
            } else if (ball % 6 == 1) {
                System.out.println(ball % 6 + " BALL");
            } else if (ball % 6 > 1) {
                System.out.println(ball % 6 + " BALLS");
            }

        }

    }
}