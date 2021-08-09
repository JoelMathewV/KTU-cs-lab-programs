//1. Write a program to read n integers, store them in an array and find their sum and average
#include<stdio.h>
int main(){
    int n,sum=0,avg,i;
    printf("enter the no. of integers");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    printf("the sum is %d and the average is %d",sum,avg);
    return 0;
}