
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Is_Anagram {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a, b;
        a = in.nextLine();
        b = in.nextLine();
        if (a.length() != b.length()) {
            System.out.println("No");
            return;
        }

        Map<Character, Integer> first = new HashMap<>();
        for (int i = 0; i < a.length(); i++) {
            char ch = a.charAt(i);
            if (first.containsKey(ch)) {
                first.put(ch, first.get(ch) + 1);
            } else {
                first.put(ch, 1);
            }
        }
        Map<Character, Integer> second = new HashMap<>();
        for (int i = 0; i < b.length(); i++) {
            char ch = b.charAt(i);
            if (second.containsKey(ch)) {
                second.put(ch, second.get(ch) + 1);
            } else {
                second.put(ch, 1);
            }
        }

        for (int i = 0; i < b.length(); i++) {
            char ch = b.charAt(i);
            Integer  one = first.get(ch);
            Integer two = second.get(ch);
            if(one!=two)
            {
            	System.out.println("No");
            	return;
            }

        }

        System.out.println("Yes");

    }
}