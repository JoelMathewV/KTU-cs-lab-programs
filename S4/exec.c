#include<stdio.h>
#include<unistd.h>
int main(){
    printf(" 1\n");
    int pid=fork();
    if(pid==0){
        execl("/bin/ls","ls",NULL);
    }else if(pid>0){
        execl("/bin/pwd","pwd",NULL);
    }
    return 0;
}