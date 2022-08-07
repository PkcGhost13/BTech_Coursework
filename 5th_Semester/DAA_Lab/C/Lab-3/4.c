#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int maxSubArray(int nums[], int n)
{
    if (n == 1)
    {
        return nums[0];
    }
    else
    {
        int s = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += nums[j];
                if (s < sum)
                {
                    s = sum;
                }
                else
                    continue;
            }
        }
        return s;
    }
}
int main(void)
{
    clock_t t;
    printf("Enter the number (n) : ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    t = clock();
    printf("The maximum subarray sum is : %d\n", maxSubArray(arr, n));
    t = clock() - t;
    printf("Time taken : %f seconds", ((double)t) / CLOCKS_PER_SEC);
}