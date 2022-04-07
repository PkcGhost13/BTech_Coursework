import java.util.*;
public class MyNumberdemo
{
    public static void main (String[] args)
    {
        int value;
        Scanner s=new Scanner(System.in);
        MyNumber m=new MyNumber();
        System.out.println("Enter the number :");
        value=s.nextInt();
        m.setValue(value);
        boolean even=m.isEven();
        boolean odd=m.isOdd();
        int fact=m.findFactorial();
        int findSumOfDigits=m.findSumOfDigits();
        boolean isPrime=m.isPrime();
        System.out.println("The entered number is even : "+even);
        System.out.println("The entered number is odd : "+odd);
        System.out.println("The factorial of entered number is : "+fact);
        System.out.println("The sum of digits of entered number is : "+findSumOfDigits);
        System.out.println("The entered number is prime : "+isPrime);
        s.close();
    }
}