#include<stdio.h>
#include<unistd.h>
int main(){
    int pid=fork();
    if(pid==0){
        execl("/home/cek/S4CS02/hi","./hi",NULL);
    }else if(pid>0){
        execl("/home/cek/S4CS02/hello","./hello",NULL);
    }
    return 0;
}