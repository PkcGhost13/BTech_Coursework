#include <iostream>
using namespace std;

int main(void)
{
    int n,sum=0;
    int x=0,y=1;
    cout<<"Enter the length of series :"<<endl;
    cin>>n;
    cout<<"The Fibonnaci series for the given length is :"<<endl;
    cout<<sum<<endl;
    sum++;
    for(int i=1;i<n;i++)
    {
        cout<<sum<<endl;
        sum=x+y;
        x=y;
        y=sum;
    }
    return 0;

}