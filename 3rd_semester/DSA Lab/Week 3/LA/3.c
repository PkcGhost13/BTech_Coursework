// C program to sort a binary array in one pass
#include<stdio.h>
 
/*Function to put all 0s on left and all 1s on right*/
void segregate0and1(int arr[], int size)
{
    /* Initialize left and right indexes */
    int left = 0, right = size-1;
 
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
            left++;
 
        while (arr[right] == 1 && left < right)
            right--;
 
        if (left < right)
        {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

int main()
{
    printf("Enter the size of array :");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i, arr_size = sizeof(arr)/sizeof(arr[0]);
 
    segregate0and1(arr, arr_size);
 
    printf("Array after segregation is : \n");
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    return 0;
}