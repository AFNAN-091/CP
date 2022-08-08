import java.util.*;
import java.util.Scanner;

public class ICPC_Is_Coming_in_Hot {
    public static void main(String[] args) {
        String n;
        Scanner in = new Scanner(System.in);
        n = in.nextLine();

        int[] arr = new int[10];
        for (int i = 0; i < n.length(); i++) {
            char ch = n.charAt(i);
            arr[ch - '0']++;
        }
        int ans = 0;
        for (int i = 1; i < 9; i++) {
            if (arr[i] > arr[ans]) {
                ans = i;
            }
        }

        System.out.println(ans);
    }
}