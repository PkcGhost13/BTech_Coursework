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
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void tabularOutput()
{
    printf("Sl no.\t\tn\t\tTime Complexity\t\tTime for Sorted in Ascending Order\t\t Time for Sorted in Descending Order\n");
    int count = 1;
    for (int i = 5000; i <= 50000; i += 5000)
    {
        int *arr = malloc(i * sizeof(int));
        for (int j = 0; j < i; j++)
        {
            arr[j] = rand() % i;
        }
        clock_t t1 = clock();
        insertionSort(arr, i);
        t1 = clock() - t1;
        clock_t t2 = clock();
        insertionSort(arr, i);
        t2 = clock() - t2;
        bubbleSort(arr, i);
        clock_t t3 = clock();
        insertionSort(arr, i);
        t3 = clock() - t3;
        printf("%d\t\t%d\t\t%f\t\t%f\t\t\t\t\t  %f\n", count, i, (double)t1 / CLOCKS_PER_SEC, (double)t2 / CLOCKS_PER_SEC, (double)t3 / CLOCKS_PER_SEC);
        count++;
    }
}

int main()
{
    int n, *arr;
    int choice;
    do
    {
        printf("\t\tINSERTION SORT MENU\
        \n--------------------------------------------------\
        \n0. Quit\
        \n1. n Random numbers=>Array\
        \n2. Display the Array\
        \n3. Sort the Array in Ascending Order by using Insertion Sort Algorithm\
        \n4. Sort the Array in Descending Order by using any sorting algorithm\
        \n5. Time Complexity to sort ascending of random data\
        \n6. Time Complexity to sort ascending of data already sorted in ascending order\
        \n7. Time Complexity to sort ascending of data already sorted in descending order\
        \n8. Time Complexity to sort ascending of data for all Cases (Data Ascending, Data in Descending & Random Data) in Tabular form for values n=5000 to 50000, step=5000\
        \n---------------------------------------------------------------------------\
        \nEnter your choice: ");
        int c;
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            printf("\n\n\t\tTHANK YOU FOR USING THIS PROGRAM\n\n");
            exit(0);
            break;
        case 1:
            printf("\nEnter the number of elements in the array: ");
            scanf("%d", &n);
            arr = malloc(n * sizeof(int));
            for (int i = 0; i < n; i++)
            {
                arr[i] = rand() % n;
            }
            break;
        case 2:
            display(arr, n);
            break;
        case 3:
            insertionSort(arr, n);
            break;
        case 4:
            bubbleSort(arr, n);
            break;
        case 5:
            clock_t start = clock();
            insertionSort(arr, n);
            clock_t end = clock();
            printf("\nTime taken to sort the random array : %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
            break;
        case 6:
            insertionSort(arr, n);
            start = clock();
            insertionSort(arr, n);
            end = clock();
            printf("\nTime taken to sort the array in ascending order : %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
            break;
        case 7:
            bubbleSort(arr, n);
            start = clock();
            insertionSort(arr, n);
            end = clock();
            printf("\nTime taken to sort the ascending sorted array in ascending order : %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
            break;
        case 8:
            tabularOutput();
            break;
        }
        printf("Do you want to continue? (1/0): ");
        scanf("%d", &choice);
    } while (choice != 0);
    return 0;
}