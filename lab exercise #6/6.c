//6. Write a program to read n integers, store them in an array and sort the elements in the
//array using Bubble Sort algorithm

#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("enter the no. of integers");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                k = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}