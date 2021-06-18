//Print the multiplication table of a given number. ( use while)
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the no ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d \n",n,i,n*i);
    }
    return 0;
}