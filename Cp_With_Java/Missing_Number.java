import java.util.Scanner;

public class Missing_Number {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        int a, b, c;
        n = in.nextInt();
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        int ans = a + b + c;
        System.out.println(n - ans);
    }
}