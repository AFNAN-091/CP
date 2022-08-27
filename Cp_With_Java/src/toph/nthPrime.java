import java.util.*;

public class nthPrime {
                           
    static long MAX_SIZE = 1000005;
    static ArrayList<Integer> primes = new ArrayList<Integer>();

    static void SieveOfEratosthenes() {

        boolean[] IsPrime = new boolean[MAX_SIZE];

        for (long i = 0; i < MAX_SIZE; i++)
            IsPrime[i] = true;

        for (int p = 2; p * p < MAX_SIZE; p++) {

            if (IsPrime[p] == true) {
                for (int i = p * p; i < MAX_SIZE; i += p)
                    IsPrime[i] = false;
            }
        }

        // Store all prime numbers
        for (int p = 2; p < MAX_SIZE; p++)
            if (IsPrime[p] == true)
                primes.add(p);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        nthPrime ob = new nthPrime();
        long n = sc.nextInt();
        SieveOfEratosthenes();
        SieveOfEratosthenes();
        System.out.println(primes.get(n - 1));

    }

}
