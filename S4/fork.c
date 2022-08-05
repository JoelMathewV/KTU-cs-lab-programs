#include <unistd.h>
#include <stdio.h>
int main()
{
    int x = fork();

    if (x == 0)
        printf("I am child");
    else
        printf("I am parent");
    return 0;
}