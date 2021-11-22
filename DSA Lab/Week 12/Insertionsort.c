#include <stdio.h>

/*
Time Complexity	 
Best	O(n)
Worst	O(n^2)
Average	O(n^2)
*/

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
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
    insertionSort(arr, n);
    printf("Sorted Array in Ascending Order : \n");
    printArray(arr, n);
}