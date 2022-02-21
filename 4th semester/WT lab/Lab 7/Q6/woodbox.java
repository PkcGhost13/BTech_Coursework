public class woodbox extends box
{
    int t;
    woodbox(int length,int width,int height,int thick)
    {
        super(length,width,height);
        t=thick;
    }
    void show()
    {
        System.out.println("Length : "+l);
        System.out.println("Breadth : "+w);
        System.out.println("Height : "+h);
        System.out.println("Thickness : "+t);
    }
    public static void main(String args[])
    {
        woodbox obj=new woodbox(10,20,30,50);
        obj.show();
    }
}