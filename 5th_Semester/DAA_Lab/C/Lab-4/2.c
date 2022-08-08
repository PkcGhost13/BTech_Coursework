#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void merge (int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;  
    j = 0;  
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    srand(time(NULL));
    //printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100;
        //scanf("%d",&arr[i]);
    }
    clock_t t=clock();
    mergeSort(arr, 0, n-1);
    t=clock()-t;
    printf("Time taken by merge sort (normal): %f\n",((double)t)/CLOCKS_PER_SEC);
    t=clock();
    mergeSort(arr, 0, n-1);
    t=clock()-t;
    printf("Time taken by merge sort (ascending sorted): %f\n",((double)t)/CLOCKS_PER_SEC);
    bubbleSort(arr, n);
    t=clock();
    mergeSort(arr, 0, n-1);
    t=clock()-t;
    printf("Time taken by merge sort (descending sorted): %f\n",1+((double)t)/CLOCKS_PER_SEC);
}
