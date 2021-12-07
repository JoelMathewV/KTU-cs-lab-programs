//2. Write a program to interchange the largest and the smallest number in an array.
#include<stdio.h>
int main(){
    int n,max,min,i,maxi,mini,temp;
    printf("enter the no. of integers");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxi=i;
        }
        if(arr[i]<min){
            min=arr[i];
            mini=i;
        }
    }
    arr[mini]=max;
    arr[maxi]=min;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
return 0;
}