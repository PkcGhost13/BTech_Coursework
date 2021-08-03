#include <iostream>
using namespace std;

int main(void)
{
    int a,b;
    cout<<"Enter the two numbers to be swapped :"<<endl;
    cout<<"A : ";
    cin>>a;
    cout<<"\nB : ";
    cin>>b;
    a*=b;
    b=a/b;
    a=a/b;
    cout<<"\nThe swapped numbers are : "<<endl;
    cout<<"A : "<<a<<endl;
    cout<<"B : "<<b<<endl;
}