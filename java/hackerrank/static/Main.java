import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Main {

    //Write your code here
    public static int B = 0;
    public static int H = 0;
    public static boolean flag = false;

    static {
        Scanner sc = new Scanner(System.in);
        B = sc.nextInt();
        H = sc.nextInt();
        
        if (B > 0 && H > 0)
            flag = true;
        else
            System.out.print("java.lang.Exception: Breadth and height must be positive");
    }

    public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class
