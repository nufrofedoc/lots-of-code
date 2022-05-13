import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Main {
    
    public static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scan.nextInt();
        ArrayList<Integer> list = new ArrayList<>();
        
        for (int i = 0; i < N; ++i) {
            int temp = scan.nextInt();
            list.add(temp);
        }
        
        int Q = scan.nextInt();
          
        for (int i = 0; i < Q; ++i) {
            String operation = scan.next();
            
            switch(operation) {
                case "Insert":
                    int index = scan.nextInt();
                    int element = scan.nextInt();
                    
                    list.add(index, element);
                    
                    break;
                case "Delete":
                    int removeIndex = scan.nextInt();
                    
                    list.remove(removeIndex);
                
                    break;
                default:
                    break;
            }
        }
        
        for (int i = 0; i < list.size(); ++i) {
            System.out.print(list.get(i));
            
            if (list.size()-1 > i)
                System.out.print(" ");
        }
    }
}
