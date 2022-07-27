#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void duplicates(int arr[],int n)
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
    int maxElement = 0, maxcount = 0, count = 0, totalcount = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            count = 1;
            if (arr[i] == arr[j])
            {
                count++;
                totalcount++;
                if (count > maxcount)
                {
                    maxcount = count;
                    maxElement = arr[j];
                }
            }
        }
    }
    printf("\nThe sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe number of duplicate elements in the array is : %d", totalcount-1);
    printf("\nThe most repeating element is : %d\n", maxElement);
}
int main(void)
{
    clock_t t;
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    t = clock();
    duplicates(arr, n);
    t=clock()-t;
    printf("\nThe time taken is : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}