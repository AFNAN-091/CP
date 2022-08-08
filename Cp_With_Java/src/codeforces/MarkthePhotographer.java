package codeforces;
import java.util.*;

public class MarkthePhotographer {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();
		int arr[] = new int[n*2+1];
		for(int i=0; i<n*2; i++)
		{
			arr[i] = in.nextInt();
		}
		Arrays.sort(arr);
		for(int i=0; i<n*2; i++)
		{
			int c = arr[i]-arr[n*2+i];
			if(Math.abs(c)>=m)
			{
				continue;
			}
			else {
				System.out.println("NO");
				return;
			}
		}
		System.out.println("YES");
		return;
	}

}
