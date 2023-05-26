#include <stdio.h>

typedef struct {
    int id;
    int at;
    int bt;
    int st;
    int ct;
    int wt;
    int tat;
} Process;
void fcfs(Process processes[], int num_processes) {
    // FCFS scheduling algorithm
    int wt = 0;
    int tat = 0;
    int time=0;
    for (int i = 0; i < num_processes; i++) {
        if (processes[i].at<=time)
            time=time;
        else
            time=processes[i].at;
        processes[i].st=time;
        processes[i].wt=processes[i].st-processes[i].at;
        processes[i].ct=processes[i].st+processes[i].bt;
        processes[i].tat=processes[i].ct-processes[i].at;
        printf("Process %d: Completion time = %d Waiting Time = %d, Turnaround Time = %d\n", processes[i].id, processes[i].ct,processes[i].wt, processes[i].tat);
        time=time+processes[i].bt;
    }
}

int main() {
    Process processes[] = {
        {0, 0, 2},
        {1, 1, 5},
        {2, 2, 3},
        {3, 3, 4},
        {4, 16, 3},
        {5, 17, 4}
    };
    int num_processes = sizeof(processes) / sizeof(processes[0]);
    printf("First-Come, First-Served:\n");
    fcfs(processes, num_processes);
    return 0;
}

