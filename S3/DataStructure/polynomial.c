#include<stdio.h>
int main(){
    int i,j,k,n,m;
    printf("enter the no of elements in x1 ");
    scanf("%d", &n);
    printf("enter the no of elements in x2 ");
    scanf("%d", &m);

    struct polynomial
    {
        int coeff;
        int expo;
    }x1[n], x2[m],x3[n+m];

    //inputing x1
    printf("enter the elements of x1 ");
    for(i=0;i<n;i++){
        scanf("%d %d", &x1[i].coeff, &x1[i].expo);
    }

    //inputing x2
    printf("enter the elements of x2 ");
    for(i=0;i<m;i++){
        scanf("%d %d", &x2[i].coeff, &x2[i].expo);
    }
    
    //adding x1 and x2
    i=0;
    j=0;
    k=0;

    while(i<n && j<m){
        if(x1[i].expo>x2[j].expo){
            x3[k].coeff = x1[i].coeff;
            x3[k].expo = x1[i].expo;
            i++;
            k++;
        }
        else if(x1[i].expo<x2[j].expo){
            x3[k].coeff = x2[j].coeff;
            x3[k].expo = x2[j].expo;
            j++;
            k++;
        }
        else{
            x3[k].coeff=x1[i].coeff+x2[j].coeff;
            x3[k].expo = x1[i].expo;
            i++;
            j++;
            k++;
        }
        
    }
    while(i<n){
        x3[k].coeff = x1[i].coeff;
        x3[k].expo = x1[i].expo;
        k++;
        i++;
    }
    while(j<m){
        x3[k].coeff = x2[j].coeff;
        x3[k].expo = x2[j].expo;
        k++;
        j++;
    }

    //printing x3
    printf("the elements of x3 are\n");
    for(i=0;i<k;i++){
        printf("%dx^%d + ", x3[i].coeff, x3[i].expo) ;
    }
    return 0;
}