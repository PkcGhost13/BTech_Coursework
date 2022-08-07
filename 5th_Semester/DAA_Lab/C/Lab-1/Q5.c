#include <stdio.h>
//#include <stdlib.h> 
#include <time.h>

int nonZeroElements(int n,int arr[n][n])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=0)
            {
                count++;
            }
        }
    }
    return count;
}
int sumAboveDiagonal(int n,int arr[n][n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum;
}
int minorDiagonal(int n,int arr[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i > n-1-j)
                printf("%d  ",arr[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
}
int productOfDiagonals(int n,int arr[n][n])
{
    int prod=1;
    for(int i=0;i<n;i++)
    {
        prod*=arr[i][i];
    }
    return prod;
}
int main(void)
{
    clock_t t;
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    t = clock();
    printf("\nThe number of non-zero elements in the matrix is : %d", nonZeroElements(n, arr));
    printf("\nThe sum of elements above diagonal is : %d",sumAboveDiagonal(n,arr));
    printf("\nThe elements below the minor diagonal are : ");
    minorDiagonal(n,arr);
    printf("\nThe product of the diagonal elements is : %d",productOfDiagonals(n,arr));
    t = clock() - t;
    printf("\nThe time taken is : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}