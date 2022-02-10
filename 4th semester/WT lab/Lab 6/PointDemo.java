import java.util.*;
public class PointDemo
{
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        Point obj = new Point();
        System.out.println("Enter the position 1 : ");
        System.out.println("Enter the value x : ");
        int x1 = sc.nextInt();
        System.out.println("Enter the value y : ");
        int y1 = sc.nextInt();
        System.out.println("Enter the position 2 : ");
        System.out.println("Enter the value x : ");
        int x2 = sc.nextInt();
        System.out.println("Enter the value y : ");
        int y2 = sc.nextInt();
        Point obj1 = new Point (x1,y2);
        Point obj2 = new Point (x2,y2);
        obj1.show();
        obj2.show();
        obj.findDistance();
        obj1.findDistance(x2,y2);
        obj1.findDistance(obj2);
    }
}