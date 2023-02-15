#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of processes");
    scanf("%d", &n);
    int bt[n], wt[n], tat[n], twt, ttat;
    printf("Enter the burst time of processes");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }
    wt[0] = 0;
    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
    twt = 0;
    ttat = 0;
    for (int i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
        twt += wt[i];
        ttat += tat[i];
    }
    printf("Average waiting time is %.2f", (float)twt / n);
    printf("\nAverage turnaround time is %.2f", (float)ttat / n);
    return 0;
}