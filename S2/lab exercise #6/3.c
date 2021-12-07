//3. Write a program to find the second largest number using an array of n numbers.
#include<stdio.h>
int main(){
    int n,max,nxtmax,i;
    printf("enter the no. of integers");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    nxtmax=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]>nxtmax && arr[i]<max){
            nxtmax=arr[i];
        }
    }
    printf("the 2nd largest number is %d",nxtmax);
    return 0;
    }