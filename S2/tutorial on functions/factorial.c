//2. Write a program to find the factorial of a number using a function
#include<stdio.h>
int factorial(int n){
    int i;
    for(i=n-1;i>0;i--){
        n=n*i;
    }
    return n;
}
int main(){
    int n;
    printf("enter the no: ");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}