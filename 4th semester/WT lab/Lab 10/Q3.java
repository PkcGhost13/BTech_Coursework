interface inter
{
    int x=10;
    void disp();
}
class student implements inter
{
    public void disp()
    {
        System.out.println(x);
    }
}
public class Q3
{
    public static void main(String[] args) 
    {
        student obj=new student();
        obj.disp();
        System.out.println(x);
        x=13;
        obj.disp();
    }
}