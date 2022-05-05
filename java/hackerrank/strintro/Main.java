import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        
        // 1
        int sum = A.length() + B.length();
        
        // 2
        String LowA = A.toLowerCase();
        String LowB = B.toLowerCase();
        boolean isGreater = false;
        final String alphabet = "abcdefghijklmnopqrstuvwxyz";
        
        for (int i = 0; i < alphabet.length(); ++i) {
            if (LowA.length() == i || LowB.length() == i) {
                break;
            }
                
            int indexA = alphabet.indexOf(LowA.charAt(i));
            int indexB = alphabet.indexOf(LowB.charAt(i));
            
            if (indexA > indexB) {
                isGreater = true;
                break;
            } else if (indexA == indexB) {
                continue;
            } else {
                break;
            }
        }
        
        // 3
        String CA = "";
        String CB = "";
        
        for (int i = 0; i < A.length(); ++i) {
            if (i == 0) {
                String capTemp = "" + A.charAt(i);
                CA += capTemp.toUpperCase();
            } else {
                CA += A.charAt(i);
            }
        }
        
        for (int i = 0; i < B.length(); ++i) {
            if (i == 0) {
                String capTemp = "" + B.charAt(i);
                CB += capTemp.toUpperCase();
            } else {
                CB += B.charAt(i);
            }
        }    
        
        
        System.out.println(sum);
        System.out.println(isGreater ? "Yes" : "No");
        System.out.println(CA + " " + CB);
        
    }
}
