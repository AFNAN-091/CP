import java.util.Scanner;

public class soln {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int m = in.nextInt();
            int c = (n + m) / 2;
            if (c % 2 == 0) {
                System.out.println("Sadia will be happy.");
            } else {
                System.out.println("Oops!");
            }
        }

    }
}
