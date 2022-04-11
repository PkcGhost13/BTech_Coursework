interface Area
{
    void findArea();
}
class Triangle implements Area
{
    int base,height;
    Triangle(int b,int h)
    {
        base=b;
        height=h;
    }
    public void findArea()
    {
        System.out.println("Area of triangle is : "+0.5*base*height);
    }
}
class Rectangle implements Area
{
    int length,breadth;
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    public void findArea()
    {
        System.out.println("Area of rectangle is : "+1.0*length*breadth);
    }
}
public class Demo
{
    public static void main(String[] args)
    {
        Area obj;
        obj=new Triangle(3,4);
        obj.findArea();
        obj=new Rectangle(5,10);
        obj.findArea();
    }
}