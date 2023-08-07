// 4. Write a program to check whether the entered year is leap year or not (a year is leap if it is divisible by 4 and divisible by 100 or 400.)
#include <stdio.h>
int main()
{
    int n;
    printf("enter the year");
    scanf("%d", &n);
    if (n % 400 == 0)
    {
        printf("its a leap year");
    }
    else
    {
        if (n % 100 == 0)
        {
            printf("its not leap year");
        }
        else if (n % 4 == 0)
        {
            printf("its a leap year");
        }
        else{
            printf("its not leap year");
        }
    }
    return 0;
}