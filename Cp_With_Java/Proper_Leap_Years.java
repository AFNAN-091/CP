import java.util.Scanner;

public class Proper_Leap_Years {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if (n % 400 == 0) {
            System.out.println("Yes");
        } else if (n % 100 == 0) {
            System.out.println("No");
        } else if (n % 4 == 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }

    }
}