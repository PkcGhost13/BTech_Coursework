import java.util.*;
public class Q1
{
    public void characterFind(char ch, String s)
    {
        System.out.println("Character was found in " + s + " at position : " + s.indexOf(ch));
    }
    // program to check if the string is palindrome or not

    public void checkPalindrome(String s) 
    {
        /*
        int len=s.length();
        for (int i = 0; i < len/2; i++) 
        {
            if (string[i]  string[len - 1 - i]) 
            {
                return 'It is not a palindrome';
            }
        }
        return 'It is a palindrome';
        */
    }
    public static void main(String[] args) 
    {
        String s1, s2;
        char ch;
        Scanner sc = new Scanner(System.in);
        Q1 obj = new Q1();
        System.out.println("Enter the string 1 : ");
        s1 = sc.nextLine();
        System.out.println("Enter the string 2 : ");
        s2 = sc.nextLine();
        System.out.println("Enter the character : ");
        ch = sc.next().charAt(0);
        sc.close();
        System.out.println("Length of the strings :\ns1 : " + s1.length() + "\ns2 : " + s2.length());
        System.out.println("String 1 is equal to String 2 : " + s1.equals(s2));
        obj.characterFind(ch, s1);
        obj.characterFind(ch, s2);

    }
}