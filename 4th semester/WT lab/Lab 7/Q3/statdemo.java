public class statdemo
{
    static int count;
    static String name="Pawan";
    static
    {
        System.out.println("Static block was invoked.");
        count=0;
    }
    statdemo()
    {
        count++;
    }
    static void display()
    {
        name="Kumar";
        System.out.println("The name is : "+name);
        System.out.println("The number of objects created are is : "+count);
    }
    public static void main(String args[])
    {
        statdemo obj1 = new statdemo();
        statdemo obj2 = new statdemo();
        statdemo.display();
    }
}