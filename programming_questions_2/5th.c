// 5. Find the given number is odd or even using the conditional operator in C.
#include<stdio.h>
int main(){
    int n;
    int ans;
    scanf("%d", &n);
    (n%2==0)?(printf("even number")):(printf("odd number"));
    return 0;
}