import currencyconversion.*;

import java.util.*;
public class converter
{
    public static void main (String[] args)
    {
        Scanner s=new Scanner(System.in);
        int choice,ch;
        currency c=new currency();
        do
        {
            System.out.println("1.Dollar to rupee ");
            System.out.println("2.Rupee to dollar ");
            System.out.println("3.Euro to rupee ");
            System.out.println("4 Rupee to Euro ");
            System.out.println("5.Yen to rupee ");
            System.out.println("6.Rupee to Yen ");
            System.out.println("Enter your choice");

            choice=s.nextInt();
            switch(choice)
            {
                case 1:
                {
                    c.dollartorupee();
                    break;
                }
                case 2:
                {
                    c.rupeetodollar();
                    break;
                }
                case 3:
                {
                    c.eurotorupee();
                    break;
                }
                case 4:
                {
                    c.rupeetoeuro();
                    break;
                }
                case 5:
                {
                    c.yentorupee();
                    break;}
                case 6 :
                {
                    c.rupeetoyen();
                    break;
                }
            }
            System.out.println("Enter 0 to  quit and 1 to continue ");
            ch=s.nextInt();
        }while(ch==1);
    }
}