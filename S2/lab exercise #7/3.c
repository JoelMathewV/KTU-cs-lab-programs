//3. Write a program to accept a string and count the number of vowels present in this string.
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,count=0;
    printf("enter the string: ");
    scanf("%s",a);
    for (int i=0;a[i] !='\0';i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            count+=1;
        }
    }
    printf("the no of vowels in the string is %d",count);
    return 0;
}