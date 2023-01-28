#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
typedef struct processDetails
{
    int pno;
    int at, bt;
    //int st;
    int et, tat, wt;
    //int rst;
    int rt;
    bool complete;
} process;

typedef struct Node
{
    int data;
    struct Node *next;
} queue;
queue *front = NULL, *rear = NULL;
process *p;
int n, quantum;
double avgtat = 0.0, avgwt = 0.0, avgrst=0.0;
int *readyqueue;
void inQueue(int value)
{
    queue *newNode;
    newNode = (queue *)malloc(sizeof(queue));
    newNode->data = value;
    newNode->next = NULL;
    if (front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
int deQueue()
{
    if (front == NULL)
    {
        return -1;
    }
    else
    {
        int temp = front->data;
        front = front->next;
        return temp;
    }
}
bool checkEmpty()
{
    if (front == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void swap(process *xp, process *yp)
{
    process temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sortB()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].pno > p[j + 1].pno)
            {
                swap(&p[j], &p[j + 1]);
            }
        }
    }
}
void sortbyArrival()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].at > p[j + 1].at)
            {
                swap(&p[j], &p[j + 1]);
            }
        }
    }
}
bool checkready(int i)
{
    if (front == NULL)
    {
        return false;
    }
    else
    {
        queue *temp = front;
        while (temp->next != NULL)
        {
            if (temp->data == i)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
}
void rrScheduler()
{
    int completed = 0;
    int time = 0, k = 1, c = 0, l = 0;
    while (completed != n)
    {
        for (int i = l; i < n; i++)
        {
            if (p[i].at <= (time) && p[i].rt > 0 && !checkready(i))
            {
                inQueue(i);
                //p[i].st=time;
                l++;
            }
        }
        if (p[k].complete == false && c >= 1)
        {
            inQueue(k);
        }
        if (checkEmpty() == 1)
        {
            time++;
            continue;
        }
        c++;
        k = deQueue();
        printf("k : %d\n", k + 1);
        if (p[k].rt <= quantum)
        {
            time += p[k].rt;
            p[k].rt = 0;
            p[k].et = time;
            completed++;
            printf("completed : %d\n", completed);
            p[k].complete = true;
        }
        else
        {
            time += quantum;
            p[k].rt -= quantum;
            p[k].complete = false;
        }
    }
}
void timeCalculation()
{
    for (int i = 0; i < n; i++)
    {
        p[i].tat = p[i].et - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;
        //p[i].rst = p[i].st - p[i].at;
        avgtat = avgtat + p[i].tat;
        avgwt = avgwt + p[i].wt;
        //avgrst=avgrst + p[i].rst;
    }
    avgtat = avgtat / n;
    avgwt = avgwt / n;
    //avgrst = avgrst / n;
}
void display()
{
    sortbyArrival();
    rrScheduler();
    timeCalculation();
    sortB();
    printf("-----------------------------------------------------------\n");
    printf("Process |\t AT |\t BT |\t CT |\t TAT |\t WT\n");
    printf("-----------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t|\t %d \t %d \t %d \t %d \t %d\n", p[i].pno, p[i].at, p[i].bt, p[i].et, p[i].tat, p[i].wt);
        printf("-----------------------------------------------------------\n");
    }
    printf("-----------------------------------------------------------\n");
}
int main(void)
{
    printf("Enter the number of processes : ");
    scanf("%d", &n);
    printf("Enter the value of process quantum :");
    scanf("%d", &quantum);
    p = (process *)malloc(n * sizeof(process));
    readyqueue = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details for process %d ----\n", (i + 1));
        p[i].pno = i + 1;
        printf("Arrival Time : ");
        scanf("%d", &p[i].at);
        printf("Burst Time : ");
        scanf("%d", &p[i].bt);
        p[i].rt = p[i].bt;
    }
    display();
    printf("Average turn around time is : %lf\n", avgtat);
    printf("Average waiting time is : %lf\n", avgwt);
    printf("Average response time is : %lf\n", avgrst);
}