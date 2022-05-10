import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Main {
    
    private static BigInteger a;
    private static BigInteger b;
    
    private static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        String a = scan.nextLine();
        String b = scan.nextLine();
            
        BigInteger bigA = new BigInteger(a);
        BigInteger bigB = new BigInteger(b);
        
        // Add
        System.out.println(bigA.add(bigB));
        
        // Multiply
        System.out.println(bigA.multiply(bigB));
    }
}
