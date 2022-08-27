import java.util.*;

public class Set_Union {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, m;
        n = in.nextInt();
        m = in.nextInt();
        int arr[] = new int[n + m];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        for (int i = n; i < n + m; i++) {
            arr[i] = in.nextInt();
        }
        Arrays.sort(arr);
        
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < n + m; i++) {
            if (!set.contains(arr[i])) {
                set.add(arr[i]);
                System.out.print(arr[i] + " ");
            }

        }
        System.out.println();

    }
}