#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rearrange(int arr[],int n)
{
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n - i - 1;j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int r[n],h=0,f=n-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            r[h]=arr[i];
            h++;
        }
        else
        {
            r[f]=arr[i];
            f--;
        }
    }
    printf("\nThe sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", r[i]);
    }
}
int main(void)
{
    clock_t t;
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    int arr[n];
    t = clock();
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    rearrange(arr, n);
    t = clock() - t;
    printf("\nThe time taken to sort the array is : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}