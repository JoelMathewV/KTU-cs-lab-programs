//Write a program to check whether a number is Palindrome or not.
#include<stdio.h>
int main(){
    int n,i,r,sum=0;
    printf("enter the no ");
    scanf("%d",&n);
    for (i=n;n!=0;n/=10){
        r = n%10;
        sum = sum*10+r;
    }
    if(sum == i){
        printf("palindrom");
    }
    else{
        printf("not a palindrom");
    }
    return 0;
}