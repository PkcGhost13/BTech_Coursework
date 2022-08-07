#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    double rows[n], cols[n];
    double a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element: ");
            scanf("%lf", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lf\t", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rows[i] = rows[i] + a[i][j];
            cols[i] = cols[i] + a[j][i];
        }
    }
    printf("\n");
    printf("\n");
    double b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[i][j] - (int)a[i][j];
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rows[i] = rows[i] + b[i][j];
            cols[i] = cols[i] + b[j][i];
        }
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rows[i] >= 0 && cols[j] >= 0)
            {
                b[i][j] = 1;
                rows[i]--;
                cols[j]--;
            }
            else
            {
                b[i][j] = 0;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rows[i] = rows[i] + b[i][j];
            cols[i] = cols[i] + b[j][i];
        }
    }
    printf("\n");
    printf("\n");
    int c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = ((int)a[i][j]) + b[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}