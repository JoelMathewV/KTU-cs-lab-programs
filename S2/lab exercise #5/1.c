//print the number in words
#include<stdio.h>
int main(){
    int n,r,t,sum = 0;
    printf("enter the no ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    t=sum;
    while (t>0)
    {
        r=t%10;
        t=t/10;
        switch (r)
        {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;

        default:
            break;
        }
    }
    return 0;
}