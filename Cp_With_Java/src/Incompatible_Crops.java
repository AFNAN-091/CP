import java.util.Arrays;
import java.util.Scanner;

public class Incompatible_Crops {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int n, m;
        n = in.nextInt();
        m = in.nextInt();
        
        char str[][] = new char[n][m];
        
        	for (int i = 0; i < n; i++) {
                String data = "";
                if (in.hasNext()) { // input from user 
                    data = in.next();
                } else {
                    break;
                }
                for (int j = 0; j < m; j++)
                    str[i][j] = data.charAt(j); 
            }
        	
      //  	System.out.println(Arrays.deepToString(str));
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (str[i][j] == '.') {
                    if (i - 1 >= 0 && i + 1 < n && j - 1 >= 0 && j + 1 < m) {
                        if (str[i - 1][j] == '*' || str[i + 1][j] == '*' || str[i][j - 1] == '*'
                                || str[i][j + 1] == '*') {
                            continue;
                        } else {
                            ans++;
                        }
                    }
                    else if(i-1>=0 && str[i - 1][j] == '*'){
                    	continue;
                    }
                    else if(i+1<n && str[i + 1][j] == '*'){
                    	continue;
                    }
                    else if(j+1<m && str[i][j + 1] == '*'){
                    	continue;
                    }
                    else if(j-1>=0 && str[i][j - 1] == '*'){
                    	continue;
                    }
                    else {
                    	ans++;
                    }
                }
            }
        }
        System.out.println(ans);
    }
}