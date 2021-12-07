//3. Write a menu driven program for performing matrix addition,
// multiplication and finding the transpose. Use functions to
// (i) read a matrix, (ii) find the sum of two matrices,
//(iii) find the product of two matrices,(iv) find the transpose of a
// matrix and (v) display a matrix.

#include<stdio.h>
int addmatrix(int r, int c, int a[r][c], int b[r][c], int d[r][c]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    return c;
}
int multiply(int r1, int c1, int r2, int c2, int a[r1][c1], int b[r2][c2], int d[r1][c2] ){
    for (int i=0;i<r1;i++){
        for (int j = 0; j < c2; j++)
        {   d[i][j]=0;
            for (int k = 0; k < c1; k++)
            {
                d[i][j]+= a[i][k]*b[k][j];
            }
            
        }
        
    }
    return d[r1][c2];
}
int transpose(int r1,int c1,int a[r1][c1],int d[r1][c1]){
    int i,j;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            d[i][j]=a[j][i];
        }
    }
    return d[r1][c1];
}
void display(int r, int c, int a[r][c]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}
void read(int *r, int *c, int *a[*r][*c]){
    int i,j;
    for(i=0;i<*r;i++){
        for(j=0;j<*c;j++){
            scanf("%d", &(*a[i][j]));
        }
    }
    //return *a;
}
int main(){
    int n;
    int r1,c1,r2,c2;
    printf("enter the no of rows and columns of the 1st matrix ");
    scanf("%d %d",&r1,&c1);
    printf("enter the no of rows and columns of the 2nd matrix ");
    scanf("%d %d",&r2,&c2);
    int a[r1][c1];
    int b[r2][c2];
    printf("enter the first matrix ");
    read(&r1,&c1,&a);
    printf("enter the second matrix ");
    read(&r2,&c2,&b);
    int d[r1][c2];
    while(1){
        printf("Enter the action u want to perform\n");
        printf("1.add\n2.multiply\n3.transpose\n4.exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            if(r1!=r2 && c1!=c2){
                printf("not possible");
            }
            else{
                addmatrix(r1,c1,a[r1][c1], b[r1][c1], d[r1][c2]);
                display(r1, c1, d[r1][c2]);
            }
            break;
        
        case 2:
            if(c1!=r2){
                printf("not possible");
            }
            else{
                multiply(r1,c1,r2,c2,a[r1][c1], b[r2][c2], d[r1][c2]);
                display(r1, c2, d[r1][c2]);
            }
        
        case 3:
            if(r1!=c1){
                printf("not possible");
            }
            else{
                transpose(r1,c1,a[r1][c1],d[r1][c1]);
                display(r1,c1,d[r1][c1]);
            }
        default:
            break;
        }
    }
    return 0;
}