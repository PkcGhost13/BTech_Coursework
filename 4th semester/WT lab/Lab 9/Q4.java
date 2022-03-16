class Data
{
    int height,breadth;
    void getdata(int h,int b)
    {
        height = h;
        breadth = b;
    }
    void putdata()
    {
        System.out.println("The height is  : "+height+"\nThe breadth is : "+breadth);
    }
}
class Rectangle extends Data
{
    void areaRectangle()
    {
        System.out.println("The area of rectangle is : "+(height*breadth));
    }
    void perimeterRectangle()
    {
        System.out.println("The perimeter of rectangle is : "+2*(height+breadth));
    }
}
class Triangle extends Data
{
    void areaTriangle()
    {
        System.out.println("The area of triangle is : "+(0.5*height*breadth));
    }
    void perimeterTriangle()
    {
        int hyp=(int)Math.sqrt(Math.pow(height,2)+Math.pow(breadth,2));
        System.out.println("The perimeter of triangle is : "+(height+breadth+hyp));
    }
}
public class Q4
{
    public static void main(String args[])
    {
        Rectangle obj1 = new Rectangle ();
        Triangle obj2 = new Triangle ();
        obj1.getdata(10,20);
        obj2.getdata(3,4);
        System.out.println("Rectangle");
        obj1.putdata();
        obj1.areaRectangle();
        obj1.perimeterRectangle();
        System.out.println("Triangle");
        obj2.putdata();
        obj2.areaTriangle();
        obj2.perimeterTriangle();
    }
}
