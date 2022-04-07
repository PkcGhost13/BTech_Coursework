public class MyNumber
{
    int value;
    void setValue(int value)
    {
        this.value=value;
    }
    boolean isEven()
    {
        return value%2==0;
    }
    boolean isOdd()
    {
        return value%2!=0;
    }
    int findFactorial()
    {
        int fact=1;
        for(int i=1;i<=value;i++)
        {
            fact=fact*i;
        }
        return fact;
   }
   int findSumOfDigits()
   {
    int temp;
    temp=value;
    int sum=0;
    while (temp>0)
    {
        int t=temp%10;
        sum=sum+t;
        temp=temp/10;
    }
    return sum;
   }
   boolean isPrime()
   {
       for(int i=2;i*i<value;i++)
       {
           if(value%i==0)
           {
               return false;
           }
         } 
        return true;
   }
}
