import java.util.Scanner;

public class Running_Average {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double n;
        n = in.nextDouble();
        double sum = 0;
        for (int i = 1; i <= n; i++) {
            int a;
            a = in.nextInt();
            sum += a;
            double b = sum / i;
            if (Math.ceil(b) == Math.floor(b)) {

                System.out.println((int) b);
            } else {
                System.out.println(b);
            }
        }
    }
}