#include <iostream>
using namespace std;

int main(void)
{
    int n=0;
    int f=0;
    cout<<"Enter the input element :"<<endl;
    cin>>n;
    for (int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"The input number is not prime "<<endl;
    }
    else
    {
        cout<<"The input number is prime"<<endl;
    }
}