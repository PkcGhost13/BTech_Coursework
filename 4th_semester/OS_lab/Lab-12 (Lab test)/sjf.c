//WAP to sjf scheduling.

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

typedef struct process
{
    int pno;
    int at,bt;
    int et,tat,wt;
    int st;
    bool complete;
} process ;

int sjftimecalc(process ps[],int min,int currtime)
{
    ps[min].st = currtime;
    ps[min].et = ps[min].st + ps[min].bt;
    ps[min].tat = ps[min].et - ps[min].at;
    ps[min].wt = ps[min].tat - ps[min].bt;
}

int queuesort(process ps[],int n,int currtime)
{
    int min_pos=-1;
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ps[i].at <= currtime && ps[i].complete == false)
        {
            if (ps[i].bt < minimum)
            {
                minimum = ps[i].bt;
                min_pos = i;
            }
            if (ps[i].bt == minimum)
            {
                if (ps[i].at < ps[min_pos].at)
                {
                    minimum = ps[i].bt;
                    min_pos = i;
                }
            }
        }
    }
    return min_pos;
}

void sjfscheduler(process ps[],int n)
{
    int completed=0;
    int currtime=0;
    while (completed != n)
    {
        int min_pos = queuesort(ps,n,currtime);
        if (min_pos == -1)
        {
            currtime++;
        }
        else
        {
            sjftimecalc(ps,min_pos,currtime);
            completed++;
            ps[min_pos].complete= true;
            currtime = ps[min_pos].et;
        }
    }
}

double avgwaitingtime(process p[], int n) 
{
    double avg=0.0;
    for (int i = 0; i < n ; i++ )
    {
       avg=avg+p[i].wt;
    }
    avg=avg/n;
    return avg;
} 

double avgturnaroundtime(process p[], int n) 
{
    double avg=0.0;
    for (int i = 0; i < n ; i++ )
    {
       avg=avg+p[i].tat;
    }
    avg=avg/n;
    return avg;
}

void display(process p[],int n)
{
    sjfscheduler(p,n);
    printf("-----------------------------------------------------------\n");
    printf("Process |\t AT |\t BT |\t CT |\t TAT |\t WT\n");
    printf("-----------------------------------------------------------\n");
    for (int i = 0; i < n; i++)      
    {
        printf("%d \t|\t %d \t %d \t %d \t %d \t %d\n",p[i].pno,p[i].at,p[i].bt,p[i].et,p[i].tat,p[i].wt);
        printf("-----------------------------------------------------------\n");
    }
    printf("-----------------------------------------------------------\n");
}

int main(void)
{
    printf("Enter the number of processes : ");
    int n;
    scanf("%d",&n);
    process proc [n];
    printf("Enter the details for each process : \n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the details for process %d ----\n",(i));
        proc[i].pno=i;
        printf("Arrival Time : ");
        scanf("%d",&proc[i].at);
        printf("Burst Time : ");
        scanf("%d",&proc[i].bt);
    }
    display(proc,n);
    printf ("Average turn around time is : %lf\n",avgturnaroundtime(proc,n));
    printf ("Average waiting time is : %lf\n",avgwaitingtime(proc,n));
}
