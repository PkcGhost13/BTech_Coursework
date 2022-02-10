import java.lang.Math;
public class Point
{
    int x,y;
    Point()
    {
        x=10;
        y=20;
    }
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
    Point(Point o)
    {
        x=o.x;
        y=o.y;
    }
    void findDistance()
    {
        double dist = Math.sqrt(Math.pow(x,2)+Math.pow(x,2));
        System.out.println("The distance between points are using default  : "+dist);
    }
    void findDistance(int x1,int y1)
    {
        double dist = Math.sqrt(Math.pow((x-x1),2)+Math.pow((y-y1),2));
        System.out.println("The distance between points are using call by value: "+dist);
    }
    void findDistance(Point o)
    {
        double dist = Math.sqrt(Math.pow((x-o.x),2)+Math.pow((y-o.y),2));
        System.out.println("The distance between points are using object passing : "+dist);
    }
    void show()
    {
        System.out.println("The data members are : \nx = "+x+"\ny = "+y);
    }
}