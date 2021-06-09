//3. Write a program to find the sum of digits of a 3 digit number
#include<stdio.h>
int main(){
    int n;
    int a;
    int b;
    int c;
    int d;
    int sum;
    scanf("%d",&n);
    a = n%10;
    b = n/10;
    c = b%10;
    d = b/10;
    sum = a+d+c;
    printf("sum of the digits is %d", sum);
    return 0;
}