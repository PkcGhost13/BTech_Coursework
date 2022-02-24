class square 
{
    int l, w;
    square(int length, int width) 
    {
        l = length;
        w = width;
    }
}
class cube extends square
{
    int h;
    cube(int length, int width, int height) 
    {
        super(length, width);
        h = height;
    }
    void show() {
        System.out.println("Length : " + l);
        System.out.println("Breadth : " + w);
        System.out.println("Height : " + h);
    }
}
public class Q3 
{
    public static void main(String[] args) 
    {
        cube a = new cube(10,20,30);
        a.show();
    }
}