#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sorter(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() / 1000000;
    }
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
    printf("The sorted array is : ");
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
    sorter(arr, n);
    t=clock()-t;
    printf("\nThe largest number is : %d\nThe smallest number is : %d", arr[n - 1], arr[0]);
    printf("\nThe time taken to sort the array is : %f seconds", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}