//5. Write a program to check number is Armstrong or not.
#include<stdio.h>
#include<math.h>
int main(){
    int n,r,sum=0,t;
    printf("enter the no ");
    scanf("%d",&n);
    t=n;
    do
    {
        r = n%10;
        sum+=pow(r,3);
        n/=10;
    } while (n!=0);

    if(sum==t){
        printf("armstrong no");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}