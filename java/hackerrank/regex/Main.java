import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.Scanner;

class Main {

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            String IP = in.next();
            System.out.println(IP.matches(new MyRegex().pattern));
        }

    }
}

class MyRegex {
    
    public static final String pattern =
        "^([01]?[0-9][0-9]?|2[0-4][0-9]|25[0-5])\\." +
        "([01]?[0-9][0-9]?|2[0-4][0-9]|25[0-5])\\." +
        "([01]?[0-9][0-9]?|2[0-4][0-9]|25[0-5])\\." +
        "([01]?[0-9][0-9]?|2[0-4][0-9]|25[0-5])$";

}
