import java.util.Random;

public class demo {

	public static void main(String[] args) {
		  int max = 100;
		  int min = 1;
		// create instance of Random class
		  int t= 10;
		  while(t-->0)
		  {
			  Random randomNum = new Random();
			  int showMe = min + randomNum.nextInt(max);
			  System.out.println(showMe);
		  }
		  

	}

}
