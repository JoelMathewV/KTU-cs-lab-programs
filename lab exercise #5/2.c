//generate the fibonacci series 0 1 1 2 3 5........
#include<stdio.h>
int main(){
    int n,a,b,c;
    printf("enter the no ");
    scanf("%d",&n);
    a=0;
    b=1;
    c=1;
    printf("%d %d ",a,b);
    do
    {
        n--;
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    } while (n-2>0);
    
    return 0;
}