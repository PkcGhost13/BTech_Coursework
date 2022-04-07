import java.util.*;
class q3
 {
    public static void main(String args[]) 
    {
        int n1=Integer.parseInt(args[0]);
        int n2=Integer.parseInt(args[1]);
        System.out.println("The sum from cli input is : "+(n1+n2));
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the two numbers : ");
        n1=sc.nextInt();
        n2=sc.nextInt();
        System.out.println("The sum from scanner class input is: "+(n1+n2));
    }
}