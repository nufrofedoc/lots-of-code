import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        List<List<Integer>> arr = new ArrayList<>();

        for (int i = 0; i < 6; i++) {
            String[] arrRowTempItems = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

            List<Integer> arrRowItems = new ArrayList<>();

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowTempItems[j]);
                arrRowItems.add(arrItem);
            }

            arr.add(arrRowItems);
        }
        
        int sum = findSumOfHourGlass(arr);
        
        System.out.println(sum);

        bufferedReader.close();
    }
    
    public static int findSumOfHourGlass(List<List<Integer>> arr) {
        
        int length = arr.get(0).size();
        int sumHour = arr.get(0).get(0) +
                      arr.get(0).get(1) +
                      arr.get(0).get(2) +
                      arr.get(1).get(1) +
                      arr.get(2).get(0) +
                      arr.get(2).get(1) +
                      arr.get(2).get(2);
        int sum = sumHour;
        
        for (int i = 0; i < length; ++i) {
            for (int j = 0; j < length; ++j) {                
                if (i <= 3 && j <= 3) {
                    sum = 0;
                    
                    sum += arr.get(i).get(j);
                    sum += arr.get(i).get(j+1);
                    sum += arr.get(i).get(j+2);
                    
                    sum += arr.get(i+1).get(j+1);
                    
                    sum += arr.get(i+2).get(j);
                    sum += arr.get(i+2).get(j+1);
                    sum += arr.get(i+2).get(j+2);
                    
                    if (sumHour <= sum) {
                        sumHour = sum;
                    }        
                }
            }
        }
    
        return sumHour;
    }
}
