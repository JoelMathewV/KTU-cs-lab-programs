// An example to see how to use gets() and puts() functions
#include<stdio.h>
int main(){
    char name[20];
    gets(name);
    printf("the string is ");
    puts(name);
    return 0;
}