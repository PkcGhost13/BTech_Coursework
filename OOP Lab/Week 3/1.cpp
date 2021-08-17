#include <iostream>
#include <cmath>
using namespace std;

int numberOfDigits(int n)
{
    int c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    return c;
}

bool isArmstrong(int n)
{
    int n_copy=n;
    int arm_n=0;
    int c=numberOfDigits(n);
    while(n_copy>0)
    {
        int a=n_copy%10,b=1;
        for(int i=0;i<c;i++)
        {
            b*=a;
        }
        cout<<"b="<<b<<endl;
        arm_n+=b;
        n_copy/=10;
    }
    cout<<"arm ="<<arm_n<<endl;
    if(n==arm_n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main (void)
{
    cout<<"Enter the range in which armstrong numbers needs to be found :"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"The armstrong numbers in the given range are :"<<endl;
    for(int i=a;i<b;i++)
    {
        if(isArmstrong(i))
        {
            cout<<i<<"\t";
        }
    }
    return 0;
}
