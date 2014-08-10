import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Jorge
 */
class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t;
        t = in.nextInt();
        for (int i = 0; i < t; i++) {
            BigInteger cadNum = BigInteger.ONE;
            BigInteger res = BigInteger.ZERO;
            char[] binCad = new char[10001];
            cadNum = in.nextBigInteger();
            binCad = cadNum.toString().toCharArray();
            int pos;
            pos = 0;
            for (int j = (binCad.length) - 1; j >= 0; j--) {
                if (binCad[j] == '1') {
                    BigInteger pot = new BigInteger("2");
                    res = res.add(pot.pow(pos));
                }
                pos++;
            }
            BigInteger r = res.mod(new BigInteger("3"));
            if (r.equals(BigInteger.ZERO) && !res.equals(BigInteger.ZERO)) { 
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
