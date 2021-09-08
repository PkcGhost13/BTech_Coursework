#include <iostream>
using namespace std;

int main()
{
    int n=0;
    cout<<"Enter the number of entries to be provided"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the integer array elements"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int abs_sum=0;
    for(int i=0;i<n;i++)
    {
        abs_sum+=abs(arr[i]);
    }

    cout<<"The sum of the absolute value of the given entries is: \t"<< abs_sum <<endl;
}