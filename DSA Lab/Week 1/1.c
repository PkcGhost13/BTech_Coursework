#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large,small;
    large=small=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    printf("The smallest element is : %d\n",small);
    printf("The largest element is : %d\n",large);
}