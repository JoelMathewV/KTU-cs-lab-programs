//9. Write a menu driven program to perform all arithmetic operation
#include<stdio.h>
int main(){
    int a,b,opr;
    printf("enter the two numbers");
    scanf("%d %d",&a, &b);
    printf("enter your choice \n1.add \n2.subtract \n3.multiply \n4.divide \n");
    scanf("%d",&opr);
    switch (opr)
    {
    case 1:
        printf("%d",a+b);
        break;
    case 2:
        printf("%d",a-b);
        break;
    case 3:
        printf("%d",a*b);
        break;
    case 4:
        printf("%d",a/b);
        break;
    
    default:
        break;
    }
    return 0;
}