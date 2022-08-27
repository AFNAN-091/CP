import java.util.Arrays;
import java.util.Scanner;

import javax.swing.ImageIcon;

public class Maximum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        Arrays.sort(arr);
        System.out.println(arr[n - 1]);
    }
}