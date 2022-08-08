import java.util.Scanner;

public class Fibonacci_Numbers {

    int fibo(int n) {
        int a = 0;
        int b = 1;
        int c = 0;
        if (n == 1)
            return 1;
        n--;
        while (n-- > 0) {
            c = a + b;
            a = b;
            b = c;

        }
        return c;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n;
        n = in.nextInt();
        Fibonacci_Numbers ob = new Fibonacci_Numbers();
        System.out.println(ob.fibo(n));

    }
}