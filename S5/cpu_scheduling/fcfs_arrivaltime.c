#include <stdio.h>

struct process
{
    int bt;
    int a;
};

int main()
{
    int n, temp, tempbt;
    printf("Enter the number of processes : ");
    scanf("%d", &n);
    struct process ps[n];
    int wt[n], tat[n], twt = 0, ttat = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter Arival time and burst time of process %d : ", i + 1);
        scanf("%d%d", &ps[i].a, &ps[i].bt);
    }

    // Sort processes based on arrival time
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ps[j].a > ps[j + 1].a)
            {
                temp = ps[j].a;
                tempbt = ps[j].bt;
                ps[j].a = ps[j + 1].a;
                ps[j].bt = ps[j + 1].bt;
                ps[j + 1].a = temp;
                ps[j + 1].bt = tempbt;
            }
        }
    }

    // Calculate waiting time and turnaround time of each process
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if ( ct <= ps[i].a ) {
            ct = ps[i].a;
        }
        wt[i] = ct - ps[i].a;
        ct += ps[i].bt;
        tat[i] = ct - ps[i].a;
        twt += wt[i];
        ttat += tat[i];
    }

    // Print waiting time and turnaround time of each process
    printf("Process\t Arrival Time\t Burst Time\t Waiting Time\t Turnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t %d\t\t %d\t\t %d\t\t %d\n", i + 1, ps[i].a, ps[i].bt, wt[i], tat[i]);
    }

    // Calculate average waiting time and average turnaround time
    float avgwt = (float) twt / n;
    float avgtat = (float) ttat / n;

    // Print average waiting time and average turnaround time
    printf("\nAverage Waiting Time: %.2f\n", avgwt);
    printf("Average Turnaround Time: %.2f\n", avgtat);

    return 0;
}