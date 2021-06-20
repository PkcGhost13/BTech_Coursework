#include <iostream>
using namespace std;

bool prime(int n,int m)
{
    if(n%m==0)
    {
        cout<<"Executed"<<endl;
        return false;
    }
    else if(m==(n/2))
    {
        return true;
    }
    else 
    {
        m++;
        prime(n,m);
    }
}
int main(void)
{
    int n=0;
    cout<<"Enter the input element :"<<endl;
    cin>>n;
    if(prime(n,2))
    {
        cout<<"The input number is prime "<<endl;
    }
    else 
    {
        cout<<"The input number is not prime "<<endl;
    }
}