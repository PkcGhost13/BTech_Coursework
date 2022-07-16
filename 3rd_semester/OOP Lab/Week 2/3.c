/*3. Wap to allocate 5 no and find greatest no by using calloc.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=5,*arr;
    arr = (int*)calloc(n,sizeof(int));
    printf("Enter the numbers : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The entered numbers are : \n");
    int greatest=0;
    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
        if(greatest<arr[i])
        {
            greatest=arr[i];
        }
    }
    printf("\nThe greatest number is : %d\n",greatest);
    return 0;
}