import java.util.Scanner;
public class Shapedemo 
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Circle c = new Circle();
        System.out.print("Enter Radius : ");
        c.r = sc.nextInt();
        System.out.print("Area of Circle is : ");
        c.circlearea();
        Rectangle d = new Rectangle();
        System.out.print("Enter Side a : ");
        d.a = sc.nextInt();
        System.out.print("Enter Side b : ");
        d.b = sc.nextInt();
        System.out.print("Area of Rectangle is : ");
        d.recarea();
        sc.close();
    }
}