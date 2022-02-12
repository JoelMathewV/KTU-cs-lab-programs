#include<stdio.h>
int a[10][10],b[10][10], t[10][10], k;
void input(int n, int m){
    int i,j;
    printf("enter the elements of sparse matrix ");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d", &a[i][j]);
        }}
}
void display(int c[10][10], int n, int m){
    printf("the array is\n");
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
void convert(int n, int m){
    b[0][0] = n;
    b[0][1] = m;
    int i,j;
    k=1;
    for(i=0;i<n;i++){
        for(j=0; j<m; j++){
            if(a[i][j]!=0){
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=a[i][j];
                k++;
            }
        }
    }
    b[0][2] = k-1;
}

void transposeMatrix(int n){
    int i;
    for(i=0;i<k;i++){
            t[i][0] = b[i][1];
            t[i][1] = b[i][0];
            t[i][2] = b[i][2];
    }
}
int main(){
    int n,m;
    printf("enter the no of rows and columns of the matrix");
    scanf("%d %d", &n, &m);
    input(n,m);
    convert(n,m);
    display(b,k,3);
    transposeMatrix(k);
    printf("transpose of the matrix is\n");
    display(t,k,3);
    return 0;
}