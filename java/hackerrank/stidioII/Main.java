import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        int counter = 0;
        String s = "";
        double d = i;
      
        while (scan.hasNextLine())
        {
            String line = scan.nextLine();
            if (counter == 1)
                d = Double.parseDouble(line);
            if (counter == 2)
                s = line;
            
            counter++;
        }

        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}
