#include <stdio.h>
struct process
{
    int wt;
    int bt;
    int pct; //previous currrent time
    int cbt; //copy of burst time
};
int main()
{
    int n, t, ct = 0;
    printf("Enter the number of process");
    scanf("%d", &n);
    struct process p[n];
    printf("Enter burst time");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i].bt);
        p[i].cbt = p[i].bt;
        p[i].pct = 0;
        p[i].wt = 0;
    }
    printf("Enter time quanta");
    scanf("%d", &t);
    int i = 0, count = 0;
    while (count != n)
    {
        if (p[i].bt == 0)
        {
            i = (i + 1) % n;
        }
        if (p[i].bt > t)
        {
            p[i].bt = p[i].bt - t;
            p[i].wt = p[i].wt + (ct - p[i].pct);
            ct = ct + t;
            p[i].pct = ct;
            i = (i + 1) % n;
        }
        else
        {

            p[i].wt = p[i].wt + (ct - p[i].pct);
            ct = ct + p[i].bt;
            p[i].pct = ct;
            p[i].bt = 0;
            count++;
            i = (i + 1) % n;
        }
    }
    int twt = 0;
    int ttat = 0;
    int tat[n];
    for (int i = 0; i < n; i++)
    {
        tat[i] = p[i].wt + p[i].cbt;
        twt += p[i].wt;
        ttat += tat[i];
    }
    printf("Average waiting time is %.2f", (float)twt / n);
    printf("\nAverage turnaround time is %.2f", (float)ttat / n);
    return 0;
}