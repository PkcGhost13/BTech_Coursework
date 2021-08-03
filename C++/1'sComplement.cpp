#include<iostream>
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

    int l=0;
    int oneComplement_n[100];
    for(int i=k-1;i>=0;i--)
    {
        oneComplement_n[l++]=bin_n[i];
    }

    for(int i=0;i<k;i++)
    {
        if(oneComplement_n[i]==1)
        {
            oneComplement_n[i]=0;
        }
        else
        {
            oneComplement_n[i]=1;
        }
    }
    cout<<"The one's complement is : ";
    for(int i=0;i<k;i++)
    {
        cout<<oneComplement_n[i];
    }
    cout<<endl;
}
