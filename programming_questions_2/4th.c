//4. Write a program to read a six digit number and find the sum of first and last digits of the number
#include<stdio.h>
int main(){
    int n;
    int a;
    int b;
    int c;
    scanf("%d",&n);
    a = n%10;
    b = n/100000;
    c = a+b;
    printf("%d",c);
    return 0;
}