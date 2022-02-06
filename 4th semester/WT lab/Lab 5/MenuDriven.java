import java.util.*;
public class MenuDriven 
{ 
    int additon(int a,int b)
    {
        return a+b;
    }
    int subtract(int a,int b)
    {
        return a-b;
    }
    int multiply(int a,int b)
    {
      return a*b;
    }
    int divide(int a,int b)
    {
        return a/b;
    }
    public static  void main(String [] args)
    {
        int choice;
        Scanner s=new Scanner(System.in);
        MenuDriven m= new MenuDriven();
        int result;
        char ch;
        do
        {
            System.out.println("Enter the two numbers : ");
            int a=s.nextInt();
            int b=s.nextInt();
            System.out.println("Select your Choice : ");
            System.out.println("1.Add");
            System.out.println("2.Subtract");
            System.out.println("3.Multiply");
            System.out.println("4.Divide");
            System.out.println("5.Exit");
            choice=s.nextInt();
            switch(choice)
            {
                case 1:
                result=m.additon(a, b);
                System.out.println("Result is "+result);
                break;
                case 2:
                result=m.subtract(a, b);
                System.out.println("Result is "+result);
                break;
                case 3:
                result=m.multiply(a, b);
                System.out.println("Result is "+result);
                break;
                case 4:
                result=m.divide(a, b);
                System.out.println("Result is "+result);
                break;
                case 5:
                System.out.println("Exiting the program");
                break;
                default:
                System.out.println("Not a valid option");
            }
            System.out.println("Do you want to continue : y/n");
            ch=s.next().charAt(0);
        }
        while(ch!='n'&&ch!='N');
        s.close();
    }
}
