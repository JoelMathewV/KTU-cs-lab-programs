// 6. Find the max number among three numbers using the conditional operator in C.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three no. ");
    scanf("%d%d%d",&a,&b,&c);
    printf("the largest no is ");
    (a>b)?((a>c)?(printf("%d",a)):(printf("%d",c))):((b>c)?(printf("%d",b)):(printf("%d",c))); 
    return 0;
}