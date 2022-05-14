import java.util.Scanner;

public class q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int a = sc.nextInt();
        System.out.println("\n==========Menu========");
        System.out.println("\n1.Positive or Negative");
        System.out.println("\n2.Even or Odd");
        System.out.println("\n3.Prime");
        System.out.println("\n4.Factorial");
        System.out.println("\n5.Sum of digits");
        System.out.println("ENTER THE choice");
        int c = sc.nextInt();
        Mynumber q = new Mynumber(a);
        switch (c) {
            case 1:
                q.positivenegative();
                break;
            case 2:
                q.isevenodd();
                break;
            case 3:
                q.prime();
                break;
            case 4:
                q.factorial();
                break;
            case 5:
                q.sumofdigits();
                break;

            default:
                break;
        }
    }
}

interface IntOperations 
{
    public void positivenegative();

    public void isevenodd();

    public void prime();

    public void factorial();

    public void sumofdigits();
}

class Mynumber implements IntOperations {
    int a;

    Mynumber() {
        a = 0;
    }

    Mynumber(int c) {
        a = c;
    }

    public void positivenegative() {
        if (a > 0) {
            System.out.println("POSITIVE");
        } else {
            System.out.println("NEGATIVE");
        }
    }

    public void isevenodd() {
        if (a % 2 == 0) {
            System.out.println("EVEN");
        } else {
            System.out.println("ODD");
        }
    }

    public void prime() {
        int i = 0;
        int sum = 0;
        for (i = 2; i <= a/2; i++) {
            if (a % i == 0) {
                sum = sum + 1;
            }
        }
        if (sum > 0) {
            System.out.println("NOT PRIME");
        } else {
            System.out.println("PRIME");
        }
    }

    public void factorial() {
        int i = 1, p = 1;
        for (i = 1; i < a; i++) {
            p = p * i;
        }
        System.out.println(p);
    }

    public void sumofdigits() {
        int n = a, p, sum = 0;
        while (n >= 0) {
            p = n % 10;
            sum = sum + p;
            n = n / 10;
        }
        System.out.println(sum);
    }
}