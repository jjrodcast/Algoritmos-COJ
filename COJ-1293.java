
import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if (n >= 0 && n <= 265) {
            BigInteger base = new BigInteger("2");
            System.out.println(base.pow(n));
        }
    }
}
