//4. Write a program to insert a number at a given location in an array.
#include<stdio.h>
int main(){
    int n,loc,m,i;
    printf("enter the no. of integers");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number and the location");
    scanf("%d %d",&m,&loc);
    arr[loc]=m;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}