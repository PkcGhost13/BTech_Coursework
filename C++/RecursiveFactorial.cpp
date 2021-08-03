#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main(void)
{
    int n=0,fact_n=0;
    cout<<"Enter the input element :"<<endl;
    cin>>n;
    fact_n=fact(n);
    cout<<"The factorial of the given number is : \t"<<fact_n<<endl;
    return 0;
}