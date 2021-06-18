//Find the sum of the digits of a number.( use while)
#include<stdio.h>
int main(){
    int n,r,sum=0;
    printf("enter the no ");
    scanf("%d",&n);
    while (n!=0){
        r = n%10;
        sum = sum+r;
        n/=10;
    }
    printf("the sum of the digits is %d \n",sum);
    return 0;
}