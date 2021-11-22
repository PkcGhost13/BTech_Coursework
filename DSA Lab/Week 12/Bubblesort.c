#include <stdio.h>

/*
Time Complexity	 :
Best	O(n)
Worst	O(n^2)
Average	O(n^2)
*/

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int f = 0;
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {

                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                f = 1;
            }
        }
        if (f == 0)
        {
            break;
        }
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
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemnts you want to insert in the array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting : \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Sorted Array in Ascending Order : \n");
    printArray(arr, n);
}