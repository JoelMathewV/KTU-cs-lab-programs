// prime or not using pipe
#include <stdio.h>
#include <unistd.h>
int main()
{
    int fd[2], a, b;
    if (pipe(fd) == -1)
    {
        printf("pipe failed");
    }
    if (fork() > 0)
    {
        scanf("%d", &a);
        write(fd[1], &a, sizeof(int));
    }
    else{
        int i, flag = 0;
        read(fd[0], &b, sizeof(fd[0]));
        for(i =2; i<b; i++){
            if(b%i == 0){
                flag = 1;
            }
        }
        if(flag == 0){
            printf("prime");
        }
        else{
            printf("not prime");
        }
    }
    return 0;
}