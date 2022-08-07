#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rearrange(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            j++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    printf("\nThe sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
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
        scanf("%d", &arr[i]);
    }
    rearrange(arr, n);
    t = clock() - t;
    printf("\nThe time taken to sort the array is : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}