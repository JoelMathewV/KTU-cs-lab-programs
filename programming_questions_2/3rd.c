//3. Write a program to find the sum of digits of a 3 digit number
#include<stdio.h>
int main(){
    int n,a,b,c,d,sum;
    printf("enter the 3 digit no. ");
    scanf("%d",&n);
    a = n%10;
    b = n/10;
    c = b%10;
    d = b/10;
    sum = a+d+c;
    printf("sum of the digits is %d", sum);
    return 0;
}