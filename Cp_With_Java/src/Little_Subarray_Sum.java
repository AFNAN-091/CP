import java.util.Scanner;

public class Little_Subarray_Sum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a, b, c;
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        int[] arr = new int[a];
        for (int i = 0; i < a; i++) {
            arr[i] = in.nextInt();
        }
        int sum = 0;
        for (int i = b; i <= c; i++) {
            sum += arr[i];
        }
        System.out.println(sum);

    }
}