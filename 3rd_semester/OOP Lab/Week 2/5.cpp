/*5. Wap to check no is armstrong or not of 3 digits no in C++.*/

#include <iostream>
using namespace std;
int digits(int n)
{
    int d=0;
    while(n>0)
    {
        d++;
        n/=10;
    }
    return d;
}
int main(void)
{
    int n,n_copy;
    cout<<"Enter the number to be checked : "<<endl;
    cin>>n;
    n_copy=n;
    int n_arm=0;
    int d=digits(n);
    while(n_copy>0)
    {
        int m=n_copy%10;
        int c=1;
        for(int i=0;i<d;i++)
        {
            c*=m;
        }
        n_arm+=c;
        n_copy/=10;
    }
    if(n_arm==n)
    {
        cout<<"It is an armstrong number "<<endl;
    }
    else
    {
        cout<<"It is not an armstrong number "<<endl;
    }
    return 0;
}