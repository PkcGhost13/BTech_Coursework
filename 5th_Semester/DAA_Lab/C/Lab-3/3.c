#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isqrt(int n)
{
    float sqrt = n / 2.0, temp = 0.0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (((n / temp) + temp) / 2);
    }
    return (int)sqrt;
}
int main(void)
{
    clock_t t;
    printf("Enter the number (n) : ");
    int n;
    scanf("%d", &n);
    t = clock();
    printf("\nThe square root of %d is : %d", n, isqrt(n));
    t = clock() - t;
    printf("\nTime taken is : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
    return 0;
}