import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine().trim();
        scan.close();
            
        String[] tokens = s.split("[\\s+|!,?._'@]+");
        
        int size = (s.isEmpty() ? 0 : tokens.length);
        
        System.out.println(size);
                
        for (String str : tokens) {
            System.out.println(str);
        }
    }
}
