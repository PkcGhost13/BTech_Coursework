#include <iostream>
using namespace std;

int main(void)
{
    int n=0;
    int n_copy=0;
    int reverse_n=0;
    cout<<"Enter the input element :"<<endl;
    cin>>n;
    n_copy=n;

    while(n_copy>0)
    {
        reverse_n=(reverse_n*10)+n_copy%10;
        n_copy/=10;
    }

    if(n==reverse_n)
    {
        cout<<"The input is a palindrome number"<<endl;
    }
    else 
    {
        cout<<"The input is not a palindrome number"<<endl;
    }
    return 0; 
}
