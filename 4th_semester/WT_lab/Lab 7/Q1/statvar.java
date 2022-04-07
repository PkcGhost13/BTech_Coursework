public class statvar 
{
    int rollno;
    String name;
    static String college = "KIIT";
    statvar(int roll, String Fname)
    {
        rollno=roll;
        name=Fname;
    }

    void  display() 
    {
        System.out.println(rollno + "\t" + name + "\t" + college);
    }
}