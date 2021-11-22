#include <stdio.h>
#include <stdlib.h>

void printrepeating(int arr[], int size)
{
    int *count = (int *)calloc(sizeof(int), (size - 2));
    int f = 0;
    printf("Repeating elements are : ");
    for (int i = 0; i < size; i++)
    {
        if (count[arr[i]] == 1)
        {
            printf("%d\t", arr[i]);
            f++;
        }
        else
        {
            count[arr[i]]++;
        }
        if (f == 2)
        {
            break;
        }
    }
}
int main(void)
{
    printf("Enter the value of n (no of elements - 2 ) : ");
    int n;
    scanf("%d", &n);
    printf("Enter the elements of the array : \n");
    int arr[n + 2];
    for (int i = 0; i < (n + 2); i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The given array is : \n");
    for (int i = 0; i < (n + 2); i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printrepeating(arr, n + 2);
}