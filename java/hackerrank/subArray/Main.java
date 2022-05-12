import java.io.*;
import java.util.*;

public class Main {
    
    private static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        int T = scan.nextInt();
        int[] arr = new int[T];
        int sum = 0;
        int count = 0;

        for (int i = 0; i < T; i++) {
            arr[i] = Integer.valueOf(scan.nextInt());
        }

        for (int i = 0; i < T; i++) {
            for (int j = i; j < T; j++) {
                sum = sum + arr[j];
                if (sum < 0)
                    count++;
            }
            sum = 0;
        }

        System.out.println(count);
        scan.close();
    }
}
