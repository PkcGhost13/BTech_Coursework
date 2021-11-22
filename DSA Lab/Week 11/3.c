#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void segregateEO(int arr[], int size)
{

    int left = 0, right = size - 1;
    while (left < right)
    {
        while (arr[left] % 2 == 0 && left < right)
        {
            left++;
        }
        while (arr[right] % 2 == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    printf("Enter the number of elements in the array : ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array before segregation : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    segregateEO(arr, n);
    printf("Array after segregation : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}