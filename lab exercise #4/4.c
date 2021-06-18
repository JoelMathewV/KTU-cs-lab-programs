//4. Write a program to check whether a number is perfect or not.(eg 6=1+2+3)
#include<stdio.h>
int main(){
    int n,sum=0,i;
    printf("enter the no ");
    scanf("%d",&n);
    printf("the factors are: ");
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
            printf("%d ",i);
        }
    }
    if(sum==n){
        printf("\nperfect number");
    }
    else{
        printf("\nnot a perfect number");
    }
    return 0;
}