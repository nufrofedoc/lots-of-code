import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numOfArrays = scan.nextInt();

        ArrayList<ArrayList<Integer>> listOfArrays = new ArrayList<>(numOfArrays);

        for (int i = 0; i < numOfArrays; ++i) {
            int lengthOfArray = scan.nextInt();
            ArrayList<Integer> innerList = new ArrayList<>(lengthOfArray);
            
            for (int j = 0; j < lengthOfArray; ++j) {
                int num = scan.nextInt();

                innerList.add(num);
            }
            
            listOfArrays.add(innerList);
        }

        int numOfQueries = scan.nextInt();
        
        for (int i = 0; i < numOfQueries; ++i) {
            int x = scan.nextInt();
            int y = scan.nextInt();
 
            try {
                System.out.println(listOfArrays.get(x-1).get(y-1));
            } catch (Exception e) {
                System.out.println("ERROR!");
            }
        }
    }
}
