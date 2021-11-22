#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
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
void reverse(int arr[], int size)
{
    int l = 0, u = size - 1, temp;
    while (l < u)
    {
        temp = arr[l];
        arr[l] = arr[u];
        arr[u] = temp;
        l++;
        u--;
    }
}
int main()
{
    char ch;
    do
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
        printf("Please select any option Given Below for Sorting : \n");
        int choice;
        while (1)
        {

            printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Heap Sort \n5. Display Array.\n6. Exit the Program.\n");
            printf("\nEnter your Choice : ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                bubbleSort(arr, n);
                break;
            case 2:
                selectionSort(arr, n);
                break;
            case 3:
                insertionSort(arr, n);
                break;
            case 4:
                heapSort(arr, n);
                break;
            case 5:
                printf("Select the order of sorting : ");
                printf("1. Ascending \n2. Descending \n");
                int c;
                printf("Enter your choice : ");
                scanf("%d", &c);
                switch (c)
                {
                case 1:
                    printf("Sorted Array in Ascending Order : \n");
                    printArray(arr, n);
                    break;
                case 2:
                    printf("Sorted Array in Descending Order : \n");
                    reverse(arr, n);
                    printArray(arr, n);
                    break;
                default:
                    printf("Enter valid option !!");
                    break;
                }
                break;
            case 6:
                return 0;
            default:
                printf("\nPlease Select valid options ----\n");
            }
        }
        printf("\nDo you want to restart from beginning (y/n) :  ");
        ch = getch();
    } while (ch == 'y');
    return 0;
}