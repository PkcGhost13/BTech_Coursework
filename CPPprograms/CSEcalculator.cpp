#include<iostream>
#include<cmath>
#include<sstream>
#include<cstring>
#include <algorithm> 
using namespace std;

int n;
int bin_n[100];
int oct_n[100];
string hex_n;
int* arrayReverser(int arr[],int n)
{
    int k=n-1;
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
        k--;
    }
    return arr[];
}
int binTodeci(int size)
{
    int c=0;
    for(int i=size-1;i>=0;i--)
    {
        n=n+(bin_n[i]*pow(2,c));
        c++;
    }
}
int binToOctal(int k)
{
    int binn_copy;
    for(int i=0;i<k;i++)
    {
        binn_copy=(binn_copy*10)+bin_n[i];
    }
    while(binn_copy>0)
    {

    }
}
int deciToBinary()
{
    int n_copy=n;
    int k=0;
    while(n_copy>0)
    {
        bin_n[k]=n_copy%2;
        k++;
        n_copy/=2;
    }
    return k;
}
int deciToOctal()
{
    int n_copy=n;
    int k=0;
    while(n_copy>0)
    {
        oct_n[k]=n_copy%8;
        n_copy/=8;
        k++;
    }
    return k;
}
int deciToHexadecimal()
{
    int n_copy=n;
    int k=0;
    string temp;
    char tem;
    while(n_copy>0)
    {
        int m=n_copy%16;
        if(m<=9)
        {
            stringstream ss;
            ss<<m;
            ss>>temp;
            hex_n=hex_n+temp;
        }
        else
        {
            tem=65+(m-10);
            hex_n=hex_n+tem;
        }
        n_copy/=16;
    }
   
}
int main(void)
{
    cout<<"Enter the input in binary"<<endl;
    int t=0;
    int t1[100];
    cin>>t;
    int k=0;
    while(t>0)
    {
        t1[k]=t%10;
        t=t/10;
        k++; 
    }
    int l=0;
    for(int i=k-1;i>=0;i--)
    {
        bin_n[l]=t1[i];
        l++;
    }
    binTodeci(l);
    cout<<n<<endl;
    int h=deciToOctal();
    for(int i=h-1;i>=0;i--)
    {
        cout<<oct_n[i];
    }
    deciToHexadecimal();
    reverse(hex_n.begin(), hex_n.end()); 
    cout<<"\n"<<hex_n;
    int j=deciToBinary();
    cout<<endl;
    for(int i=j-1;i>=0;i--)
    {
        cout<<bin_n[i];
    }
}
