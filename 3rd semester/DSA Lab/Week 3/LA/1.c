/*
WAP to find second largest and second smallest element in an array.
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

    printf("\nThe second greatest and second largest element in the given array is  :\n");
    printf("%d  %d",arr[1],arr[n-2]);
    return 0;
}