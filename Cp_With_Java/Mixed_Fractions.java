import java.util.Scanner;

public class Mixed_Fractions {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, m;
        n = in.nextInt();
        m = in.nextInt();
        int a = n / m;
        int b = n % m;

        System.out.println(a + " " + b + " " + m);
    }
}