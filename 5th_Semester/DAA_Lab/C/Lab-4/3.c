#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

void bubbleSort(int arr[],int n)
{
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n - i - 1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void findMaxMinElement(int arr[],int n)
{
    clock_t t = clock();
    int max = INT_MAX;
    int min = INT_MIN;
    for (int i = 0; i < n; i < n)
    {
        if(max<arr[i])
            max = arr[i];
        if(min > arr[i])
            max = arr[i];
    }
    printf("The maximum element is : %d\nThe\
    minimum element is : %d\n",max,min);
    t = clock() - t;
    printf("The time taken by the normal method is : %f\n", ((double)t) / CLOCKS_PER_SEC);
}
void divideAndConquer(int arr[],int n,int key)
{
    bubbleSort(arr, n);
    clock_t t = clock();
    int l = 0, u = n,mid=0;
    while(l<=u)
        mid = (l + u) / 2;
        if(arr[mid]<key)
            l = mid+1;
        else if (arr[mid]>key)
            u = mid + 1;
        if(arr[mid]==key)
        {
            
        }
    }
}