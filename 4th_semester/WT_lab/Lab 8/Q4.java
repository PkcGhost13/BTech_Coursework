class Test 
{
    //the method below is checked with different access modifiers
    private void method()
    {
        System.out.println("Hello, Pawan");
    }
}
  
public class Q4 extends Test 
{
    void method()
    {
        System.out.println("Hello, Pawan 20051478");
    }
    public static void main(String args[])
    {
        Q4 b = new Q4();
        b.method();
    }
}
 