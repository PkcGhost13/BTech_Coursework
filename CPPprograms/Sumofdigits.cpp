#include <iostream>
using namespace std;

int main(void)
{
    int n=0;
    cout<<"Enter the input element :"<<endl;
    cin>>n;
    int n_copy=n;
    int sumOfDigits=0;
    while(n_copy>0)
    {
        sumOfDigits=sumOfDigits+n_copy%10;
        n_copy/=10;
    }
    cout<<"The sum of digits of the given input element is :   "<<sumOfDigits<<endl;
}