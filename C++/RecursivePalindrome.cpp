#include <iostream>
using namespace std;

int palin(int n, int rev)
{
    if(n==0)
    {
        return rev;
    }
    else
    {
        rev=(rev*10)+(n%10);
        return palin(n/10,rev);
    }
}
int main(void)
{
    int n=0;
    cout<<"Enter the input element :"<<endl;
    cin>>n;
    int rev_n=palin(n,0);
    if(n==rev_n)
    {
        cout<<"The input is a palindrome number"<<endl;
    }
    else
    {
        cout<<"The input is not a palindrome number "<<endl;
    }
}