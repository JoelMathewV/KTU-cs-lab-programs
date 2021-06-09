//1. Write a C program to convert given KM to meter and centimeter
#include<stdio.h>
int main(){
    int n,m,cm;
    printf("input the distance: ");
    scanf("%d", &n);
    m = n*1000;
    cm = m*100;
    printf("the distance in m is %d and in cm is %d", m, cm);
    return 0;
}