#include <stdio.h>
#include <stdlib.h>

struct process_struct
{
    int pid;
    int at;
    int bt;
    int ct, wt, tat, rt, start_time;
} ps[100]; 

int comparatorAT(const void *a, const void *b)
{
    int x = ((struct process_struct *)a)->at;
    int y = ((struct process_struct *)b)->at;
    if (x < y)
        return -1;
    else if (x >= y)
        return 1;
}

int comparatorPID(const void *a, const void *b)
{
    int x = ((struct process_struct *)a)->pid;
    int y = ((struct process_struct *)b)->pid;
    if (x < y)
        return -1;
    else if (x >= y)
        return 1;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int n;
    printf("Enter Total Number of Processes: ");
    scanf("%d", &n);

    float sum_tat = 0, sum_wt = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter Process %d Arrival Time: ", i);
        scanf("%d", &ps[i].at);
        ps[i].pid = i;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Process %d Burst Time: ", i);
        scanf("%d", &ps[i].bt);
    }

    for (int i = 0; i < n; i++)
    {
        ps[i].start_time = (i == 0) ? ps[i].at : max(ps[i].at, ps[i - 1].ct);
        ps[i].ct = ps[i].start_time + ps[i].bt;
        ps[i].tat = ps[i].ct - ps[i].at;
        ps[i].wt = ps[i].tat - ps[i].bt;

        sum_tat = sum_tat + ps[i].tat;
        sum_wt = sum_wt + ps[i].wt;
    }
qsort((void *)ps, n, sizeof(struct process_struct), comparatorPID);
    printf("\n Process No. \tAT\tBurst Time\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t%d\t\t%d\t%d\t%d\n", ps[i].pid, ps[i].at, ps[i].bt, ps[i].ct, ps[i].tat, ps[i].wt);
        printf("\n");
    }
    printf("\nAverage Turn Around Time: %f", sum_tat / n);
    printf("\nAverage Waiting Time: %f", sum_wt / n);
    return 0;
}