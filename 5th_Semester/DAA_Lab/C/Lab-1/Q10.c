#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max(int a,int b)
{
    return div(((a + b) + abs(b - a)), 2).quot;
}
int main (void)
{
    printf("Enter the two numbers to check (a || b) : ");
    int a, b;
    scanf("%d %d", &a, &b);
    clock_t t = clock();
    printf("\nThe maximum of the two numbers is : %d", max(a, b));
    t = clock() - t;
    printf("\nTime taken : %f seconds\n", ((double)t) / CLOCKS_PER_SEC);
}