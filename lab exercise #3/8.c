//8. Write a program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
int main(){
    int n,a;
    printf("enter the no");
    scanf("%d",&n);
    switch (n>0)
    {
    case 1:
        printf("positive number");
        break;
    case 0:
        switch (n==0)
        {
        case 1:
            printf("zero");
            break;
        case 0:
            printf("negative number");
        default:
            break;
        }
    
    default:
        break;
    }
    return 0;
}