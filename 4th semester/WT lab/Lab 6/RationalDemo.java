import java.util.*;
public class RationalDemo 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number 1 : ");
        System.out.println("Enter the value of x : ");
        int x1 = sc.nextInt();
        System.out.println("Enter the value y : ");
        int y1 = sc.nextInt();
        System.out.println("Enter the number 2 : ");
        System.out.println("Enter the value x : ");
        int x2 = sc.nextInt();
        System.out.println("Enter the value y : ");
        int y2 = sc.nextInt();
        Rational r1=new Rational(x1,y1);
        Rational r2=new Rational(x2,y2);
        Rational result=new Rational(0,0);
        result= r1.add(r2);
        System.out.println("Additon is : "+result.p+"/"+result.q);

        result= r1.subtract(r2);
        System.out.println("Subtraction is : "+result.p+"/"+result.q);

        result= r1.multiply(r2);
        System.out.println("Multiplication is :"+result.p+"/"+result.q);

        result= r1.divide(r2);
        System.out.println("Divide is : "+result.p+"/"+result.q);
    }
}