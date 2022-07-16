/*
1. Wap to create Base class Number.
And make two derived class Prime & Armstrong.
And display whether a number entered is prime or not
and armstrong or not by declaring appropriate function.
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class Number
{
    public:
        int n;
        Number()
        {
            cout<<"Enter the number to be checked : "<<endl;
            cin>>n;
        }
};
class Prime:public Number
{
    public:
        int checkPrime()
        {
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    return 0;
                }
            }
            return 1;
        }
};
class Armstrong:public Prime
{
    public:
        int digitCount()
        {
            int cpy=n;
            int count=0;
            while(cpy>0)
            {
                count++;
                cpy/=10;
            }
            return count;
        }
        int checkArmstrong()
        {
            int cpy=n;
            int d=digitCount();
            int sum=0;
            while(cpy>0)
            {
                sum=sum+pow((int)(cpy%10),d);
                cpy/=10;
            }
            if(sum==n)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
};

int main()
{
    Armstrong o1;
    int f1=o1.checkPrime();
    int f2=o1.checkArmstrong();
    if(f1==1)
    {
        cout<<"The entered number "<<o1.n<<" is a prime number "<<endl;
    }
    else
    {
        cout<<"The entered number "<<o1.n<<" is not a prime number "<<endl;
    }
    if(f2==1)
    {
        cout<<"The entered number "<<o1.n<<" is an armstrong number "<<endl;
    }
    else
    {
        cout<<"The entered number "<<o1.n<<" is not an armstrong number "<<endl;
    }
}
