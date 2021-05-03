import java.io.*;
import java.util.*;

class Palindrome {
    LinkedList stack = new LinkedList();
    LinkedList queue = new LinkedList();

    public void pushCharacter(char ch) {
        stack.push(ch);
    }

    public void enqueueCharacter(char ch) {
        queue.addLast(ch);
    }

    public Object popCharacter() {
        return stack.pop();
    }

    public Object dequeueCharacter() {
        return queue.remove(0);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        // Convert input String to an array of characters:
        char[] s = input.toCharArray();

        // Create a Solution object:
        Palindrome p = new Palindrome();

        // Enqueue/Push all chars to their respective data structures:
        for (char c : s) {
            p.pushCharacter(c);
            p.enqueueCharacter(c);
        }

        // Pop/Dequeue the chars at the head of both data structures and compare them:
        boolean isPalindrome = true;
        for (int i = 0; i < s.length / 2; i++) {
            if (p.popCharacter() != p.dequeueCharacter()) {
                isPalindrome = false;
                break;
            }
        }
        
        System.out.println("The world, " + input + ", is "
                           + ((!isPalindrome) ? "not a palindrome." : "a palindrome."));
    }
}
