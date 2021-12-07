//2. Write a Program to multiply two Matrices.
#include<stdio.h>
int main(){
    int r,c,i,j,k;
    printf("enter the no of rows and columns");
    scanf("%d %d",&r,&c);
    int mata[r][c],matb[r][c],result[r][c];
    printf("enter the numbers of 1st matrix");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d",&mata[i][j]);
        }
    }
    printf("enter the numbers of 2nd matrix");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d",&matb[i][j]);
        }
    }

    //calculation
    for (int i=0;i<r;i++){
        for (int j = 0; j < c; j++)
        {   result[i][j]=0;
            for (int k = 0; k < c; k++)
            {
                result[i][j]+= mata[i][k]*matb[k][j];
            }
            
        }
        
    }

    //printing result
    printf("the ans is \n");
    for (int i = 0; i < r; i++){
        for (int j=0;j<c;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}