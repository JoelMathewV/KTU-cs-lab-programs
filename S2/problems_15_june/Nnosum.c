// find the sum of N different numbers
#include<stdio.h>
int main(){
    int i,n,sum=0,a;
    scanf("%d",&n);
    for(i = 1;i<=n;i++){
        printf("enter the %d no",i);
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("the total sum is %d",sum);
    return 0;
}