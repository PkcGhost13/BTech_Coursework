interface Two_D
{
    void find_area();
}
interface Three_D extends Two_D
{
    void find_volume();
}
class Cuboid implements Two_D
{
    int l,w,h;
    Cuboid(int length,int width,int height)
    {
        l=length;
        w=width;
        h=height;
    }
    public void find_area()
    {
        System.out.println("Surface area of cuboid = "+2*(l*w+w*h+h*l));
    }
}
class Cube implements Three_D
{
    int a;
    Cube(int side)
    {
        a=side;
    }
    public void find_area()
    {
        System.out.println("Surface area of cube = "+6*(a*a));
    }
    public void find_volume()
    {
        System.out.println("Volume of cube = "+(a*a*a));
    }
}
public class Q3
{
    public static void main(String[] args) 
    {
        Cuboid obj1=new Cuboid(8,6,5);
        Cube obj2=new Cube(5);
        obj1.find_area();
        obj2.find_area();
        obj2.find_volume();
    }
}