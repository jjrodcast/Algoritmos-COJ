import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Jorge
 */
class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            BigInteger num,r;
            BigInteger modu = new BigInteger("495");
            num = in.nextBigInteger();
            r = num.mod(modu);
            if (r.equals(BigInteger.ZERO)) {
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
