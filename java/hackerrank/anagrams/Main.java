import java.util.Scanner;

public class Main {

    static char[] sort(char s[]) {  
        for (int i = 0; i < s.length; ++i) {
            for (int j = 0; j < s.length-1; ++j) {
                String temp = ""+s[j];
                String second = ""+s[j+1];
                
                if (temp.compareTo(second) >= second.compareTo(temp)) {
                    char tempChar = s[j];
                    s[j] = s[j+1];
                    s[j+1] = tempChar;
                }
            }
        }
        
        return s;
    }
    
    static boolean isAnagram(String a, String b) {
        boolean ans = true;
        char[] charArrFirst = a.toLowerCase().toCharArray();
        char[] charArrSecond = b.toLowerCase().toCharArray();
        
        if (a.length() != b.length()) {
            return ans = false;
        }

        charArrFirst = sort(charArrFirst);
        charArrSecond = sort(charArrSecond);
        
        for (int i = 0; i < charArrFirst.length; ++i) {
            if (charArrFirst[i] != charArrSecond[i])
                ans = false;
        }
        
        return ans;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
