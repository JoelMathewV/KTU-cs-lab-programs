#include<stdio.h>
int main(){
    int n,m,i;
    printf("enter the no. of integers");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the no. u want to find");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(arr[i]==m){
            printf("it is at index %d",i);
        }
    }    
    return 0;
}