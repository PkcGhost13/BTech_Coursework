#include <iostream>
using namespace std;

int main(void)
{
    int r1,r2,c1,c2;
    cout<<"Enter the dimensions of the 1st matrix :"<<endl;
    cout<<"Number of rows :  ";
    cin>>r1;
    cout<<"\nNumber of columns :  ";
    cin>>c1;

    cout<<"\nEnter The dimensions of the 2nd matrix :"<<endl;
    cout<<"Number of rows :  ";
    cin>>r2;
    cout<<"\nNumber of columns :  ";
    cin>>c2;

    cout<<endl;

    int a[r1][c1];
    cout<<"Enter the elements of the first matrix :"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }

    int b[r2][c2];
    cout<<"Enter the elements of the second matrix :"<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }

    

}