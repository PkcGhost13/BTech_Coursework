#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int binarySearch(int arr[], int key,int n)
{
    clock_t t=clock();
    int low = 0, high = n-1, mid;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(arr[mid] == key)
        {
            t=clock()-t;
            printf("\nTime taken by binary search: %f\n",((double)t)/CLOCKS_PER_SEC);
            return mid;
        }
        else if(arr[mid] < key)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    t=clock()-t;
    printf("\nTime taken by binary search: %f\n",((double)t)/CLOCKS_PER_SEC);
    return -1;
}
 
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n,i,key;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    srand(time(NULL));
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        arr[i]=i;
        //scanf("%d",&arr[i]);
    }
    //bubbleSort(arr, n);
    printf("\nEnter the key: ");
    scanf("%d",&key);
    //clock_t t1 = clock();
    //t1 = clock() - t1;
    //printf("\nTime taken (Average Case) : %f seconds\n", ((float)t1)/CLOCKS_PER_SEC);
    //clock_t t2 = clock();

    //t2 = clock() - t2;
    //printf("\nTime taken (Best Case) : %f seconds\n", ((float)t2)/CLOCKS_PER_SEC);
    //clock_t t3 = clock();
    printf("\nThe index of the key is %d", binarySearch(arr, key,n));
    printf("\nThe index of the key is %d", binarySearch(arr, arr[n/2],n));
    printf("\nThe index of the key is %d", binarySearch(arr, n-1,n));
    //t3 = clock() - t3;
    return 0;
}
