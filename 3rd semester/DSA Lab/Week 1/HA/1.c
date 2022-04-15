/*
Given an unsorted dynamic array arr and two numbers x and y,
find the minimum distance between x and y in arr.
The array might also contain duplicates.
You may assume that both x and y are different and present in arr.
Input: arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6
Output: Minimum distance between 3 and 6 is 4.
*/

#include <limits.h> // for INT_MAX
#include <stdio.h>
#include <stdlib.h> // for abs()

int minDist(int arr[], int n, int x, int y)
{
    int i, j;
    int min_dist = INT_MAX;
    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            if ((x == arr[i] && y == arr[j] || x == arr[j] && y == arr[i]) && min_dist > abs(i - j))
            {
                min_dist = abs(i - j);
            }
        }
    }
    if (min_dist > n)
    {
        return -1;
    }
    return min_dist;
}

/* Driver program to test above function */
int main()
{
    int n, *arr;
    printf("Enter the size of the array : ");
    scanf("\n%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter the unsorted array elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the two elements between which distance has to be calculated :\n");
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Minimum distance between %d and %d is %d\n", x,
           y, minDist(arr, n, x, y));
    return 0;
}