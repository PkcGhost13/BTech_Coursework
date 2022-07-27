#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int prime(long n)
{
    long i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int MiddleSchoolersGCD(int n, int m)
{
    int product = 1;
    int i = 1;
    while (i <= n && i <= m )
    {
        if (n % i == 0 && m % i == 0 && prime(i))
        {
            product*= i;
        }
        i++;
    }
    return product;
}

int EuclideanGCD(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int ConsecutiveIntGCD(int a, int b)
{
    int t = a > b ? a : b;
    while (t > 0)
    {
        if (a%t == 0 && b%t == 0)
            return t;
        t = t - 1;
    }
    return 1;
}
int main()
{
    int n = 291913299;
    int m = 291913288;
    clock_t t1, t2, t3;
    t1 = clock();
    printf("GCD : %d\n", EuclideanGCD(n, m));
    t1 = clock()-t1;
    printf("Euclidean GCD time : %f\n", (double)t1/CLOCKS_PER_SEC);
    t2 = clock();
    printf("GCD : %d\n", ConsecutiveIntGCD(n, m));
    t2 = clock()-t2;
    printf("Consecutive integer GCD time : %f\n", (double)t2/CLOCKS_PER_SEC);
    t3 = clock();
    printf("GCD : %d\n", MiddleSchoolersGCD(n, m));
    t3 = clock()-t3;
    printf("Middle Schoolers GCD time : %f\n", (double)t3/CLOCKS_PER_SEC);
    return 0;
}