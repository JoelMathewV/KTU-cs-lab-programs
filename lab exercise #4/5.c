//Check whether the given 3 digit number is an Armstrong number. (use do while Eg:153,370,371,407)
#include<stdio.h>
#include<math.h>
int main(){
    int n,r,sum=0,t;
    printf("enter the no ");
    scanf("%d",&n);
    t=n;
    do
    {
        r = n%10;
        sum+=pow(r,3);
        n/=10;
    } while (n!=0);

    if(sum==t){
        printf("armstrong no");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}