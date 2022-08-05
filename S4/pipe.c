#include <stdio.h>
#include <unistd.h>
int main()
{
    int pipefds[2];
    int x;
    char writemessage[30] = "Hi";
    char readmessage[20];
    x = pipe(pipefds);
    if (x == -1)
    {
        printf("pipe failed");
        return 1;
    }
    printf("Writing the following message :%s\n", writemessage);
    write(pipefds[1], writemessage, sizeof(writemessage));
    read(pipefds[0], readmessage, sizeof(pipefds[0]));
    printf("Reading message from pipe %s",readmessage);
return 0;
}