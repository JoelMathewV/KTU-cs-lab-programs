//2. Write a program to accept your name, roll number branch and percentage and print it

#include<stdio.h>
#include<string.h>
int main(){
    char name[20], branch[20];
    int roll, percent;
    printf("enter your name, roll no, branch and percentage ");
    gets(name);
    scanf("%d%s%d",&roll,branch,&percent);
    printf("your name is ");
    puts(name);
    printf("your roll no is %d\nyour branch is %s\nyour percentage is %d",roll,branch,percent);
    return 0;
}