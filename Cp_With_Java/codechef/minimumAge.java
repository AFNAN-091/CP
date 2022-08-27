import java.util.Scanner;

public class minimumAge {
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int t;
        t = in.nextInt();
        while(t-->0)
        {
            int x,y,a;
            x = in.nextInt();
            y = in.nextInt();
            a = in.nextInt();
            if(a>=x && y>a)
            {
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
