final class Finalclass 
{
    public void display() 
    {
        System.out.println("This is a final class method.");
    }
}
class Finalclass 
{
    public final void display() 
    {
        System.out.println("This is a final method.");
    }
}
public class Q6 extends Finalclass 
{
    public void display() 
    {
            System.out.println("The final method is overridden.");
    }
    public static void main(String[] args) 
    {
            Q6 obj = new Q6();
            obj.display();
            final int AGE = 45;
            AGE =23;
            System.out.println("Age: " + AGE);
    }
} 


