import java.util.Scanner;

public class hotorcold {
    public static void main(String [] args)
    {
        Scanner in = new Scanner(System.in);
        int t ;
        t = in.nextInt();
        while(t-->0)
        {
            int x;
            x = in.nextInt();
            if(x>20)
            {
                System.out.println("HOT");
            }
            else{
                System.out.println("COLD");
            }
        }
    }
}
