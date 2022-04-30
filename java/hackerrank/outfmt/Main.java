import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                String s2 = String.valueOf(x);
                int gap=-15;
                //Complete this line
            
                if (x < 100) {  
                    s2 = "0" + s2;
                }
                if (x < 10) {  
                    s2 = "0" + s2;
                }
                
                System.out.printf("%"+gap+"s%s\n", s1, s2);
            }
            System.out.println("================================");

    }
}
