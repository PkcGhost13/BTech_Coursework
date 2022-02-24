import java.util.*;
class Account
{
    int acc_no;
    double balance;
    void disp()
    {
        System.out.println("");
    }
}
class Person extends Account
{
    String name;
    int aadhar_no;
    Person(){}
    void disp() 
    {
        System.out.println(name+" \t "+aadhar_no+" \t "+acc_no+" \t\t "+balance);
    }
}

public class Q2 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        Person a[]=new Person[5];
        for (int i = 0; i < 5; i++) 
        {
            a[i]= new Person();
            sc.nextLine();
            System.out.print("Enter Name : ");
            a[i].name = sc.nextLine();
            System.out.print("Enter Aadhar No. : ");
            a[i].aadhar_no = sc.nextInt();
            System.out.print("Enter Account No : ");
            a[i].acc_no = sc.nextInt();
            System.out.print("Enter Balance : ");
            a[i].balance = sc.nextInt();
        }
        System.out.println("Name \t Aadhar \t Account \t Balance ");
        for (int i = 0; i < 5; i++) 
        {

            a[i].disp();
        }
    }
}