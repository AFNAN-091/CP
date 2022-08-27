import java.util.Scanner;

public class Pie_Are_Squared {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        n = in.nextInt();
        double sqr = Math.pow(n, 2);
        double ans = Math.acos(-1) * sqr;
        System.out.println(ans);
    }
}