#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, diff, tst = 0;
    printf("enter the no of request");
    scanf("%d", &n);
    int req[n + 1];
    printf("Enter the current head position");
    scanf("%d", &req[0]);
    printf("Enter the requests");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &req[i]);
        diff = abs(req[i] - req[i - 1]);
        tst += diff;
    }
    printf("Total seek time is %d", tst);
    return 0;
}