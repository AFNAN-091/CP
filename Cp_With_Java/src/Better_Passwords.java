import java.util.Scanner;

public class Better_Passwords {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str;
        str = in.nextLine();
        str = str.replace("s", "$");
        str = str.replace("i", "!");
        str = str.replace("o", "()");
        char ch = Character.toUpperCase(str.charAt(0));
        str += ".";
        // System.out.println(ch);

        StringBuilder newstr = new StringBuilder(str);
        newstr.setCharAt(0, ch);
        System.out.println(newstr);

    }
}