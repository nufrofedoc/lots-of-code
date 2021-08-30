import java.math.*;
import java.io.*;

public class MyBigInteger {
    
    public static BigInteger firstNum;
    public static BigInteger secondNum;
    
    public MyBigInteger(String a, String b) {
        firstNum = new BigInteger(a);
        secondNum = new BigInteger(b);
    }

    public BigInteger multiply() {
        return firstNum.multiply(secondNum);
    }

    public BigInteger add() {
        return firstNum.add(secondNum);
    }
}
