import java.io.IOException;
import java.util.*;
interface IntOperations {

    public void isPositiveNegative();

    public void isEvenOdd();

    public void isPrime();

    public void factorial();

    public void sumOfDigits();

}

class MyNumber implements IntOperations {

    private int number;

    MyNumber() {

        this.number = 0;

    }

    MyNumber(int num) {

        this.number = num;

    }

    public void isPositiveNegative() {

        if (this.number < 0)
            System.out.println("\nNumber Is Negetive...");

        else
            System.out.println("\nNumber Is Positive...");

    }

    public void isEvenOdd() {

        if (this.number % 2 == 0)
            System.out.println("\nNumber Is Even...");

        else
            System.out.println("\nNumber Is Odd...");

    }

    public void isPrime() {

        int i = 2;

        while (i != this.number) {

            if (this.number % i == 0) {

                System.out.println(this.number+"\nNumber Is Not Prime...");
                break;

            }
            i++;

        }
        if (this.number == i)
            System.out.println("\nNumber Is Prime...");
    }

    public void factorial() {

        int prod = 1, i = 1;

        while (i <= this.number)
            prod *= i++;

        System.out.println("\nFactorial Of Number Is : " + prod);

    }

    public void sumOfDigits() {

        int sum = 0;
        int i = this.number;

        while (i != 0) {

            sum += (i % 10);
            i = i / 10;

        }

        System.out.println("\nSum Of The Digits Is : " + sum);

    }

    public static void main(String[] arg) {

        int num = Integer.parseInt(arg[0]);
        Scanner sc = new Scanner(System.in);
        MyNumber o = new MyNumber(num);
        System.out.println("\n==========Menu========");
        System.out.println("\n1.Positive or Negative");
        System.out.println("\n2.Even or Odd");
        System.out.println("\n3.Prime");
        System.out.println("\n4.Factorial");
        System.out.println("\n5.Sum of digits");
        System.out.println("\n6.Exit");
        System.out.println("\n======================");
        System.out.print("Enter your choice : ");
        int choice = sc.nextInt();

        switch (choice) {

            case 1:
                o.isPositiveNegative();
                break;

            case 2:
                o.isEvenOdd();
                break;

            case 3:
                o.isPrime();
                break;

            case 4:
                o.factorial();
                break;

            case 5:
                o.sumOfDigits();
                break;

            case 6:
                System.exit(0);
                break;

            default:
                System.out.println("Invalid choice.\nEnter again :");
                break;

        }

    }

}