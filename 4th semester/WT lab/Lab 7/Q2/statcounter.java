public class statcounter 
{
    int var_ns = 0;
    static int var_s = 1;
    statcounter () 
    {
        var_ns++;
        var_s++;
        System.out.println("Value of Non-static variable : " + var_ns);
        System.out.println("Value of static variable : " + var_s);
    }
    public static void main(String[] args) 
    {
        statcounter  ob1 = new statcounter ();
        statcounter  ob2 = new statcounter ();
        statcounter  ob3 = new statcounter ();
    }
}