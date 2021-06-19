//6. Write a program to determine whether the input character is capital or small letter, digits or special symbol.
#include<stdio.h>
int main(){
    char n;
    printf("enter the char ");
    scanf("%c",&n);
    if(n>='a' && n<='z'){
        printf("small letter");
    }
    else if(n>='A' && n<='Z'){
        printf("capital number");
    }
    else if(n>='0' && n<='9'){
        printf("digits");
    }
    else{
        printf("special symbol");
    }
    return 0;
}