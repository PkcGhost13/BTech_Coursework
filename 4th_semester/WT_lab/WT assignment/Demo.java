class BinToDec
{
    int binary;
    BinToDec(int n)
    {
        binary=n;
    }
    int findDecimal()
    {
        int n=binary;
        int deci =0;
        int base=1;
        while(n>0)
        {
            int last =n%10;
            n=n/10;
            deci+=(last*base);
            base=base*2;
        }
        return deci;
    }
    int findSumdigits(int n)
    {
        int sum=0;
        while(n>0)
        {
            int temp=n%10;
            sum+=temp;
            n=n/10;
        }
        return sum;
    }
}
public class Demo
{
    public static void main(String args[])
    {
        BinToDec obj= new BinToDec(1011);
        int dec = obj.findDecimal();
        System.out.println("The decimal number is : "+dec);
        int sum = obj.findSumdigits(dec);
        System.out.println("The sum is : "+sum);
    }
}