package General;
public class employee
{
    protected int empid=20051478;
    private String ename="Pawan";
    public double earnings(int basic)
    {
        double totalearn = basic + 0.8*basic + 0.15*basic;
        System.out.println("Empid : "+empid);
        return totalearn;
    }
}