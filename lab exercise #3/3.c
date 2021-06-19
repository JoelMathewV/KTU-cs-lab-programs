//3. Write a program to compute grade of students using if else adder.
#include<stdio.h>
int main(){
    int n;
    printf("enter the marks");
    scanf("%d",&n);
    if(n<50){
        printf("F");
    }
    else if(n>=50 && n<60){
        printf("C");
    }
    else if(n>=60 && n<70){
        printf("B");
    }
    else if(n>=70 && n<80){
        printf("B+");
    }
    else if(n>=80 && n<90){
        printf("A");
    }
    else if(n>=90 && n<=100){
        printf("A+");
    }
    return 0;
}