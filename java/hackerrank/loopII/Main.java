import java.util.*;
import java.io.*;

class Main {
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            
            String ans = "";
            int sum = a;
            for (int j = 0; j < n; ++j) {
                int pow = (int) Math.pow(2, j);
                sum += pow * b;
                ans += sum + " ";
            }
            System.out.println(ans);
        }
        in.close();
    }
}
