//1. Write a program to find the absolute value of an integer.
#include<stdio.h>
int main(){
    int n;
    printf("enter the no");
    scanf("%d",&n);
    if(n>=0){
        printf("%d",n);
    }
    else{
        printf("%d",-n);
    }
    return 0;
}