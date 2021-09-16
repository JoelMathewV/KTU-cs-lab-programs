//Read a string (word), store it in an array and obtain its reverse by using a user defined function
#include<stdio.h>
#include<string.h>
void reverse(char s[], int n){
    int i,temp;
    for(i=0;i<(n/2);i++){
        temp = s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
    printf("%s\n",s);
}
int main(){
    int n;
    scanf("%d", &n);
    char s[n];
    scanf(" %s", s);
    reverse(s, n);
    return 0;
}