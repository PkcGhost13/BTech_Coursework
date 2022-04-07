public class constoverload 
{
    int c;
    void constoverload ()
    {
        c = 0;
        System.out.println(c);
    }
    void constoverload (int a)
    {
        c = c + a;
        System.out.println(c);
    }
    void constoverload (int a, int b)
    {
        System.out.println(c + "\t" + a + "\t" + b);
    }
    public static void main(String[] args) 
    {
        constoverload obj = new constoverload();
        obj.constoverload();
        obj.constoverload(13);
        obj.constoverload(14,15);
    }
}