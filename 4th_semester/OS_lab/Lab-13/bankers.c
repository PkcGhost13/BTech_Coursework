#include <stdio.h>

int main(void)
{
    int pkc_n, pkc_m;
    printf("Enter the number of processes : ");
    scanf("%d", &pkc_n);
    printf("Enter the number of resources : ");
    scanf("%d", &pkc_m);
    int pkc_available[pkc_m], pkc_max[pkc_n][pkc_m], pkc_allocation[pkc_n][pkc_m], pkc_need[pkc_n][pkc_m];
    int asc = 65;
    printf("Enter the pkc_available values of resources :\n");
    for (int i = 0; i < pkc_m; i++)
    {
        printf("Resource %c : ", (char)asc + i);
        scanf("%d", &pkc_available[i]);
    }
    printf("Enter the maximum demand values of processes :\n");
    for (int i = 0; i < pkc_n; i++)
    {
        printf("Process %d : \n", i + 1);
        for (int j = 0; j < pkc_m; j++)
        {
            printf("\tResource %c : ", (char)asc + j);
            scanf("%d", &pkc_max[i][j]);
        }
    }
    printf("Enter the allocated values of processes :\n");
    for (int i = 0; i < pkc_n; i++)
    {
        printf("Process %d : \n", i + 1);
        for (int j = 0; j < pkc_m; j++)
        {
            printf("\tResource %c : ", (char)asc + j);
            scanf("%d", &pkc_allocation[i][j]);
        }
    }
    printf("Calculating pkc_needed resources for processes......\n");
    for (int i = 0; i < pkc_n; i++)
    {
        for (int j = 0; j < pkc_m; j++)
        {
            pkc_need[i][j] = pkc_max[i][j] - pkc_allocation[i][j];
        }
    }
    int pkc_f[pkc_n], pkc_safe[pkc_n], ind = 0;
    for (int i = 0; i < pkc_n; i++)
    {
        pkc_f[i] = 0;
    }
    for (int i = 0; i < pkc_n; i++)
    {
        for (int j = 0; j < pkc_n; j++)
        {
            if (pkc_f[j] == 0)
            {
                int flag = 0;
                for (int k = 0; k < pkc_m; k++)
                {
                    if (pkc_need[j][k] > pkc_available[k])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    pkc_safe[ind++] = j;
                    for (int k = 0; k < pkc_m; k++)
                    {
                        pkc_available[k] += pkc_allocation[j][k];
                    }
                    pkc_f[j] = 1;
                }
            }
        }
    }
    printf("Process \t Allocation \t\t   Max   \t\t   Need    \n");
    for (int i = 0; i < pkc_n; i++)
    {
        printf("P%d \t\t  ",i+1);
        for (int j = 0; j < pkc_m; j++)
        {
            printf("%d ",pkc_allocation[i][j]);
        }
        printf("\t\t   ");
        for (int j = 0; j < pkc_m; j++)
        {
            printf("%d ",pkc_max[i][j]);
        }
        printf("  \t\t   ");
        for (int j = 0; j < pkc_m; j++)
        {
            printf("%d ",pkc_need[i][j]);
        }
        printf("\n");
    }
    int flag = 1;

    for (int i = 0; i < pkc_n; i++)
    {
        if (pkc_f[i] == 0)
        {
            flag = 0;
            printf("The following system is not safe");
            break;
        }
    }
    if(flag==1)
    {
        printf("The following system is safe : no deadlock \n");
    }
    if (flag == 1)
    {
        printf("Safe Sequence :\n");
        for (int i = 0; i < pkc_n - 1; i++)
        {
            printf(" P%d ->", pkc_safe[i]);
        }
        printf(" P%d", pkc_safe[pkc_n - 1]);
    }
    return (0);
}
