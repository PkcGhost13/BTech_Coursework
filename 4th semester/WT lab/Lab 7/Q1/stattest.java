public class stattest
{
    public static void main(String[] args)
    {
        statvar obj1 = new statvar(20051478,"Pawan");
        statvar obj2 = new statvar(20051479,"Aryan");
        System.out.println("Roll\t\tName\tCollege");
        obj1.display();
        obj2.display();
    }
}