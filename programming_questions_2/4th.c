//4. Write a program to read a six digit number and find the sum of first and last digits of the number
#include<stdio.h>
int main(){
    int n,a,b,c;
    printf("enter a six digit no. ");
    scanf("%d",&n);
    a = n%10;
    b = n/100000;
    c = a+b;
    printf("the sum is %d",c);
    return 0;
}