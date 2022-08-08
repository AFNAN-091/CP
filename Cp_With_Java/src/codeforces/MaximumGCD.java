package codeforces;
import java.util.*;

public class MaximumGCD {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		byte t = in.nextByte();
		while(t-->0)
		{
			int n;
			n = in.nextInt();
			if(n%2==0)
			{
				System.out.println(n/2);
			}
			else {
				System.out.println((n-1)/2);
			}
		}
		
	}

}
