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
        
        arm_n=arm_n+pow((n_copy%10),3);
        cout<<n_copy%10<<endl;
        cout<<pow((n_copy%10),3)<<endl;
        cout<<arm_n<<endl;
        n_copy=n_copy/10;
        cout<<n_copy<<endl;
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