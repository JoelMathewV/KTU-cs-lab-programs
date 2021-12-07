//check whether the given number is prime or not using for loop
#include<stdio.h>
int main(){
    int n,i,a;
    printf("enter the no");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            a=1;
        }
    }
    if(a==1){
        printf("not prime number");
    }
    else{
        printf("prime number");
    }
    return 0;
}