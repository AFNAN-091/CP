import java.util.Scanner;

public class Fair_Distribution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a, b;
        a = in.nextInt();
        b = in.nextInt();
        int c = b % a;
        System.out.println(a - c);
    }
}