import java.util.*;
class area
{
    void findarea(int a, int b)
    {
       System.out.println( "Area of rectangle is : " + a*b);
    }
  
    void findarea(int a)
    {
        System.out.println( "Area of circle is : " + a * 3.14 * a);
    }
  
    void findarea(int a, int b, int c)
    {
        double s = (a + b + c)/2.0;
        double triarea = Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.println( "Area of triangle is : "+ triarea);
    }
    public static void main(String args[])
    {
        area d = new area();
        Scanner sc=new Scanner(System.in);
        System.out.println("Rectangle :");
        System.out.println("Enter the length and breadth : ");
        int a =sc.nextInt();
        int b=sc.nextInt();
        d.findarea(a,b);
        System.out.println("Triangle :");
        System.out.println("Enter the length of three sides : ");
        int x = sc.nextInt();
        int y = sc.nextInt();  
        int z = sc.nextInt();
        d.findarea(x,y,z);
        System.out.println("Circle :");
        System.out.println("Enter the radius : ");
        int r =sc.nextInt();
        d.findarea(r);
    }
}