//Write a c program to accept an int, float, char, double and prints their addresses  and its value using pointer
#include <stdio.h>
int main()
{
    int n;
    float a;
    char b;
    double c;
    printf("enter the int value ");
    scanf("%d",&n);
    printf("enter the float value ");
    scanf("%f",&a);
    printf("enter the char value ");
    scanf(" %c",&b);
    printf("enter the double value ");
    scanf("%lf",&c);
    int *d=&n;
    float *e=&a;
    char *f=&b;
    double *g=&c;
    printf("the addresses of int is %p, float is %p, char is %p, double is %p\n",d, e, f, g);
    printf("the value at int is %d, float is %f, char is %c, double is %lf",*d, *e, *f, *g);
    return 0;
}
