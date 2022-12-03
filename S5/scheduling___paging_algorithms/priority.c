#include <stdio.h>
struct process
{
    int bt;
    int p;
};
int main()
{
    int n, temp, tempbt;
    printf("Enter the number of processes");
    scanf("%d", &n);
    struct process ps[n];
    int wt[n], tat[n], twt, ttat;
    for (int i = 0; i < n; i++)
    {
        printf("Enter priority and burst time of process %d", i);
        scanf("%d%d", &ps[i].p, &ps[i].bt);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ps[j].p > ps[j + 1].p)
            {
                temp = ps[j].p;
                tempbt = ps[j].bt;
                ps[j].p = ps[j + 1].p;
                ps[j].bt = ps[j + 1].bt;
                ps[j + 1].p = temp;
                ps[j + 1].bt = tempbt;
            }
        }
    }
    wt[0] = 0;
    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + ps[i - 1].bt;
    }

    twt = 0;
    ttat = 0;
    for (int i = 0; i < n; i++)
    {
        tat[i] = wt[i] + ps[i].bt;
        twt += wt[i];
        ttat += tat[i];
    }
    printf("Average waiting time is %.2f", (float)twt / n);
    printf("\nAverage turnaround time is %.2f", (float)ttat / n);
    return 0;
}