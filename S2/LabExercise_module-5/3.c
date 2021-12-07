//3. Write a program to swap two arrays using pointers.
#include<stdio.h>
int main(){
    int i;
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    int c[5];
    printf("array before swapping \n");
    printf("1st array: ");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n2nd array: ");
    for(i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    for(i=0;i<5;i++){
        *(c+i)=*(a+i);
        *(a+i)=*(b+i);
        *(b+i)=*(c+i);
    }
    printf("\nafter swapping \n");
    printf("1st array: ");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n2nd array: ");
    for(i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    return 0;
}