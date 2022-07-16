/*1. Wap to create an Dynamic Array and display elements.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,*arr;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    printf("Enter the array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The dynamic array created is  : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
}