import java.util.Scanner;

public class Is_Prime {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a;
        a = in.nextInt();
        for (int i = 2; i * i < a; i++) {
            if (a % i == 0) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}