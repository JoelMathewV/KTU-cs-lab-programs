//2. Write a program to find the sum of all the elements of an array using pointers.
#include<stdio.h>
int main(){
    int i,n=0;
    int a[9] = {1,2,3,4,5,6,7,8,9};
    for(i=0;i<9;i++){
        n += *(a+i);
    }
    printf("the sum of the array is %d", n);
    return 0;
} 