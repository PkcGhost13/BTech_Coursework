class X 
{
    int A() 
    {
        return 0;
    }

}
class Y extends X 
{
    public int A() 
    {
        return 8;
    }
}
class Z extends X 
{
    protected int A() 
    {
        return 9;
    }
}
public class Q4new 
{
    public static void main(String args[]) 
    {
        X b = new X();
        Y s = new Y();
        Z a = new Z();
        System.out.println("A using friendly-> " + b.A());
        System.out.println("A using public-> " + s.A());
        System.out.println("A using protected-> " + a.A());
        System.out.println("private cannot be accessed");
    }
}