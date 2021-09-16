//Write a program to define functions for reading elements into an array, sorting the array and printing the array elements.
#include<stdio.h>
int sort(int n, int a[]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    return a;
}
int main(){
    int n,i;
    printf("enter the no of elements in the array ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    sort(n, a);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}