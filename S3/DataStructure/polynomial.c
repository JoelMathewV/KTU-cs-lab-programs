#include<stdio.h>
struct polynomial
    {
        int coeff;
        int expo;
    }x1[15], x2[15],x3[30];

int input(struct polynomial a[]){
    int terms, i;
    printf("\nNumber of terms: ");
    scanf("%d", &terms);
    printf("\nEnter the coeffecients and exponents in DESCENDING order");
    for(i = 0 ; i<terms; i++)
    {
        printf("\nCoeffecient :");
        scanf("%d", &a[i].coeff);
        printf("Exponent :");
        scanf("%d", &a[i].expo);
    }
    return terms;
}
int calculation(int n, int m){
    int i=0,j=0,k=0;

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
    return k;
}
void display(struct polynomial poly[], int terms)
{
    int i;
    printf("\n");
    for(i = 0; i < terms ; i++)
    {
        printf("%dX^%d+ ", poly[i].coeff, poly[i].expo);
    }
}
int main(){
    int i,j,k,n,m;
    printf("First function");
    n=input(x1);
    printf("Second function");
    m = input(x2);
    k=calculation(n,m);
    printf("the 1st polynomial is ");
    display(x1, n);
    printf("\nthe 2nd polynomial is ");
    display(x2, m);
    printf("the resultant polynomial is ");
    display(x3,k);
    return 0;
}