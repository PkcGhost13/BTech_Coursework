#include <stdio.h>

/*
Time Complexity	 
Best	O(n^2)
Worst	O(n^2)
Average	O(n^2)
*/

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        swap(&array[min], &array[i]);
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    printf("Enter the number of elements you want to insert : ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elemnts you want to insert in the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array before sorting : \n");
    printArray(arr, n);
    selectionSort(arr, n);
    printf("Sorted Array in Ascending Order : \n");
    printArray(arr, n);
}