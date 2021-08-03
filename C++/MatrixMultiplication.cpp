#include <iostream>
using namespace std;

int main(void)
{
    int r1,r2,c1,c2,f=0;
    cout<<"Note : The no of columns of the 1st matrix should be equal to the number of rows of the second matrix for the matrix multiplication to be valid "<<endl;
        
    do
    {    
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
        if(c1!=r2||c1==0||c2==0||r1==0||r2==0)
        {
            cout<<"Error !!! The matrix multiplication is not posible for the given dimensions. Please try again !!"<<endl;
        }
    } 
    while (c1!=r2||c1==0||c2==0||r1==0||r2==0);   

    int a[r1][c1];
    int b[r2][c2];
    int c[r1][c2];
    cout<<"Enter the elements of the first matrix :"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of the second matrix :"<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }

    for(int i=0; i<r1; ++i)
    {
         for(int j=0; j<c2; ++j) 
         {
            c[i][j] = 0;
         }
    }

    for (int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    cout<<"The multiplication of the 2 matrices is:"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}