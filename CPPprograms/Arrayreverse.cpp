#include <iostream>
using namespace std;
int arr[5];
int arrayReverser(int n)
{
    int k=n-1;
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
        k--;
    }
}
int main(void)
{
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"The modified array is: "<<endl;
    arrayReverser(5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}