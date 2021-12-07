//2. Write a program to find the smallest among three entered numbers and also display whether the identified smallest number is even or odd.
#include<stdio.h>
int main(){
    int a,b,c,n;
    printf("enter the three no");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a<b){
        if(a<c){
            printf("%d is the smallest number",a);
            n=a;
        }
        else{
            printf("%d is the smallest number",c);
            n=c;
        }
    }
    else{
        if(b<c){
            printf("%d is the smallest number",b);
            n=b;
        }
        else{
            printf("%d is the smallest number",c);
            n=c;         
        }
    }
    if(n%2==0){
        printf("\nthe no is even");
    }
    else{
        printf("\nthe no is odd");
    }
    return 0;
}