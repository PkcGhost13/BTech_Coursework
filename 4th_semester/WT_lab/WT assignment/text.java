class a 
{
    int x, y;
    a(int b, int c) 
    {
        x = b;
        y = c;
    }
    void findsum() 
    {
        double t = 0.0;
        for (int i = 1; i <= y; i++) 
        {
            t = t + ((double) 1 / (Math.pow(x, i)));
        }
        System.out.println("Sum is->" + t);
    }
}

public class text 
{
    public static void main(String[] args) 
    {
        a A = new a(2, 3);
        A.findsum();
    }
}