#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int isPrimenormal(int n)
{
    int i;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
//boolean isPrimefermat(int n){}
int main()
{
    clock_t t;
    printf("Enter the number : ");
    int n;
    scanf("%d", &n);
    t=clock();
    printf("%d is prime using general algo : %s\n", n, isPrimenormal(n) ? "true" : "false");
    t=clock()-t;
    printf("Time taken : %f\n",((double)t)/CLOCKS_PER_SEC);
}