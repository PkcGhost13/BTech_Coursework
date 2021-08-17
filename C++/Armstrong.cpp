#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n=0;
    cout<<"Enter the input element :"<<endl;
    cin>>n;
    int n_copy=n;
    int arm_n=0;
    while(n_copy>0)
    {
        int a=n_copy%10;
        int b=a*a*a;
        arm_n+=b;
        n_copy=n_copy/10;
    }
    if(n==arm_n)
    {
        cout<<"The given input is an armstrong number "<<endl;
    }
    else
    {
        cout<<"The given input is not an armstrong number "<<endl;
    }
    return 0;
}