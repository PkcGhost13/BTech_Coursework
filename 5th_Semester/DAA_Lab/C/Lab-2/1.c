#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int primeGeneral(long n)
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
int recursivePrime(int n, int i)
{
    if (n <= 2)
        return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
    return recursivePrime(n, i + 1);
}
int power(int a, unsigned int n, int p)
{
    int res = 1;
    a = a % p;
    while (n > 0)
    {
        if (n & 1)
            res = (res * a) % p;
        n = n >> 1;
        a = (a * a) % p;
    }
    return res;
}
int gcd(int a, int b)
{
    if (a < b)
        return gcd(b, a);
    else if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}
int primeFermat(unsigned int n, int k)
{
    if (n <= 1 || n == 4)
        return 0;
    if (n <= 3)
        return 1;

    while (k > 0)
    {
        int a = 2 + rand() % (n - 4);
        if (gcd(n, a) != 1)
            return 0;
        if (power(a, n - 1, n) != 1)
            return 0;

        k--;
    }
    return 1;
}
int primeWilson(long n)
{
    long m = n - 1;
    long fact = 1;
    for (long i = 1; i <= m; i++)
    {
        fact *= i;
    }
    int x = fact + 1;
    if (x % n == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
long long c[10000];
void coef(int n)
{
    c[0] = 1;
    for (int i = 0; i < n; c[0] = -c[0], i++)
    {
        c[1 + i] = 1;
        for (int j = i; j > 0; j--)
            c[j] = c[j - 1] - c[j];
    }
}
int AKSPrime(int n)
{
    coef(n);
    c[0]++, c[n]--;
    int i = n;
    while (i-- && c[i] % n == 0)
        ;
    return i < 0;
}
int main()
{
    clock_t start, end;
    double time_taken;
    int ans;
    long n = 7949;
    srand(time(0));
    for (int i = 1; i <= 10; i++)
    {
        n = rand() % 10000;
        printf("%ld\n", n);
        start = clock();
        ans = primeGeneral(n);
        end = clock();
        time_taken = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Ans : %d General algorithm time : %f\n", ans, time_taken);

        start = clock();
        ans = recursivePrime(n, 2);
        end = clock();
        time_taken = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Ans : %d Recursive algorithm time : %f\n", ans, time_taken);

        start = clock();
        ans = AKSPrime(n);
        end = clock();
        time_taken = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Ans : %d AKS algorithm time : %f\n", ans, time_taken);
    }
}
