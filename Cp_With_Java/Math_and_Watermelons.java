import java.util.Scanner;

public class Math_and_Watermelons {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, k;
        n = in.nextInt();
        k = in.nextInt();
        System.out.println(n % k);
    }

}