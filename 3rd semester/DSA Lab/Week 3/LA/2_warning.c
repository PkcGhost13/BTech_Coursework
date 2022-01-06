/*
Wap to arrange the elements of an array such that all 
even numbers are followed by all odd numbers
*/

#include <stdio.h>

int main(void)
{
    printf("Enter the size of array :");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[n]%2==0)
        {
            int temp=arr[k];
            arr[k]=arr[n];
            arr[n]=temp;
            k++;
        }
    }
    printf("The arranged array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
}