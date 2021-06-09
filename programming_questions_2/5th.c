// 5. Find the given number is odd or even using the conditional operator in C.
#include<stdio.h>
int main(){
    int n;
    int ans;
    printf("enter the no. ");
    scanf("%d", &n);
    (n%2==0)?(printf("it is a even number")):(printf("it is a odd number"));
    return 0;
}