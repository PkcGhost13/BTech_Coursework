import java.util.*;
public class equationdemo
{
    public static void main(String[] args) 
    {
        float a,b,c;
        Scanner s=new Scanner(System.in);
        equation e=new equation();
        System.out.println("Enter the coefficent of a :");
        a=s.nextFloat();
        System.out.println("Enter the coefficent of b :");
        b=s.nextFloat();
        System.out.println("Enter the coefficent of c :");
        c=s.nextFloat();
        e.setCoeff(a, b, c);
        e.findRoots();
        s.close();
    }
}