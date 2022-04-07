#include <stdio.h>
typedef struct process
{
    int pno;
    int at,bt;
    int et,tat,wt;
} process ;
void swap(process *xp, process *yp)
{
    process temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sortfcfs(process p[],int n)
{
    for (int i = 0; i < n-1; i++)      
    {   
       for (int j = 0; j < n-i-1; j++) 
       {
           if (p[j].at > p[j+1].at)
           {
              swap(&p[j], &p[j+1]);
           }
       }
    }
    for (int i = 0; i < n; i++)      
    {
        p[i].pno=i;
    }
}
void display(process p[],int n)
{
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
int idlecpu(int at,int ct)
{
    int gap=0;
    if(at>ct)
    {
        gap=at-ct;
    }
    return gap;
}
void completiontime(process p[],int n)
{
    p[0].et=p[0].bt;
    for (int i = 1; i < n ; i++ )
    {
        int gap=idlecpu(p[i].at,p[i-1].et);
        p[i].et=0;
        p[i].et=p[i-1].et+p[i].bt+gap;
    }
}
void turnaroundtime(process p[], int n) 
{
    for (int i = 0; i < n ; i++ )
    {
       p[i].tat = 0;
       p[i].tat = p[i].et - p[i].at;
    }
}
void waitingtime(process p[], int n) 
{
    p[0].wt = 0;
    for (int i = 1; i < n ; i++ )
    {
       p[i].wt = 0;
       p[i].wt = p[i].tat - p[i].bt;
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
void ganttchart(process p[],int n)
{
    sortfcfs(p,n);
    completiontime(p,n);
    turnaroundtime(p,n);
    waitingtime(p,n);
    printf("Gantt's Chart : \n");
    printf("---------------------------------------------\n|");
    for(int i=0;i<n;i++)
    {
        printf("P%d\t|",i);
    }
    printf("\n---------------------------------------------\n0\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",p[i].et);
    }
    printf("\n\n");
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
        printf("Arrival Time : ");
        scanf("%d",&proc[i].at);
        printf("Burst Time : ");
        scanf("%d",&proc[i].bt);
    }
    ganttchart(proc,n);
    display(proc,n);
    printf ("Average turn around time is : %lf\n",avgturnaroundtime(proc,n));
    printf ("Average waiting time is : %lf\n",avgwaitingtime(proc,n));
}