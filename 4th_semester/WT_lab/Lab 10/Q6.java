interface Inter_1
{
    void disp();
}
class shape
{
    void display()
    {
        System.out.println("The display function of shape class ");
    }
}
public class Q6 extends shape implements Inter_1
{
    public void disp()
    {
        System.out.println("The display function of interface ");
    }
    public static void main(String[] args) 
    {
        Q6 obj=new Q6();
        obj.disp();
        obj.display();
    }
}
