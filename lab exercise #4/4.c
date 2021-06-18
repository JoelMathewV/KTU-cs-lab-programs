//4. Write a program to check whether a number is perfect or not.(eg 6=1+2+3)
#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter the no ");
    scanf("%d",&n);
    while (i<=10){
        printf("%d x %d = %d \n",n,i,n*i);
        i++;
    }
    return 0;
}