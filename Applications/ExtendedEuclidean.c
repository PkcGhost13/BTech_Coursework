#include <stdio.h>
#include <stdlib.h>
void gcd(int a, int b)
{
    int q, r, s, t, r1 = a, r2 = b, s1 = 1, s2 = 0, t1 = 0, t2 = 1;
    printf("q\t|\tr1\t|\tr2\t|\tr\t|\ts1\t|\ts2\t|\ts\t|\tt1\t|\tt2\t|\tt\t|\n");
    while (r2 > 0)
    {
        q = r1 / r2;
        r = r1 - q * r2;
        s = s1 - q * s2;
        t = t1 - q * t2;
        printf("%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\n", q, r1, r2, r, s1, s2, s, t1, t2, t);
        r1 = r2;
        r2 = r;
        s1 = s2;
        s2 = s;
        t1 = t2;
        t2 = t;
    }
    printf("%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\n", q, r1, r2, r, s1, s2, s, t1, t2, t);
}
int main(void)
{
    printf("Enter the numbers : ");
    int a, b;
    scanf("%d %d", &a, &b);
    gcd(a, b);
    return 0;
}
