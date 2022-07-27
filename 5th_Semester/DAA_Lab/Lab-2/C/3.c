#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int n = 100000;
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % n;
    }
    clock_t start, end;
    double time_taken;
    start = clock();
    insertionSort(arr, n);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken by insertion sort : %f\n", time_taken);
    return 0;
}