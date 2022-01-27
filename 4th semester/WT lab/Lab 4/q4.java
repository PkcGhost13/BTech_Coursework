class q4 
{
    public static void main(String args[]) 
    {
        int esum=0,osum=0;
        for(int i=0;i<args.length;i++)
        {
            int n=Integer.parseInt(args[i]);
            if (n % 2 == 0)
                esum = esum + n;
            else
                osum = osum + n;
        }
        System.out.println("Sum of odd numbers = " + osum);
        System.out.println("Sum of even numbers = " + esum);
        System.out.println("Total = " + (osum + esum));
    }
}
