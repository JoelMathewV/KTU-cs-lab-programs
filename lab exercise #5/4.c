//find the factorial of a number using for statement
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the no: ");
    scanf("%d",&n);
    for(i=n-1;i>0;i--){
        n*=i;
    }
    printf("the factorial is %d",n);
    return 0;
}