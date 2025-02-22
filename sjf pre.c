#include <stdio.h>

struct Process {
    int id;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int waiting_time;
};

void sjfPreemptive(struct Process processes[], int n) {
    int currentTime = 0;
    int i;
    int completed = 0;

    while (completed < n) {
        int minIndex = -1;
        int minBurst = 0;

        for(i = 0; i < n; i++) {
            if (processes[i].arrival_time <= currentTime && processes[i].remaining_time > 0) {
                if (processes[i].remaining_time < minBurst) {
                    minBurst = processes[i].remaining_time;
                    minIndex = i;
                }
            }
        }

        if (minIndex == -1) {
            currentTime++;
        } else {
            processes[minIndex].remaining_time--;
            currentTime++;

            if (processes[minIndex].remaining_time == 0) {
                completed++;
                processes[minIndex].waiting_time = currentTime - processes[minIndex].arrival_time - processes[minIndex].burst_time;
                printf("Process %d completed at time %d\n", processes[minIndex].id, currentTime);
            }
        }
    }
}

int main() {
    int n,i;
    int totalWaitingTime = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[n];

    for(i = 0; i < n; i++) {
        processes[i].id = i + 1;
        printf("Enter arrival time for process %d: ", i + 1);
        scanf("%d", &processes[i].arrival_time);
        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &processes[i].burst_time);
        processes[i].remaining_time = processes[i].burst_time;
    }

    sjfPreemptive(processes, n);

    for (int i = 0; i < n; i++) {
        totalWaitingTime += processes[i].waiting_time;
    }

    printf("Total Waiting Time: %d\n", totalWaitingTime);

    return 0;
}

