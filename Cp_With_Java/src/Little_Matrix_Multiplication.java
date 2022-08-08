import java.util.Scanner;

public class Little_Matrix_Multiplication {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int A11, A12, A21, A22, B11, B12, B21, B22, C11, C12, C21, C22;

        A11 = in.nextInt();
        A12 = in.nextInt();
        A21 = in.nextInt();
        A22 = in.nextInt();
        B11 = in.nextInt();
        B12 = in.nextInt();
        B21 = in.nextInt();
        B22 = in.nextInt();
        C11 = A11 * B11 + A12 * B21;
        C12 = A11 * B12 + A12 * B22;
        C21 = A21 * B11 + A22 * B21;
        C22 = A21 * B12 + A22 * B22;
        System.out.println(C11 + " " + C12);
        System.out.println(C21 + " " + C22);

    }
}