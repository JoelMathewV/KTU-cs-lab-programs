//4. Write a program to determine the given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,flag=0;
    printf("enter the string: ");
    scanf("%s",a);
    for (int i=0;a[i]!='\0';i++){
        if(a[i]!=a[strlen(a)-1-i]){
            flag=1;
        }
    }
    if(flag==0){
        printf("the string is a palindrome");
    }
    else{
        printf("the string is not a palindrome");
    }
    return 0;
}