//1. Write a program for addition of two matrices of any order in C.
#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter the no of rows and columns");
    scanf("%d %d",&r,&c);
    int mata[r][c],matb[r][c],result[r][c];

    //first matrix
    printf("enter the numbers of 1st matrix");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d",&mata[i][j]);
        }
    }

    //second matrix
    printf("enter the numbers of 2nd matrix");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d",&matb[i][j]);
        }
    }

    //calculation
    for (int i = 0; i < r; i++){
        for (int j=0;j<c;j++){
            result[i][j]=mata[i][j]+matb[i][j];
        }
    }

    //output
    printf("the sum of the matrix is \n");
    for (int i = 0; i < r; i++){
        for (int j=0;j<c;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}