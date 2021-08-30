import java.util.*;
import java.util.regex.*;
import java.math.*;

public class Main {

    public static void main(String args[]) {
        MyBigInteger myBigInt = new MyBigInteger("1234", "20");

        BigInteger addBig = myBigInt.add();
        BigInteger multBig = myBigInt.multiply();

        System.out.println(addBig);
        System.out.println(multBig);
    }
}
