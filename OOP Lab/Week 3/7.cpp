/* Wap function will return max no by using array with function.*/

#include <iostream>
using namespace std;

int max_arr(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int main(void)
{
    cout<<"Enter the no of elements in the array : "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=max_arr(arr,n);
    cout<<"The largest number in the given array is : "<<max<<endl;
    return 0;
}