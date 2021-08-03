#include <iostream>
using namespace std;

int main(void)
{
    int n=0,k=0;
    cout<<"Enter the decimal number to be converted :"<<endl;
    cin>>n;
    int bin_n[100];
    while(n>0)
    {
        bin_n[k]=n%2;
        n=n/2;
        k++;
    }
    cout<<"The given number in binary is : ";
    for(int i=k-1;i>=0;i--)
    {
        cout<<bin_n[i];
    }
    cout<<endl;
}