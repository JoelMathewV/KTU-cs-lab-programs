//7. Write a program to find the roots of quadratic equation.
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,x,y;
    printf("enter the coefficient of x^2");
    scanf("%d",&a);
    printf("enter the coefficient of x");
    scanf("%d",&b);
    printf("enter the constant");
    scanf("%d",&c);
    d = pow(b,2)-4*a*c;
    if(d<0){
        printf("roots are imaginary");
    }
    else if(d==0){
        x = (-b+sqrt(d))/2*a;
        printf("the root of the equation is %d",x);
    }
    else{
        x = (-b+sqrt(d))/2*a;
        y = (-b-sqrt(d))/2*a;
        printf("the roots of the equation are %d and %d",x,y);
    }
    return 0;
}