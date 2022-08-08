import java.util.Scanner;

public class Decent_Arrays {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();

        }
        for (int i = 1; i < n - 1; i++) {
            if (arr[i - 1] <= arr[i] && arr[i] <= arr[i + 1]) {
                continue;
            } else {
                System.out.println("No");
                return;
            }

        }
        System.out.println("Yes");
    }
}