//2. Write a program to accept your name, roll number branch and percentage and print it

#include<stdio.h>
int main(){
    char name[20];
    int roll;
    char branch[20];
    int percent;
    printf("enter ur name, roll no, branch and percentage");
    scanf("%s%d%s%d",&name,&roll,&branch,&percent);
    printf("ur name is %s ,ur roll no is %d , ur branch is %s , ur percentage is %d",name,roll,branch,percent);
    return 0;
}