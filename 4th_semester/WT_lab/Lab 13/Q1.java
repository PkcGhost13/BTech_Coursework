import java.util.*;

public class Q1 {
    public void characterFind(char ch, String s) {
        System.out.println("Character was found in " + s + " at position : " + s.indexOf(ch));
    }

    public void checkPalindrome(String s) {
        String reverse = new StringBuffer(s).reverse().toString();
        if (s.equalsIgnoreCase(reverse)) {
            System.out.println(s + " is a palindrome");
        } 
        else {
            System.out.println(s + " is not a palindrome");
        }
    }

    public static void main(String[] args) {
        String s1, s2;
        char ch;
        Scanner sc = new Scanner(System.in);
        Q1 obj = new Q1();
        System.out.println("Enter the strings : ");
        s1 = sc.nextLine();
        s2 = sc.nextLine();
        System.out.println("Enter the character : ");
        ch = sc.next().charAt(0);
        sc.close();
        System.out.println("Length of the strings :\ns1 : " + s1.length() + "\ns2 : " + s2.length());
        System.out.println("String 1 is equal to String 2 : " + s1.equalsIgnoreCase(s2));
        obj.characterFind(ch, s1);
        obj.characterFind(ch, s2);
        obj.checkPalindrome(s1);
        obj.checkPalindrome(s2);
        System.out.println("Upper case and lower case conversion : ");
        System.out.println(s1.toUpperCase() + " " + s1.toLowerCase()+"\n"+s2.toUpperCase() + " " + s2.toLowerCase());
    }
}