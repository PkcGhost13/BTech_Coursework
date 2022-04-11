interface PersonalLoan
{
    float find_Simple_Interest(float principal,int year);
}
class Bank1 implements PersonalLoan
{
    static float interest_rate=0.10f;
    public float find_Simple_Interest(float principal,int year)
    {
        return principal*year*interest_rate;
    }
}
class Bank2 implements PersonalLoan
{
    static float interest_rate=0.15f;
    public float find_Simple_Interest(float principal,int year)
    {
        return principal*year*interest_rate;
    }
}
public class BankDemo
{
    public static void main(String[] args) 
    {
        PersonalLoan obj;
        obj=new Bank1();
        System.out.println("The Simple Interest with Bank 1 is :"+obj.find_Simple_Interest(1000.0f,10));
        obj=new Bank2();
        System.out.println("The Simple Interest with Bank 2 is :"+obj.find_Simple_Interest(1000.0f,10));
    }
}