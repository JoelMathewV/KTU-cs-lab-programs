//read n numbers and find the biggest and smallest
#include<stdio.h>
int main(){
    int n,i,a,b,s;
    printf("enter the amount of no: ");
    scanf("%d",&n);
    printf("\nenter the no 1: ");
    scanf("%d",&a);
    b=a;
    s=a;
    for(i=2;i<=n;i++){
        printf("\nenter the no %d: ",i);
        scanf("%d",&a);
        if(a>b){
            b=a;
        }
        if(a<s){
            s=a;
        }
    }
    printf("biggest %d",b);
    printf("\nsmallest %d",s);
    return 0;
}