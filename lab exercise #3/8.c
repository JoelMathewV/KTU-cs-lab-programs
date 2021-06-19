//8. Write a program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
int main(){
    int n,a;
    printf("enter the no");
    scanf("%d",&n);
    if(n<0){
        a=-1;
    }
    else if(n>0){
        a=1;
    }
    else{
        a=0;
    }
    switch (a)
    {
    case -1:
        printf("negative number");
        break;
    case 1:
        printf("positive number");
        break;
    case 0:
        printf("zero");
        break;
    
    default:
        break;
    }
    return 0;
}