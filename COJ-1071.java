import java.math.BigInteger;
import java.util.Scanner;
/**
 *
 * @author JorgePC
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       	Scanner sc = new Scanner(System.in);
		BigInteger two = new BigInteger("2");
		BigInteger one = new BigInteger("1");
		BigInteger zero = new BigInteger("0");
		BigInteger big;
		String num;
		
		while( sc.hasNext() ){
			big = sc.nextBigInteger();
			if(big.compareTo(zero) == 0)
					System.out.println("0");
			else if(big.compareTo(one) == 0)
					System.out.println("1");
			else if(big.compareTo(two) == 0)
					System.out.println("2");
			else{
				big = big.add(big);
				big = big.subtract(two);
				System.out.println(big.toString());
			}
		}
    }
    
}
