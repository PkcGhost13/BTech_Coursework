abstract class Base 
{
    int i;
    void display()
    {
        System.out.println("Base class display : "+i);
    }
}

class Derived extends Base 
{
    void display()
    {
        System.out.println("Derived display() called : "+i);
    }
}
 
class Q2
{
    public static void main(String args[])
    {
        Base obj = new Derived();
        Base ref;
        ref=obj;
        ref.i=10;
        ref.display();
    }
}